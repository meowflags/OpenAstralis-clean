// sub_132B9BA8
// rva 0x132b9ba8  size 801  section .text  group text
// window base 0x1932b9ba8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B9BA8(_DWORD a1, __int64 a2, __int64 a3, _WORD *a4, int a5)
{
  _WORD *v6; // rbp
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned __int16 *v18; // rsi
  _WORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  _WORD *v22; // rbx
  __int16 v23; // ax
  unsigned __int64 v24; // r13
  _WORD *i; // r14
  unsigned __int16 v26; // ax
  __int64 v27; // rdi
  __int64 v29; // rcx
  _WORD *v30; // rbp
  _WORD *j; // r15
  int v32; // eax
  __int64 v33; // rdi
  _WORD *v34; // rsi
  __int64 Prefixed; // rbx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  int v49; // edi
  int v50; // esi
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // edi
  int v54; // esi
  int v55; // [rsp+0h] [rbp-2D8h] BYREF
  int v56; // [rsp+8h] [rbp-2D0h]
  int v57; // [rsp+10h] [rbp-2C8h]
  int v58; // [rsp+18h] [rbp-2C0h]
  __int16 v59; // [rsp+30h] [rbp-2A8h]
  _BYTE v60[44]; // [rsp+40h] [rbp-298h] BYREF
  _WORD v61[274]; // [rsp+6Ch] [rbp-26Ch] BYREF
  __int64 v62; // [rsp+290h] [rbp-48h]

  v6 = a4;
  while ( 1 )
  {
    v7 = (unsigned __int16)*a4;
    if ( *a4 == 0 )
      break;
    if ( v7 == 42 || v7 == 63 )
    {
      *(_DWORD *)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: 0, a2, a3, a4) = 22;
      return sub_132C8DE0(a1: v12, a2: v15, a3: v11, a4: (unsigned __int64)&v55 ^ v62, a5: v13, a6: v14);
    }
    ++a4;
  }
  v8 = a5;
  v9 = 2LL * a5;
  v10 = __imp_api-ms-win-crt-filesystem-l1-1-0.dll!_wfullpath(a1: 0, a2, a3, a4: v9);
  v15 = v10;
  if ( v10 == 0 )
    return sub_132C8DE0(a1: v12, a2: v15, a3: v11, a4: (unsigned __int64)&v55 ^ v62, a5: v13, a6: v14);
  if ( __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v12, a2: v10, a3: v6, a4: v10, a5: v8) == 0 )
    goto LABEL_32;
  v19 = v18;
  if ( (unsigned __int64)__imp_api-ms-win-crt-string-l1-1-0.dll!wcsncmp(a1: v17, a2: v18, a3: v16, a4: v18) > 4
    && (unsigned int)__imp_api-ms-win-crt-string-l1-1-0.dll!towupper(a1: v21, a2: v18, a3: 545304, a4: v18, a5: 4) == 0 )
  {
    v19 = v18 + 4;
  }
  for ( ; *v19 != (_WORD)v21; v19 = v22 + 1 )
  {
    v22 = (_WORD *)sub_1932CA167(a1: v21, a2: v18, a3: 46, a4: v19);
    if ( v22 == nullptr )
      break;
    do
      v23 = *++v22;
    while ( *v22 == 46 );
    if ( v23 == 0 || v23 == 92 )
      goto LABEL_32;
  }
  v24 = v9 + a3;
  if ( ((unsigned __int16)(*v18 - 97) <= 0x19u || (unsigned __int16)(*v18 - 65) <= 0x19u)
    && v18[1] == 58
    && (i = v18 + 2, v18[2] == 92) )
  {
    v26 = __imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v21, a2: v18, a3: v16, a4: *v18);
    *v18 = v26;
  }
  else
  {
    if ( *v18 != 92 || v18[1] != 92 )
      goto LABEL_31;
    for ( i = v18 + 2; *i != 0 && *i != 92; ++i )
      ;
    if ( *i == (_WORD)v21 )
    {
LABEL_31:
      *(_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v21, a2: v18, a3: v16, a4: v20) = 22;
      goto LABEL_32;
    }
    do
      ++i;
    while ( *i != 0 && *i != 92 );
  }
  v30 = (_WORD *)sub_132BA018(
                   a1: v21,
                   a2: (_DWORD)v18,
                   a3: v24,
                   a4: a3,
                   a5: 0,
                   a6: (_DWORD)v18,
                   a7: v55,
                   a8: v56,
                   a9: v57,
                   a10: v58,
                   a11: (__int64)i);
  if ( v30 != nullptr )
  {
    if ( *i == (_WORD)v27 )
      goto LABEL_52;
    while ( 1 )
    {
      for ( j = i + 1; *j != 0 && *j != 92; ++j )
        ;
      v59 = *j;
      *j = v27;
      v32 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v27, a2: v18, a3: v16, a4: v18);
      if ( v32 <= 259 )
      {
        v38 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v33, a2: v34, a3: v60, a4: v34);
      }
      else
      {
        Prefixed = getPrefixed(a1: v33, a2: (__int64)v34, a3: (unsigned int)v32, a4: v34);
        v38 = __imp_KERNEL32.dll!FindFirstFileW(a1: v36, a2: v37, a3: v60, a4: Prefixed);
        __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v40, a2: v41, a3: v39, a4: Prefixed);
      }
      *j = v59;
      if ( v38 == -1 )
        break;
      __imp_KERNEL32.dll!FindFirstFileW(a1: v43, a2: v44, a3: v42, a4: v38);
      v48 = __imp_KERNEL32.dll!FindClose(a1: v46, a2: v47, a3: v45, a4: v61);
      v30 = (_WORD *)sub_132BA018(
                       a1: v49,
                       a2: v50,
                       a3: v24,
                       a4: (_DWORD)v30,
                       a5: 92,
                       a6: (unsigned int)v61,
                       a7: v55,
                       a8: v56,
                       a9: v57,
                       a10: v58,
                       a11: (__int64)&v61[v48]);
      if ( v30 == nullptr )
        goto LABEL_32;
      i = j;
      if ( *j == (_WORD)v27 )
        goto LABEL_52;
    }
    if ( !sub_132B9B5C(a1: v43) )
    {
      v52 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v51, a2: v18, a3: v16, a4: i);
      v30 = (_WORD *)sub_132BA018(
                       a1: v53,
                       a2: v54,
                       a3: v24,
                       a4: (_DWORD)v30,
                       a5: 0,
                       a6: (_DWORD)i,
                       a7: v55,
                       a8: v56,
                       a9: v57,
                       a10: v58,
                       a11: (__int64)&i[v52]);
      if ( v30 != nullptr )
      {
LABEL_52:
        if ( (unsigned __int64)v30 < v24 )
        {
          *v30 = v27;
          goto LABEL_33;
        }
        *(_DWORD *)__imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v27, a2: v18, a3: v16, a4: v29) = 38;
      }
    }
  }
LABEL_32:
  v27 = 0xFFFFFFFFLL;
LABEL_33:
  __imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v27, a2: v18, a3: v16, a4: v18);
  return sub_132C8DE0(a1: v12, a2: v15, a3: v11, a4: (unsigned __int64)&v55 ^ v62, a5: v13, a6: v14);
}
