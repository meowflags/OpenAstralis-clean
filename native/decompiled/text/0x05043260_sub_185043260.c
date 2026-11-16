// sub_185043260
// rva 0x05043260  size 1564  section .text  group text
// window base 0x185043260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_185043260(
        int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 j; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  signed __int64 v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r8d
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 i; // rax
  __int64 v49; // rdx
  int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v53; // [rsp+0h] [rbp-48h] BYREF
  int v54; // [rsp+Ch] [rbp-3Ch]
  __int64 v55; // [rsp+10h] [rbp-38h]
  __int64 v56; // [rsp+18h] [rbp-30h]
  __int64 v57; // [rsp+20h] [rbp-28h]
  __int64 v58; // [rsp+28h] [rbp-20h]
  _DWORD *v59; // [rsp+30h] [rbp-18h]
  unsigned int *v60; // [rsp+38h] [rbp-10h]
  int v61; // [rsp+44h] [rbp-4h]

  v60 = a3;
  v59 = a5;
  v58 = a6;
  v61 = a1;
  v57 = a2;
  if ( (unsigned __int64)&v53 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_70;
  }
  sub_18502D680(a1: 0, a2, a3, a4, a5: a6, a6: a1);
  v11 = v57;
  if ( v57 == v7 )
  {
LABEL_70:
    v44 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v44 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v44 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: 34101256, a4: v9, a5: v59);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v44 + 48;
      *(_DWORD *)v44 = 34101256;
      *(_DWORD *)(v44 + 4) = 0;
      *(_QWORD *)(v44 + 8) = 0;
      *(_QWORD *)(v44 + 16) = 0;
      *(_QWORD *)(v44 + 24) = 0;
      *(_QWORD *)(v44 + 32) = 0;
      *(_QWORD *)(v44 + 40) = 0;
    }
    *(_DWORD *)(v44 + 20) = 46923644;
    *(_DWORD *)(v44 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v44 + 12) = (unsigned __int64)(v44 - v7) >> 3;
    v56 = v44;
    sub_18503B9A0(a1: v10, a2: v11, a3: (unsigned int *)v44, a4: v9, a5: 0);
    for ( i = v56; ; i = v55 )
    {
      while ( 1 )
      {
        i = MEMORY[0x182769900](a1: v46, a2: v47, a3: i, a4: v45, a5: &a7);
        v49 = *(unsigned int *)(v7 + 376668988);
        v50 = *(_DWORD *)(v7 + 8 * v49 + 28);
        if ( v50 == 1 )
        {
          *(_QWORD *)(v7 + 8 * v49 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v45 = (unsigned int)(v50 - 1);
          *(_DWORD *)(v7 + 8 * v49 + 28) = v45;
        }
        if ( v50 == 1 )
        {
          v51 = *(unsigned int *)(v7 + 8 * v49 + 4);
          if ( (_DWORD)v51 != 0 )
          {
            v52 = *(unsigned int *)(v7 + 8 * v51 + 8);
            if ( (_DWORD)v52 != 0 && *(_DWORD *)(v7 + 8 * v52 + 16) != 0 )
              break;
          }
        }
      }
      v55 = i;
      MEMORY[0x18208CCA0](a1: v46, a2: v47, a3: v7 + 376668872, a4: v45, a5: 1);
    }
  }
  v12 = (__int64)v59;
  if ( v59 != (_DWORD *)v7 )
    goto LABEL_4;
  v24 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v24 != 0 )
  {
    v25 = *(unsigned int *)(v7 + 8 * v24 + 72);
    if ( (_DWORD)v25 != 0 )
      v26 = (_DWORD *)(v7 + 8 * v25);
    else
      v26 = (_DWORD *)(v7 + 8 * v24);
  }
  else
  {
    v26 = (_DWORD *)v7;
  }
  v59 = v26;
  if ( v26 != (_DWORD *)v7 && *v26 >> 3 == 5067607 )
  {
    v12 = MEMORY[0x18277F7C0](a1: v10, a2: v57, a3: v26);
    goto LABEL_4;
  }
  v27 = *(unsigned int *)(v7 + 374455148);
  if ( (_DWORD)v27 != 0 )
  {
    v12 = v7 + 8 * v27;
    goto LABEL_4;
  }
  v56 = v7 + 8 * v27;
  v28 = *(unsigned int *)(v7 + 376668988);
  if ( (_DWORD)v28 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_52;
  v29 = *(_QWORD *)(v8 + 64);
  v30 = *(_QWORD *)(v7 + 8 * v28 + 16);
  if ( v30 != 0 )
  {
    if ( v30 == v29 )
    {
      v42 = *(_DWORD *)(v7 + 8 * v28 + 28) + 1;
      if ( v42 >= 0 )
      {
        *(_DWORD *)(v7 + 8 * v28 + 28) = v42;
        goto LABEL_30;
      }
    }
    goto LABEL_52;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v28 + 16), 0, v29) != 0 )
LABEL_52:
    MEMORY[0x18208CC20](a1: v10, a2: v11, a3: v7 + 376668872);
LABEL_30:
  v31 = *(unsigned int *)(v7 + 374455148);
  v32 = v7 + 8 * v31;
  if ( (_DWORD)v31 == 0 )
  {
    v55 = v7 + 8 * v31;
    v36 = sub_185044700();
    *(_DWORD *)(v7 + 374455148) = (unsigned __int64)(v36 - v7) >> 3;
    __faststorefence();
    v37 = *(_DWORD *)(v7 + 374343744);
    if ( (v37 & 2) != 0 )
    {
      if ( (v37 & 1) != 0 )
      {
        v43 = v7 + 374343744 - *(_QWORD *)(v7 + 374343736);
        if ( *(_BYTE *)(v43 + 265) != 0 )
          *(_BYTE *)(v43 + 265) = 0;
        v32 = v36;
      }
      else
      {
        v40 = (v7 + 374343744) & 0xFFFFFFFFFFF80000LL;
        v41 = (v7 + 374343744 - (v40 + 2112)) >> 9;
        if ( *(_BYTE *)(v40 + v41 + 56) != 0 )
          *(_BYTE *)(v40 + v41 + 56) = 0;
        v32 = v36;
      }
    }
    else
    {
      v32 = v36;
    }
  }
  v33 = *(unsigned int *)(v7 + 376668988);
  v34 = *(_DWORD *)(v7 + 8 * v33 + 28);
  if ( v34 == 1 )
  {
    *(_QWORD *)(v7 + 8 * v33 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v7 + 8 * v33 + 28) = v34 - 1;
  }
  if ( v34 == 1 )
  {
    v38 = *(unsigned int *)(v7 + 8 * v33 + 4);
    if ( (_DWORD)v38 != 0 )
    {
      v39 = *(unsigned int *)(v7 + 8 * v38 + 8);
      if ( (_DWORD)v39 != 0 )
      {
        if ( *(_DWORD *)(v7 + 8 * v39 + 16) != 0 )
        {
          v55 = v32;
          MEMORY[0x18208CCA0](a1: v10, a2: v11, a3: v7 + 376668872, a4: v32, a5: 1);
          v12 = v55;
        }
        else
        {
          v12 = v32;
        }
      }
      else
      {
        v12 = v32;
      }
    }
    else
    {
      v12 = v32;
    }
  }
  else
  {
    v12 = v32;
  }
LABEL_4:
  v55 = v12;
  MEMORY[0x18277FAC0](a1: v10, a2: v11, a3: v60);
  v15 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v15 + 80) > *(_QWORD *)(v8 + 32) )
  {
    v15 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 43308464);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v15 + 80;
    *(_DWORD *)v15 = 43308464;
    *(_DWORD *)(v15 + 4) = 0;
    for ( j = 8; j < 0x50; j += 8LL )
      *(_QWORD *)(v15 + j) = 0;
  }
  *(_DWORD *)(v15 + 8) = 47083569;
  v17 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v56 = v15;
    v17 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 43308680);
    v15 = v56;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v17 + 24;
    *(_DWORD *)v17 = 43308680;
    *(_DWORD *)(v17 + 4) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
  }
  v18 = v57;
  v19 = (unsigned __int64)v60;
  *(_DWORD *)(v17 + 8) = (unsigned __int64)(v57 - v7) >> 3;
  v20 = (v19 - v7) >> 3;
  *(_DWORD *)(v17 + 4) = v20;
  *(_DWORD *)(v15 + 4) = (unsigned __int64)(v17 - v7) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v13 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v13) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v13) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v19 + 104) = (unsigned __int64)(v15 - v7) >> 3;
  if ( (*(_DWORD *)v19 & 2) != 0 )
  {
    v35 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v35) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v35) >> 9) + 0x38) = 0;
  }
  v21 = *(_QWORD *)(v8 + 40);
  result = v21 + 16;
  if ( v21 + 16 > *(_QWORD *)(v8 + 32) )
  {
    v54 = (v19 - v7) >> 3;
    result = MEMORY[0x181EAA920](a1: v13, a2: v18, a3: 43308808);
    v21 = result;
    LODWORD(v20) = v54;
    v18 = v57;
    v19 = (unsigned __int64)v60;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = result;
    *(_DWORD *)v21 = 43308808;
    *(_DWORD *)(v21 + 4) = 0;
    *(_QWORD *)(v21 + 8) = 0;
  }
  *(_DWORD *)(v21 + 4) = v20;
  *(_DWORD *)(v19 + 108) = (v21 - v7) >> 3;
  v23 = *(unsigned int *)v19;
  if ( (v23 & 2) != 0 )
  {
    result = v19 & 0xFFFFFFFFFFF80000LL;
    v23 = (v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + v23 + 0x38) != 0 )
      *(_BYTE *)(result + v23 + 56) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v13, a2: v18, a3: v23, a4: v19, a5: v55);
  return result;
}
