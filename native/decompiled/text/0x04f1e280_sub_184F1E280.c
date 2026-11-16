// sub_184F1E280
// rva 0x04f1e280  size 1645  section .text  group text
// window base 0x184f1e280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1E280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  signed __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // ebx
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int16 v40; // dx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int16 v44; // dx
  __int64 v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int16 v50; // ax
  __int64 v51; // r8
  int v52; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v53; // [rsp+8h] [rbp-50h]
  _DWORD *v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  __int64 v56; // [rsp+20h] [rbp-38h]
  __int64 v57; // [rsp+28h] [rbp-30h]
  __int64 v58; // [rsp+30h] [rbp-28h]
  __int64 v59; // [rsp+38h] [rbp-20h]
  __int64 v60; // [rsp+40h] [rbp-18h]
  int v61; // [rsp+4Ch] [rbp-Ch]
  __int64 v62; // [rsp+50h] [rbp-8h]

  v59 = a3;
  v58 = a5;
  if ( (unsigned __int64)&v52 <= *(_QWORD *)(v9 + 8) )
  {
    v56 = a1;
    v55 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_71;
  }
  v10 = *(unsigned int *)(a3 + 8);
  v11 = v8 + 8 * v10;
  v57 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_71:
    v56 = a1;
    v55 = a6;
    v29 = MEMORY[0x182771080]();
    goto LABEL_72;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  v61 = v12;
  v60 = v12;
  if ( v12 == 0 )
    goto LABEL_33;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_33;
  v13 = *(_QWORD *)(v9 + 64);
  v14 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v14 != 0 )
  {
    if ( v14 == v13 )
    {
      v33 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1;
      if ( v33 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * a2 + 28) = v33;
        v56 = a1;
        v55 = a6;
        goto LABEL_9;
      }
    }
    goto LABEL_33;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, v13) != 0 )
  {
LABEL_33:
    v56 = a1;
    v55 = a6;
    MEMORY[0x18208CC20](a1, a2, a3: v11);
    goto LABEL_9;
  }
  v56 = a1;
  v55 = a6;
LABEL_9:
  sub_184F1DE80(a1, a2, a3: v59, a4: v11, a5, a6, a7: v52);
  v17 = v59;
  v18 = *(unsigned int *)(v59 + 16);
  if ( (_DWORD)v18 == 0 )
    goto LABEL_10;
  v29 = v8 + 8 * v18;
  if ( *(_DWORD *)(v29 + 4) != 0 )
  {
    if ( v8 + 8LL * *(unsigned int *)(v8 + 8 * v18 + 8) == v58 )
    {
      v20 = v8 + 8 * v18;
      v21 = v58;
      goto LABEL_13;
    }
LABEL_10:
    v19 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v19 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v20 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 40483616);
      v21 = v58;
      v17 = v59;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v19 + 24;
      *(_DWORD *)v19 = 40483616;
      *(_DWORD *)(v19 + 4) = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
      v20 = v19;
      v21 = v58;
    }
    *(_DWORD *)(v20 + 8) = (unsigned __int64)(v21 - v8) >> 3;
    *(_DWORD *)(v20 + 4) = (unsigned __int64)(v17 - v8) >> 3;
    *(_DWORD *)(v17 + 16) = (unsigned __int64)(v20 - v8) >> 3;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v32 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v32) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v32) >> 9) + 0x38) = 0;
    }
LABEL_13:
    MEMORY[0x18584DE00](a1: v56, a2: v16, a3: v20, a4: v21, a5: v21, a6: v55);
    if ( *(_BYTE *)(v59 + 24) == 0 )
    {
      v54 = (_DWORD *)v8;
      goto LABEL_16;
    }
    v25 = *(unsigned int *)(v59 + 12);
    if ( (_DWORD)v25 != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                      + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v25) >> 3) + 168)))(
        a1: v23,
        a2: v24,
        a3: v8 + 8 * v25);
      v54 = (_DWORD *)v8;
      goto LABEL_16;
    }
    v37 = (_DWORD *)MEMORY[0x18276BEE0]();
    v43 = *v37 >> 3;
    v22 = *(unsigned int *)(v8 + 8 * v43 + 16);
    v44 = *(_WORD *)(v8 + 8 * v43 + 62);
    if ( v44 >= 5 && *(_DWORD *)(v8 + 8 * v22 + 28) == 87995 )
    {
      v53 = v37;
      goto LABEL_58;
    }
    if ( v44 >= 4 && *(_DWORD *)(v8 + 8 * v22 + 24) == 81613 )
    {
      v54 = v37;
      goto LABEL_16;
    }
    while ( 1 )
    {
LABEL_41:
      if ( v61 != 0 )
      {
        v22 = v57;
        v35 = *(unsigned int *)(v57 + v60);
        v36 = *(_DWORD *)(v8 + 8 * v35 + 28);
        if ( v36 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v35 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v35 + 28) = v36 - 1;
        }
        if ( v36 != 1 )
          goto LABEL_45;
        v41 = *(unsigned int *)(v8 + 8 * v35 + 4);
        if ( (_DWORD)v41 == 0 )
          goto LABEL_45;
        v42 = *(unsigned int *)(v8 + 8 * v41 + 8);
        if ( (_DWORD)v42 == 0 )
          goto LABEL_45;
        v22 = *(unsigned int *)(v8 + 8 * v42 + 16);
        if ( (_DWORD)v22 == 0 )
          goto LABEL_45;
        v51 = 1;
      }
      else
      {
        v51 = 0xFFFFFFFFLL;
      }
      v54 = v37;
      MEMORY[0x18208CCA0](a1: v23, a2: v24, a3: v57, a4: v22, a5: v51);
      v37 = v54;
LABEL_45:
      v37 = (_DWORD *)MEMORY[0x182769900](a1: v23, a2: v24, a3: v37, a4: v22, a5: &a7);
      v38 = *v37 >> 3;
      v39 = *(unsigned int *)(v8 + 8 * v38 + 16);
      v40 = *(_WORD *)(v8 + 8 * v38 + 62);
      if ( v40 >= 5 && *(_DWORD *)(v8 + 8 * v39 + 28) == 87995 )
      {
        v53 = v37;
LABEL_58:
        v45 = *(unsigned int *)(v9 + 72);
        if ( (_DWORD)v45 != 0 )
        {
          v46 = *(unsigned int *)(v8 + 8 * v45 + 72);
          v47 = (_DWORD *)((_DWORD)v46 != 0 ? v8 + 8 * v46 : v8 + 8 * v45);
          if ( v47 != (_DWORD *)v8 )
          {
            ((void (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*v47 >> 3) + 248)))();
            v62 = v7;
            v54 = v53;
            goto LABEL_16;
          }
        }
        v37 = (_DWORD *)MEMORY[0x18276BEE0]();
      }
      else if ( v40 >= 4 && *(_DWORD *)(v8 + 8 * v39 + 24) == 81613 )
      {
        v54 = v37;
        goto LABEL_16;
      }
    }
  }
LABEL_72:
  v48 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v54 = (_DWORD *)v29;
    v48 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 37421496);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v48 + 40;
    *(_DWORD *)v48 = 37421496;
    *(_DWORD *)(v48 + 4) = 0;
    *(_QWORD *)(v48 + 8) = 0;
    *(_QWORD *)(v48 + 16) = 0;
    *(_QWORD *)(v48 + 24) = 0;
    *(_QWORD *)(v48 + 32) = 0;
    v54 = (_DWORD *)v29;
  }
  *(_DWORD *)(v48 + 20) = 46923644;
  *(_DWORD *)(v48 + 16) = *(_DWORD *)(v8 + 374343896);
  *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v8) >> 3;
  v53 = (_DWORD *)v48;
  MEMORY[0x18503B9A0](a1: v15, a2: v16, a3: v48, a4: v48, a5: 0);
  v49 = *v53 >> 3;
  v22 = *(unsigned int *)(v8 + 8 * v49 + 16);
  v50 = *(_WORD *)(v8 + 8 * v49 + 62);
  if ( v50 >= 5 && *(_DWORD *)(v8 + 8 * v22 + 28) == 87995 )
    goto LABEL_58;
  if ( v50 < 4 )
  {
    v37 = v53;
    goto LABEL_41;
  }
  if ( *(_DWORD *)(v8 + 8 * v22 + 24) != 81613 )
  {
    v37 = v53;
    goto LABEL_41;
  }
  v54 = v53;
LABEL_16:
  if ( v61 != 0 )
  {
    v22 = v57;
    v26 = *(unsigned int *)(v57 + v60);
    v27 = *(_DWORD *)(v8 + 8 * v26 + 28);
    if ( v27 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v26 + 28) = v27 - 1;
    }
    if ( v27 != 1 )
      goto LABEL_20;
    v30 = *(unsigned int *)(v8 + 8 * v26 + 4);
    if ( (_DWORD)v30 == 0 )
      goto LABEL_20;
    v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
    if ( (_DWORD)v31 == 0 || *(_DWORD *)(v8 + 8 * v31 + 16) == 0 )
      goto LABEL_20;
    v34 = 1;
  }
  else
  {
    v34 = 0xFFFFFFFFLL;
  }
  MEMORY[0x18208CCA0](a1: v23, a2: v24, a3: v57, a4: v22, a5: v34);
LABEL_20:
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v59;
}
