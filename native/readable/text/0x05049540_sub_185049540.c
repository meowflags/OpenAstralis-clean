// sub_5049540
// rva 0x05049540  size 1202  section .text  group text
// window base 0x185049540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_5049540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+10h] [rbp-58h]
  __int64 v43; // [rsp+18h] [rbp-50h]
  _DWORD *v44; // [rsp+20h] [rbp-48h]
  __int64 v45; // [rsp+28h] [rbp-40h]
  __int64 v46; // [rsp+30h] [rbp-38h]
  int v47; // [rsp+38h] [rbp-30h]
  int v48; // [rsp+3Ch] [rbp-2Ch]
  __int64 v49; // [rsp+40h] [rbp-28h]
  int v50; // [rsp+4Ch] [rbp-1Ch]
  int v51; // [rsp+50h] [rbp-18h]
  int v52; // [rsp+54h] [rbp-14h]
  __int64 v53; // [rsp+60h] [rbp-8h]

  v46 = a3;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
  {
    v52 = a5;
    v29 = sub_1EB84E0();
    if ( v48 == 0 )
    {
      v42 = v29;
      v32 = v44;
      goto LABEL_73;
    }
    v32 = v44;
    v33 = *(unsigned int *)((char *)v44 + v49);
    v34 = *(_DWORD *)(v8 + 8 * v33 + 28);
    if ( v34 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v33 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v33 + 28) = v34 - 1;
    }
    if ( v34 == 1 )
      goto LABEL_64;
    v53 = v7;
    v50 = v51;
    v45 = v29;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(a3 + 102) != 0 )
  {
    v52 = a5;
    goto LABEL_4;
  }
  v10 = *(unsigned __int8 *)(a3 + 102);
  *(_BYTE *)(a3 + 102) = 1;
  if ( (MEMORY[0xe9691f0]/* 0xe9691f0 */ & v10) != 0 )
  {
    v52 = a5;
    goto LABEL_4;
  }
  v11 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v11 != 0 )
  {
    v23 = *(unsigned int *)(v8 + 8 * v11 + 72);
    v24 = (_DWORD)v23 != 0 ? v8 + 8 * v23 : v8 + 8 * v11;
    if ( v24 == a3 )
    {
      v52 = a5;
      goto LABEL_4;
    }
  }
  v12 = *(unsigned int *)(a3 + 136);
  if ( ((_DWORD)v12 == 4 || (_DWORD)v12 == 7)
    && (_DWORD)v12 == __sync_val_compare_and_swap((volatile signed __int32 *)(a3 + 136), v12, 9) )
  {
    v51 = v12;
    if ( (_DWORD)a5 != 0 )
    {
      v52 = a5;
      sub_5045960(a1, a2, a3, a4: v12, a5, a6, a7: v41);
    }
    else
    {
      v52 = 0;
      sub_50471A0(a1, a2, a3, a4: v12, a5, a6, a7: v41);
    }
    if ( *(int *)(v9 + 16) <= 0 )
      goto LABEL_57;
    return;
  }
  v51 = v12;
  v52 = a5;
  if ( (_DWORD)v12 != 5 && v51 != 8 )
  {
LABEL_4:
    if ( *(int *)(v9 + 16) > 0 )
      return;
LABEL_57:
    sub_277F280();
    return;
  }
  sub_635F240();
  v15 = v46;
  v16 = *(unsigned int *)(v46 + 28);
  v17 = v8 + 8 * v16;
  if ( (_DWORD)v16 == 0 )
  {
    v40 = sub_276BEE0(a1: v13, a2: v14, a3: v46, a4: v17);
    v53 = v7;
    v50 = v51;
    v45 = v40;
    while ( 1 )
    {
LABEL_63:
      sub_6360580();
      v29 = sub_2769900(a1: v36, a2: v37, a3: v45, a4: v35, a5: &a7);
LABEL_64:
      v38 = *(unsigned int *)(v8 + 8 * v33 + 4);
      if ( (_DWORD)v38 != 0 )
      {
        v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
        if ( (_DWORD)v39 != 0 )
        {
          if ( *(_DWORD *)(v8 + 8 * v39 + 16) != 0 )
          {
            v42 = v29;
LABEL_73:
            sub_208CCA0(a1: v30, a2: v31, a3: v32);
            v53 = v7;
            v50 = v51;
            v45 = v42;
          }
          else
          {
            v53 = v7;
            v50 = v51;
            v45 = v29;
          }
        }
        else
        {
          v53 = v7;
          v50 = v51;
          v45 = v29;
        }
      }
      else
      {
        v53 = v7;
        v50 = v51;
        v45 = v29;
      }
    }
  }
  v44 = (_DWORD *)(v8 + 8 * v16);
  v18 = *(_DWORD *)(v8 + 8LL * (*v44 >> 3) + 48);
  if ( v18 == 0 )
    goto LABEL_52;
  v14 = *(unsigned int *)(v17 + v18);
  if ( (_DWORD)v14 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_52;
  v13 = *(_QWORD *)(v9 + 64);
  v19 = *(_QWORD *)(v8 + 8 * v14 + 16);
  if ( v19 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v14 + 16), 0, v13) == 0 )
    {
      v49 = v18;
      v48 = v18;
      goto LABEL_19;
    }
    goto LABEL_52;
  }
  if ( v19 != v13 || (v27 = *(_DWORD *)(v8 + 8 * v14 + 28) + 1) < 0 )
  {
LABEL_52:
    v49 = v18;
    v48 = v18;
    sub_208CC20(a1: v13, a2: v14, a3: v17);
    v15 = v46;
    goto LABEL_19;
  }
  *(_DWORD *)(v8 + 8 * v14 + 28) = v27;
  v49 = v18;
  v48 = v18;
LABEL_19:
  v20 = *(unsigned int *)(v15 + 116);
  v43 = v8 + 8 * v20;
  if ( (_DWORD)v20 != 0 )
  {
    v17 = *(unsigned int *)(v15 + 136);
    v51 = v17;
    if ( (_DWORD)v17 == 5 || (_DWORD)v17 == 8 )
    {
      sub_611AAE0(a1: v13, a2: v14, a3: v8 + 375388656, a4: v17, a5: v8 + 8 * v20);
      v53 = v7;
      v47 = v51;
    }
    else
    {
      v47 = v17;
    }
  }
  else
  {
    v53 = v7;
    v47 = v51;
  }
  if ( v48 == 0 )
  {
    v28 = 0xFFFFFFFFLL;
    goto LABEL_56;
  }
  v21 = *(unsigned int *)((char *)v44 + v49);
  v22 = *(_DWORD *)(v8 + 8 * v21 + 28);
  if ( v22 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v21 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v21 + 28) = v22 - 1;
  }
  if ( v22 == 1 )
  {
    v25 = *(unsigned int *)(v8 + 8 * v21 + 4);
    if ( (_DWORD)v25 != 0 )
    {
      v26 = *(unsigned int *)(v8 + 8 * v25 + 8);
      if ( (_DWORD)v26 != 0 && *(_DWORD *)(v8 + 8 * v26 + 16) != 0 )
      {
        v28 = 1;
LABEL_56:
        sub_208CCA0(a1: v13, a2: v14, a3: v44, a4: v17, a5: v28);
      }
    }
  }
  sub_6360580();
  if ( *(int *)(v9 + 16) <= 0 )
    goto LABEL_57;
}
