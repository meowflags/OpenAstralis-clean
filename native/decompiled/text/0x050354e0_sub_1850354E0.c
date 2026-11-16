// sub_1850354E0
// rva 0x050354e0  size 2027  section .text  group text
// window base 0x1850354e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1850354E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  _DWORD *v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  _DWORD *v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r12
  unsigned int v31; // r11d
  unsigned __int64 v32; // r10
  int v33; // edx
  __int64 v34; // rbp
  BOOL v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v47; // r11
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // r10
  __int64 v53; // r11
  unsigned __int64 v54; // rbp
  __int64 v55; // rcx
  __int64 v56; // r11
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned __int64 v60; // rbp
  int v61; // eax
  char *v62; // rdx
  unsigned __int64 v63; // rbp
  int i; // r8d
  void *v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // edx
  int v70; // ecx
  int v71; // edi
  int v72; // esi
  int v73; // r8d
  int v74; // r9d
  int v75; // [rsp+0h] [rbp-48h] BYREF
  __int64 v76; // [rsp+8h] [rbp-40h]
  _DWORD *v77; // [rsp+10h] [rbp-38h]
  _DWORD *v78; // [rsp+18h] [rbp-30h]
  __int64 v79; // [rsp+20h] [rbp-28h]
  unsigned int v80; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v81; // [rsp+30h] [rbp-18h]
  unsigned int v82; // [rsp+34h] [rbp-14h]
  __int64 v83; // [rsp+38h] [rbp-10h]
  unsigned int v84; // [rsp+44h] [rbp-4h]

  v78 = (_DWORD *)a3;
  v77 = a5;
  if ( (unsigned __int64)&v75 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_103;
  v9 = *(_DWORD *)(v7 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  v84 = v9;
  v83 = (int)v9;
  if ( v9 == 0 )
    goto LABEL_66;
  v10 = *(unsigned int *)(a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_66;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_7;
    goto LABEL_66;
  }
  if ( v12 != v11 || (v61 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_66:
    MEMORY[0x18208CC20]();
    a3 = (unsigned __int64)v78;
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v61;
LABEL_7:
  result = *(unsigned int *)(a3 + 24);
  v14 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_20;
  v15 = *(_DWORD *)(v7 + 8 * v14 + 8);
  v16 = v7 + 8 * v14;
  if ( v15 != (_DWORD)result )
  {
    v17 = v7 + 8 * v14;
    goto LABEL_10;
  }
  v38 = *(_DWORD *)(v7 + 8 * v14) >> 3;
  v11 = (unsigned int)(result + 4);
  if ( (int)v11 < 0 )
  {
    v81 = result + 4;
    v76 = v16;
    MEMORY[0x18579AF80](a1: v12, a2: v11, a3: v16, a4: v7 + 8 * v38, a5: (unsigned int)v11, a6: v7 + 8 * v38);
LABEL_103:
    LODWORD(result) = MEMORY[0x181EB84E0]();
    goto LABEL_104;
  }
  v39 = *(unsigned int *)(v7 + 8 * v38 + 24);
  v40 = v7 + 8 * v39;
  if ( (_DWORD)v39 == 0 || (_DWORD)v39 == 4260190 )
  {
    do
    {
LABEL_105:
      LODWORD(result) = MEMORY[0x181EB87C0](a1: v40, a2: v11, a3: v40);
LABEL_106:
      v81 = v11;
      v76 = v16;
      v80 = v15;
      v82 = result;
      v68 = MEMORY[0x181EB8B60](a1: v40, a2: v11, a3: v40);
    }
    while ( v68 == v7 );
    v44 = v68;
    v16 = v76;
    result = v82;
    a3 = (unsigned __int64)v78;
    goto LABEL_45;
  }
  v41 = *(unsigned int *)(v7 + 8 * v39 + 28);
  if ( (_DWORD)v41 == 0 )
  {
LABEL_109:
    MEMORY[0x182771080](a1: v40);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185035CE0(a1: v71, a2: v72, a3: v69, a4: v70, a5: v73, a6: v74, a7);
  }
  v42 = *(unsigned int *)(v7 + 8 * v41 + 32);
  if ( (_DWORD)v42 == 0 )
    goto LABEL_106;
  v43 = *(unsigned int *)(v7 + 8 * v42 + 28);
  if ( (_DWORD)v43 == 0 )
  {
    MEMORY[0x182771080](a1: v40, a2: v11, a3, a4: v42, a5: v77);
    goto LABEL_109;
  }
  if ( (*(_BYTE *)(v7 + 8 * v43 + 112) & 1) == 0 )
    goto LABEL_105;
  v44 = v7 + 8 * v42;
LABEL_45:
  v45 = v44;
  v46 = *(_QWORD *)(v8 + 40);
  a6 = *(_QWORD *)(v8 + 32);
  v47 = (unsigned int)v11;
  v48 = (((unsigned __int64)(unsigned int)v11 << *(_DWORD *)(v44 + 32)) + ((*(int *)(v44 + 32) >> 8) & 0xFFF) + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  v49 = v45 - v7;
  if ( v48 >= 0x20000 || (v48 += v46, v48 > a6) )
  {
    v79 = (unsigned int)v11;
    v76 = v16;
    v80 = v15;
    v82 = result;
    v81 = v11;
    v50 = MEMORY[0x181EAA840](a1: v46, a2: v11, a3: v49, a4: v48, a5: (unsigned int)v11, a6);
    v47 = v79;
    v11 = v81;
    v16 = v76;
    v15 = v80;
    result = v82;
    a3 = (unsigned __int64)v78;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v48;
    *(_QWORD *)v46 = v49;
    *(_DWORD *)(v46 + 8) = v11;
    v50 = v46;
  }
  if ( (unsigned int)v11 < v15 )
    JUMPOUT(0x30A05084DLL);
  if ( (unsigned int)v11 <= v15 )
    JUMPOUT(0x30A050858LL);
  v12 = v15;
  if ( v15 != 0 )
  {
    a6 = v50 + 12;
    v51 = v16 + 12;
    v12 = v15 - 1LL;
    v52 = 0;
    do
    {
      *(_DWORD *)(a6 + 4 * v52) = *(_DWORD *)(v51 + 4 * v52);
      ++v52;
    }
    while ( v52 <= v12 );
  }
  v53 = v47 - v15;
  v54 = 4 * v53;
  if ( 4 * v53 >= 2048 )
  {
    v82 = result;
    v65 = (void *)(v50 + 4LL * v15 + 12);
    memset(v65, 0, v54);
    v12 = (__int64)v65 + v54;
    result = v82;
    a3 = (unsigned __int64)v78;
  }
  else if ( (unsigned int)v11 > v15 )
  {
    v55 = v50 + 4LL * v15 + 12;
    v56 = v53 - 1;
    v57 = 0;
    do
      *(_DWORD *)(v55 + 4 * v57++) = 0;
    while ( v57 <= v56 );
  }
  *(_DWORD *)(a3 + 12) = (unsigned __int64)(v50 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v63 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v63) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v63) >> 9) + 0x38) = 0;
    v17 = v50;
  }
  else
  {
    v17 = v50;
  }
LABEL_10:
  while ( 1 )
  {
    *(_DWORD *)(a3 + 24) = result + 1;
    v18 = *(unsigned int *)(v17 + 8);
    if ( (unsigned int)v18 > (unsigned int)result )
      break;
LABEL_104:
    v82 = result;
    v22 = MEMORY[0x18276CFE0](a1: v12, a2: v11, a3: (unsigned int)result, a4: v18, a5: (unsigned int)v18);
    v26 = v84;
    v25 = v78;
LABEL_15:
    if ( (_DWORD)v26 != 0 )
    {
      v27 = *(unsigned int *)((char *)v25 + v83);
      v28 = *(_DWORD *)(v7 + 8 * v27 + 28);
      if ( v28 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v27 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v27 + 28) = v28 - 1;
      }
      if ( v28 != 1 )
        goto LABEL_19;
      v58 = *(unsigned int *)(v7 + 8 * v27 + 4);
      if ( (_DWORD)v58 == 0 )
        goto LABEL_19;
      v59 = *(unsigned int *)(v7 + 8 * v58 + 8);
      if ( (_DWORD)v59 == 0 )
        goto LABEL_19;
      v26 = *(unsigned int *)(v7 + 8 * v59 + 16);
      if ( (_DWORD)v26 == 0 )
        goto LABEL_19;
      v67 = 1;
      v76 = v22;
    }
    else
    {
      v76 = v22;
      v67 = 0xFFFFFFFFLL;
    }
    MEMORY[0x18208CCA0](a1: v23, a2: v24, a3: v78, a4: v26, a5: v67);
    v22 = v76;
LABEL_19:
    result = MEMORY[0x182769900](a1: v23, a2: v24, a3: v22, a4: &a7, a5: &a7);
LABEL_20:
    v29 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v29 + 32) > *(_QWORD *)(v8 + 32) )
    {
      v82 = result;
      v29 = MEMORY[0x181EAA840](a1: v12, a2: v11, a3: 43307096, a4: v29, a5: 4);
      result = v82;
      a3 = (unsigned __int64)v78;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v29 + 32;
      *(_QWORD *)v29 = 43307096;
      *(_DWORD *)(v29 + 8) = 4;
      *(_DWORD *)(v29 + 12) = 0;
      *(_QWORD *)(v29 + 16) = 0;
      *(_QWORD *)(v29 + 24) = 0;
    }
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(v29 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v60 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v60) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v60) >> 9) + 0x38) = 0;
      v17 = v29;
    }
    else
    {
      v17 = v29;
    }
  }
  v19 = v77;
  if ( v77 == (_DWORD *)v7 )
  {
    v30 = v83;
    v31 = v84;
    v32 = a3;
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(v7 + 8LL * (*(_DWORD *)v17 >> 3) + 24);
  v11 = (unsigned int)*(__int16 *)(v7 + 8 * v20 + 60);
  v21 = *v77 >> 3;
  a6 = (unsigned int)*(__int16 *)(v7 + 8 * v21 + 62);
  v12 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v21 + 16);
  if ( *(__int16 *)(v7 + 8 * v20 + 60) >= 0 )
  {
    if ( *(_WORD *)(v7 + 8 * v21 + 62) <= *(_WORD *)(v7 + 8 * v20 + 60) )
    {
LABEL_14:
      v22 = MEMORY[0x182769A20](a1: v12, a2: v11, a3: v19);
      v26 = v84;
      goto LABEL_15;
    }
    v30 = v83;
    v31 = v84;
    v32 = a3;
    v18 = *(unsigned int *)(v7 + 8 * v20 + 36);
    v35 = v18 == *(_DWORD *)(v12 + 4LL * *(unsigned __int16 *)(v7 + 8 * v20 + 60) + 12);
LABEL_26:
    if ( v35 )
      goto LABEL_27;
    goto LABEL_14;
  }
  v30 = v83;
  v31 = v84;
  v32 = a3;
  v33 = *(_DWORD *)(v7 + 8 * v20 + 40);
  if ( v33 < 0x10000 )
  {
    v34 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v21 + 20);
    v12 = *(_DWORD *)(v7 + 8 * v21 + 44) & ((unsigned int)v33 >> HIBYTE(*(_DWORD *)(v7 + 8 * v21 + 44)));
    v18 = (int)(4 * (*(_DWORD *)(v7 + 8 * v21 + 44) & ((unsigned int)v33 >> HIBYTE(*(_DWORD *)(v7 + 8 * v21 + 44)))) + 12);
    v11 = (unsigned __int16)*(_DWORD *)(v34 + v18);
    v35 = v33 == v11;
    goto LABEL_26;
  }
  v82 = result;
  v18 = (unsigned int)(2 * *(__int16 *)(v7 + 8 * v21 + 64));
  for ( i = 0; ; i += 2 )
  {
    if ( (int)v18 <= i )
    {
      v19 = v77;
      goto LABEL_14;
    }
    if ( v33 == *(_DWORD *)(v12 + 4 * ((__int16)a6 + i) + 12) )
      break;
  }
  result = v82;
  v19 = v77;
  v32 = (unsigned __int64)v78;
LABEL_27:
  *(_DWORD *)(v17 + 4 * result + 12) = ((unsigned __int64)v19 - v7) >> 3;
  if ( (*(_DWORD *)v17 & 2) != 0 )
  {
    if ( (*(_DWORD *)v17 & 1) != 0 )
    {
      v62 = (char *)(v17 - *(_QWORD *)(v17 - 8));
      v18 = v17;
      result = (4 * result + 12) >> 9;
      if ( v62[result + 48] != 0 )
        v62[result + 48] = 0;
    }
    else
    {
      result = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      v18 = (v17 - result) >> 9;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + v18 + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - result) >> 9) + 0x38) = 0;
    }
  }
  if ( v31 != 0 )
  {
    v36 = *(unsigned int *)(v32 + v30);
    v37 = *(unsigned int *)(v7 + 8 * v36 + 28);
    if ( (_DWORD)v37 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v36 + 16) = 0;
      __faststorefence();
    }
    else
    {
      result = (unsigned int)(v37 - 1);
      *(_DWORD *)(v7 + 8 * v36 + 28) = result;
    }
    if ( (_DWORD)v37 == 1 )
    {
      v36 = *(unsigned int *)(v7 + 8 * v36 + 4);
      if ( (_DWORD)v36 != 0 )
      {
        v36 = *(unsigned int *)(v7 + 8 * v36 + 8);
        if ( (_DWORD)v36 != 0 )
        {
          result = *(unsigned int *)(v7 + 8 * v36 + 16);
          if ( (_DWORD)result != 0 )
          {
            v66 = 1;
            goto LABEL_89;
          }
        }
      }
    }
  }
  else
  {
    v66 = 0xFFFFFFFFLL;
LABEL_89:
    result = MEMORY[0x18208CCA0](a1: v12, a2: v11, a3: v78, a4: v18, a5: v66, a6);
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v12, a2: v11, a3: v36, a4: v18, a5: v37, a6);
  return result;
}
