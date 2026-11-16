// sub_2780CC0
// rva 0x02780cc0  size 146  section .text  group text
// window base 0x182780cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_2780CC0()
{
  __int64 v0; // r14
  signed __int64 v1; // rax
  signed __int64 result; // rax
  __int64 v3; // rtt
  __int64 v4; // rtt
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(v0 + 376181352);
  if ( (v1 & 0x4000000000000000LL) != 0 || (v1 & 0x3FFFFFFF80000000LL) != 0 )
    return sub_2780DE0();
  v3 = *(_QWORD *)(v0 + 376181352);
  result = __sync_val_compare_and_swap((volatile signed __int64 *)(v0 + 376181352), v1, v1 + 1);
  if ( v3 != result )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v0 + 376181352);
      if ( (v5 & 0x4000000000000000LL) != 0 || (v5 & 0x3FFFFFFF80000000LL) != 0 )
        break;
      v4 = *(_QWORD *)(v0 + 376181352);
      result = __sync_val_compare_and_swap((volatile signed __int64 *)(v0 + 376181352), v5, v5 + 1);
      if ( v4 == result )
        return result;
    }
    return sub_2780DE0();
  }
  return result;
}
