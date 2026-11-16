// sub_132A9A2C
// rva 0x132a9a2c  size 247  section .text  group text
// window base 0x1932a9a2c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A9A2C(
        __int64 a1,
        __int64 a2,
        _DWORD a3,
        __int64 a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // [rsp+50h] [rbp-18h]

  while ( 1 )
  {
    if ( (unsigned int)__imp_WS2_32.dll!WSAIoctl(a1, a2, a3: 1207959586, a4, a5: 0, a6: 0) != -1 )
    {
      result = a10;
      if ( a10 != -1 )
        return result;
    }
    v13 = __imp_KERNEL32.dll!GetLastError(a1: v11);
    a1 = v13;
    if ( v13 == 10038 )
    {
      v15 = 10038;
      goto LABEL_10;
    }
    if ( (unsigned int)__imp_WS2_32.dll!WSAIoctl(a1: v13, a2, a3: 1207959581, a4, a5: 0, a6: 0) == -1 || v16 == -1 || v16 == a4 )
    {
      v15 = a1;
LABEL_10:
      sub_132A85F8(a1, a2, a3: v14, a4: v15);
      return -1;
    }
    a4 = v16;
  }
}
