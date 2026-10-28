"""Read-only archive/research-file checksum verification. Never executes samples."""
from pathlib import Path
import hashlib,sys
root=Path(__file__).resolve().parents[1]
fail=[];checked=0
for line in (root/'SHA256SUMS').read_text(encoding='utf-8').splitlines():
    expected,name=line.split('  ',1);p=(root/name).resolve()
    if not p.is_relative_to(root) or not p.is_file():
        fail.append(name+': missing or outside repository');continue
    h=hashlib.sha256()
    with p.open('rb')as stream:
        for chunk in iter(lambda:stream.read(1024*1024),b''):h.update(chunk)
    checked+=1
    if h.hexdigest()!=expected:fail.append(name+': hash mismatch')
for item in fail:print(item)
print(f'Checked {checked} files; failures={len(fail)}')
sys.exit(bool(fail))
