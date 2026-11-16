#!/usr/bin/env python3
"""Obfuscator fingerprint over the original `.class` tree.

Counts the markers that identify the toolchain: DES string-encryption
runtimes, `invokedynamic` call sites and `BootstrapMethods` attributes,
`native` methods, name lengths, and any vendor strings (ZKM, zelix, jnic).
The verdict this supports lives in `docs/analysis/DEOBFUSCATION.md` §10:
Zelix Klassmaster plus an `opalV2` native-thinning layer, not JNIC.

usage: python tools/fingerprint_obfuscator.py <classes-dir>
"""
import collections
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from jarscan import ClassFile, CP_InvokeDynamic  # noqa: E402

root = sys.argv[1] if len(sys.argv) > 1 else "work/plain_in"
stats = collections.Counter()
algos = collections.Counter()
markers = collections.Counter()
name_lens = collections.Counter()
native = []

for dirpath, _, files in os.walk(root):
    for f in sorted(files):
        if not f.endswith(".class"):
            continue
        data = open(os.path.join(dirpath, f), "rb").read()
        cf = ClassFile(f, data)
        stats["classes"] += 1
        stats["indy cp entries"] += sum(1 for e in cf.cp if e and e[0] == CP_InvokeDynamic)
        if any("BootstrapMethods" in s for s in cf.strings) or b"BootstrapMethods" in data:
            stats["bootstrapmethods attr"] += 1
        nat = [m["name"] for m in cf.methods if m["acc"] & 0x0100 and not m["acc"] & 0x0400]
        if nat:
            native.append((cf.this_class or f, nat))
        for algo in ("DES/CBC/PKCS5Padding", "DES/CBC/NoPadding", "AES", "ChaCha"):
            if any(algo in s for s in cf.strings):
                algos[algo] += 1
        for m in (b"ZKM", b"zelix", b"Zelix", b"jnic", b"JNIC", b"SourceDebug"):
            if m in data:
                markers[m.decode()] += 1
        if any("MutableCallSite" in s for s in cf.strings):
            stats["mutablecallsite"] += 1
        name_lens[len(f[:-6].split("$")[-1])] += 1

print(dict(stats))
print("cipher runtimes:", dict(algos))
print("vendor markers:", dict(markers) or "none")
print("native methods:", len(native), native)
print("name lengths:", dict(sorted(name_lens.items())))
