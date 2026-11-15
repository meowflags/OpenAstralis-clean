// Java_sun_nio_ch_UnixDomainSockets_socket0
// rva 0x132a4c38  size 117  section .text  group jdk
// window base 0x1932a4c38: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_nio_ch_UnixDomainSockets_socket0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi

  v4 = __imp_WS2_32.dll!WSASocketW(a1: a4, a2, a3: 1, a4: 1, a5: 0, a6: 3371312);
  v7 = v4;
  if ( v4 == -1 )
  {
    v8 = __imp_WS2_32.dll!#111(a1: v5, a2: v6);
    NET_ThrowNew(a1: v9, a2: v10, a3: v8, a4: v9, a5: 535584);
    return 4294967291LL;
  }
  else
  {
    __imp_KERNEL32.dll!SetHandleInformation(a1: v5, a2: v6, a3: 1, a4: v4);
    return v7;
  }
}
