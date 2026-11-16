// sub_184F1C0E0
// rva 0x04f1c0e0  size 998  section .text  group text
// window base 0x184f1c0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_184F1C0E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  _DWORD *result; // rax
  __int64 v25; // r8
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int16 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rbx
  _DWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r8
  int v45; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v46; // [rsp+8h] [rbp-30h]
  __int64 v47; // [rsp+10h] [rbp-28h]
  _DWORD *v48; // [rsp+18h] [rbp-20h]
  unsigned int v49; // [rsp+24h] [rbp-14h]
  unsigned int v50; // [rsp+28h] [rbp-10h]
  unsigned int v51; // [rsp+2Ch] [rbp-Ch]
  __int64 v52; // [rsp+30h] [rbp-8h]

  v48 = a3;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v9 + 8) )
  {
    v50 = a1;
    v49 = a6;
    v47 = a5;
    MEMORY[0x181EB84E0]();
LABEL_58:
    v43 = v52;
    result = (_DWORD *)MEMORY[0x18276BEE0](a1: v15, a2: v16, a3: v17, a4: v51);
    if ( (_DWORD)v42 == 0 )
    {
      v44 = 0xFFFFFFFFLL;
      v46 = result;
      goto LABEL_61;
    }
    v29 = (__int64)v48;
    v30 = *(unsigned int *)((char *)v48 + v43);
    v31 = *(_DWORD *)(v8 + 8 * v30 + 28);
    if ( v31 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v30 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v30 + 28) = v31 - 1;
    }
    if ( v31 == 1 )
      goto LABEL_43;
    while ( 1 )
    {
      v32 = *result >> 3;
      v33 = *(unsigned int *)(v8 + 8 * v32 + 16);
      v34 = *(_WORD *)(v8 + 8 * v32 + 62);
      if ( v34 >= 5 && *(_DWORD *)(v8 + 8 * v33 + 28) == 87995 )
      {
        v39 = *(unsigned int *)(v9 + 72);
        if ( (_DWORD)v39 != 0 )
        {
          v40 = *(unsigned int *)(v8 + 8 * v39 + 72);
          v41 = (_DWORD *)((_DWORD)v40 != 0 ? v8 + 8 * v40 : v8 + 8 * v39);
          if ( v41 != (_DWORD *)v8 )
          {
            v46 = result;
            ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*v41 >> 3) + 248)))(
              a1: v35,
              a2: v36,
              a3: v41);
            result = v46;
            goto LABEL_17;
          }
        }
        result = (_DWORD *)MEMORY[0x182771080]();
LABEL_53:
        v42 = *(unsigned int *)(v8 + 8 * v38 + 16);
        if ( (_DWORD)v42 != 0 )
        {
          v46 = result;
          v44 = (_DWORD)v42 != 0;
LABEL_61:
          MEMORY[0x18208CCA0](a1: v35, a2: v36, a3: v48, a4: v42, a5: v44);
          result = v46;
          v29 = (__int64)v48;
        }
      }
      else
      {
        if ( v34 >= 4 && *(_DWORD *)(v8 + 8 * v33 + 24) == 81613 )
        {
          *(_BYTE *)(v29 + 14) = 1;
          goto LABEL_17;
        }
        result = (_DWORD *)MEMORY[0x182769900](a1: v35, a2: v36, a3: result, a4: v33, a5: &a7);
LABEL_43:
        v37 = *(unsigned int *)(v8 + 8 * v30 + 4);
        if ( (_DWORD)v37 != 0 )
        {
          v38 = *(unsigned int *)(v8 + 8 * v37 + 8);
          if ( (_DWORD)v38 != 0 )
            goto LABEL_53;
        }
      }
    }
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_27;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_27;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v52 = (int)v10;
      v51 = v10;
      v50 = a1;
      v49 = a6;
      v47 = a5;
      goto LABEL_8;
    }
    goto LABEL_27;
  }
  if ( v13 != v12 || (v27 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_27:
    v52 = (int)v10;
    v51 = v10;
    v50 = a1;
    v49 = a6;
    v47 = a5;
    MEMORY[0x18208CC20]();
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v27;
  v52 = (int)v10;
  v51 = v10;
  v50 = a1;
  v49 = a6;
  v47 = a5;
LABEL_8:
  sub_184F1A6E0(a1, a2: v12, a3: (__int64)v48, a4: v10, a5, a6, a7: v45);
  v17 = (__int64)v48;
  v18 = (unsigned int)v48[1];
  if ( (_DWORD)v18 == 0 )
    goto LABEL_58;
  ((void (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(v7
                                                                           + *(_QWORD *)(v8
                                                                                       + 8LL
                                                                                       * (*(_DWORD *)(v8 + 8 * v18) >> 3)
                                                                                       + 144)))(
    a1: v50,
    a2: v16,
    a3: v8 + 8 * v18,
    a4: v14,
    a5: v47,
    a6: v49);
  v17 = (__int64)v48;
  if ( *((_BYTE *)v48 + 13) != 0 )
  {
    v19 = (unsigned int)v48[1];
    if ( (_DWORD)v19 != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                      + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v19) >> 3) + 120)))(
        a1: v15,
        a2: v16,
        a3: v8 + 8 * v19);
      goto LABEL_12;
    }
    goto LABEL_58;
  }
LABEL_12:
  v20 = v51;
  if ( v51 != 0 )
  {
    v21 = (__int64)v48;
    v22 = *(unsigned int *)((char *)v48 + v52);
    v23 = *(_DWORD *)(v8 + 8 * v22 + 28);
    if ( v23 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v22 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v20 = (unsigned int)(v23 - 1);
      *(_DWORD *)(v8 + 8 * v22 + 28) = v20;
    }
    if ( v23 != 1 )
    {
      result = (_DWORD *)v21;
      goto LABEL_17;
    }
    v25 = *(unsigned int *)(v8 + 8 * v22 + 4);
    if ( (_DWORD)v25 == 0 )
    {
      result = (_DWORD *)v21;
      goto LABEL_17;
    }
    v26 = *(unsigned int *)(v8 + 8 * v25 + 8);
    if ( (_DWORD)v26 == 0 )
    {
      result = (_DWORD *)v21;
      goto LABEL_17;
    }
    if ( *(_DWORD *)(v8 + 8 * v26 + 16) == 0 )
    {
      result = (_DWORD *)v21;
      goto LABEL_17;
    }
    v28 = 1;
  }
  else
  {
    v28 = 0xFFFFFFFFLL;
    v21 = (__int64)v48;
  }
  MEMORY[0x18208CCA0](a1: v15, a2: v16, a3: v21, a4: v20, a5: v28);
  result = v48;
LABEL_17:
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
