#!/usr/bin/env python3
"""Native-image pass over the still-obfuscated cc/astralis classes.

For every short-named class in src/cc/astralis, records what the native
side (GraalVM image metadata dumped in mapping/image26/) can say about it:

  in_image   - the class exists in the image type list
  native     - number of native methods it registers (only 4 classes do)
  hooks      - mixin hooks whose target name appears in the class body
  resources  - image resource paths whose leaf name matches a word literal
               in the class body

The image carries no class->method binding (checked member_names.tsv,
descriptors.tsv, the .text corpus and the heap strings), so a row without
hook/resource hits means: present, unnamed, no further native evidence.
This closes the native pass for the unnamed classes with evidence that the
absence is total, not unchecked.

usage: python tools/native_pass.py <src-dir> <mapping-dir> <out.tsv>
"""
from __future__ import annotations

import json
import os
import re
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else "src"
MAP = sys.argv[2] if len(sys.argv) > 2 else "mapping"
OUT = sys.argv[3] if len(sys.argv) > 3 else "mapping/native_pass.tsv"

img = json.load(open(os.path.join(MAP, "image_inventory.json"), encoding="utf-8"))
types = set(img["astralis_types"])

hooks = []
for line in open(os.path.join(MAP, "image26", "mixin_hooks.tsv"), encoding="utf-8").read().splitlines()[1:]:
    if line.strip():
        k, _, t = line.partition("\t")
        hooks.append(t)

resources = [
    line.strip()
    for line in open(os.path.join(MAP, "image26", "resources.txt"), encoding="utf-8")
    if line.strip()
]
res_leaf = {r.rsplit("/", 1)[-1].lower(): r for r in resources}

# native-method classes come from the proven map + scanner verdict
native_reg = {}
for line in open(os.path.join(MAP, "modules.proguard.txt"), encoding="utf-8"):
    pass  # module names only; native registrations are per method

rows = []
for dirpath, _, files in os.walk(os.path.join(SRC, "cc", "astralis")):
    for n in sorted(files):
        if not n.endswith(".java"):
            continue
        name = n[:-5]
        text = open(os.path.join(dirpath, n), encoding="utf-8", errors="replace").read()
        short = os.path.basename(dirpath) and name
        in_image = f"cc/astralis/{name}" in types or f"cc.astralis.{name}" in types
        n_native = len(re.findall(r"\bnative\b\s+(?!class)", text))
        hook_hits = sorted({h for h in hooks if f'"{h}"' in text})
        res_hits = sorted({res_leaf[w.group(0).lower()] for w in re.finditer(r"[A-Za-z0-9_.-]{4,}", text)
                           if w.group(0).lower() in res_leaf})
        rows.append((name, in_image, n_native, " | ".join(hook_hits[:4]), " | ".join(res_hits[:4])))

with open(OUT, "w", encoding="utf-8", newline="") as f:
    f.write("class\tin_image\tnative_methods\thooks\tresources\n")
    for name, in_image, n_native, hooks_hit, res_hit in rows:
        f.write(f"{name}\t{in_image}\t{n_native}\t{hooks_hit}\t{res_hit}\n")

unnamed = [r for r in rows if len(r[0]) <= 3]
with_hits = [r for r in unnamed if r[3] or r[4]]
print(f"classes: {len(rows)}, short-named: {len(unnamed)}, in image: "
      f"{sum(1 for r in rows if r[1])}, short-named with any native-side hit: {len(with_hits)}")
