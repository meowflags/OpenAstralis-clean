// sub_182772F00
// rva 0x02772f00  size 106  section .text  group text
// window base 0x182772f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182772F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( *(_DWORD *)(a5 + 324) == 2 )
    return sub_182772F80(a1: 0, a2: 0, a3, a4, a5: 0, a6: 0);
  else
    return sub_182772F80(a1: a2, a2: a4, a3, a4, a5: a6, a6: a1);
}
