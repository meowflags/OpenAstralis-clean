// sub_132C8D70
// rva 0x132c8d70  size 96  section .text  group text
// window base 0x1932c8d70: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8D70(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = a4;
  v6 = a4;
  if ( (*(_BYTE *)a5 & 4) != 0 )
    v6 = -*(_DWORD *)(a5 + 8) & (a4 + *(int *)(a5 + 4));
  v7 = *(unsigned int *)(*(_QWORD *)(a3 + 16) + 8LL);
  v8 = *(_QWORD *)(a3 + 8);
  if ( (*(_BYTE *)(v7 + v8 + 3) & 0xF) != 0 )
    v5 += *(_BYTE *)(v7 + v8 + 3) & 0xF0;
  return sub_132C8DE0(
           a1,
           a2,
           a3: *(_QWORD *)((int)(*(_DWORD *)a5 & 0xFFFFFFF8) + v6),
           a4: *(_QWORD *)((int)(*(_DWORD *)a5 & 0xFFFFFFF8) + v6) ^ v5,
           a5,
           a6: *(_QWORD *)((int)(*(_DWORD *)a5 & 0xFFFFFFF8) + v6) ^ v5);
}
