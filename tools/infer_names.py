#!/usr/bin/env python3
"""Evidence table + draft rename map for the obfuscated cc/astralis classes.

Stage 1 dumps one evidence row per class: superclass, interfaces, referenced
Minecraft intermediary ids, folded string literals, method counts. Stage 2
writes a draft rename map:

  - curated singletons/screens: names chosen from their own distinctive
    folded strings ("Alt Manager", "Enter UID", "Reinitializing all fonts");
  - screens (`class_437` subclasses), prediction modes (`fwu`): display
    string + role suffix;
  - commands (`fso`): their verb literal (the shortest non-runtime string);
  - movement modes (`hcr` children): display string prefixed with the module
    that registers them (Speed Watchdog -> SpeedWatchdog);
  - everything else only when it carries a multi-word title string.

Literals belonging to the string-decryption runtime (DES/CBC, PKCS5Padding,
ISO-8859-1) or to exception/assert messages are never used as names. Names
are INFERRED from the class's own constants - medium confidence by
construction, proven module names are excluded, and nothing is renamed
without at least one literal from the class itself.

usage: python tools/infer_names.py <src-dir> <orig-classes-dir> <out.tsv>
"""
from __future__ import annotations

import os
import re
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else "src"
ORIG = sys.argv[2] if len(sys.argv) > 2 else "../work/plain_in"
OUT = sys.argv[3] if len(sys.argv) > 3 else "../work/infer_evidence.tsv"

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from jarscan import ClassFile  # noqa: E402

STRING = re.compile(r'"((?:[^"\\]|\\.)*)"')
MC = re.compile(r"\bclass_\d+")
WORDS = re.compile(r"[A-Za-z][A-Za-z0-9 ]{2,}")
STOP = set("""the a an of and or to in on for with from by is are was new return
this super null true false void int long byte short char boolean double float
String Object Class Exception RuntimeException extends implements public private
protected static final abstract interface enum import package throws try catch
finally while for if else switch case break continue do default instanceof
instance check flag value index offset""".split())

rows = []
for dirpath, _, files in os.walk(os.path.join(SRC, "cc", "astralis")):
    for n in sorted(files):
        if not n.endswith(".java"):
            continue
        name = n[:-5]
        text = open(os.path.join(dirpath, n), encoding="utf-8", errors="replace").read()
        m = re.search(r"^\s*public\s+(?:final\s+|abstract\s+)?(?:class|interface|enum)\s+(\w+)\s*(?:extends\s+([\w.]+))?(?:\s+implements\s+([\w.,\s]+?))?\s*\{", text, re.M)
        sup = (m.group(2) or "").strip() if m else ""
        ifs = (m.group(3) or "").replace(" ", "") if m else ""
        mc = sorted(set(MC.findall(text)))
        lits = [s for s in STRING.findall(text) if len(s) >= 3]
        words: list[str] = []
        for s in lits:
            for w in WORDS.findall(s):
                if w.lower() not in STOP and not w.isdigit():
                    words.append(w.strip())
        seen = set()
        words = [w for w in words if not (w in seen or seen.add(w))]
        n_methods = len(re.findall(r"^\s{3}(?:public|private|protected|static).*?\(", text, re.M))
        n_static = len(re.findall(r"^\s{3}(?:public|private|protected)?\s*static\b.*?\(", text, re.M))
        rows.append((name, sup, ifs, len(mc), ",".join(mc[:14]), n_methods, n_static,
                     " | ".join(words[:12]), lits[:6]))

ref_sig = {}
refs_to: dict[str, set[str]] = {}
for dirpath, _, files in os.walk(ORIG):
    for n in sorted(files):
        if not n.endswith(".class"):
            continue
        base = n[:-6]
        try:
            cf = ClassFile(n, open(os.path.join(dirpath, n), "rb").read())
        except ValueError:
            continue
        ref_sig[base] = len({m[1] for m in cf.method_refs
                             if m[0].startswith("net/minecraft") or m[0].startswith("java/")})
        for c in cf.class_refs:
            if c.startswith("cc/astralis/"):
                refs_to.setdefault(c.split("/")[-1], set()).add(base)

with open(OUT, "w", encoding="utf-8", newline="") as f:
    f.write("class\tsuper\tinterfaces\tmc_types\tmc_list\tmethods\tstatic_methods\twords\tfirst_literal\tmrefs\n")
    for name, sup, ifs, nmc, mcl, nm, ns, w, lits in rows:
        f.write(f"{name}\t{sup}\t{ifs}\t{nmc}\t{mcl}\t{nm}\t{ns}\t{w}\t{(lits[0] if lits else '')}\t{ref_sig.get(name, 0)}\n")
print("rows", len(rows))

# ---- draft mapping ------------------------------------------------------
NOISE = {"DES", "CBC", "PKCS5Padding", "ISO", "NoPadding", "imgui", "ImGui",
         "Astralis", "astralis", "Mode", "Settings"}
# any literal containing one of these is deobfuscator runtime or exception
# text, not a display name
JUNK = ("DES/CBC", "PKCS5", "NoPadding", "ISO-8859", "javax.crypto", "AES/",
        "marked non-null", "cannot be null", "must not", "must be", "<html",
        "gud boy", "Error closing", "Invalid request", "Unknown Property",
        "Not found", "utility class", "not available", "Failed to load")

proven = {}
for line in open("mapping/modules.proguard.txt", encoding="utf-8"):
    if " -> " in line:
        a, b = line.split(" -> ")
        proven[a.split(".")[-1]] = b.split(":")[0].split(".")[-1]
excluded = set(proven) | set(proven.values())  # original + current names of the 74

CURATED = {
    "crv": "AltManager", "cv": "AltLoginScreen", "eyu": "AccountSettingsScreen",
    "goy": "AuthScreen", "blg": "AccountsScreen", "gaf": "ClickGuiWindow",
    "ckb": "ConfigsScreen", "een": "HudEditorScreen", "dar": "ClientSetup",
    "dfw": "ModuleManager", "bxc": "FontManager", "dle": "DiscordRpc",
    "crw": "ShaUtil", "cni": "Base64Util", "ctv": "KeybindNames", "bam": "SysInfo",
    "chx": "LimboHandler", "bhw": "BlinkController", "atf": "TeleportCommand",
    "bkv": "ToggleCommand", "blz": "ConfigManager", "ehy": "SessionHelper",
    "fkc": "FileExplorer",
}
SUFFIX = {"class_437": "Screen", "fwu": "Mode"}

taken = {n[:-5] for n in os.listdir(os.path.join(SRC, "cc", "astralis")) if n.endswith(".java")}
used = {t for t in taken if len(t) > 3}

def camel(s: str) -> str:
    parts = [p for p in re.split(r"[^A-Za-z0-9]+", s) if p]
    return "".join(p[:1].upper() + p[1:] for p in parts)[:40] or ""

def unique(n: str) -> str:
    i = 2
    out = n if n not in used else f"{n}{i}"
    while out in used:
        i += 1
        out = f"{n}{i}"
    used.add(out)
    return out

def good_lits(lits: list[str]) -> list[str]:
    # printable ASCII only, and short: the encrypted string blobs are
    # hundreds of characters of mojibake and must never become a name
    out = []
    for l in lits:
        l = l.strip()
        if not l or l in NOISE or any(j in l for j in JUNK):
            continue
        if len(l) > 90 or not re.fullmatch(r"[ -~]+", l):
            continue
        out.append(l)
    return out

draft = []
for name, sup, ifs, nmc, mcl, nm, ns, w, lits in rows:
    if name in excluded or len(name) > 3:
        continue
    fam = sup.split(".")[-1]
    if fam == "guu":
        continue  # the 17 unknown modules: a setting label is not a module name
    conf = ev = None
    base = CURATED.get(name)
    if base:
        conf, ev = "high", "curated: distinctive folded strings"
    elif fam == "fso":  # commands: the verb is the shortest non-runtime literal
        g = sorted(good_lits(lits), key=len)
        if g and " " not in g[0]:
            base, conf, ev = camel(g[0]) + "Command", "medium", f"command verb: {g[0]!r}"
    elif fam in SUFFIX:
        g = good_lits(lits)
        if g:
            base, conf, ev = camel(g[0]) + SUFFIX[fam], "medium", f"display string: {g[0]!r}"
    elif fam == "hcr":
        g = good_lits(lits)
        if g:
            owners = sorted(proven[o] for o in refs_to.get(name, ()) if o in proven)
            pref = owners[0] if owners else ""
            base, conf, ev = pref + camel(g[0]), "medium", f"mode label {g[0]!r}, owner {pref or '?'}"
    if not base:
        g = good_lits(lits)
        if g and " " in g[0]:
            base, conf, ev = camel(g[0]), "medium", f"title string: {g[0]!r}"
    if not base or len(base) < 4:
        continue
    draft.append((name, unique(base), ev, conf))

with open("mapping/inferred.tsv", "w", encoding="utf-8", newline="") as f:
    f.write("class\tnew\tevidence\tconfidence\n")
    for name, new, ev, conf in draft:
        f.write(f"{name}\t{new}\t{ev}\t{conf}\n")
with open("mapping/inferred.proguard.txt", "w", encoding="utf-8", newline="") as f:
    for name, new, _, _ in draft:
        f.write(f"cc.astralis.{name} -> cc.astralis.{new}:\n")
print("draft names:", len(draft))
