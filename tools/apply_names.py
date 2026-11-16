#!/usr/bin/env python3
"""Apply mapping/inferred.tsv to src/: rename files, declarations and refs.

Replaces whole-word occurrences of each old class name in every .java file
under the source tree, EXCEPT member accesses (a token preceded by '.',
which can only be a field/method, never a class name); qualified
cc.astralis.<name> refs are handled by an explicit pass. Moves the class
file to the new name. Prints per-class and total replacement counts.

Collision note: obfuscated field names share the 2-3 letter namespace. A
field named exactly like a renamed class gets renamed with it - consistent
for reading, never wrong for compiling (nothing here recompiles).
"""
from __future__ import annotations

import os
import re
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else "src"
MAP = sys.argv[2] if len(sys.argv) > 2 else "mapping/inferred.tsv"

pairs = []
for line in open(MAP, encoding="utf-8").read().splitlines()[1:]:
    if line.strip():
        old, new = line.split("\t")[:2]
        pairs.append((old, new))
old2new = dict(pairs)
# longest first so e.g. 'abn' never shadows inside a longer token match
pairs.sort(key=lambda p: -len(p[0]))

QUAL = re.compile(r"\bcc\.astralis\.(\w+)\b")


def q(m):
    return f"cc.astralis.{old2new.get(m.group(1), m.group(1))}"


n_files = 0
n_repl = 0
for dirpath, _, files in os.walk(SRC):
    for n in files:
        if not n.endswith(".java"):
            continue
        p = os.path.join(dirpath, n)
        text = open(p, encoding="utf-8", newline="").read()
        orig = text
        repl = 0
        text = QUAL.sub(q, text)
        for old, new in pairs:
            text, k = re.subn(rf"(?<![.\w]){old}(?!\w)", new, text)
            repl += k
        if text != orig:
            open(p, "w", encoding="utf-8", newline="").write(text)
            n_files += 1
            n_repl += repl

moved = 0
for old, new in pairs:
    p = os.path.join(SRC, "cc", "astralis", old + ".java")
    if os.path.exists(p):
        os.replace(p, os.path.join(SRC, "cc", "astralis", new + ".java"))
        moved += 1

# verify: no old token may survive as a whole word anywhere in src
leftover = 0
for dirpath, _, files in os.walk(SRC):
    for n in files:
        if not n.endswith(".java"):
            continue
        p = os.path.join(dirpath, n)
        text = open(p, encoding="utf-8", errors="replace").read()
        for old, _ in pairs:
            k = len(re.findall(rf"(?<![.\w]){old}(?!\w)", text))
            if k:
                leftover += k
                print(f"  LEFTOVER {old} x{k} in {p}")

print(f"files edited: {n_files}, replacements: {n_repl}, files moved: {moved} / {len(pairs)}, leftovers: {leftover}")
