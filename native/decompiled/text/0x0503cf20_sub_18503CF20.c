// sub_18503CF20
// rva 0x0503cf20  size 3069  section .text  group text
// window base 0x18503cf20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_18503CF20(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  _DWORD *v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned int v44; // ebp
  _DWORD *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r8
  int v58; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v59; // [rsp+8h] [rbp-50h]
  _DWORD *v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+18h] [rbp-40h]
  _DWORD *v62; // [rsp+20h] [rbp-38h]
  unsigned int v63; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v64; // [rsp+30h] [rbp-28h]
  _DWORD *v65; // [rsp+38h] [rbp-20h]
  __int64 v66; // [rsp+40h] [rbp-18h]
  unsigned int v67; // [rsp+4Ch] [rbp-Ch]
  __int64 v68; // [rsp+50h] [rbp-8h]

  v65 = (_DWORD *)a3;
  v64 = a5;
  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_31;
  }
  v10 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  v67 = v10;
  v66 = (int)v10;
  if ( v10 == 0 )
    goto LABEL_25;
  v11 = *(unsigned int *)(a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_25;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( v13 != v12 || (v22 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_25:
    MEMORY[0x18208CC20]();
    a3 = (unsigned __int64)v65;
    goto LABEL_7;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v22;
LABEL_7:
  v14 = (_DWORD *)(v8 + 8LL * *(unsigned int *)(a3 + 12));
  v15 = (a3 - v8) >> 3;
  v63 = v15;
  if ( v14 != (_DWORD *)a3 )
  {
LABEL_31:
    v24 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v24 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v24 = MEMORY[0x181EAA920](a1: v13, a2: v12, a3: 34085680);
      v15 = v63;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v24 + 24;
      *(_DWORD *)v24 = 34085680;
      *(_DWORD *)(v24 + 4) = 0;
      *(_QWORD *)(v24 + 8) = 0;
      *(_QWORD *)(v24 + 16) = 0;
    }
    v62 = (_DWORD *)v24;
    v25 = *(_QWORD *)(v9 + 40);
    v26 = 34082368;
    if ( (unsigned __int64)(v25 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v25 = MEMORY[0x181EAA840](a1: v13, a2: 34082368, a3: 34082368, a4: v15, a5: 16);
      v24 = (__int64)v62;
      v15 = v63;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v25 + 32;
      *(_QWORD *)v25 = 34082368;
      *(_DWORD *)(v25 + 8) = 16;
      *(_DWORD *)(v25 + 12) = 0;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 24) = 0;
    }
    *(_DWORD *)(v24 + 4) = (unsigned __int64)(v25 - v8) >> 3;
    if ( (*(_DWORD *)v24 & 2) != 0 )
    {
      v15 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v24 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v24 - v15) >> 9) + 0x38) = 0;
    }
    MEMORY[0x184F36F80](a1: v13, a2: v26, a3: v24, a4: v15, a5: v8 + 371544736);
    v30 = v8 + 365320416;
    if ( v64 != (_DWORD *)v8 )
      v30 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*v64 >> 3) + 104)))(
              a1: v28,
              a2: v29,
              a3: v64);
    v61 = v30;
    v31 = MEMORY[0x184F36F80](a1: v28, a2: v29, a3: v62, a4: v27, a5: v30);
    v35 = v62;
    if ( v62[2] != 0 )
    {
      v36 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v59 = (_DWORD *)v31;
        v36 = MEMORY[0x181EAA920](a1: v33, a2: v34, a3: 34082680);
        v37 = v62;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v36 + 24;
        *(_DWORD *)v36 = 34082680;
        *(_DWORD *)(v36 + 4) = 0;
        *(_QWORD *)(v36 + 8) = 0;
        *(_QWORD *)(v36 + 16) = 0;
        v37 = v35;
      }
      v59 = (_DWORD *)v36;
      MEMORY[0x184FE9280](a1: v33, a2: v34, a3: v36, a4: v32, a5: v37, a6: v8);
      v68 = v7;
      v60 = v59;
    }
    else
    {
      v60 = (_DWORD *)(v8 + 373281248);
    }
    v38 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v38 = MEMORY[0x181EAA920](a1: v33, a2: v34, a3: 34090048);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v38 + 40;
      *(_DWORD *)v38 = 34090048;
      *(_DWORD *)(v38 + 4) = 0;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 32) = 0;
    }
    v59 = (_DWORD *)v38;
    *(_DWORD *)(v38 + 20) = 46923644;
    *(_DWORD *)(v38 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - v8) >> 3;
    sub_18503B9A0(a1: v33, a2: v34, a3: (unsigned int *)v38, a4: v32, a5: 0);
    v41 = (unsigned __int64)v59;
    v59[2] = ((unsigned __int64)v60 - v8) >> 3;
    if ( (*(_DWORD *)v41 & 2) != 0 )
    {
      v55 = (v41 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v55) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v55) >> 9) + 0x38) = 0;
    }
    v42 = v63;
    v43 = v66;
    v44 = v67;
    v45 = v65;
    *(_DWORD *)(v41 + 12) = v63;
    if ( (*(_DWORD *)v41 & 2) != 0 )
    {
      v42 = v41 & 0xFFFFFFFFFFF80000LL;
      v40 = (v41 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v40) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v40) >> 9) + 0x38) = 0;
    }
    if ( v44 != 0 )
    {
      v46 = *(unsigned int *)((char *)v45 + v43);
      v42 = *(unsigned int *)(v8 + 8 * v46 + 28);
      if ( (_DWORD)v42 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v46 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v46 + 28) = v42 - 1;
      }
      if ( (_DWORD)v42 != 1 )
      {
        v47 = v41;
        goto LABEL_51;
      }
      v51 = *(unsigned int *)(v8 + 8 * v46 + 4);
      if ( (_DWORD)v51 == 0 )
      {
        v47 = v41;
        goto LABEL_51;
      }
      v52 = *(unsigned int *)(v8 + 8 * v51 + 8);
      if ( (_DWORD)v52 == 0 )
      {
        v47 = v41;
        goto LABEL_51;
      }
      if ( *(_DWORD *)(v8 + 8 * v52 + 16) == 0 )
      {
        v47 = v41;
        goto LABEL_51;
      }
      v57 = 1;
    }
    else
    {
      v57 = 0xFFFFFFFFLL;
    }
    MEMORY[0x18208CCA0](a1: v39, a2: v40, a3: v65, a4: v42, a5: v57);
    v47 = (unsigned __int64)v59;
    goto LABEL_51;
  }
  if ( v64 == (_DWORD *)a3 )
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v48 = MEMORY[0x181EAA920](a1: v13, a2: v12, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v48 + 40;
        *(_DWORD *)v48 = 34081944;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        *(_QWORD *)(v48 + 24) = 0;
        *(_QWORD *)(v48 + 32) = 0;
      }
      v62 = (_DWORD *)v48;
      *(_DWORD *)(v48 + 20) = 46923644;
      *(_DWORD *)(v48 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v8) >> 3;
      sub_18503B9A0(a1: v13, a2: v12, a3: (unsigned int *)v48, a4: v15, a5: 0);
      v49 = (unsigned __int64)v62;
      v62[2] = 45905145;
      if ( (*(_DWORD *)v49 & 2) != 0 )
      {
        v54 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v54) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v54) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v49 + 12) = v63;
      if ( (*(_DWORD *)v49 & 2) != 0 )
      {
        v53 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v53) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v53) >> 9) + 0x38) = 0;
      }
      v42 = v67;
      if ( v67 != 0 )
      {
        v42 = *(unsigned int *)((char *)v65 + v66);
        v50 = *(_DWORD *)(v8 + 8 * v42 + 28);
        if ( v50 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v42 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v42 + 28) = v50 - 1;
        }
        if ( v50 != 1 )
        {
          v47 = v49;
          goto LABEL_51;
        }
        v42 = *(unsigned int *)(v8 + 8 * v42 + 4);
        if ( (_DWORD)v42 == 0 )
        {
          v47 = v49;
          goto LABEL_51;
        }
        v42 = *(unsigned int *)(v8 + 8 * v42 + 8);
        if ( (_DWORD)v42 == 0 )
        {
          v47 = v49;
          goto LABEL_51;
        }
        if ( *(_DWORD *)(v8 + 8 * v42 + 16) == 0 )
        {
          v47 = v49;
          goto LABEL_51;
        }
        v56 = 1;
      }
      else
      {
        v56 = 0xFFFFFFFFLL;
      }
      MEMORY[0x18208CCA0](a1: v39, a2: v40, a3: v65, a4: v42, a5: v56);
      v47 = (unsigned __int64)v62;
LABEL_51:
      MEMORY[0x182769900](a1: v39, a2: v40, a3: v47, a4: v42, a5: &a7);
    }
  }
  *(_DWORD *)(a3 + 12) = ((unsigned __int64)v64 - v8) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v21 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) = 0;
  }
  if ( v67 != 0 )
  {
    v16 = *(unsigned int *)(a3 + v66);
    v17 = *(_DWORD *)(v8 + 8 * v16 + 28);
    if ( v17 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v16 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v16 + 28) = v17 - 1;
    }
    if ( v17 != 1 )
      goto LABEL_14;
    v19 = *(unsigned int *)(v8 + 8 * v16 + 4);
    if ( (_DWORD)v19 == 0 )
      goto LABEL_14;
    v20 = *(unsigned int *)(v8 + 8 * v19 + 8);
    if ( (_DWORD)v20 == 0 || *(_DWORD *)(v8 + 8 * v20 + 16) == 0 )
      goto LABEL_14;
    v23 = 1;
  }
  else
  {
    v23 = 0xFFFFFFFF;
  }
  MEMORY[0x18208CCA0](a1: v13, a2: v12, a3, a4: a3, a5: v23);
  a3 = (unsigned __int64)v65;
LABEL_14:
  if ( *(int *)(v9 + 16) <= 0 )
  {
    MEMORY[0x18277F280](a1: v13, a2: v12, a3);
    return (unsigned __int64)v65;
  }
  return a3;
}
