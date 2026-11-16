// sub_1932B1D34
// rva 0x132b1d34  size 129  section .text  group text
// window base 0x1932b1d34: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B1D34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  if ( a5 != nullptr )
    *a5 = 1;
  switch ( MEMORY[0x3375F8] )
  {
    case 0:
      JNU_ThrowByName(a1, a2, a3: 542552, a4, a5: 543192);
      return 0;
    case 2:
      return sub_1932B1778(a1, a2, a3, a4, a5: a6);
    case 3:
      return sub_1932B1A58(a1, a2, a3, a4, a5: a6);
    case 4:
      return sub_1932B1624(a1, a2, a3, a4, a5: a6);
    case 5:
      LOBYTE(a5) = a6;
      return sub_1932B1DB8(a1, a2, a3, a4, (_DWORD)a5, a6, a7, a8, a9, a10);
    default:
      return sub_1932B18D0(a1, a2, a3, a4, a5: a6);
  }
}
