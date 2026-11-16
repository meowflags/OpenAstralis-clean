// sub_1E2B9A0
// rva 0x01e2b9a0  size 1395  section .text  group text
// window base 0x181e2b9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E2B9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( a4 != 0 )
  {
    sub_1EB6D20();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a4 + 20), 3, 1) != 3 )
      sub_277F4A0(a1: v6, a2: v7, a3: 1, a4: v5, a5: 0);
    sub_207D9E0(a1: v6, a2: v7, a3: a4, a4: v5, a5: a3);
    sub_28390C0();
    return 0;
  }
  else
  {
    sub_2072500(a1, a2, a3: 2);
    return 4294967294LL;
  }
}
