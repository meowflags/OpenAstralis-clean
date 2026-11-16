// sub_182772F80
// rva 0x02772f80  size 88  section .text  group text
// window base 0x182772f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_182772F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a3 + 32) = 0;
  *(_QWORD *)(a3 + 24) = a5;
  *(_QWORD *)a3 = a6;
  *(_QWORD *)(a3 + 16) = a1;
  *(_QWORD *)(a3 + 8) = a2;
  *(_QWORD *)(a3 + 88) = 0;
  *(_QWORD *)(a3 + 72) = 0;
  *(_QWORD *)(a3 + 80) = 0;
  *(_BYTE *)(a3 + 96) = 0;
  *(_QWORD *)(a3 + 40) = 0;
  *(_QWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 64) = -1;
  *(_QWORD *)(a3 + 56) = -1;
}
