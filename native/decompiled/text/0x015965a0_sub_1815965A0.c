// sub_1815965A0
// rva 0x015965a0  size 66  section .text  group text
// window base 0x1815965a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815965A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, char a6)
{
  __int64 result; // rax

  if ( (a6 & 4) != 0 )
  {
    *a5 = *a3;
    result = 4;
  }
  else
  {
    result = 0;
  }
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)((char *)a5 + result) = *(_WORD *)((char *)a3 + result);
    result += 2;
  }
  if ( (a6 & 1) != 0 )
    *((_BYTE *)a5 + result) = *((_BYTE *)a3 + result);
  return result;
}
