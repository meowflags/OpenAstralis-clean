// sub_2781380
// rva 0x02781380  size 122  section .text  group text
// window base 0x182781380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2781380(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  signed __int64 v4; // rtt
  __int64 v5; // rdi
  __int64 v6; // rsi
  signed __int64 v8; // rtt

  *(_DWORD *)(v3 + 336) &= ~4u;
  v4 = *(_QWORD *)(v2 + 376181352);
  if ( v4 != __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v4, v4 & 0xBFFFFFFFFFFFFFFFLL) )
  {
    do
      v8 = *(_QWORD *)(v2 + 376181352);
    while ( v8 != __sync_val_compare_and_swap(
                    (volatile signed __int64 *)(v2 + 376181352),
                    v8,
                    v8 & 0xBFFFFFFFFFFFFFFFLL) );
  }
  sub_207FC60(a1, a2, a3: v2 + 376668448);
  return sub_2781200(a1: v5, a2: v6);
}
