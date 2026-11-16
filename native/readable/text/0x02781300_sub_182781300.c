// sub_2781300
// rva 0x02781300  size 124  section .text  group text
// window base 0x182781300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_2781300(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  signed __int64 v3; // rcx
  signed __int64 result; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rtt

  v3 = *(_QWORD *)(v2 + 376181352) - 1LL;
  v5 = *(_QWORD *)(v2 + 376181352);
  result = __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v5, v3);
  if ( v5 != result )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 376181352) - 1LL;
      v6 = *(_QWORD *)(v2 + 376181352);
      result = __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v6, v3);
    }
    while ( v6 != result );
  }
  if ( (v3 & 0x7FFFFFFF) == 0 )
  {
    result = v3 & 0x3FFFFFFF80000000LL;
    if ( (v3 & 0x3FFFFFFF80000000LL) != 0 )
      return sub_2781200(a1, a2);
  }
  return result;
}
