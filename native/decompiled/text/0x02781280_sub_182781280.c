// sub_182781280
// rva 0x02781280  size 124  section .text  group text
// window base 0x182781280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_182781280(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  signed __int64 v4; // rcx
  signed __int64 result; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rtt

  *(_DWORD *)(v3 + 336) &= ~1u;
  v4 = *(_QWORD *)(v2 + 376181352) - 1LL;
  v6 = *(_QWORD *)(v2 + 376181352);
  result = __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v6, v4);
  if ( v6 != result )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 376181352) - 1LL;
      v7 = *(_QWORD *)(v2 + 376181352);
      result = __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v7, v4);
    }
    while ( v7 != result );
  }
  if ( (v4 & 0x7FFFFFFF) == 0 )
  {
    result = v4 & 0x3FFFFFFF80000000LL;
    if ( (v4 & 0x3FFFFFFF80000000LL) != 0 )
      return sub_182781260(a1, a2);
  }
  return result;
}
