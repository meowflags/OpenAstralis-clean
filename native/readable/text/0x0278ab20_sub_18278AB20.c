// sub_278AB20
// rva 0x0278ab20  size 112  section .text  group text
// window base 0x18278ab20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278AB20(
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
        unsigned __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi

  if ( a13 == 0
    || (unsigned int)sub_278A5A0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11: v14 + 376652416, a12, a13, a14) == 0
    || a14 == 0 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)MEMORY[0x10e444a0]/* 0x10e444a0 */(a1: v16, a2: v17, a3: a14, a4: a13, a5: 0x4000) != 0 )
    JUMPOUT(0x304ED3B89LL);
  return 0xFFFFFFFFLL;
}
