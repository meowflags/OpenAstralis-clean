// sub_1596800
// rva 0x01596800  size 55  section .text  group text
// window base 0x181596800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1596800(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, char a6)
{
  __int64 result; // rax

  if ( (a6 & 4) != 0 )
  {
    *a3 = a5;
    result = 4;
  }
  else
  {
    result = 0;
  }
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)((char *)a3 + result) = a5;
    result += 2;
  }
  if ( (a6 & 1) != 0 )
    *((_BYTE *)a3 + result) = a5;
  return result;
}
