// NET_EnableFastTcpLoopbackConnect
// rva 0x132ae854  size 140  section .text  group text
// window base 0x1932ae854: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_EnableFastTcpLoopbackConnect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi

  a9 = v9;
  v10 = a4;
  LOWORD(a7) = -1;
  BYTE2(a7) = 1;
  v11 = sub_1932AE704(a1, a2);
  a8 = -1;
  if ( v11 == 0 )
    JUMPOUT(0x3265088A7LL);
  BYTE2(a7) = -2;
  if ( (unsigned int)MEMORY[0x799B8](a1: 0, a2: v12, a3: 2550136849LL, a4: v10, a5: &a7, a6: 4) == -1 )
    LODWORD(v13) = MEMORY[0x79958](a1: v13, a2: v14);
  return (unsigned int)v13;
}
