#!/usr/bin/env python3
"""Strip ZKM residue from the decompiled sources in `src/`.

After `AstralisDeobf` folds every `invokedynamic` site to a literal, the
operands the obfuscator had pushed for the call survive as dead stores that
CFR prints around the live code:

    short var10001 = 9026;
    long var10002 = 5589425619569333481L ^ ax;
    var4 = "Add Alt Gui";          // <- folded site, the only live line

The stores are pure noise. This pass deletes stores to a local under two
conditions that make it safe without an AST:

  1. the local is never read within its method: after removing its pure
     store statements, zero occurrences of the identifier remain inside the
     method body (checks are scoped per method - CFR recycles `var10001`
     across methods, so a file-wide check would wrongly refuse to clean),
  2. every removed right-hand side is side-effect free: only literals,
     simple identifiers, casts, parens and arithmetic/bitwise operators -
     no dots, no calls, no `new`, no strings.

Locals live from one method only, a lambda cannot be a scope here (method
bodies are the 3-space-indent lines of CFR/Vineflower output and lambdas
sit deeper), and field initialisers sit outside every method scope, so a
field can never be dropped. Anything else - the `dar.abu()` splices, field
reads, the string-decrypt runtime - stays exactly as CFR printed it.

usage: python tools/strip_zkm_residue.py <src-dir> [--dry-run]
"""
from __future__ import annotations

import os
import re
import sys

# a pure statement: optional type (declaration) or nothing, then `id = expr;`
STORE = re.compile(
    r"^[ \t]*(?:(?:final\s+)?[\w$.<>\[\],\s]+\s+)?"
    r"(?P<id>[A-Za-z_$][\w$]*)\s*=\s*(?P<rhs>[^;]*);\s*$"
)
# right-hand sides that cannot have side effects: literals, simple ids,
# casts, parens, arithmetic and bitwise operators only
PURE_RHS = re.compile(r"^[\w$+\-*/%^&|~<>()\s]+$")
RHS_DOTS = re.compile(r"[.\[\]\"']")  # field/array access, strings: not pure
COUNT = re.compile(r"\b(?P<id>[A-Za-z_$][\w$]*)\b")

STORED_NAMES = re.compile(r"^(?:var\d+|ax+|axx+)$")
# CFR/Vineflower put class members at exactly three spaces; a member method
# or static block starts there and ends at a bare `   }`
METHOD_START = re.compile(r"^ {3}\S.*\{\s*$")
METHOD_END = re.compile(r"^ {3}}\s*$")


def method_ranges(lines: list[str]) -> list[tuple[int, int]]:
    out = []
    i = 0
    while i < len(lines):
        if METHOD_START.match(lines[i]) and "class " not in lines[i]:
            j = i + 1
            while j < len(lines) and not METHOD_END.match(lines[j]):
                j += 1
            out.append((i + 1, min(j, len(lines))))
            i = j + 1
        else:
            i += 1
    return out


def stores_in(lines: list[str]) -> dict[str, list[int]]:
    cand: dict[str, list[int]] = {}
    for i, line in enumerate(lines):
        m = STORE.match(line)
        if not m:
            continue
        ident, rhs = m.group("id"), m.group("rhs").strip()
        if not STORED_NAMES.match(ident):
            continue
        if not PURE_RHS.match(rhs) or RHS_DOTS.search(rhs):
            continue
        cand.setdefault(ident, []).append(i)
    return cand


def drop_in(lines: list[str], base: int) -> set[int]:
    cand = stores_in(lines)
    drop: set[int] = set()
    for ident, idxs in cand.items():
        seen = set(idxs)
        for m in COUNT.finditer("\n".join(lines)):
            if m.group("id") != ident:
                continue
            ln = m.string.count("\n", 0, m.start())
            if ln not in seen:
                break  # a real read: keep the whole group
        else:
            drop.update(base + i for i in idxs)
    return drop


def process(text: str) -> tuple[str, int]:
    lines = text.split("\n")
    drop: set[int] = set()
    for a, b in method_ranges(lines):
        drop |= drop_in(lines[a:b], a)
    if not drop:
        return text, 0
    out = [l for i, l in enumerate(lines) if i not in drop]
    return "\n".join(out), len(drop)


def main(argv: list[str]) -> int:
    dry = "--dry-run" in argv
    root = [a for a in argv if not a.startswith("-")][0]
    files = removed = touched = 0
    for dirpath, _, names in os.walk(root):
        for n in names:
            if not n.endswith(".java"):
                continue
            p = os.path.join(dirpath, n)
            text = open(p, encoding="utf-8", errors="replace").read()
            out, n = process(text)
            files += 1
            if n:
                touched += 1
                removed += n
                if not dry:
                    open(p, "w", encoding="utf-8", newline="").write(out)
    print(f"files {files}, touched {touched}, dead store lines removed {removed}"
          + (" (dry run)" if dry else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
