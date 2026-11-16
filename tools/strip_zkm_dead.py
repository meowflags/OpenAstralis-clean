#!/usr/bin/env python3
"""Strip dead ZKM string machinery and fold abu() splices.

Pass 1 - dead ZKM machinery (per file, liveness-proven):
  * accessor methods  (I)J -> String/int/long, keyed by the long argument
  * bootstrap methods (Lookup, MutableCallSite, ...) / (Lookup, String, MethodType)
  * CESU-8 helper     X(byte[])String
  * fields only they touch (string/long tables, seed longs, caches)
  * a static block that only feeds dead fields
  * imports left unused by the deletions
A method is dead when every reference to its name sits inside another dead
method (fixpoint). All strings were already inlined by the indy folder, so
the chains are unreachable by construction; liveness is re-proven per file.

Pass 2 - abu() splices (JLS 12.4-proven):
  ClientSetup.<clinit> assigns bko before any abu() call can return, so every
  abu-rooted variable is non-null. Guards on abu-rooted variables fold:
    if (v != null && X)  -> if (X)          if (v == null) {A}      -> (delete)
    if (X && v != null)  -> if (X)          if (v == null) {A}else{B} -> B
    if (v != null)       -> unwrap          if (v == null || X)    -> if (X)
    if (v != null || X)  -> unwrap          if (X || v == null)    -> if (X)
  Element reads/writes keep the store lines alive; a store line is removed
  only when nothing reads the variable any more.

usage: python tools/strip_zkm_dead.py [--dry] <src>
"""
from __future__ import annotations

import json
import os
import re
import sys

DRY = "--dry" in sys.argv
SRC = sys.argv[sys.argv.index("-s") + 1] if "-s" in sys.argv else (sys.argv[-1] if sys.argv[-1] != __file__ else "src")
if SRC.endswith(".py"):
    SRC = "src"

ROOT = os.path.join(SRC, "cc", "astralis")

# ---------- method-block parsing ----------

SIG = re.compile(
    r"^(\s*)(public|private|protected) static (\S+) (\w+)\(([^)]*)\) \{$"
)

def parse_blocks(lines):
    """Yield (start, end, indent, sig) for every 3-indent {...} method block."""
    out = []
    i = 0
    while i < len(lines):
        m = SIG.match(lines[i])
        if m:
            depth = blank_lits(lines[i]).count("{") - blank_lits(lines[i]).count("}")
            j = i
            while depth:
                j += 1
                if j >= len(lines):
                    return out
                depth += blank_lits(lines[j]).count("{") - blank_lits(lines[j]).count("}")
            out.append((i, j, m))
            i = j
        i += 1
    return out


def match_paren(sig):
    return sig.count("(") == sig.count(")") and "(int var0, long var1)" in sig or "(Lookup" in sig or "(byte[] " in sig


def classify(m):
    indent, typ, name, args = m.group(2), m.group(3), m.group(4), m.group(5)
    if typ == "String" and args in ("int var0, long var1", "byte[] var0", "int var0", "int var0, char[] var1"):
        return "acc_str"
    if typ in ("long", "int") and args == "int var0, long var1":
        return "acc_num"
    if typ == "Object" and args.startswith("Lookup var0, MutableCallSite"):
        return "boot"
    if typ == "CallSite" and args.startswith("Lookup var0, String"):
        return "boot"
    return None


def body(lines, s, e):
    return "\n".join(lines[s : e + 1])


def find_close(lines, i):
    depth = blank_lits(lines[i]).count("{") - blank_lits(lines[i]).count("}")
    j = i
    while depth:
        j += 1
        if j >= len(lines):
            return None
        depth += blank_lits(lines[j]).count("{") - blank_lits(lines[j]).count("}")
    return j


def references(text, name):
    return len(re.findall(r"\b" + re.escape(name) + r"\s*\(", text))


# blank string literals before brace counting - ZKM garbage strings can
# contain unbalanced { or } which would corrupt span detection
LIT_RE = re.compile(r'"(?:\\.|[^"\\])*"')


def blank_lits(s):
    return LIT_RE.sub('""', s)


# a ZKM clinit fragment never contains: lambdas, assignments to named
# (non-var) identifiers like enum constants, capitalized call targets
# (ClientSetup.abu()), or `new BusinessType(...)`. Any of those means the
# static block mixes real clinit code - the fold must skip it.
FRAG_DENY = re.compile(
    r"->"
    r"|\b[A-Z]\w*\s*=(?!=)"
    r"|\bnew (?!byte\[|String\[|int\[|long\[|Cipher\b|SecretKey\b|"
    r"SecretKeyFactory\b|DESKeySpec\b|IvParameterSpec\b)"
)


def fragment_shaped(lines, decls, s, e):
    blk = blank_lits("\n".join(lines[s : e + 1]))
    return not FRAG_DENY.search(blk)


# ---------- pass 1 ----------

def load_values():
    """work/values2.tsv -> {orig_class: {field: {key: value}}} (key = [i]/.len/'')."""
    p = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "..", "work", "values2.tsv")
    vals = {}
    if not os.path.exists(p):
        return vals
    for line in open(p, encoding="utf-8", errors="replace"):
        parts = line.rstrip("\n").split("\t")
        if parts[0] == "class" or parts[1] == "#" or len(parts) < 4:
            continue
        cls = parts[0].replace("cc.astralis.", "").replace("cc/astralis.", "")
        if len(parts) >= 5:
            key, val = parts[3], parts[4]
        else:
            key, val = "", parts[3]
        if parts[2] in ("java.lang.String", "String[]"):
            try:
                val = json.loads('"' + val + '"')
            except ValueError:
                pass
        vals.setdefault(cls, {}).setdefault(parts[1], {})[key] = val
    return vals


def orig_name_map():
    """orig simple name -> renamed src basename (identity when unchanged)."""
    base = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    m = {}
    mp = os.path.join(base, "mapping", "modules.tsv")
    if os.path.exists(mp):
        for line in open(mp, encoding="utf-8", errors="replace"):
            p = line.rstrip("\n").split("\t")
            if len(p) > 3:
                m[p[0]] = p[3]
    ip = os.path.join(base, "mapping", "inferred.tsv")
    if os.path.exists(ip):
        for line in open(ip, encoding="utf-8", errors="replace").read().splitlines()[1:]:
            p = line.split("\t")
            m[p[0]] = p[1]
    return m


def java_str(v):
    b = []
    for ch in v:
        cp = ord(ch)
        if ch in '\\"':
            b.append("\\" + ch)
        elif ch == "\n":
            b.append("\\n")
        elif ch == "\r":
            b.append("\\r")
        elif ch == "\t":
            b.append("\\t")
        elif cp < 0x20:
            b.append(f"\\u{cp:04x}")
        elif cp > 0xFFFF:
            cp2 = cp - 0x10000
            b.append(f"\\u{0xD800 + (cp2 >> 10):04x}\\u{0xDC00 + (cp2 & 0x3FF):04x}")
        else:
            b.append(ch)
    return '"' + "".join(b) + '"'


def render_literal(typ, rows):
    """Render a values2 field as a Java literal expression, or None."""
    if typ in ("long", "int", "boolean", "char", "String"):
        v = rows.get("")
        if v is None or v in ("ERR", "null") or v.startswith("ERR\t"):
            return None
        if typ == "long":
            return v + "L"
        if typ == "String":
            return java_str(v)
        return v
    if typ == "String[]":
        n = rows.get(".len")
        if n is None:
            return None
        n = int(n)
        # missing element = clinit left it null; render it as null
        return "new String[]{" + ", ".join(
            "null" if rows.get(f"[{i}]") is None else java_str(rows[f"[{i}]"]) for i in range(n)
        ) + "}"
    if typ == "long[]":
        n = rows.get(".len")
        if n is None:
            return None
        n = int(n)
        elems = [rows.get(f"[{i}]") for i in range(n)]
        if any(e is None for e in elems):
            return None
        return "new long[]{" + ", ".join(e + "L" for e in elems) + "}"
    if typ in ("Integer[]", "Long[]"):
        n = rows.get(".len")
        if n is None:
            return None
        n = int(n)
        suf = "L" if typ == "Long[]" else ""
        return f"new {typ}{{" + ", ".join(
            "null" if rows.get(f"[{i}]") is None else rows[f"[{i}]"] + suf for i in range(n)
        ) + "}}"
    return None  # Map/Object[]/unknown: not literalizable


def strip_dead_crypto(path, cls_values):
    text = open(path, encoding="utf-8", errors="replace").read()
    lines = text.splitlines()
    blocks = parse_blocks(lines)
    bl = [blank_lits(x) for x in lines]
    decls = {}
    for l2 in lines:
        dm = re.match(r"   private static (?:final )?(\S+) (\w+)(?: = )?.*;$", l2)
        if dm:
            decls[dm.group(2)] = dm.group(1)

    # locate the cipher-fragment clinit block, if any
    clinit = None
    for i, l in enumerate(lines):
        if l.strip() == "static {":
            e = find_close(bl, i)
            if e is not None and fragment_shaped(lines, decls, i, e):
                blk = "\n".join(lines[i : e + 1])
                if re.search(r"Cipher|SecretKey|DES|doFinal|substring", blk):
                    targets = set(re.findall(r"(\w+)\s*=", blk))
                    clinit = (i, e, targets)
            break

    if not blocks:
        # no machinery here; a clinit feeding nothing outside itself still dies
        if clinit:
            outside = "\n".join(lines[: clinit[0]] + lines[clinit[1] + 1 :])
            live = [t for t in clinit[2] if t in decls and references(outside, t) > 0]
            if not live:
                del lines[clinit[0] : clinit[1] + 1]
                rem = "\n".join(lines)
                nf = 0
                for fm in list(re.finditer(r"^   private static (?:final )?(\S+) (\w+)(?: = [^;]+)?;\s*$", rem, re.M)):
                    if fm.group(2) not in clinit[2]:
                        continue
                    uses = len(re.findall(r"\b" + re.escape(fm.group(2)) + r"\b", rem))
                    if uses <= 1:
                        rem = rem[: fm.start()] + rem[fm.end() :]
                        nf += 1
                if not DRY:
                    open(path, "w", encoding="utf-8", newline="").write(rem + ("" if rem.endswith("\n") else "\n"))
                return 0, 1 + nf, [0]
        return 0, 0, []

    def fixpoint(exclude_clinit):
        dead = []
        changed = True
        while changed:
            changed = False
            for s, e, m in blocks:
                kind = classify(m)
                if kind is None or (s, e) in [(x, y) for x, y, _ in dead]:
                    continue
                parts = []
                for a, b2, mm in blocks:
                    if (a, b2) in [(x, y) for x, y, _ in dead]:
                        continue
                    if classify(mm) and mm.group(4) == m.group(4):
                        continue
                    if exclude_clinit and clinit and a >= clinit[0] and b2 <= clinit[1]:
                        continue
                    parts.append(body(lines, a, b2))
                if references("\n".join(parts), m.group(4)) == 0:
                    dead.append((s, e, m))
                    changed = True
        return dead

    # liveness of the clinit's targets once candidate machinery is gone.
    # Only static FIELD targets matter; var* locals appear in every method.
    aggressive = False
    literals = {}
    if clinit:
        dead_m = fixpoint(exclude_clinit=True)
        rem = "\n".join(l2 for i2, l2 in enumerate(lines) if not any(s <= i2 <= e for s, e, _ in dead_m))
        # decl lines reference their own field name - exclude them or every
        # table field looks live
        rem2 = "\n".join(
            l2 for l2 in rem.splitlines() if not re.match(r"   private static (?:final )?\S+ \w+", l2)
        )
        blk_text = "\n".join(lines[clinit[0] : clinit[1] + 1])
        field_targets = [t for t in clinit[2] if t in decls]
        live_targets = [
            t
            for t in field_targets
            if len(re.findall(r"\b" + re.escape(t) + r"\b", rem2)) - len(re.findall(r"\b" + re.escape(t) + r"\b", blk_text)) > 0
        ]
        if not live_targets:
            aggressive = True  # block dies whole
        else:
            ok = True
            for t in live_targets:
                lit = render_literal(decls.get(t, "?"), cls_values.get(t, {}))
                if lit is None:
                    ok = False
                    break
                literals[t] = lit
            aggressive = ok and bool(literals)

    dead_spans = fixpoint(exclude_clinit=aggressive)
    n_methods = len(dead_spans)
    if dead_spans:
        for s, e, m in sorted(dead_spans, reverse=True):
            # swallow one trailing blank line
            e2 = e + 1 if e + 1 < len(lines) and not lines[e + 1].strip() else e
            del lines[s : e2 + 1]

    n_clinit = 0
    if aggressive and clinit:
        s, e, _targets = clinit
        if literals:
            body_lines = [f"      {t} = {literals[t]};" for t in literals]
            lines[s : e + 1] = ["   static {"] + body_lines + ["   }"]
        else:
            e2 = e + 1 if e + 1 < len(lines) and not lines[e + 1].strip() else e
            del lines[s : e2 + 1]
        n_clinit = 1

    # fields only the dead code touched
    rem = "\n".join(lines)
    n_fields = 0
    fspan = []
    for fm in re.finditer(r"^   private static (?:final )?(\S+) (\w+)(?: = [^;]+)?;\s*$", rem, re.M):
        typ, name = fm.group(1), fm.group(2)
        if typ not in ("String[]", "Map", "long", "HashMap", "int[]", "String", "Integer[]", "Long[]", "long[]"):
            continue
        if typ in ("long", "String") and references(rem, name) > 0:
            continue  # single letters often shared; keep on any doubt
        uses = len(re.findall(r"\b" + re.escape(name) + r"\b", rem))
        if uses <= 1:  # declaration only
            fspan.append(fm.span())
    for s2, e2 in sorted(fspan, reverse=True):  # reverse: spans stay valid
        rem = rem[:s2] + rem[e2:]
        n_fields += 1

    # unused imports
    n_imports = 0
    ispan = []
    for im in re.finditer(r"^import ([\w.]+);\s*$", rem, re.M):
        simple = im.group(1).rsplit(".", 1)[-1]
        rest = rem[: im.start()] + rem[im.end() :]
        if not re.search(r"\b" + re.escape(simple) + r"\b", rest):
            ispan.append(im.span())
    for s2, e2 in sorted(ispan, reverse=True):  # reverse: spans stay valid
        rem = rem[:s2] + rem[e2:]
        n_imports += 1

    # collapse 3+ blank lines
    rem = re.sub(r"\n{4,}", "\n\n\n", rem)
    if rem != text and not DRY:
        open(path, "w", encoding="utf-8", newline="").write(rem + ("" if rem.endswith("\n") else "\n"))
    return n_methods, n_fields + n_clinit, [n_imports]


# ---------- pass 2 ----------

GUARDS = 0

def fold_abu(path):
    global GUARDS
    text = open(path, encoding="utf-8", errors="replace").read()
    lines = text.splitlines()
    roots = {m.group(1) for m in (re.match(r"\s*int\[\] (\w+) = ClientSetup\.abu\(\);", l) for l in lines) if m}
    if not roots:
        return 0
    aliases = set(roots)
    for _ in range(4):
        for l in lines:
            m = re.match(r"\s*int\[\] (\w+) = (\w+);", l)
            if m and m.group(2) in aliases:
                aliases.add(m.group(1))
    abu = aliases
    folded = 0

    def is_abu(v):
        return v in abu

    out = []
    i = 0
    while i < len(lines):
        l = lines[i]
        m = re.match(r"^(\s*)if \((\w+) != null && (.+)\) \{$", l)
        if m and is_abu(m.group(2)):
            out.append(f"{m.group(1)}if ({m.group(3)}) {{")
            folded += 1
            i += 1
            continue
        m = re.match(r"^(\s*)if \((.+?) && (\w+) != null\) \{$", l)
        if m and is_abu(m.group(3)):
            out.append(f"{m.group(1)}if ({m.group(2)}) {{")
            folded += 1
            i += 1
            continue
        m = re.match(r"^(\s*)if \((\w+) == null \|\| (.+)\) \{$", l)
        if m and is_abu(m.group(2)):
            out.append(f"{m.group(1)}if ({m.group(3)}) {{")
            folded += 1
            i += 1
            continue
        m = re.match(r"^(\s*)if \((.+?) \|\| (\w+) == null\) \{$", l)
        if m and is_abu(m.group(3)):
            out.append(f"{m.group(1)}if ({m.group(2)}) {{")
            folded += 1
            i += 1
            continue
        m = re.match(r"^(\s*)if \((\w+) != null\) \{$", l)
        if m and is_abu(m.group(2)):
            # unwrap: drop the if, dedent body until matching close
            e = find_close(lines, i)
            if e is not None:
                after = lines[e + 1].strip() if e + 1 < len(lines) else ""
                if not after.startswith("else"):
                    folded += 1
                    for inner in lines[i + 1 : e]:
                        out.append(inner[3:] if inner.startswith("   ") else inner)
                    i = e + 1
                    continue
        m = re.match(r"^(\s*)if \((\w+) == null\) \{$", l)
        if m and is_abu(m.group(2)):
            e = find_close(lines, i)
            if e is not None:
                nxt = lines[e + 1].strip() if e + 1 < len(lines) else ""
                if nxt.startswith("} else") or nxt.startswith("else"):
                    # keep the else body, dedented, drop its closing brace
                    j = e + 1
                    # lines[e+1] is "} else {" or "else {"
                    out.append(re.sub(r"^\}?\s*else \{$", r"\1{", lines[j]).replace("else {", "{"))
                    folded += 1
                    # find close of else block
                    e2 = find_close(lines, j)
                    for inner in lines[j + 1 : e2]:
                        out.append(inner[3:] if inner.startswith("   ") else inner)
                    i = e2 + 1
                    continue
                folded += 1  # dead block: delete entirely
                i = e + 1
                continue
        out.append(l)
        i += 1

    if folded:
        GUARDS += folded
        new = "\n".join(out)
        if not DRY:
            open(path, "w", encoding="utf-8", newline="").write(new + ("" if new.endswith("\n") else "\n"))
    return folded


# ---------- main ----------

# classes whose machinery stays: their indy sites couldn't be folded
# (native-set seeds, e.g. fz) so the accessors are genuinely live
KEEP = set()
_kp = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "mapping", "zkm_keep.txt")
if os.path.exists(_kp):
    KEEP = {l.strip() for l in open(_kp, encoding="utf-8") if l.strip() and not l.startswith("#")}


def main():
    vals = load_values()
    new2orig = {}
    for orig, new in orig_name_map().items():
        new2orig.setdefault(new, orig)
    tm = tf = tg = ti = 0
    for dirpath, _, files in os.walk(ROOT):
        for n in files:
            if not n.endswith(".java"):
                continue
            p = os.path.join(dirpath, n)
            if n[:-5] in KEEP:
                continue
            cls_vals = vals.get(new2orig.get(n[:-5], n[:-5]), {})
            a, b, c = strip_dead_crypto(p, cls_vals)
            tm += a
            tf += b
            ti += sum(c)
    # nested guards become top-level after unwrapping: fold to fixpoint
    for _ in range(6):
        before = GUARDS
        for dirpath, _, files in os.walk(ROOT):
            for n in files:
                if n.endswith(".java"):
                    fold_abu(os.path.join(dirpath, n))
        if GUARDS == before:
            break
    print(f"dead methods removed: {tm}, fields/blocks removed: {tf}, imports removed: {ti}, abu guards folded: {GUARDS}")


if __name__ == "__main__":
    main()
