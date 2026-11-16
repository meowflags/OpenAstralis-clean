// sub_15967C0
// rva 0x015967c0  size 55  section .text  group text
// window base 0x1815967c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15967C0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5, char a6)
{
  __int64 result; // rax

  if ( (a6 & 1) != 0 )
  {
    *a3 = a5;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)&a3[result] = a5;
    result += 2;
  }
  if ( (a6 & 4) != 0 )
    *(_DWORD *)&a3[result] = a5;
  return result;
}
