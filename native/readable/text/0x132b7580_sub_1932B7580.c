// sub_132B7580
// rva 0x132b7580  size 112  section .text  group text
// window base 0x1932b7580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7580(int a1, int a2, _DWORD a3, int a4, _DWORD a5, _DWORD a6, __int64 a7, unsigned int a8)
{
  int v8; // eax
  unsigned int v9; // ecx
  bool v10; // zf

  a8 = 0xFFFFFFFF;
  v8 = sub_132B79F4(a1, a2, a3: 536875017, a4, a5: (unsigned int)&a8, a6: 4);
  v9 = a8;
  if ( v8 != 0 )
  {
    if ( a8 > 7 )
    {
      if ( a8 == 9 || a8 == 10 || a8 == 11 || a8 == 12 )
        return v9;
      v10 = a8 == 23;
    }
    else
    {
      if ( a8 == 7 || a8 == 1 || a8 == 2 || a8 == 3 || a8 == 4 )
        return v9;
      v10 = a8 == 6;
    }
    if ( !v10 )
      return (unsigned int)-1;
  }
  return v9;
}
