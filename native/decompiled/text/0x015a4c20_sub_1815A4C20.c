// sub_1815A4C20
// rva 0x015a4c20  size 1102  section .text  group text
// window base 0x1815a4c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A4C20(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  signed __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  unsigned __int64 v31; // rdi
  int v32; // eax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+8h] [rbp-40h]
  _DWORD *v50; // [rsp+10h] [rbp-38h]
  __int64 v51; // [rsp+18h] [rbp-30h]
  _DWORD *v52; // [rsp+20h] [rbp-28h]
  __int64 i; // [rsp+28h] [rbp-20h]
  unsigned int v54; // [rsp+34h] [rbp-14h]
  __int64 v55; // [rsp+38h] [rbp-10h]
  unsigned int v56; // [rsp+44h] [rbp-4h]

  v55 = a3;
  if ( (unsigned __int64)&v48 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_67:
    MEMORY[0x182771080]();
LABEL_68:
    v42 = v54;
    v38 = MEMORY[0x18276BEE0]();
LABEL_56:
    v43 = *(unsigned int *)(v7 + 8 * v42 + 12);
    v44 = *(_DWORD *)(v7 + 8 * v43 + 28);
    if ( v44 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v43 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v39 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v7 + 8 * v43 + 28) = v39;
    }
    if ( v44 == 1 )
      goto LABEL_60;
    while ( 1 )
    {
      v38 = MEMORY[0x182769900](a1: v40, a2: v41, a3: v38, a4: v39, a5: &a7);
LABEL_60:
      v45 = *(unsigned int *)(v7 + 8 * v43 + 4);
      if ( (_DWORD)v45 != 0 )
      {
        v46 = *(unsigned int *)(v7 + 8 * v45 + 8);
        if ( (_DWORD)v46 != 0 && *(_DWORD *)(v7 + 8 * v46 + 16) != 0 )
        {
          i = v38;
          MEMORY[0x18208CCA0](a1: v40, a2: v41, a3: v51, a4: v39, a5: 1);
          v38 = i;
        }
      }
    }
  }
  if ( *(_DWORD *)(a3 + 16) == 0 )
    goto LABEL_67;
  v54 = *(_DWORD *)(a3 + 16);
  v9 = v7 + 376614024;
  for ( i = v7 + 376614024; ; v9 = i )
  {
    result = MEMORY[0x1853F1A20](a1, a2, a3: v9);
    if ( result == v7 )
      break;
    v12 = v54;
    v52 = (_DWORD *)result;
    v13 = *(unsigned int *)(v7 + 8LL * v54 + 12);
    v14 = v7 + 8LL * v54;
    if ( (_DWORD)v13 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
      goto LABEL_37;
    v15 = *(_QWORD *)(v8 + 64);
    a2 = *(_QWORD *)(v7 + 8 * v13 + 16);
    if ( a2 != 0 )
    {
      if ( a2 == v15 )
      {
        v32 = *(_DWORD *)(v7 + 8 * v13 + 28) + 1;
        if ( v32 >= 0 )
        {
          *(_DWORD *)(v7 + 8 * v13 + 28) = v32;
          v51 = v14;
          goto LABEL_10;
        }
      }
LABEL_37:
      v51 = v14;
      MEMORY[0x18208CC20](a1: v11, a2, a3: v14);
      goto LABEL_10;
    }
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v13 + 16), 0, v15) != 0 )
      goto LABEL_37;
    v51 = v14;
LABEL_10:
    v16 = (__int64)v52;
    v17 = *v52 >> 3;
    if ( *(__int16 *)(v7 + 8 * v17 + 62) < 4
      || *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v17 + 16) + 24) != 67162 )
    {
      v38 = MEMORY[0x18276A220](a1: v11, a2, a3: v52, a4: v12, a5: v7 + 35800544);
      v42 = v54;
      goto LABEL_56;
    }
    v18 = v55;
    v19 = *(unsigned int *)(v55 + 12);
    if ( (_DWORD)v19 == 0 )
      goto LABEL_68;
    v20 = *(unsigned int *)(v7 + 8 * v19 + 8);
    v21 = v52[7] & (unsigned int)(*(_DWORD *)(v7 + 8 * v19 + 8) - 1);
    if ( (unsigned int)v20 <= (unsigned int)v21 )
    {
      v56 = v52[7] & (*(_DWORD *)(v7 + 8 * v19 + 8) - 1);
      v42 = v54;
      v38 = MEMORY[0x18276CFE0](a1: v11, a2, a3: v56, a4: v20, a5: (unsigned int)v20);
      goto LABEL_56;
    }
    v22 = v7 + 8 * v19;
    v23 = *(unsigned int *)(v22 + 4 * v21 + 12);
    v24 = v7 + 8 * v23;
    if ( (_DWORD)v23 != 0 )
    {
      v25 = (_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v23 + 24));
      if ( (_DWORD *)v24 == v52 )
      {
        a2 = (unsigned __int64)v25;
        v25 = (_DWORD *)v24;
LABEL_31:
        v31 = (a2 - v7) >> 3;
        if ( v24 == v16 )
        {
          *(_DWORD *)(v22 + 4 * v21 + 12) = v31;
          a2 = *(unsigned int *)v22;
          if ( (a2 & 2) != 0 )
          {
            v33 = v22;
            if ( (a2 & 1) != 0 )
            {
              a2 = v22 - *(_QWORD *)(v22 - 8);
              v37 = (unsigned __int64)(4 * v21 + 12) >> 9;
              if ( *(_BYTE *)(a2 + v37 + 48) != 0 )
                *(_BYTE *)(a2 + v37 + 48) = 0;
            }
            else
            {
              v34 = v22 & 0xFFFFFFFFFFF80000LL;
              a2 = (v33 & 0xFFFFFFFFFFF80000LL) + 2112;
              v35 = (v33 - a2) >> 9;
              if ( *(_BYTE *)(v34 + v35 + 56) != 0 )
                *(_BYTE *)(v34 + v35 + 56) = 0;
            }
          }
        }
        else
        {
          if ( v24 == v7 )
          {
            v47 = (unsigned int)v21;
            v42 = v54;
            v38 = MEMORY[0x18276BEE0](a1: v31, a2, a3: v47, a4: v25);
            goto LABEL_56;
          }
          *(_DWORD *)(v24 + 24) = v31;
          if ( (*(_DWORD *)v24 & 2) != 0 )
          {
            a2 = v24 & 0xFFFFFFFFFFF80000LL;
            v36 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v36) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v36) >> 9) + 0x38) = 0;
          }
        }
        *(_DWORD *)(v16 + 20) = 0;
        --*(_DWORD *)(v18 + 36);
        v50 = v25;
      }
      else
      {
        while ( v25 != (_DWORD *)v7 )
        {
          a2 = v7 + 8LL * (unsigned int)v25[6];
          if ( v25 == (_DWORD *)v16 )
            goto LABEL_31;
          if ( *(int *)(v8 + 16) <= 0 )
          {
            v16 = MEMORY[0x18277F280](a1: v11, a2);
            v24 = (unsigned __int64)v26;
            v25 = (_DWORD *)a2;
          }
          else
          {
            v24 = (unsigned __int64)v25;
            v25 = (_DWORD *)(v7 + 8LL * (unsigned int)v25[6]);
          }
        }
        v50 = v25;
      }
    }
    else
    {
      v50 = (_DWORD *)(v7 + 8 * v23);
    }
    v49 = v24;
    v27 = v54;
    v28 = *(unsigned int *)(v7 + 8LL * v54 + 12);
    a1 = *(unsigned int *)(v7 + 8 * v28 + 28);
    if ( (_DWORD)a1 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v28 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v28 + 28) = a1 - 1;
    }
    if ( (_DWORD)a1 == 1 )
    {
      v29 = *(unsigned int *)(v7 + 8 * v28 + 4);
      if ( (_DWORD)v29 != 0 )
      {
        v30 = *(unsigned int *)(v7 + 8 * v29 + 8);
        if ( (_DWORD)v30 != 0 && *(_DWORD *)(v7 + 8 * v30 + 16) != 0 )
        {
          v56 = v21;
          MEMORY[0x18208CCA0](a1, a2, a3: v51, a4: v27, a5: 1);
          LODWORD(v21) = v56;
          v27 = v54;
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v56 = v21;
      MEMORY[0x18277F280](a1, a2, a3: v50, a4: v27, a5: v49);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
