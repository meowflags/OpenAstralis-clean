// sub_27856C0
// rva 0x027856c0  size 60  section .text  group text
// window base 0x1827856c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27856C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  result = sub_2785700(a1, a2, a3, a4: a5);
  if ( a3 != 0 )
    return MEMORY[0x10e45030]/* 0x10e45030 */(a1: v6, a2: v7, a3, a4: a3);
  return result;
}
