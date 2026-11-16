// sub_1815917C0
// rva 0x015917c0  size 499  section .text  group text
// window base 0x1815917c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__m128i __fastcall sub_1815917C0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r14
  __int64 retaddr; // [rsp+178h] [rbp+0h]

  sub_181591700(a1, a2, a3: (__int64)&a8, a4: retaddr, a5: retaddr, a6: v8 + 370647288);
  return (__m128i)a3.m128_i128;
}
