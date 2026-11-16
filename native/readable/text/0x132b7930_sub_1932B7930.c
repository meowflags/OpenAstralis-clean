// sub_132B7930
// rva 0x132b7930  size 196  section .text  group text
// window base 0x1932b7930: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7930(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbp
  int v13; // esi
  int v15; // edx

  a9 = v11;
  a10 = a2;
  a8 = 0;
  v13 = a5;
  if ( a5 != 0 )
  {
    if ( a3 == 1 )
    {
      v15 = 536870939;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_11;
      v15 = 536871029;
    }
  }
  else if ( a3 == 1 )
  {
    v15 = 536870940;
  }
  else
  {
    v15 = 536871028;
    if ( a3 != 2 )
      v15 = 536875024;
  }
  sub_132B79F4(a1: 0, a2: a5, a3: v15, a4, a5: (unsigned int)&a8, a6: 4);
LABEL_11:
  if ( a3 == 3 )
    JUMPOUT(0x3265119A4LL);
  return __imp_api-ms-win-crt-string-l1-1-0.dll!wcscpy(
           a1: a3,
           a2: (unsigned int)-v13,
           a3: *(_QWORD *)(8 * (a8 + 16 * ((a6 == 0 ? 6 : 0) + (v13 == 0 ? 3 : 0) + (__int64)(int)a3)) + 0x336950),
           a4: a11);
}
