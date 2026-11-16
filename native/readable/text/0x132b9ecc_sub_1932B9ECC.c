// sub_132B9ECC
// rva 0x132b9ecc  size 330  section .text  group text
// window base 0x1932b9ecc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B9ECC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r14d
  unsigned __int64 v8; // rbp
  int v9; // eax
  _WORD *v10; // rdi
  __int64 v11; // rsi
  __int64 Prefixed; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // edi
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // esi
  int v35; // r8d
  _WORD *v36; // r9
  int v37; // ecx
  __int64 v38; // rax
  _WORD *v39; // rax
  __int64 v40; // rcx
  int v42; // [rsp+0h] [rbp-2C8h] BYREF
  int v43; // [rsp+8h] [rbp-2C0h]
  int v44; // [rsp+10h] [rbp-2B8h]
  int v45; // [rsp+18h] [rbp-2B0h]
  _WORD *v46; // [rsp+20h] [rbp-2A8h]
  _BYTE v47[44]; // [rsp+30h] [rbp-298h] BYREF
  _WORD v48[274]; // [rsp+5Ch] [rbp-26Ch] BYREF
  __int64 v49; // [rsp+280h] [rbp-48h]

  v7 = a5;
  v8 = a5 + 2LL * a6;
  v9 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: a3, a2, a3, a4: a3);
  if ( v9 <= 259 )
  {
    v20 = __imp_KERNEL32.dll!FindFirstFileW(a1: v10, a2: v11, a3: v47, a4: v10);
  }
  else
  {
    Prefixed = getPrefixed(a1: (__int64)v10, a2: v11, a3: (unsigned int)v9, a4: v10);
    v15 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v13, a2: v14, a3: v47, a4: Prefixed);
    __imp_KERNEL32.dll!FindFirstFileW(a1: v17, a2: v15, a3: v16, a4: Prefixed);
  }
  if ( v20 == -1 )
  {
    if ( sub_132B9B5C(a1: v19) )
      return sub_132C8DE0(a1: v28, a2: v29, a3: v27, a4: (unsigned __int64)&v42 ^ v49, a5: v30, a6: v31);
    v38 = __imp_KERNEL32.dll!FindClose(a1: v28, a2: v29, a3: v27, a4: v28);
    v35 = 0;
    LODWORD(v36) = v33;
    v46 = (_WORD *)(v33 + 2 * v38);
    v37 = v7;
  }
  else
  {
    __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v19, a2: v20, a3: v18, a4: v20);
    v24 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v22, a2: v23, a3: v21, a4);
    v28 = sub_132BA018(
            a1: v25,
            a2: v26,
            a3: v8,
            a4: v7,
            a5: 0,
            a6: a4,
            a7: v42,
            a8: v43,
            a9: v44,
            a10: v45,
            a11: a4 + 2 * v24);
    if ( v28 == 0 )
      return sub_132C8DE0(a1: v28, a2: v29, a3: v27, a4: (unsigned __int64)&v42 ^ v49, a5: v30, a6: v31);
    v32 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v28, a2: v29, a3: v27, a4: v48);
    v35 = 92;
    v36 = v48;
    v46 = &v48[v32];
    v37 = v33;
  }
  v39 = (_WORD *)sub_132BA018(
                   a1: v33,
                   a2: v34,
                   a3: v8,
                   a4: v37,
                   a5: v35,
                   a6: (_DWORD)v36,
                   a7: v42,
                   a8: v43,
                   a9: v44,
                   a10: v45,
                   a11: (__int64)v46);
  if ( v39 != nullptr )
  {
    if ( (unsigned __int64)v39 < v8 )
      *v39 = 0;
    else
      *(_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v28, a2: v29, a3: v27, a4: v40) = 38;
  }
  return sub_132C8DE0(a1: v28, a2: v29, a3: v27, a4: (unsigned __int64)&v42 ^ v49, a5: v30, a6: v31);
}
