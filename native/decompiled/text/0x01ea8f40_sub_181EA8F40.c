// sub_181EA8F40
// rva 0x01ea8f40  size 227  section .text  group text
// window base 0x181ea8f40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA8F40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-8h]

  if ( (a3 & 0xFFFFFFFFFFF80000LL) + *(_QWORD *)((a3 & 0xFFFFFFFFFFF80000LL) + 0x20) <= a3 )
    return 0;
  v5 = (a3 & 0xFFFFFFFFFFF80000LL)
     + 8
     * (unsigned int)*(unsigned __int16 *)((a3 & 0xFFFFFFFFFFF80000LL)
                                         + 2 * ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 10)
                                         + 0x38);
  if ( v5 > a3 )
    return 0;
  if ( *(_WORD *)((a3 & 0xFFFFFFFFFFF80000LL)
                + 8
                * (unsigned int)*(unsigned __int16 *)((a3 & 0xFFFFFFFFFFF80000LL)
                                                    + 2 * ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 10)
                                                    + 0x38)
                - 2) != 0 )
    v6 = v5
       + 8LL
       * *(unsigned __int16 *)((a3 & 0xFFFFFFFFFFF80000LL)
                             + 8
                             * (unsigned int)*(unsigned __int16 *)((a3 & 0xFFFFFFFFFFF80000LL)
                                                                 + 2 * ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 10)
                                                                 + 0x38)
                             - 2);
  else
    v6 = 0;
  while ( v6 != 0 && v6 <= a3 )
  {
    if ( *(_WORD *)(v6 - 2) != 0 )
    {
      v7 = v6;
      v6 += 8LL * *(unsigned __int16 *)(v6 - 2);
      v5 = v7;
    }
    else
    {
      v5 = v6;
      v6 = 0;
    }
  }
  if ( v5 + 8LL * *(unsigned __int16 *)(v5 - 4) > a3 )
    return a3 - v5 + v3 + 8LL * *(unsigned int *)(v5 - 8);
  else
    return 0;
}
