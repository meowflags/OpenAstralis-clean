// sub_1932B63D0
// rva 0x132b63d0  size 58  section .text  group text
// window base 0x1932b63d0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B63D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi

  MEMORY[0x79C98](a1, a2, a3: 256, a4: a6, a5: a4);
  MEMORY[0x79C98](a1: v7, a2: v8, a3: 256, a4: a6, a5: 545084);
  return 1;
}
