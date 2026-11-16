// sub_2781000
// rva 0x02781000  size 327  section .text  group text
// window base 0x182781000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_2781000(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  signed __int64 v5; // rtt
  signed __int64 v6; // rtt
  __int64 v7; // rdi
  __int64 v8; // rsi
  signed __int64 result; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rtt

  sub_207FB60(a1, a2, a3: v2 + 376669024);
  v5 = *(_QWORD *)(v2 + 376181352);
  if ( v5 != __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v5, v5 + 0x80000000LL) )
  {
    do
      v6 = *(_QWORD *)(v2 + 376181352);
    while ( v6 != __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v6, v6 + 0x80000000LL) );
  }
  while ( (*(_QWORD *)(v2 + 376181352) & 0x7FFFFFFFLL) != 0 )
    sub_207F720(a1: v3, a2: v4, a3: v2 + 376669056);
  sub_207FC60(a1: v3, a2: v4, a3: v2 + 376669024);
  sub_207FB60(a1: v7, a2: v8, a3: v2 + 376668448);
  v10 = *(_QWORD *)(v2 + 376181352);
  result = __sync_val_compare_and_swap(
             (volatile signed __int64 *)(v2 + 376181352),
             v10,
             (v10 | 0x4000000000000000LL) - 0x80000000LL);
  if ( v10 != result )
  {
    do
    {
      v11 = *(_QWORD *)(v2 + 376181352);
      result = __sync_val_compare_and_swap(
                 (volatile signed __int64 *)(v2 + 376181352),
                 v11,
                 (v11 | 0x4000000000000000LL) - 0x80000000LL);
    }
    while ( v11 != result );
  }
  return result;
}
