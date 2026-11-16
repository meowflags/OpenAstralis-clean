// sub_184F1AAE0
// rva 0x04f1aae0  size 1306  section .text  group text
// window base 0x184f1aae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1AAE0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbp
  signed __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int16 v51; // r8
  _DWORD *i; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rbx
  _DWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+18h] [rbp-40h]
  unsigned int v65; // [rsp+24h] [rbp-34h]
  _DWORD *v66; // [rsp+28h] [rbp-30h]
  __int64 v67; // [rsp+30h] [rbp-28h]
  __int64 v68; // [rsp+38h] [rbp-20h]
  _DWORD *v69; // [rsp+40h] [rbp-18h]
  __int64 v70; // [rsp+48h] [rbp-10h]
  unsigned int v71; // [rsp+54h] [rbp-4h]

  v69 = a3;
  if ( (unsigned __int64)&v62 <= *(_QWORD *)(v13 + 8) )
  {
    v68 = a6;
    v67 = a5;
    MEMORY[0x181EB84E0]();
LABEL_63:
    i = (_DWORD *)MEMORY[0x18276BEE0]();
    goto LABEL_40;
  }
  v14 = *(unsigned int *)(v12 + 8LL * (*a3 >> 3) + 48);
  v71 = v14;
  v70 = (int)v14;
  if ( (_DWORD)v14 == 0 )
    goto LABEL_31;
  v15 = *(unsigned int *)((char *)a3 + (int)v14);
  if ( (_DWORD)v15 == 0 || v13 == *(_QWORD *)(v12 + 376351704) )
    goto LABEL_31;
  v16 = *(_QWORD *)(v13 + 64);
  v17 = *(_QWORD *)(v12 + 8 * v15 + 16);
  if ( v17 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v12 + 8 * v15 + 16), 0, v16) == 0 )
    {
      v68 = a6;
      v67 = a5;
      goto LABEL_8;
    }
    goto LABEL_31;
  }
  if ( v17 != v16 || (v44 = *(_DWORD *)(v12 + 8 * v15 + 28) + 1) < 0 )
  {
LABEL_31:
    v68 = a6;
    v67 = a5;
    MEMORY[0x18208CC20]();
    goto LABEL_8;
  }
  *(_DWORD *)(v12 + 8 * v15 + 28) = v44;
  v68 = a6;
  v67 = a5;
LABEL_8:
  sub_184F1A6E0(a1: v17, a2: v16, a3: (__int64)v69, a4: v14, a5, a6, a7: v62);
  v22 = (unsigned int)v69[4];
  v23 = v12 + 376257960;
  if ( (_DWORD)v22 == 0 )
    return sub_184F1ACBB(a1: v18, a2: v19, a3: (_DWORD)v69, a4: v23, a5: v20, a6: v21, a7, a8, a9, a10, a11);
  if ( *(_DWORD *)(v12 + 8 * v22 + 4) == 0 )
  {
    v60 = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int64)(v60 + 40) > *(_QWORD *)(v13 + 32) )
    {
      v65 = v69[4];
      v60 = MEMORY[0x181EAA920](a1: v18, a2: v19, a3: 37421496, a4: v23);
      v22 = v65;
    }
    else
    {
      *(_QWORD *)(v13 + 40) = v60 + 40;
      *(_DWORD *)v60 = 37421496;
      *(_DWORD *)(v60 + 4) = 0;
      *(_QWORD *)(v60 + 8) = 0;
      *(_QWORD *)(v60 + 16) = 0;
      *(_QWORD *)(v60 + 24) = 0;
      *(_QWORD *)(v60 + 32) = 0;
    }
    *(_DWORD *)(v60 + 20) = 46923644;
    *(_DWORD *)(v60 + 16) = *(_DWORD *)(v12 + 374343896);
    *(_DWORD *)(v60 + 12) = (unsigned __int64)(v60 - v12) >> 3;
    v64 = v12 + 8 * v22;
    v63 = (_DWORD *)v60;
    MEMORY[0x18503B9A0](a1: v18, a2: v19, a3: v60, a4: v60, a5: 0);
    for ( i = v63; ; i = (_DWORD *)MEMORY[0x182771080]() )
    {
LABEL_40:
      v46 = v71;
      if ( v71 == 0 )
      {
        v61 = 0xFFFFFFFFLL;
        v66 = i;
LABEL_68:
        MEMORY[0x18208CCA0](a1: v53, a2: v54, a3: v69, a4: v46, a5: v61);
        i = v66;
        v38 = (__int64)v69;
        goto LABEL_44;
      }
      v38 = (__int64)v69;
      v47 = *(unsigned int *)((char *)v69 + v70);
      v48 = *(_DWORD *)(v12 + 8 * v47 + 28);
      if ( v48 == 1 )
      {
        *(_QWORD *)(v12 + 8 * v47 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v12 + 8 * v47 + 28) = v48 - 1;
      }
      if ( v48 == 1 )
      {
LABEL_49:
        v55 = *(unsigned int *)(v12 + 8 * v47 + 4);
        if ( (_DWORD)v55 != 0 )
        {
          v56 = *(unsigned int *)(v12 + 8 * v55 + 8);
          if ( (_DWORD)v56 != 0 )
          {
            v46 = *(unsigned int *)(v12 + 8 * v56 + 16);
            if ( (_DWORD)v46 != 0 )
            {
              v66 = i;
              v61 = (_DWORD)v46 != 0;
              goto LABEL_68;
            }
          }
        }
      }
LABEL_44:
      v49 = *i >> 3;
      v50 = *(unsigned int *)(v12 + 8 * v49 + 16);
      v51 = *(_WORD *)(v12 + 8 * v49 + 62);
      if ( v51 < 5 || *(_DWORD *)(v12 + 8 * v50 + 28) != 87995 )
      {
        if ( v51 >= 4 && *(_DWORD *)(v12 + 8 * v50 + 24) == 81613 )
        {
          *(_BYTE *)(v38 + 14) = 1;
          goto LABEL_19;
        }
        i = (_DWORD *)MEMORY[0x182769900](a1: v53, a2: v54, a3: i, a4: v50, a5: &a7);
        goto LABEL_49;
      }
      v57 = *(unsigned int *)(v13 + 72);
      if ( (_DWORD)v57 != 0 )
      {
        v58 = *(unsigned int *)(v12 + 8 * v57 + 72);
        v59 = (_DWORD *)((_DWORD)v58 != 0 ? v12 + 8 * v58 : v12 + 8 * v57);
        if ( v59 != (_DWORD *)v12 )
        {
          v66 = i;
          ((void (__fastcall *)(__int64, __int64, _DWORD *))(v11 + *(_QWORD *)(v12 + 8LL * (*v59 >> 3) + 248)))(
            a1: v53,
            a2: v54,
            a3: v59);
          v38 = (__int64)v69;
          goto LABEL_19;
        }
      }
    }
  }
  v24 = (_DWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 8 * v22 + 8));
  v66 = (_DWORD *)(v12 + 376257960);
  v63 = v24;
  v25 = MEMORY[0x1858D7440](a1: v18, a2: v19, a3: v12 + 376257960);
  if ( v63 == (_DWORD *)v25 )
  {
    v30 = (__int64)v69;
  }
  else
  {
    v29 = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int64)(v29 + 24) > *(_QWORD *)(v13 + 32) )
    {
      v29 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 40483616);
    }
    else
    {
      *(_QWORD *)(v13 + 40) = v29 + 24;
      *(_DWORD *)v29 = 40483616;
      *(_DWORD *)(v29 + 4) = 0;
      *(_QWORD *)(v29 + 8) = 0;
      *(_QWORD *)(v29 + 16) = 0;
    }
    v63 = (_DWORD *)v29;
    MEMORY[0x18584D8C0](a1: v27, a2: v28, a3: v29, a4: v26, a5: v69);
    v30 = (__int64)v69;
    v69[4] = ((unsigned __int64)v63 - v12) >> 3;
    if ( (*(_DWORD *)v30 & 2) != 0 )
    {
      v43 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v43) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v43) >> 9) + 0x38) = 0;
    }
  }
  v31 = *(unsigned int *)(v30 + 16);
  v32 = v66;
  v66 = (_DWORD *)(v12 + 8 * v31);
  v65 = v31;
  v33 = MEMORY[0x1858D7440](a1: v27, a2: v28, a3: v32);
  if ( v65 == 0 )
    goto LABEL_63;
  MEMORY[0x18584DE00](a1: v68, a2: v34, a3: v66, a4: v65, a5: v33, a6: v67);
  v37 = v71;
  if ( v71 == 0 )
  {
    v45 = 0xFFFFFFFFLL;
LABEL_37:
    MEMORY[0x18208CCA0](a1: v35, a2: v36, a3: v69, a4: v37, a5: v45);
    v38 = (__int64)v69;
    goto LABEL_19;
  }
  v38 = (__int64)v69;
  v39 = *(unsigned int *)((char *)v69 + v70);
  v37 = *(unsigned int *)(v12 + 8 * v39 + 28);
  if ( (_DWORD)v37 == 1 )
  {
    *(_QWORD *)(v12 + 8 * v39 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v12 + 8 * v39 + 28) = v37 - 1;
  }
  if ( (_DWORD)v37 == 1 )
  {
    v41 = *(unsigned int *)(v12 + 8 * v39 + 4);
    if ( (_DWORD)v41 != 0 )
    {
      v42 = *(unsigned int *)(v12 + 8 * v41 + 8);
      if ( (_DWORD)v42 != 0 && *(_DWORD *)(v12 + 8 * v42 + 16) != 0 )
      {
        v45 = 1;
        goto LABEL_37;
      }
    }
  }
LABEL_19:
  if ( *(int *)(v13 + 16) <= 0 )
  {
    MEMORY[0x18277F280]();
    return (__int64)v69;
  }
  return v38;
}
