// sub_181EBF720
// rva 0x01ebf720  size 1340  section .text  group text
// window base 0x181ebf720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBF720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  _DWORD *v22; // rbp
  int v23; // r10d
  _DWORD *v24; // rdi
  __int64 v25; // r12
  unsigned __int64 v26; // rdx
  char *v27; // rdx
  unsigned int v28; // edx
  _DWORD *v29; // rbp
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rcx
  unsigned int v33; // eax
  _DWORD *v34; // rbp
  unsigned __int64 v35; // r9
  unsigned __int64 i; // r8
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // r11d
  __int64 v42; // r12
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  char v46; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v47; // [rsp+10h] [rbp-48h]
  unsigned int v48; // [rsp+1Ch] [rbp-3Ch]
  _DWORD *v49; // [rsp+20h] [rbp-38h]
  _DWORD *v50; // [rsp+28h] [rbp-30h]
  unsigned int v51; // [rsp+30h] [rbp-28h]
  unsigned int v52; // [rsp+34h] [rbp-24h]
  __int64 v53; // [rsp+38h] [rbp-20h]
  int v54; // [rsp+40h] [rbp-18h]
  int v55; // [rsp+44h] [rbp-14h]
  __int64 v56; // [rsp+48h] [rbp-10h]
  int v57; // [rsp+50h] [rbp-8h]
  unsigned int v58; // [rsp+54h] [rbp-4h]

  v50 = (_DWORD *)a3;
  v58 = a5;
  v57 = a6;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_54;
  v8 = *(unsigned int *)(a3 + 4);
  v9 = 34089600;
  if ( (_DWORD)v8 != 0 )
  {
    v10 = v6 + 8 * v8;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v56 = 34089600;
      v10 = sub_181EAA920(a1: v10, a2: 34089600, a3: 34187680);
      v9 = v56;
      a5 = v58;
      a3 = (__int64)v50;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v10 + 24;
      *(_DWORD *)v10 = 34187680;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
    }
    v18 = *(_QWORD *)(v7 + 40);
    v19 = v18 + 24;
    if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v49 = (_DWORD *)v10;
      v56 = v9;
      v18 = sub_181EAA840(a1: v10, a2: v9, a3: v9, a4: v19, a5: 1u);
      v10 = (__int64)v49;
      v9 = v56;
      a5 = v58;
      a3 = (__int64)v50;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v19;
      *(_QWORD *)v18 = v9;
      *(_DWORD *)(v18 + 8) = 1;
      *(_DWORD *)(v18 + 12) = 0;
      *(_QWORD *)(v18 + 16) = 0;
    }
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(v18 - v6) >> 3;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v43 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v43) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v43) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(v10 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v44 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v44) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v44) >> 9) + 0x38) = 0;
    }
  }
  v11 = *(_DWORD *)(a3 + 12);
  v12 = (unsigned int)-v11;
  if ( (int)v12 <= (int)a5 )
    goto LABEL_5;
  v20 = *(unsigned int *)(v10 + 4);
  if ( (_DWORD)v20 == 0 )
  {
LABEL_57:
    MEMORY[0x182771080](a1: v10, a2: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EBFC60();
  }
  v21 = *(_DWORD *)(v10 + 8);
  v22 = (_DWORD *)(v6 + 8 * v20);
  v55 = (63 - a5 + ((unsigned int)((63 - (int)a5) >> 31) >> 26)) & 0xFFFFFFC0;
  v23 = v55 - v11;
  if ( (v21 & 0x80000000) != 0 )
  {
    v54 = ((63 - a5 + ((unsigned int)((63 - (int)a5) >> 31) >> 26)) & 0xFFFFFFC0) - v11;
    v49 = (_DWORD *)v10;
    MEMORY[0x18579B180](a1: v10, a2: v9, a3: v6 + 8 * v20, a4: v20, a5: v21);
LABEL_54:
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v46);
    goto LABEL_55;
  }
  v24 = *(_DWORD **)(v7 + 40);
  v25 = v21;
  v26 = (8LL * v21 + 23) & 0xFFFFFFFF8LL;
  if ( v26 >= 0x20000 || (unsigned __int64)(v27 = (char *)v24 + v26) > *(_QWORD *)(v7 + 32) )
  {
    v53 = v21;
    v54 = ((63 - a5 + ((unsigned int)((63 - (int)a5) >> 31) >> 26)) & 0xFFFFFFC0) - v11;
    v49 = (_DWORD *)(v6 + 8 * v20);
    v48 = v20;
    v56 = v9;
    v52 = v21;
    v24 = (_DWORD *)sub_181EAA840(a1: (__int64)v24, a2: v9, a3: v9, a4: v20, a5: v21);
    v25 = v53;
    v23 = v54;
    v22 = v49;
    v21 = v52;
    v20 = v48;
    v9 = v56;
    a5 = v58;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v27;
    *(_QWORD *)v24 = v9;
    v24[2] = v21;
  }
  v28 = *(_DWORD *)(v6 + 8 * v20 + 8);
  if ( v21 < v28 )
    JUMPOUT(0x303D498DFLL);
  if ( v21 <= v28 )
    JUMPOUT(0x303D498EALL);
  if ( v28 != 0 )
  {
    a5 = (__int64)(v24 + 4);
    v29 = v22 + 4;
    v30 = 0;
    do
    {
      *(_QWORD *)(a5 + 8 * v30) = *(_QWORD *)&v29[2 * v30];
      ++v30;
    }
    while ( v30 <= v28 - 1LL );
  }
  v31 = v25 - v28;
  v32 = 8 * v31;
  if ( 8 * v31 >= 2048 )
  {
    v54 = v23;
    v56 = v9;
    memset(&v24[2 * v28 + 4], 0, v32);
    v32 = 0;
  }
  else if ( v21 > v28 )
  {
    v42 = v31 - 1;
    a5 = 0;
    do
      *(_QWORD *)&v24[2 * v28 + 4 + 2 * a5++] = 0;
    while ( a5 <= v42 );
  }
  v33 = v21 + v23 / 64;
  if ( (v33 & 0x80000000) != 0 )
    goto LABEL_56;
  v49 = v24;
  v34 = *(_DWORD **)(v7 + 40);
  v35 = (8LL * v33 + 23) & 0xFFFFFFFF8LL;
  if ( v35 >= 0x20000 || (v32 = (__int64)v34 + v35, (unsigned __int64)v34 + v35 > *(_QWORD *)(v7 + 32)) )
  {
    v51 = v23 / 64;
    v54 = v23;
    v52 = v21;
    v34 = (_DWORD *)sub_181EAA840(a1: (__int64)v24, a2: v9, a3: v9, a4: v32, a5: v33);
    v37 = v51;
    v24 = v49;
    v21 = v52;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v32;
    *(_QWORD *)v34 = v9;
    v34[2] = v33;
    v34[3] = 0;
    if ( v35 - 16 >= 0x800 )
    {
      v51 = v23 / 64;
      v54 = v23;
      v52 = v21;
      memset(v34 + 4, 0, v35 - 16);
      v24 = v49;
    }
    else
    {
      for ( i = 16; v35 > i; i += 8LL )
        *(_QWORD *)&v34[i / 4] = 0;
    }
    v37 = (unsigned int)(v23 / 64);
    v54 = v23;
  }
  v47 = v34;
  sub_181EB4960(a1: (unsigned int)v37, a2: v21, a3: v24, a4: v37, a5: 0, a6: v34, a7: v46);
  v40 = MEMORY[0x1857BB880](a1: v38, a2: v39, a3: v47);
  v12 = (unsigned __int64)v50;
  v50[1] = (unsigned __int64)(v40 - v6) >> 3;
  if ( (*(_DWORD *)v12 & 2) != 0 )
  {
    v45 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v45) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v45) >> 9) + 0x38) = 0;
  }
  v41 = v55;
  *(_DWORD *)(v12 + 12) = v55;
  v10 = v40;
  v11 = v41;
LABEL_5:
  MEMORY[0x1857B9BE0](a1: v10, a2: v9, a3: v10, a4: v12, a5: v58 + v11);
  v15 = (unsigned int)v50[1];
  if ( (_DWORD)v15 == 0 )
  {
LABEL_55:
    v33 = MEMORY[0x182771080]();
LABEL_56:
    MEMORY[0x182770E80](a1: v24, a2: v9, a3: v33, a4: v32, a5);
    goto LABEL_57;
  }
  v16 = v50[3] + v58 + 1;
  result = MEMORY[0x1857B9BE0](a1: v13, a2: v14, a3: v6 + 8 * v15, a4: v16, a5: (unsigned int)v16);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
