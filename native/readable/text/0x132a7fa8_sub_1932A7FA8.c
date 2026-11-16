// sub_132A7FA8
// rva 0x132a7fa8  size 212  section .text  group text
// window base 0x1932a7fa8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A7FA8(__int64 a1, _DWORD a2, int a3, int a4, __int64 a5, int a6)
{
  int v9; // edi
  int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  int v22; // ebp
  int v23; // edx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // [rsp+0h] [rbp-28h]
  __int64 v29; // [rsp+8h] [rbp-20h]

  if ( (int)sub_132A8620(a1, a2: a5) < 0 )
    return 0xFFFFFFFFLL;
  v14 = sub_132A99CC(a1: v9, a2: v10, a3: a4, a4: 3372216, a5: v11, a6: v12);
  if ( v14 == 0 )
  {
    sub_132A85F8(a1: 0, a2: v16, a3: v15, a4: 87);
LABEL_9:
    sub_132A85AC(a1: v18, a2: v19, a3: v17, a4, a5: v20, a6: v21);
    sub_132A85AC(a1: v24, a2: v25, a3: v23, a4: v25, a5: v26, a6: v27);
    return 0xFFFFFFFFLL;
  }
  v22 = sub_132A8BF8(a1: v14, a2: v16, a3, a4: (int)v14 - 64, a5: v16, a6, a7: v28, a8: v29);
  v17 = v18 + 40;
  if ( __sync_sub_and_fetch((volatile signed __int32 *)(v18 + 40), 1) == 0x10000000
    && (unsigned int)__imp_api-ms-win-crt-runtime-l1-1-0.dll!abort(a1: v18, a2: v19, a3: v17, a4: __imp_api-ms-win-crt-runtime-l1-1-0.dll!abort, a5: 0, a6: 0) != 0 )
  {
    MEMORY[0x79b28]/* 0x79b28 */();
    __builtin_debugtrap();
  }
  if ( v22 < 0 )
    goto LABEL_9;
  return 0;
}
