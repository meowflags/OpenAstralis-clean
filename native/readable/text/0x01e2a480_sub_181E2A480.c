// sub_1E2A480
// rva 0x01e2a480  size 1267  section .text  group text
// window base 0x181e2a480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E2A480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-F8h]
  __int64 v11; // [rsp+28h] [rbp-F0h]

  if ( a4 != 0 )
  {
    v11 = a2;
    v10 = a1;
    sub_1EB6D20();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a4 + 20), 3, 1) != 3 )
      sub_277F4A0(a1: v7, a2: v8, a3: 1, a4: v6, a5: 0);
    sub_207D200(a1: v7, a2: v8, a3: a4, a4: v6, a5: a3, a6: a5);
    a2 = v11;
    a1 = v10;
  }
  sub_2072500(a1, a2, a3: 2);
  return 4294967294LL;
}
