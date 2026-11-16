// sub_15964E0
// rva 0x015964e0  size 92  section .text  group text
// window base 0x1815964e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_15964E0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14

  if ( a3 == v6 )
    JUMPOUT(0x302B224EELL);
  if ( a6 == v6 )
    JUMPOUT(0x302B224F8LL);
  return sub_1596320(a1: a4, a2, a3: a5 + a3, a4, a5: a1 + a6, a6: a2);
}
