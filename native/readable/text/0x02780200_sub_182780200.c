// sub_2780200
// rva 0x02780200  size 213  section .text  group text
// window base 0x182780200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2780200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v11; // rbx

  if ( (unsigned int)sub_2778A40(a1, a2, a3, a4, a5: 12) == 0 )
  {
    while ( (unsigned int)sub_2778A40(a1: v8, a2: v9, a3, a4: v7, a5: 12) == 0 )
      ;
  }
  if ( *(_DWORD *)(a3 + a5) != 0 )
  {
    *(_DWORD *)(a3 + 12) = 0;
    __faststorefence();
    return 0;
  }
  else
  {
    *(_DWORD *)(a3 + a5) = (unsigned __int64)(a6 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 12) = 0;
    __faststorefence();
    return 1;
  }
}
