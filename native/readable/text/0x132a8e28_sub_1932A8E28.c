// sub_132A8E28
// rva 0x132a8e28  size 230  section .text  group text
// window base 0x1932a8e28: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A8E28(__int64 a1, _DWORD a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rsi

  v5 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2: a4, a3, a4: 160);
  if ( v5 == 0 )
  {
    sub_132A85F8(a1: 0, a2: v6, a3: v4, a4: 8u);
    return 0;
  }
  v7 = __imp_KERNEL32.dll!CreateIoCompletionPort(a1: v5, a2: v6, a3: 0, a4: -1, a5: 0, a6: 0);
  if ( v7 == 0 )
  {
    v10 = __imp_KERNEL32.dll!GetLastError(a1: v8);
    v14 = sub_1932A8158(a1: v12, a2: v13, a3: v11, a4: v10);
    *(_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v17, a2: v18, a3: v15, a4: v16) = v14;
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v20, a2: v21, a3: v19, a4: v20);
    return 0;
  }
  sub_1932CA161(a1: v8, a2: v9, a3: 0, a4: v8, a5: 160);
  *v23 = v7;
  sub_1932CA161(a1: v23, a2: v24, a3: 0, a4: v23 + 1, a5: 8);
  v25[2] = v25 + 2;
  v25[3] = v25 + 2;
  v25[4] = v25 + 4;
  v25[5] = v25 + 4;
  v25[6] = v25 + 6;
  v25[7] = v25 + 6;
  sub_1932CA161(a1: v25, a2: v26, a3: 0, a4: v25 + 8, a5: 40);
  *(_DWORD *)(v27 + 104) = 0;
  __imp_KERNEL32.dll!InitializeCriticalSection(a1: v27, a2: v29, a3: v28, a4: v27 + 112);
  *v31 = v7;
  return v30;
}
