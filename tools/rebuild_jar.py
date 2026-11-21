#!/usr/bin/env python3
"""Package checked inspection classes. Every included class must have a cleanup digest."""
import argparse
from hashlib import sha256
from pathlib import Path, PurePosixPath
import os
import tempfile
import zipfile


def cleanup_manifest(classes):
    entries = {}
    for line in (classes / "SHA256SUMS.cleaned").read_text(encoding="utf-8").splitlines():
        digest, name = line.split("\t", 1)
        path = PurePosixPath(name)
        if path.is_absolute() or ".." in path.parts or "\\" in name or name in entries:
            raise ValueError("Invalid or duplicated cleanup manifest path")
        if len(digest) != 64 or not name.endswith(".class"):
            raise ValueError("Invalid cleanup manifest entry")
        data = (classes / name).read_bytes()
        if sha256(data).hexdigest() != digest:
            raise ValueError(f"Cleanup digest mismatch for {name}")
        entries[name] = data
    if not entries:
        raise ValueError("Cleanup manifest is empty")
    return entries


def rebuild(source, classes, output, drops):
    source, classes, output = source.resolve(), classes.resolve(), output.resolve()
    if output.exists() or output == source or output.is_relative_to(classes):
        raise ValueError("Use a new output file outside the class tree")
    checked = cleanup_manifest(classes)
    binary_extensions = {".dll", ".so", ".dylib", ".exe", ".zip", ".jar", ".zst"}
    seen = set()
    temporary = None
    try:
        with tempfile.NamedTemporaryFile(dir=output.parent, prefix=".inspection-", delete=False) as stream:
            temporary = Path(stream.name)
        with zipfile.ZipFile(source) as original, zipfile.ZipFile(temporary, "w", zipfile.ZIP_DEFLATED) as result:
            for entry in original.infolist():
                name = entry.filename
                path = PurePosixPath(name)
                if path.is_absolute() or ".." in path.parts or "\\" in name or name in seen:
                    raise ValueError(f"Unsafe or duplicated archive path {name}")
                seen.add(name)
                if name.startswith(("dev/opalV2/", *drops)) or path.suffix.lower() in binary_extensions:
                    continue
                if name.upper().endswith((".SF", ".RSA", ".DSA", ".EC")):
                    continue
                if name == "META-INF/MANIFEST.MF":
                    continue
                if name.endswith(".class"):
                    if name not in checked:
                        raise ValueError(f"Missing checked class {name}")
                    result.writestr(name, checked.pop(name))
                else:
                    result.writestr(name, original.read(entry))
            for name, data in sorted(checked.items()):
                result.writestr(name, data)
            result.writestr("META-INF/MANIFEST.MF",
                "Manifest-Version: 1.0\r\nOpenAstralis-Cleanup: static-inspection-only\r\n\r\n")
            result.writestr("META-INF/OPENASTRALIS-CLEANUP.txt",
                "Static inspection artifact. Native-dependent behavior requires reconstruction.\n")
        with zipfile.ZipFile(temporary) as result:
            if result.testzip():
                raise ValueError("Inspection archive failed its integrity check")
        # A pre-existing output is never overwritten.
        os.link(temporary, output)
        print(f"Wrote static inspection archive {output}")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("classes", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("--drop", action="append", default=[])
    args = parser.parse_args()
    rebuild(args.source, args.classes, args.output, args.drop)


if __name__ == "__main__":
    main()
