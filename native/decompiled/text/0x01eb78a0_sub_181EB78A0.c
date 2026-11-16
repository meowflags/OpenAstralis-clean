// sub_181EB78A0
// rva 0x01eb78a0  size 50  section .text  group text
// window base 0x181eb78a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB78A0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 == 0 || (a3 & 0x7FFFF) != 0 )
    return 0;
  sub_181EB6D20();
  return sub_181EB78E0();
}
