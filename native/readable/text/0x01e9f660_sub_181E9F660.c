// sub_1E9F660
// rva 0x01e9f660  size 453  section .text  group text
// window base 0x181e9f660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_1E9F660(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  if ( a5[2] != a3[2] )
    return false;
  if ( *a5 != *a3 )
    return false;
  if ( a5[7] != a3[7] )
    return false;
  if ( a5[5] != a3[5] )
    return false;
  if ( a5[16] != a3[16] )
    return false;
  if ( a5[10] != a3[10] )
    return false;
  if ( a5[6] != a3[6] )
    return false;
  if ( a5[17] != a3[17] )
    return false;
  if ( a5[11] != a3[11] )
    return false;
  if ( a5[4] != a3[4] )
    return false;
  if ( a5[14] != a3[14] )
    return false;
  if ( a5[9] != a3[9] )
    return false;
  if ( a5[15] != a3[15] )
    return false;
  if ( a5[12] != a3[12] )
    return false;
  if ( a5[3] != a3[3] )
    return false;
  if ( a5[1] == a3[1] )
    return a5[8] == a3[8];
  return false;
}
