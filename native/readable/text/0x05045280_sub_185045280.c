// sub_5045280
// rva 0x05045280  size 1351  section .text  group text
// window base 0x185045280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5045280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  signed __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  BOOL v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // r9d
  __int64 v34; // rdx
  __int64 result; // rax
  signed __int32 v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rbp
  int v56; // ebx
  __int64 i; // r8
  int v58; // [rsp+0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+10h] [rbp-48h]
  __int64 v60; // [rsp+18h] [rbp-40h]
  unsigned int v61; // [rsp+24h] [rbp-34h]
  __int64 j; // [rsp+28h] [rbp-30h]
  __int64 v63; // [rsp+30h] [rbp-28h]
  __int64 v64; // [rsp+38h] [rbp-20h]
  unsigned int v65; // [rsp+40h] [rbp-18h]
  int v66; // [rsp+44h] [rbp-14h]
  __int64 v67; // [rsp+48h] [rbp-10h]
  __int64 v68; // [rsp+50h] [rbp-8h]

  v64 = a3;
  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_71;
  }
  v10 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v10 != 0 )
  {
    v37 = *(unsigned int *)(v8 + 8 * v10 + 72);
    v38 = (_DWORD)v37 != 0 ? v8 + 8 * v37 : v8 + 8 * v10;
    if ( v38 == a3 )
    {
      *(_BYTE *)(a3 + 100) = 1;
      __faststorefence();
      result = *(unsigned int *)(a3 + 116);
      if ( (_DWORD)result != 0 )
      {
        if ( *(_BYTE *)(v8 + 8 * result + 100) == 0 )
        {
          *(_BYTE *)(v8 + 8 * result + 100) = 1;
          __faststorefence();
          v63 = v8 + 8 * result;
          result = sub_502FCC0(a1, a2, a3: v63);
          a3 = v64;
        }
        if ( *(_BYTE *)(a3 + 102) == 0 )
        {
          *(_BYTE *)(a3 + 102) = 1;
          __faststorefence();
        }
        goto LABEL_28;
      }
      goto LABEL_76;
    }
  }
  sub_635F240();
  v13 = v64;
  v14 = *(unsigned int *)(v64 + 28);
  v15 = v8 + 8 * v14;
  v63 = v15;
  if ( (_DWORD)v14 == 0 )
  {
LABEL_71:
    j = sub_276BEE0();
    goto LABEL_64;
  }
  v16 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v14) >> 3) + 48);
  if ( v16 == 0 )
    goto LABEL_53;
  v12 = *(unsigned int *)(v15 + v16);
  if ( (_DWORD)v12 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_53;
  v11 = *(_QWORD *)(v9 + 64);
  v17 = *(_QWORD *)(v8 + 8 * v12 + 16);
  if ( v17 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v12 + 16), 0, v11) == 0 )
    {
      v67 = v16;
      v66 = v16;
      goto LABEL_10;
    }
    goto LABEL_53;
  }
  if ( v17 != v11 || (v42 = *(_DWORD *)(v8 + 8 * v12 + 28) + 1) < 0 )
  {
LABEL_53:
    v67 = v16;
    v66 = v16;
    sub_208CC20(a1: v11, a2: v12, a3: v15);
    v13 = v64;
    goto LABEL_10;
  }
  *(_DWORD *)(v8 + 8 * v12 + 28) = v42;
  v67 = v16;
  v66 = v16;
LABEL_10:
  *(_BYTE *)(v13 + 100) = 1;
  __faststorefence();
  v18 = *(unsigned int *)(v13 + 36);
  v61 = v18;
  if ( (_DWORD)v18 != 0 )
  {
    v19 = *(_DWORD *)(v8 + 8 * v18) >> 3;
    v20 = (unsigned __int16)*(_DWORD *)(v8
                                      + 8LL * *(unsigned int *)(v8 + 8 * v19 + 20)
                                      + 4LL
                                      * (*(_DWORD *)(v8 + 8 * v19 + 44)
                                       & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v19 + 44))))
                                      + 12) == 5104;
  }
  else
  {
    v20 = false;
  }
  v65 = v20;
  if ( (_DWORD)v18 != 0 )
  {
    if ( !v20 )
    {
      v60 = v8 + 8 * v18;
      v55 = v67;
      v56 = v66;
      v50 = sub_276B120();
      if ( v56 != 0 )
      {
        v44 = v63;
        v45 = *(unsigned int *)(v63 + v55);
        v46 = *(_DWORD *)(v8 + 8 * v45 + 28);
        if ( v46 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v45 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v45 + 28) = v46 - 1;
        }
        if ( v46 == 1 )
          goto LABEL_65;
        j = v50;
        goto LABEL_64;
      }
LABEL_77:
      for ( i = 0xFFFFFFFFLL; ; i = 1 )
      {
        v59 = v50;
        sub_208CCA0(a1: v51, a2: v52, a3: v63, a4: v44, a5: i);
        v68 = v7;
        for ( j = v59; ; j = v50 )
        {
          while ( 1 )
          {
LABEL_64:
            while ( 1 )
            {
              sub_6360580();
              v50 = sub_2769900(a1: v48, a2: v49, a3: j, a4: v47, a5: &a7);
LABEL_65:
              v53 = *(unsigned int *)(v8 + 8 * v45 + 4);
              if ( (_DWORD)v53 != 0 )
                break;
              j = v50;
            }
            v54 = *(unsigned int *)(v8 + 8 * v53 + 8);
            if ( (_DWORD)v54 != 0 )
              break;
            j = v50;
          }
          if ( *(_DWORD *)(v8 + 8 * v54 + 16) != 0 )
            break;
        }
      }
    }
    v21 = *(_DWORD *)(v8 + 8 * v18) >> 3;
    v22 = *(unsigned int *)(v8 + 8 * v21 + 44);
    v23 = (unsigned int)v22 & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v21 + 44)));
    v24 = (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                           + *(_QWORD *)(v8
                                                                                       + 8 * v21
                                                                                       + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v21 + 20) + 4 * v23 + 12))));
    v60 = v8 + 8 * v18;
    v24(a1: v23, a2: v22, a3: v60, a4: v13, a5: v13);
    v13 = v64;
  }
  else
  {
    v60 = v8 + 8 * v18;
  }
  v25 = *(unsigned int *)(v13 + 116);
  v26 = v8 + 8 * v25;
  if ( (_DWORD)v25 != 0 )
  {
    if ( *(_BYTE *)(v8 + 8 * v25 + 100) != 0 )
    {
      v59 = v8 + 8 * v25;
    }
    else
    {
      *(_BYTE *)(v8 + 8 * v25 + 100) = 1;
      __faststorefence();
      v59 = v8 + 8 * v25;
      sub_502FCC0(a1: v11, a2: v12, a3: v59);
    }
  }
  else
  {
    v59 = v8 + 8 * v25;
  }
  if ( v66 == 0 )
  {
    v43 = 0xFFFFFFFFLL;
    goto LABEL_57;
  }
  v27 = *(unsigned int *)(v63 + v67);
  v28 = *(_DWORD *)(v8 + 8 * v27 + 28);
  if ( v28 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v27 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v27 + 28) = v28 - 1;
  }
  if ( v28 == 1 )
  {
    v39 = *(unsigned int *)(v8 + 8 * v27 + 4);
    if ( (_DWORD)v39 != 0 )
    {
      v40 = *(unsigned int *)(v8 + 8 * v39 + 8);
      if ( (_DWORD)v40 != 0 )
      {
        v41 = *(_DWORD *)(v8 + 8 * v40 + 16);
        if ( v41 != 0 )
        {
          v26 = v65;
          v43 = v41 != 0;
LABEL_57:
          sub_208CCA0(a1: v11, a2: v12, a3: v63, a4: v26, a5: v43);
        }
      }
    }
  }
  sub_6360580();
  if ( v61 != 0 )
  {
    if ( v65 == 0 )
    {
      sub_2770780(a1: v31, a2: v32, a3: v29, a4: v59);
LABEL_76:
      v50 = sub_2771080();
      goto LABEL_77;
    }
    v34 = *(_DWORD *)(v8 + 8LL * v61) >> 3;
    ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                    + *(_QWORD *)(v8
                                                                + 8 * v34
                                                                + HIWORD(*(_DWORD *)(v8
                                                                                   + 8LL
                                                                                   * *(unsigned int *)(v8 + 8 * v34 + 20)
                                                                                   + 4LL
                                                                                   * (*(_DWORD *)(v8 + 8 * v34 + 44)
                                                                                    & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v34 + 44))))
                                                                                   + 12))
                                                                + 8)))(
      a1: v31,
      a2: v32,
      a3: v60);
  }
  result = sub_5049540(a1: v31, a2: v32, a3: v64, a4: v30, a5: 0, a6: v33, a7: v58);
  v36 = *(_DWORD *)(v64 + 136);
  if ( v36 == 16 || v36 == 18 )
  {
    result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v64 + 136), v36, 14);
    if ( v36 == (_DWORD)result )
    {
      v65 = v36;
      result = sub_50471A0();
    }
  }
LABEL_28:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
