// sub_132B93C8
// rva 0x132b93c8  size 165  section .text  group text
// window base 0x1932b93c8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B93C8(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax

  v5 = (unsigned int)(a5 + 10);
  v7 = (int)v5;
  v8 = a3;
  v9 = 0;
  v10 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2: v5, a3, a4: 2LL * (int)v5);
  if ( v10 != 0 )
  {
    if ( __imp_api-ms-win-crt-filesystem-l1-1-0.dll!_wfullpath(a1: v10, a2: v11, a3: a4, a4: v10, a5: v7) != 0 )
    {
      v9 = getPrefixed(a1: v13, a2: v14, a3: v14, a4: v13, a5: v15, a6: v16);
    }
    else
    {
      v20 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v13, a2: v14, a3: v12, a4: 2LL * (v8 + 6));
      v9 = v20;
      if ( v20 != 0 )
        __imp_api-ms-win-crt-string-l1-1-0.dll!wcscpy(a1: v18, a2: v19, a3: a4, a4: v20);
    }
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v18, a2: v19, a3: v17, a4: v18);
  }
  return v9;
}
