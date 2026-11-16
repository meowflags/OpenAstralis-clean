// sub_4F23260
// rva 0x04f23260  size 1381  section .text  group text
// window base 0x184f23260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_4F23260(
        signed __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebp
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r8
  int v39; // ebx
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // r8
  _DWORD v43[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+10h] [rbp-58h]
  signed __int64 v45; // [rsp+20h] [rbp-48h]
  __int64 v46; // [rsp+28h] [rbp-40h]
  unsigned __int64 v47; // [rsp+30h] [rbp-38h]
  unsigned __int64 v48; // [rsp+38h] [rbp-30h]
  __int64 v49; // [rsp+40h] [rbp-28h]
  unsigned int v50; // [rsp+48h] [rbp-20h]
  unsigned int v51; // [rsp+4Ch] [rbp-1Ch]
  __int64 v52; // [rsp+50h] [rbp-18h]
  int v53; // [rsp+5Ch] [rbp-Ch]
  __int64 v54; // [rsp+60h] [rbp-8h]

  v49 = a3;
  if ( (unsigned __int64)v43 <= *(_QWORD *)(v9 + 8) )
  {
    v34 = sub_1EB84E0();
    v54 = v7;
    v47 = v45;
    if ( v53 != 0 )
    {
      v31 = v49;
      v32 = *(unsigned int *)(v49 + v52);
      v33 = *(_DWORD *)(v8 + 8 * v32 + 28);
      if ( v33 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v32 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v32 + 28) = v33 - 1;
      }
      if ( v33 == 1 )
        goto LABEL_47;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = sub_2769900(a1: v36, a2: v31, a3: v34, a4: v35, a5: &a7);
LABEL_47:
          v37 = *(unsigned int *)(v8 + 8 * v32 + 4);
          if ( (_DWORD)v37 != 0 )
          {
            v38 = *(unsigned int *)(v8 + 8 * v37 + 8);
            if ( (_DWORD)v38 != 0 )
            {
              v39 = *(_DWORD *)(v8 + 8 * v38 + 16);
              if ( v39 != 0 )
                break;
            }
          }
        }
        v41 = v31;
        v42 = v39 != 0;
        v46 = v34;
LABEL_55:
        sub_208CCA0(a1: v36, a2: v41, a3: v41, a4: v35, a5: v42);
        v34 = v46;
        v31 = v49;
      }
    }
    v42 = 0xFFFFFFFFLL;
    v46 = v34;
    v41 = v49;
    goto LABEL_55;
  }
  v10 = *(unsigned int *)(a3 + 20);
  v11 = v8 + 8 * v10;
  if ( (_DWORD)v10 != 0 )
    goto LABEL_3;
  v13 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  v53 = v13;
  v52 = v13;
  if ( v13 == 0 )
    goto LABEL_33;
  a2 = *(unsigned int *)(a3 + v13);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_33;
  a1 = *(_QWORD *)(v9 + 64);
  v14 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v14 != 0 )
  {
    if ( v14 == a1 )
    {
      v29 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1;
      if ( v29 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * a2 + 28) = v29;
        goto LABEL_11;
      }
    }
    goto LABEL_33;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) != 0 )
  {
LABEL_33:
    v48 = v11;
    sub_208CC20();
    a3 = v49;
  }
LABEL_11:
  v15 = *(unsigned int *)(a3 + 20);
  v16 = v8 + 8 * v15;
  if ( (_DWORD)v15 == 0 )
  {
    v19 = *(unsigned __int8 *)(a3 + 24);
    v20 = *(unsigned __int8 *)(a3 + 25);
    v21 = v8 + 8LL * *(unsigned int *)(a3 + 8);
    v22 = v8 + 8LL * *(unsigned int *)(a3 + 4);
    if ( *(_BYTE *)(v8 + 377132778) != 0 )
    {
      v48 = v8 + 8LL * *(unsigned int *)(a3 + 4);
      v47 = v21;
      v51 = v20;
      v50 = v19;
      v46 = v16;
      sub_15ACE20(a1, a2: a3, a3: v8 + 43272856, a4: v11);
      v22 = v48;
      v21 = v47;
      v16 = v46;
      a3 = v40;
      v20 = v51;
      v19 = v50;
    }
    v23 = *(_QWORD *)(v9 + 40);
    v24 = v23 + 64;
    if ( (unsigned __int64)(v23 + 64) > *(_QWORD *)(v9 + 32) )
    {
      v48 = v22;
      v47 = v21;
      v51 = v20;
      v50 = v19;
      v46 = v16;
      v23 = sub_1EAA920(a1: v23, a2: v24, a3: 43272856, a4: v11);
      v22 = v48;
      v21 = v47;
      v20 = v51;
      v19 = v50;
      v25 = v49;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v24;
      *(_DWORD *)v23 = 43272856;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v23 + 32) = 0;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 48) = 0;
      *(_QWORD *)(v23 + 56) = 0;
      v46 = v16;
      v25 = a3;
    }
    v45 = v23;
    v43[2] = 0;
    v44 = v25;
    v50 = v19;
    v51 = v20;
    v48 = v22;
    v47 = v21;
    sub_C81F820(a1: 1, a2: v19, a3: v23, a4: v20);
    a1 = v45;
    v26 = v49;
    *(_DWORD *)(v49 + 20) = (unsigned __int64)(v45 - v8) >> 3;
    __faststorefence();
    if ( (*(_DWORD *)v26 & 2) != 0 )
    {
      v11 = v26 & 0xFFFFFFFFFFF80000LL;
      v28 = (v26 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) = 0;
    }
    if ( *(_BYTE *)(v26 + 26) != 0 )
    {
      sub_5540460(a1, a2, a3: a1);
      v16 = v45;
    }
    else
    {
      v16 = a1;
    }
  }
  if ( v53 != 0 )
  {
    a3 = v49;
    v17 = *(unsigned int *)(v49 + v52);
    v18 = *(_DWORD *)(v8 + 8 * v17 + 28);
    if ( v18 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v17 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v17 + 28) = v18 - 1;
    }
    if ( v18 != 1 )
    {
      v11 = v16;
      goto LABEL_3;
    }
    v27 = *(unsigned int *)(v8 + 8 * v17 + 4);
    if ( (_DWORD)v27 == 0 )
    {
      v11 = v16;
      goto LABEL_3;
    }
    v11 = *(unsigned int *)(v8 + 8 * v27 + 8);
    if ( (_DWORD)v11 == 0 )
    {
      v11 = v16;
      goto LABEL_3;
    }
    if ( *(_DWORD *)(v8 + 8 * v11 + 16) == 0 )
    {
      v11 = v16;
      goto LABEL_3;
    }
    v30 = 1;
  }
  else
  {
    v30 = 0xFFFFFFFFLL;
  }
  v47 = v16;
  sub_208CCA0(a1, a2, a3: v49, a4: v11, a5: v30);
  v11 = v47;
  a3 = v49;
LABEL_3:
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4: v11);
  return v11;
}
