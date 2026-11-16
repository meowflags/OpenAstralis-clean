// sub_132A2C68
// rva 0x132a2c68  size 48  section .text  group text
// window base 0x1932a2c68: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A2C68(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( a3 > 0 )
    return a3;
  if ( a3 == 0 )
    return -(__int64)(a5 != 0);
  JNU_ThrowIOExceptionWithLastError(a1, a2, a3: 535024, a4);
  return -5;
}
