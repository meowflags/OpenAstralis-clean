// sub_277B240
// rva 0x0277b240  size 153  section .text  group text
// window base 0x18277b240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277B240(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v15 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_277B2E0();
  }
  if ( a13 == v14 || v14 + 8LL * *(unsigned int *)(v15 + 72) != a13 )
  {
    v26 = a14;
    v24 = a13;
    result = sub_1EEFB40(a1, a2, a3: a13);
    if ( *(int *)(v15 + 16) > 0 )
      return result;
    return sub_277F280(a1: v18, a2: v19, a3: v17);
  }
  v26 = a14;
  v24 = a13;
  v25 = sub_277AE40(
          a1,
          a2,
          a3: a13,
          a4: a12,
          a5: a14,
          a6: a14,
          a7: a3,
          a8: a4,
          a9: a5,
          a10: a6,
          a11: a7,
          a12: a8,
          a13: a9,
          a14: a10);
  result = sub_1EEFE00(a1: v21, a2: v22, a3: 0, a4: v20, a5: v25, a6: 0);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_277F280(a1: v18, a2: v19, a3: v17);
  return result;
}
