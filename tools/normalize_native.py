#!/usr/bin/env python3
"""Turn the Hex-Rays listing into something readable, without re-running IDA.

The published `.c` files are correct but hard to read. Everything opaque in them
is an address, and every address is recoverable from the image alone:

* **`sub_XXXXXXX`** is a call into another carved window. The number is an RVA
  under the image base, so it can be looked up in the `.pdata` function starts
  and in the exports, and gets the export name or `sub_<rva>`.
* **`MEMORY[0x...]()`** is a call through a slot Hex-Rays could not resolve.
  The printed operand is *not* a reliable address - it comes out relative to a
  base that changes between windows - so the slot is taken from the function's
  own bytes instead: every `call/jmp [rip+d]` and `call/jmp [r14+d]` in the
  window is decoded with capstone, and the slot is matched against the import
  table or dereferenced to a function pointer. Bound in listing order.
* **`MEMORY[0x...]`** that survives is a data reference; if the four bytes
  before it are a length and the bytes are printable, it names a Java literal
  and the string goes in as a comment.

    python tools/normalize_native.py work/exe/Runtime/astralis.dll \
        native/decompiled native/readable

Writes the same tree with resolved names plus `index.tsv` and `summary.txt`.
Nothing is executed; the image is only read, one function at a time.
"""
import argparse
import collections
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from dump_native import PE, parse_functions, parse_exports  # noqa: E402

IMAGE_BASE = 0x180000000
HEAP_SECTIONS = (".svm_hea", ".rdata", ".rodata")
MEM = re.compile(r"MEMORY\[0x([0-9A-Fa-f]+)\]")
SUB = re.compile(r"\bsub_([0-9A-Fa-f]{6,})\b")
HEAD = re.compile(r"// rva 0x([0-9A-Fa-f]+)\s+size (\d+)")


def heap_string(pe, rva, limit=120):
    sec = pe.section_of(rva)
    if sec is None or sec["name"] not in HEAP_SECTIONS or rva - sec["vaddr"] < 4:
        return None
    head = pe.data(rva - 4, 4)
    if len(head) != 4:
        return None
    (n,) = struct.unpack("<I", head)
    if not 2 <= n <= limit:
        return None
    raw = pe.data(rva, n)
    if len(raw) != n or not all(9 <= c < 127 for c in raw):
        return None
    return raw.decode("ascii")


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("image")
    ap.add_argument("indir")
    ap.add_argument("outdir")
    args = ap.parse_args(argv[1:])

    try:
        import capstone
    except ImportError:
        raise SystemExit("capstone is required: pip install capstone")

    pe = PE(args.image)
    starts = {f["start"] for f in parse_functions(pe)}
    exports = {e["rva"]: e["name"] for e in parse_exports(pe)}

    iat = {}
    imports = os.path.join(os.path.dirname(os.path.abspath(args.indir.rstrip("/\\"))),
                           "dump", "imports.tsv")
    if os.path.exists(imports):
        for line in open(imports, encoding="utf-8"):
            p = line.rstrip("\n").split("\t")
            if len(p) == 4 and p[0] != "dll":
                try:
                    iat[int(p[3], 16)] = "__imp_%s!%s" % (p[0], p[1])
                except ValueError:
                    pass

    text_sec = pe.section_of(0x1000)
    text_lo, text_hi = text_sec["vaddr"], text_sec["vaddr"] + text_sec["span"]

    def name_of(rva):
        if rva in exports:
            return exports[rva]
        if text_lo <= rva < text_hi and rva in starts:
            return "sub_%06X" % rva
        return None

    def pointer_at(rva):
        """Dereference a slot; GraalVM stores code pointers as RVAs or VAs."""
        raw = pe.data(rva, 8)
        if len(raw) != 8:
            return None
        (val,) = struct.unpack("<Q", raw)
        for cand in (val, val - IMAGE_BASE):
            nm = name_of(cand)
            if nm:
                return nm
        return None

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    md.detail = True

    def slot_name(slot):
        return iat.get(slot) or pointer_at(slot)

    def call_slots(rva, span, want):
        """Resolvable call slots in address order, up to `want` of them."""
        out = []
        code = pe.data(rva, span)
        for ins in md.disasm(code, IMAGE_BASE + rva):
            if ins.mnemonic not in ("call", "jmp") or not ins.operands:
                continue
            op = ins.operands[0]
            if op.type not in (capstone.CS_OP_MEM, capstone.CS_OP_IMM):
                continue
            if op.type == capstone.CS_OP_MEM and op.mem.index:
                continue
            if op.type == capstone.CS_OP_IMM:
                continue
            base = md.reg_name(op.mem.base) if op.mem.base else ""
            cands = []
            if base == "r14":
                cands.append(op.mem.disp & 0xFFFFFFFF)
            else:
                for cand in (op.mem.disp, ins.address + ins.size + op.mem.disp):
                    cands.append((cand - IMAGE_BASE) if cand >= IMAGE_BASE else cand)
            slot = next((c for c in cands if slot_name(c)), None)
            if slot is not None:
                out.append((ins.address - IMAGE_BASE - rva, slot))
                if len(out) >= want:
                    return out
        return out

    stats = collections.Counter()
    index = []
    for dirpath, _, files in os.walk(args.indir):
        for f in sorted(files):
            if not f.endswith(".c"):
                continue
            src = os.path.join(dirpath, f)
            rel = os.path.relpath(src, args.indir)
            text = open(src, encoding="utf-8", errors="replace").read()

            head = HEAD.search(text)
            fn_rva, fn_size = (int(head.group(1), 16), int(head.group(2))) if head else (0, 0)
            calls = len(re.findall(r"MEMORY\[0x[0-9A-Fa-f]+\]\(", text))
            slots = []
            span = max(fn_size, 0x1000)
            while calls and fn_size:
                slots = call_slots(fn_rva, span, calls)
                if len(slots) >= calls or span >= 0x800000 or span >= text_hi - fn_rva:
                    break
                span *= 4
            bind = len(slots) == calls and calls > 0
            if not bind and calls:
                stats["unbound"] += 1
            slot_iter = iter(slots) if bind else iter(())
            stats["slots"] += len(slots)

            def sub_repl(mm):
                v = int(mm.group(1), 16)
                nm = name_of(v - IMAGE_BASE if v >= IMAGE_BASE else v)
                if nm:
                    stats["sub_named"] += 1
                    return nm
                stats["sub_kept"] += 1
                return mm.group(0)

            text = SUB.sub(sub_repl, text)

            def mem_repl(mm):
                rva = int(mm.group(1), 16)
                if rva >= IMAGE_BASE:
                    rva -= IMAGE_BASE
                nxt = next(slot_iter, None)
                if nxt is not None:
                    slot = nxt[1]
                    stats["import" if slot in iat else "pointer"] += 1
                    return slot_name(slot)
                target = name_of(rva) or pointer_at(rva)
                if target:
                    stats["named"] += 1
                    return target
                lit = heap_string(pe, rva)
                stats["opaque"] += 1
                note = '"%s"' % lit if lit else "0x%x" % rva
                return "MEMORY[0x%x]/* %s */" % (rva, note.replace("*/", "* /"))

            text = MEM.sub(mem_repl, text)
            dst = os.path.join(args.outdir, rel)
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            with open(dst, "w", encoding="utf-8", newline="\n") as g:
                g.write(text)
            index.append((rel.replace(os.sep, "/"), f[:-2]))

    os.makedirs(args.outdir, exist_ok=True)
    with open(os.path.join(args.outdir, "index.tsv"), "w", encoding="utf-8", newline="\n") as g:
        g.write("file\tfunction\n")
        for rel, fn in index:
            g.write("%s\t%s\n" % (rel, fn))
    lines = [
        "files %d" % len(index),
        "call slots resolved %d, files left unbound %d" % (stats["slots"], stats["unbound"]),
        "bound to an import %d, to a code pointer %d" % (stats["import"], stats["pointer"]),
        "operands named from the image %d, still opaque %d" % (stats["named"], stats["opaque"]),
        "sub_ renamed %d, sub_ left %d" % (stats["sub_named"], stats["sub_kept"]),
        "exports %d, function starts %d, iat slots %d" % (len(exports), len(starts), len(iat)),
    ]
    with open(os.path.join(args.outdir, "summary.txt"), "w", encoding="utf-8", newline="\n") as g:
        g.write("\n".join(lines) + "\n")
    print("\n".join(lines))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
