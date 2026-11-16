// sub_18277FE00
// rva 0x0277fe00  size 151  section .text  group text
// window base 0x18277fe00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277FE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( (unsigned int)sub_182778A40(a1, a2, a3, a4, a5: 12) == 0 )
  {
    while ( (unsigned int)sub_182778A40(a1: v6, a2: v7, a3, a4: v5, a5: 12) == 0 )
      ;
  }
  if ( *(_BYTE *)(a3 + 24) != 0 )
  {
    *(_DWORD *)(a3 + 12) = 0;
    __faststorefence();
    return v4;
  }
  else
  {
    ++*(_QWORD *)(a3 + 16);
    *(_DWORD *)(a3 + 12) = 0;
    __faststorefence();
    return a3;
  }
}
