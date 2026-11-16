# -*- coding: utf-8 -*-
"""Signature-precise ZKM dead-machinery GC.

Input: work/scanrefs.tsv from ScanRefs.java (DECL / REFM / REFF / FIELD rows
over the ORIGINAL jar classes). Machinery = static methods with the ZKM
accessor/bootstrap/helper descriptors. GC: reachable from every non-machinery
method (live roots) through exact (class, name, desc) edges; unreachable
machinery is dead. Static fields referenced only by dead methods (or by a
clinit fragment that feeds only dead fields) are dead too.

Output: mapping/zkm_dead.tsv (class, name, desc, kind) for the src rewriter.
"""
from __future__ import annotations

import collections
import io
import sys

SCAN = sys.argv[1] if len(sys.argv) > 1 else "scanrefs.tsv"
OUT = sys.argv[2] if len(sys.argv) > 2 else "zkm_dead.tsv"

LOOK = "Ljava/lang/invoke/MethodHandles$Lookup;"
MACH_DESCS = {
    "(IJ)Ljava/lang/String;": "acc_str",
    "(I)Ljava/lang/String;": "acc_str",
    "(IJ)I": "acc_num",
    "(IJ)J": "acc_num",
    f"({LOOK}Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;": "boot",
    f"({LOOK}Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I": "boot",
    f"({LOOK}Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J": "boot",
    f"({LOOK}Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Z": "boot",
    f"({LOOK}Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;": "boot",
    "([B)Ljava/lang/String;": "helper",
    "(I[CLjava/lang/String;": "helper",
    "(I[C)Ljava/lang/String;": "helper",
}

decl = {}          # (cls, name, desc) -> kind ('machinery'/'method') ; includes <clinit>/<init>
refs_m = collections.defaultdict(set)   # caller -> {(owner, name, desc)}
refs_f = collections.defaultdict(set)   # caller -> {(owner, field, desc)}
fields = set()     # (cls, field, desc)
callers_of_m = collections.defaultdict(set)
referers_of_f = collections.defaultdict(set)

for line in io.open(SCAN, encoding="utf-8", errors="replace"):
    parts = line.rstrip("\n").split("\t")
    if parts[0] == "DECL":
        cls, name, desc, sm = parts[1], parts[2], parts[3], parts[4]
        kind = "machinery" if (sm == "static" and desc in MACH_DESCS and not name.startswith("<")) else "method"
        decl[(cls, name, desc)] = kind
    elif parts[0] == "REFM":
        caller = (parts[1], parts[2], parts[3])
        tgt = (parts[4], parts[5], parts[6])
        refs_m[caller].add(tgt)
        callers_of_m[tgt].add(caller)
    elif parts[0] == "REFF":
        caller = (parts[1], parts[2], parts[3])
        f = (parts[4], parts[5], parts[6])
        refs_f[caller].add(f)
        referers_of_f[f].add(caller)
    elif parts[0] == "FIELD":
        fields.add((parts[1], parts[2], parts[3]))

# GC from live roots: every non-machinery method (any visibility, any class),
# plus synthetic <indy> callers - an indy site executes its bootstrap at
# linkage, so any site still in the bytecode keeps its bootstrap alive
machinery = {k for k, v in decl.items() if v == "machinery"}
live = set()
stack = [k for k, v in decl.items() if v == "method"] + [
    c for c in callers_of_m if c not in decl
]
while stack:
    n = stack.pop()
    if n in live:
        continue
    live.add(n)
    for t in refs_m.get(n, ()):
        if t in machinery and t not in live:
            stack.append(t)

dead_m = machinery - live
print(f"machinery methods: {len(machinery)}, live: {len(machinery) - len(dead_m)}, dead: {len(dead_m)}")

# fields referenced only by dead machinery or clinit are dead
dead_f = set()
for f in fields:
    if f[2] not in ("[Ljava/lang/String;", "[J", "Ljava/util/Map;",
                    "[I", "[Ljava/lang/Long;", "[Ljava/lang/Integer;",
                    "Ljava/math/BigInteger;", "Ljava/lang/Long;"):
        continue
    ref = referers_of_f.get(f, set())
    if not ref:
        continue
    if all(c in dead_m or c[1] == "<clinit>" for c in ref):
        dead_f.add(f)
print(f"dead static fields: {len(dead_f)}")

with io.open(OUT, "w", encoding="utf-8", newline="") as o:
    o.write("class\tname\tdesc\tkind\tlive\n")
    for (c, n, d) in sorted(machinery):
        o.write(f"{c}\t{n}\t{d}\t{MACH_DESCS[d]}\t{'yes' if (c, n, d) in live else 'no'}\n")
    for (c, n, d) in sorted(dead_f):
        o.write(f"{c}\t{n}\t{d}\tfield\tno\n")
print("->", OUT)
