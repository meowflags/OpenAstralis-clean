// sub_1593480
// rva 0x01593480  size 127  section .text  group text
// window base 0x181593480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_1593480(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  int i; // eax

  if ( *a5 != 0 )
  {
    if ( *a3 == *a5 )
    {
      for ( i = 1; a5[i] != 0 && a3[i] == a5[i]; ++i )
        ;
    }
    else
    {
      i = 0;
    }
  }
  else
  {
    i = 0;
  }
  if ( a5[i] != 0 )
    return false;
  if ( &a3[i] != nullptr )
    return a3[i] == 0;
  return false;
}
