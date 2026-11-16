// __alloca_probe
// rva 0x132c9410  size 78  section .text  group text
// window base 0x1932c9410: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall _alloca_probe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 result; // rax
  _BYTE *v8; // r10
  _BYTE *v9; // r11

  if ( (unsigned __int64)&a7 >= result )
    JUMPOUT(0x32652342CLL);
  v8 = nullptr;
  v9 = (_BYTE *)__readgsqword(0x10u);
  if ( v9 != nullptr )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 -= 4096;
      *v9 = 0;
    }
    while ( v8 != v9 );
  }
  return result;
}
