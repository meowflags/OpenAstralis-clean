// sub_1EB6B00
// rva 0x01eb6b00  size 116  section .text  group text
// window base 0x181eb6b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB6B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // rcx
  __int64 v7; // rsi

  if ( a3 == 0 )
    return 2;
  if ( (a3 & 0x7FFFF) != 0 )
    JUMPOUT(0x303D40B1CLL);
  sub_1EB6D20();
  return sub_1EB6B80(a1, a2: v7, a3, a4: v6, a5, a6);
}
