// sub_1E2B400
// rva 0x01e2b400  size 1434  section .text  group text
// window base 0x181e2b400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E2B400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v11; // [rsp+10h] [rbp-118h]
  unsigned int v12; // [rsp+ECh] [rbp-3Ch]

  v12 = MEMORY[0x11b5f760]/* 0x11b5f760 */ & a6;
  if ( a4 != 0 )
  {
    sub_1EB6D20();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a4 + 20), 3, 1) != 3 )
      sub_277F4A0(a1: v8, a2: v9, a3: 1, a4: v7, a5: 0);
    v11 = sub_207D620(a1: v12, a2: v9, a3: a4, a4: v7, a5: a3, a6: a5);
    sub_28390C0();
    return v11;
  }
  else
  {
    sub_2839060(a1, a2, a3: 2);
    return 0;
  }
}
