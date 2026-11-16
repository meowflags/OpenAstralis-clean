// sub_1815A02C0
// rva 0x015a02c0  size 119  section .text  group text
// window base 0x1815a02c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A02C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a3 + 240);
  if ( v3 == 0 )
    return 0;
  v5 = *(_QWORD *)(v3 + 208);
  if ( v5 == 0 || (v5 & 0x7FFFF) != 0 || *(_QWORD *)(v5 + 376181088) != 0x123456789ABCDEFLL )
    return 0;
  MEMORY[0x181EB6D20]();
  return 1;
}
