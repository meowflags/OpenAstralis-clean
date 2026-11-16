#!/usr/bin/env python3
"""Fold the unfolded indy constant sites: `b<"m">(12470, 8303...L ^ ax)`.

Pipeline:
  --parse : read src, resolve the long expression at each site, emit sites.tsv
            (orig internal class name, accessor, kind, x, y, orig text)
  --apply : read sites_out.tsv (harness-invoked ground truth), replace each
            site in src with the literal, drop now-dead `long ax = ...` locals

The long argument at each site is literal ^ localK, localK = seed ^ K, all
XOR - so y = lit ^ seed ^ K. The harness runs the real accessor with (x, y),
so the folded value is exact.

usage:
  python tools/fold_sites.py --parse <src> <sites.tsv>
  python tools/fold_sites.py --apply <src> <sites.tsv> <sites_out.tsv>
"""
from __future__ import annotations

import io
import os
import re
import sys

MODE = sys.argv[1]
SRC = sys.argv[2]
SITES = sys.argv[3]
OUT = sys.argv[4] if len(sys.argv) > 4 else None

KIND = {"(IJ)Ljava/lang/String;": "string", "(IJ)I": "int", "(IJ)J": "long"}
SEED_RE = re.compile(r"private static final long (\w+) = (-?\d+)L;")
LOCAL_RE = re.compile(r"long (\w+) = (\w+)(?:\.(\w+))? \^ (-?\d+)L;")
REASSIGN_RE = re.compile(r"(?<!long )(?<![\w.])(\w+) = (\w+)(?:\.(\w+))? \^ (-?\d+)L;")
SITE_RE = re.compile(r'(\w+)<"([^"]+)">\((-?\d+), (-?\d+)L \^ (\w+)\)')
BOOT_RE = re.compile(
    r"private static (\w+) (\w+)\(Lookup var\d+, MutableCallSite var\d+, String var\d+, Object\[\] var\d+\) \{(.*?)\n   \}",
    re.S,
)
CONST_KIND = {"String.class": "string", "int.class": "int", "long.class": "long"}

MASK = 0xFFFFFFFFFFFFFFFF


def orig_names():
    """orig internal name -> src basename (without .java)"""
    m = {}
    for line in io.open("mapping/modules.tsv", encoding="utf-8"):
        p = line.rstrip("\n").split("\t")
        if len(p) > 3:
            m[p[0]] = p[3]
    for line in io.open("mapping/inferred.tsv", encoding="utf-8").read().splitlines()[1:]:
        p = line.split("\t")
        m[p[0]] = p[1]
    # reverse: orig name -> new name; plus identity for unchanged names
    rev = {}
    for orig, new in m.items():
        rev[orig] = new
    return m, rev


def machinery_kinds():
    """src text -> {src_basename: {site_method_name: (accessor_to_invoke, kind)}}.

    A site `X<"n">(x, y)` routes through the 5-arg boot X, whose body calls
    the real (IJ) accessor and wraps its constant; the accessor may have a
    different name (shared pools like brc route d->e).
    """
    kinds = {}
    for dp, _, fs in os.walk(os.path.join(SRC, "cc", "astralis")):
        for fn in sorted(fs):
            if not fn.endswith(".java"):
                continue
            text = io.open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            k = kinds.setdefault(fn[:-5], {})
            for m in BOOT_RE.finditer(text):
                ret, boot, body = m.group(1), m.group(2), m.group(3)
                acc = re.search(r"(\w+)\(var\d+, var5\)", body)
                cons = re.search(r"MethodHandles\.constant\((\w+\.class)", body)
                kind = CONST_KIND.get(cons.group(1)) if cons else None
                if acc and kind:
                    k[boot] = (acc.group(1), kind)
    return kinds


def parse():
    kinds = machinery_kinds()
    new2orig = {}
    for orig, new in orig_names()[0].items():
        if new not in new2orig:  # first mapping wins
            new2orig[new] = orig
    out = io.open(SITES, "w", encoding="utf-8", newline="")
    out.write("class\taccessor\tkind\tx\ty\torig\n")
    n_ok = n_bad = 0
    bad_detail = []
    for dp, _, fs in os.walk(os.path.join(SRC, "cc", "astralis")):
        for fn in sorted(fs):
            if not fn.endswith(".java"):
                continue
            cls_new = fn[:-5]
            cls_orig = new2orig.get(cls_new, cls_new)
            p = os.path.join(dp, fn)
            text = io.open(p, encoding="utf-8", errors="replace").read()
            seeds = {n: int(v) for n, v in SEED_RE.findall(text)}
            # ordered key-assignment events: declarations and re-assignments
            events = []
            for m in LOCAL_RE.finditer(text):
                if m.group(3) or m.group(2) in seeds:
                    events.append((m.start(), m.group(1), m.group(3) or m.group(2), int(m.group(4))))
            for m in REASSIGN_RE.finditer(text):
                fld = m.group(3) or m.group(2)
                if (m.group(3) or m.group(2) in seeds) and fld in seeds:
                    events.append((m.start(), m.group(1), fld, int(m.group(4))))
            events.sort()
            for m in SITE_RE.finditer(text):
                acc, x, lit, loc = m.group(1), int(m.group(3)), int(m.group(4)), m.group(5)
                route = kinds.get(fn[:-5], {}).get(acc)
                if route is None:
                    n_bad += 1
                    bad_detail.append((fn, acc, "no machinery row"))
                    continue
                acc_real, kind = route
                ld = [e for e in events if e[1] == loc and e[0] < m.start()]
                if ld:
                    field, K = ld[-1][2], ld[-1][3]
                elif loc in seeds:
                    field, K = loc, 0
                else:
                    n_bad += 1
                    bad_detail.append((fn, acc, f"local {loc} unresolved"))
                    continue
                if field not in seeds:
                    n_bad += 1
                    bad_detail.append((fn, acc, f"seed {field} missing"))
                    continue
                y = (lit ^ seeds[field] ^ K) & MASK
                if y >= 1 << 63:
                    y -= 1 << 64
                out.write(f"cc/astralis/{cls_orig}\t{acc_real}\t{kind}\t{x}\t{y}\t{m.group(0)}\n")
                n_ok += 1
    out.close()
    print(f"sites parsed ok: {n_ok}, unresolvable: {n_bad} -> {SITES}")
    for b in bad_detail[:10]:
        print("  bad:", b)


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


def apply():
    # harness out rows: class acc x y kind value
    vals = {}
    for line in io.open(OUT, encoding="utf-8").read().splitlines()[1:]:
        p = line.split("\t", 5)
        vals[(p[0].split("/")[-1], p[1], p[2], p[3])] = (p[4], p[5])
    # sites rows: class acc_real kind x y orig
    meta = {}
    for line in io.open(SITES, encoding="utf-8").read().splitlines()[1:]:
        p = line.split("\t", 5)
        meta.setdefault(p[0].split("/")[-1], {})[p[5]] = (p[1], p[2], p[4])
    n = 0
    n_err = 0
    for dp, _, fs in os.walk(os.path.join(SRC, "cc", "astralis")):
        for fn in sorted(fs):
            if not fn.endswith(".java"):
                continue
            cls_new = fn[:-5]
            p = os.path.join(dp, fn)
            text = io.open(p, encoding="utf-8", errors="replace").read()
            cls_orig = next((o for o, nw in orig_names()[0].items() if nw == cls_new), cls_new)
            fmeta = meta.get(cls_orig, {})
            if not fmeta:
                continue

            def rep(m):
                nonlocal n, n_err
                row = fmeta.get(m.group(0))
                if row is None:
                    n_err += 1
                    return m.group(0)
                acc_real, kind, y = row
                v = vals.get((cls_orig, acc_real, m.group(3), y))
                if v is None or v[1].startswith("ERR "):
                    n_err += 1
                    return m.group(0)
                kind, val = v
                n += 1
                if kind == "string":
                    return java_str(val)
                if kind == "long" and not (-(1 << 31) <= int(val) < (1 << 31)):
                    return val + "L"
                return val  # int, or long that fits (widens legally)

            new = SITE_RE.sub(rep, text)
            if new != text:
                io.open(p, "w", encoding="utf-8", newline="").write(new)
    print(f"sites folded: {n}, left unfolded (ERR/missing): {n_err}")

    # drop `long X = ... ^ ...L;` locals that lost their last use
    dropped = 0
    for dp, _, fs in os.walk(os.path.join(SRC, "cc", "astralis")):
        for fn in sorted(fs):
            if not fn.endswith(".java"):
                continue
            p = os.path.join(dp, fn)
            text = io.open(p, encoding="utf-8", errors="replace").read()
            changed = False
            for m in list(LOCAL_RE.finditer(text)):
                name = m.group(1)
                line_start = text.rfind("\n", 0, m.start()) + 1
                line_end = text.find("\n", m.end())
                if line_end == -1:
                    line_end = len(text)
                rest = text[:line_start] + text[line_end + 1:]
                if not re.search(r"\b" + re.escape(name) + r"\b", rest):
                    text = rest
                    dropped += 1
                    changed = True
            if changed:
                io.open(p, "w", encoding="utf-8", newline="").write(text)
    print(f"dead site-key locals dropped: {dropped}")


if MODE == "--parse":
    parse()
elif MODE == "--apply":
    apply()
