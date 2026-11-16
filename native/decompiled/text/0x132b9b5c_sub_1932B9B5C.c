// sub_1932B9B5C
// rva 0x132b9b5c  size 74  section .text  group text
// window base 0x1932b9b5c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_1932B9B5C(__int64 a1)
{
  int v1; // edx
  unsigned __int64 v2; // rcx

  v1 = MEMORY[0x79758](a1);
  if ( (unsigned int)(v1 - 2) <= 0x3F )
  {
    v2 = 0x800800000001000BLL;
    if ( _bittest64((const __int64 *)&v2, (unsigned __int8)(v1 - 2)) )
      return false;
  }
  return v1 != 267 && v1 != 67 && v1 != 1231 && v1 != 64;
}
