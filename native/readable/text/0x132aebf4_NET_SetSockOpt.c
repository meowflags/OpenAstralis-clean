// NET_SetSockOpt
// rva 0x132aebf4  size 224  section .text  group text
// window base 0x1932aebf4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_SetSockOpt(
        _DWORD a1,
        _DWORD a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // edi
  int v21; // esi
  __int64 result; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]

  a10 = v10;
  v11 = a4;
  a8 = 0;
  a9 = 4;
  v13 = a5;
  v14 = a3;
  if ( a3 != 0 || a5 != 3 )
  {
    if ( a5 == 4 )
    {
      result = NET_GetSockOpt(
                 a1: 4,
                 a2: a3,
                 a3: 0xFFFF,
                 a4,
                 a5: 4294967291LL,
                 a6: &a8,
                 a7: v23,
                 a8: v24,
                 a9: v25,
                 a10: v26,
                 a11: &a9);
      if ( (_DWORD)result == 0 && a8 == 1 )
        return result;
    }
  }
  else
  {
    *a6 &= 0xFEu;
  }
  v15 = __imp_WS2_32.dll!#21(a1: v13, a2: v14, a3: (unsigned int)v14, a4: v11, a5: (unsigned int)v13, a6);
  if ( v15 == -1 )
  {
    if ( (unsigned int)__imp_WS2_32.dll!#111(a1: v16, a2: v17) == 10042 && (_DWORD)v19 == 0 )
      v15 = -((((_DWORD)v18 - 3) & 0xFFFFFFF7) != 0);
    if ( (unsigned int)__imp_WS2_32.dll!#111(a1: v18, a2: v19) == 10022 && v21 == 0 )
    {
      if ( v20 != 3 )
        JUMPOUT(0x326508C86LL);
      return 0;
    }
  }
  return v15;
}
