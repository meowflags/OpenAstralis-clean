#!/usr/bin/env python3
"""Check the edited source tree without importing or executing recovered client code."""
from pathlib import Path
import re
import sys


def check(root):
    failures = []
    patterns = {
        "unsafe memory access": r"\bUnsafe\s*\.class|\.(?:putAddress|halt)\s*\(",
        "native loading": r"System\s*\.\s*(?:load|loadLibrary)\s*\(|\bnative\s+[\w.$<>?,\[\] ]+\s+\w+\s*\(",
        "hidden native initializer": r"Hidden0\s*\.|import\s+dev\.opalV2\.",
        "removed remote endpoint": r"serenityutils\.club|pastebin\.com|discord\.com/api",
        "embedded bot credential": r"<redacted:discord-bot-token>",
    }
    source = root / "src"
    files = sorted(source.rglob("*.java"))
    if not files:
        failures.append("No Java source files found")
    for path in files:
        text = path.read_text(encoding="utf-8")
        for label, pattern in patterns.items():
            if re.search(pattern, text):
                failures.append(f"{path.relative_to(root)} contains {label}")
    binary_extensions = {".zip", ".jar", ".class", ".exe", ".dll", ".so", ".dylib"}
    for path in source.rglob("*"):
        if path.is_file() and path.suffix.lower() in binary_extensions:
            failures.append(f"Recovered binary remains in {path.relative_to(root)}")
    if failures:
        raise RuntimeError("\n".join(failures))
    print(f"PASS: {len(files)} Java source files checked using static text inspection")


if __name__ == "__main__":
    check(Path(sys.argv[1]).resolve() if len(sys.argv) > 1 else Path(__file__).resolve().parents[1])
