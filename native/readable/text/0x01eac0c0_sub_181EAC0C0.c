// sub_1EAC0C0
// rva 0x01eac0c0  size 550  section .text  group text
// window base 0x181eac0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAC0C0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  if ( (a5 & 7) != 0 )
  {
    if ( *(_BYTE *)(a3 + a5) == 0 )
      JUMPOUT(0x181EAC11CLL);
    return a5;
  }
  else if ( a6 > a5 )
  {
    return sub_181EAC0ED(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  else
  {
    return a6;
  }
}
