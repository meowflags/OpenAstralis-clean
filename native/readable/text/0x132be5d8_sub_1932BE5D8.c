// sub_132BE5D8
// rva 0x132be5d8  size 402  section .text  group text
// window base 0x1932be5d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BE5D8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  _WORD *v16; // rsi
  __int64 Prefixed; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi

  if ( (a3 & 2) == 0 )
    JUMPOUT(0x326518617LL);
  if ( (a3 & 0x200) == 0 )
    JUMPOUT(0x326518636LL);
  LOBYTE(a3) = -(a3 & 0x40);
  v6 = sub_1932CA1FD(a1: a4, a2, a3, a4);
  if ( v6 < 0x104 )
    return __imp_KERNEL32.dll!CreateFileA(a1: v4, a2: v5, a3: 3221225472LL, a4: v4, a5: 3);
  v8 = __imp_KERNEL32.dll!MultiByteToWideChar(a1: v4, a2: v5, a3: 8, a4: 0, a5: v4, a6: 0xFFFFFFFFLL);
  if ( v8 == 0 )
    return -1;
  v12 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v10, a2: v11, a3: v9, a4: 2LL * v8);
  if ( v12 == 0 )
    return -1;
  if ( (unsigned int)__imp_KERNEL32.dll!MultiByteToWideChar(a1: v13, a2: v12, a3: 8, a4: 0, a5: v13, a6: 0xFFFFFFFFLL) == 0 )
  {
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v15, a2: v16, a3: v14, a4: v16);
    return -1;
  }
  Prefixed = getPrefixed(a1: v15, a2: (__int64)v16, a3: (unsigned int)v6, a4: v16);
  v19 = __imp_KERNEL32.dll!CreateFileW(a1: Prefixed, a2: v18, a3: 3221225472LL, a4: Prefixed, a5: 3, a6: 0);
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v21, a2: v22, a3: v20, a4: v22);
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v24, a2: v25, a3: v23, a4: v24);
  return v19;
}
