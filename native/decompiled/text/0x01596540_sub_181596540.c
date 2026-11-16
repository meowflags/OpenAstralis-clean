// sub_181596540
// rva 0x01596540  size 66  section .text  group text
// window base 0x181596540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596540(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5, char a6)
{
  __int64 result; // rax

  if ( (a6 & 1) != 0 )
  {
    *a5 = *a3;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)&a5[result] = *(_WORD *)&a3[result];
    result += 2;
  }
  if ( (a6 & 4) != 0 )
    *(_DWORD *)&a5[result] = *(_DWORD *)&a3[result];
  return result;
}
