// JDK_Canonicalize
// rva 0x132b99b8  size 265  section .text  group text
// window base 0x1932b99b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JDK_Canonicalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // edi

  v5 = a5;
  v7 = 0;
  v8 = __imp_KERNEL32.dll!MultiByteToWideChar(a1: 0xFFFFFFFFLL, a2: 0, a3: 8, a4: 0, a5: a4, a6: 0xFFFFFFFFLL);
  if ( v8 != 0 )
  {
    v12 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v10, a2: v11, a3: v9, a4: 2LL * v8);
    v11 = v12;
    if ( v12 != 0
      && (unsigned int)__imp_KERNEL32.dll!MultiByteToWideChar(
                         a1: v10,
                         a2: v12,
                         a3: (unsigned int)(v10 + 9),
                         a4: 0,
                         a5: a4,
                         a6: (unsigned int)v10) != 0 )
    {
      v13 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v10, a2: v11, a3: v9, a4: 2 * v5);
      v7 = v13;
      if ( v13 != 0 && (unsigned int)sub_132B9BA8(a1: v10, a2: v11, a3: v13, a4: v11, a5: v5, a6: v14) == 0 )
      {
        if ( (unsigned int)__imp_KERNEL32.dll!WideCharToMultiByte(a1: v10, a2: v11, a3: 0, a4: 0, a5: v7, a6: (unsigned int)v10) == 0 )
          JUMPOUT(0x326513A8FLL);
        v10 = 0;
      }
    }
  }
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v10, a2: v11, a3: v9, a4: v7);
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v16, a2: v17, a3: v15, a4: v17);
  return v18;
}
