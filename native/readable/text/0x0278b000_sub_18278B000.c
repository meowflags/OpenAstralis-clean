// sub_278B000
// rva 0x0278b000  size 40  section .text  group text
// window base 0x18278b000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278B000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  return MEMORY[0x10e445d0]/* 0x10e445d0 */(a1, a2, a3: 0, a4: a3, a5: a6, a6: a1);
}
