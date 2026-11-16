# -*- coding: utf-8 -*-
"""Decrypt the ZKM lazy string tables (g[] ciphertext) dumped by DumpTables.

Key derivation per class (from its own clinit in src/):
    a = static final long seed, K = clinit constant -> key = (a ^ K), 8 bytes BE
    DES/CBC/PKCS5Padding, IV = 0, plaintext bytes = modified UTF-8 (CESU-8).

usage: python tools/decrypt_tables.py <src> <tables.tsv> <out.tsv>
"""
import io
import os
import re
import sys

from Crypto.Cipher import DES

SRC = sys.argv[1] if len(sys.argv) > 1 else "src"
TSV = sys.argv[2] if len(sys.argv) > 2 else "tables.tsv"
OUT = sys.argv[3] if len(sys.argv) > 3 else "tables_plain.tsv"


def unesc(s):
    out, i = [], 0
    while i < len(s):
        c = s[i]
        if c == "\\" and i + 1 < len(s):
            n = s[i + 1]
            if n == "u":
                out.append(chr(int(s[i + 2:i + 6], 16)))
                i += 6
                continue
            m = {"n": "\n", "t": "\t", "r": "\r", '"': '"', "\\": "\\",
                 "0": "\0", "b": "\b", "f": "\f", "'": "'"}
            out.append(m.get(n, n))
            i += 2
            continue
        out.append(c)
        i += 1
    return "".join(out)


def cesu(b):
    # modified UTF-8: CESU-8 with surrogate pairs, null as 0xC0 0x80
    s = b.decode("utf-8", errors="replace")
    return s


# per-class key from src: static seed + clinit constant
keys = {}
seed_re = re.compile(r"private static final long (\w+) = (-?\d+)L;")
for dirpath, _, files in os.walk(os.path.join(SRC, "cc", "astralis")):
    for n in files:
        if not n.endswith(".java"):
            continue
        cls = n[:-5]
        text = io.open(os.path.join(dirpath, n), encoding="utf-8", errors="replace").read()
        ms = seed_re.search(text)
        if not ms:
            continue
        seed = int(ms.group(2))
        # every clinit constant of the shape  seed ^ <K>L
        ks = set()
        for m in re.finditer(r"\b" + re.escape(ms.group(1)) + r" \^ (-?\d+)L", text):
            ks.add((seed ^ int(m.group(1))) & 0xFFFFFFFFFFFFFFFF)
        keys[cls] = ks

# g[] ciphertext rows from the harness dump
rows = {}
for line in io.open(TSV, encoding="utf-8", errors="replace").read().splitlines()[1:]:
    parts = line.split("\t", 3)
    if len(parts) < 4 or not parts[1].startswith("g["):
        continue
    cls = parts[0].rsplit(".", 1)[-1]
    idx = int(parts[1][2:-1])
    rows.setdefault(cls, {})[idx] = parts[3]

out = io.open(OUT, "w", encoding="utf-8", newline="")
out.write("class\tidx\tkey\tvalue\n")
got = missed = 0
for cls in sorted(rows):
    ks = keys.get(cls)
    if not ks:
        missed += len(rows[cls])
        continue
    for k in ks:
        key = k.to_bytes(8, "big")
        try:
            cipher = DES.new(key, DES.MODE_CBC, iv=b"\0" * 8)
        except ValueError:
            continue
        for idx in sorted(rows[cls]):
            data = bytes(ord(ch) & 0xFF for ch in unesc(rows[cls][idx]))
            if not data or len(data) % 8:
                continue
            try:
                pt = cipher.decrypt(data)
            except ValueError:
                continue
            pad = pt[-1]
            if not (1 <= pad <= 8) or pt[-pad:] != bytes([pad]) * pad:
                continue
            val = cesu(pt[:-pad]).replace("\t", " ").replace("\n", " ").replace("\r", " ")
            out.write(f"{cls}\t{idx}\t{k:016x}\t{val}\n")
            got += 1
out.close()
print(f"classes with key candidates: {len(keys)}, values decrypted: {got}, no-key values: {missed}")
