// NET_GetPortFromSockaddr
// rva 0x132a9c44  size 29  section .text  group text
// window base 0x1932a9c44: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_GetPortFromSockaddr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int16)__imp_WS2_32.dll!#15(a1, a2, a3, a4: *(unsigned __int16 *)(a4 + 2));
}
