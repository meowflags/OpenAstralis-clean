// NET_EnableFastTcpLoopback
// rva 0x132ae7f4  size 93  section .text  group text
// window base 0x1932ae7f4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_EnableFastTcpLoopback(
        __int64 a1,
        __int64 a2,
        _DWORD a3,
        int a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi

  v8 = 0;
  a8 = 1;
  if ( (unsigned int)__imp_WS2_32.dll!WSAIoctl(a1, a2, a3: 2550136848LL, a4, a5: &a8, a6: 4) == -1 )
    return (unsigned int)__imp_WS2_32.dll!#111(a1: v9, a2: v10);
  return v8;
}
