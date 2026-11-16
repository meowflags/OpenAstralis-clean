// sub_1932C1050
// rva 0x132c1050  size 165  section .text  group text
// window base 0x1932c1050: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C1050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12)
{
  __int64 v12; // rbx
  unsigned int v13; // r11d
  __int64 v14; // r10
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx

  v12 = a4;
  v13 = a11 & 1;
  if ( (a11 & 1) == 0 )
  {
    v18 = 0;
    if ( a12 != -5 && a12 != 0 )
    {
      if ( a12 != 1 )
      {
        a4 = v12;
        goto LABEL_4;
      }
      v18 = 1;
    }
    v16 = a5 - *(_DWORD *)(a3 + 8);
    v14 = v18;
    v17 = a6 - *(_DWORD *)(a3 + 24);
    return v16 | ((v17 | ((v14 | (2LL * v13)) << 31)) << 31);
  }
  v14 = 0;
  if ( a12 == -5 )
  {
LABEL_7:
    v16 = a5 - *(_DWORD *)(a3 + 8);
    v17 = a6 - *(_DWORD *)(a3 + 24);
    return v16 | ((v17 | ((v14 | (2LL * v13)) << 31)) << 31);
  }
  if ( a12 == 0 )
  {
    v13 = 0;
    goto LABEL_7;
  }
LABEL_4:
  if ( *(_QWORD *)(a3 + 32) == 0 )
    JUMPOUT(0x32651B088LL);
  sub_1932B15B0(a1, a2, a3: *(_QWORD *)(a3 + 32), a4, a5);
  return 0;
}
