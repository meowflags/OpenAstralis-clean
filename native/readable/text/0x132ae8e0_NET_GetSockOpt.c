// NET_GetSockOpt
// rva 0x132ae8e0  size 136  section .text  group text
// window base 0x1932ae8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_GetSockOpt(
        __int64 a1,
        _DWORD a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  int v12; // ebp
  unsigned int v14; // edi
  __int64 v15; // rsi
  int v16; // esi

  v12 = a3;
  if ( (_DWORD)a3 == 41 && (_DWORD)a5 == 39 )
  {
    *a6 = 0;
    *a11 = 4;
    return 0;
  }
  else
  {
    v14 = __imp_WS2_32.dll!#7(a1, a2: (unsigned int)a5, a3, a4, a5, a6);
    if ( v14 == -1 && (unsigned int)__imp_WS2_32.dll!#111(a1: 0xFFFFFFFFLL, a2: v15) == 10042 && v12 == 0 && v16 == 3 )
    {
      *a6 = 0;
      return 0;
    }
    return v14;
  }
}
