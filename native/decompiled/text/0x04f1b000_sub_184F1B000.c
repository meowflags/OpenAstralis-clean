// sub_184F1B000
// rva 0x04f1b000  size 1102  section .text  group text
// window base 0x184f1b000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_184F1B000(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  _DWORD *result; // rax
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int16 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rbx
  _DWORD *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  int v46; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v47; // [rsp+8h] [rbp-20h]
  _DWORD *v48; // [rsp+10h] [rbp-18h]
  unsigned int v49; // [rsp+1Ch] [rbp-Ch]
  __int64 v50; // [rsp+20h] [rbp-8h]

  v48 = a3;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_60:
    v44 = v50;
    result = (_DWORD *)MEMORY[0x18276BEE0](a1: v14, a2: v15, a3: v16, a4: v49);
    if ( (_DWORD)v43 == 0 )
    {
      v45 = 0xFFFFFFFFLL;
      v47 = result;
      goto LABEL_65;
    }
    v30 = (__int64)v48;
    v31 = *(unsigned int *)((char *)v48 + v44);
    v32 = *(_DWORD *)(v8 + 8 * v31 + 28);
    if ( v32 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v31 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v31 + 28) = v32 - 1;
    }
    if ( v32 == 1 )
      goto LABEL_45;
    while ( 1 )
    {
      v33 = *result >> 3;
      v34 = *(unsigned int *)(v8 + 8 * v33 + 16);
      v35 = *(_WORD *)(v8 + 8 * v33 + 62);
      if ( v35 >= 5 && *(_DWORD *)(v8 + 8 * v34 + 28) == 87995 )
      {
        v40 = *(unsigned int *)(v9 + 72);
        if ( (_DWORD)v40 != 0 )
        {
          v41 = *(unsigned int *)(v8 + 8 * v40 + 72);
          v42 = (_DWORD *)((_DWORD)v41 != 0 ? v8 + 8 * v41 : v8 + 8 * v40);
          if ( v42 != (_DWORD *)v8 )
          {
            v47 = result;
            ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*v42 >> 3) + 248)))(
              a1: v36,
              a2: v37,
              a3: v42);
            result = v47;
            goto LABEL_19;
          }
        }
        result = (_DWORD *)MEMORY[0x182771080]();
LABEL_55:
        v43 = *(unsigned int *)(v8 + 8 * v39 + 16);
        if ( (_DWORD)v43 != 0 )
        {
          v47 = result;
          v45 = (_DWORD)v43 != 0;
LABEL_65:
          MEMORY[0x18208CCA0](a1: v36, a2: v37, a3: v48, a4: v43, a5: v45);
          result = v47;
          v30 = (__int64)v48;
        }
      }
      else
      {
        if ( v35 >= 4 && *(_DWORD *)(v8 + 8 * v34 + 24) == 81613 )
        {
          *(_BYTE *)(v30 + 14) = 1;
          goto LABEL_19;
        }
        result = (_DWORD *)MEMORY[0x182769900](a1: v36, a2: v37, a3: result, a4: v34, a5: &a7);
LABEL_45:
        v38 = *(unsigned int *)(v8 + 8 * v31 + 4);
        if ( (_DWORD)v38 != 0 )
        {
          v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
          if ( (_DWORD)v39 != 0 )
            goto LABEL_55;
        }
      }
    }
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_29;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_29;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 != 0 )
  {
    if ( v13 == v12 )
    {
      v28 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1;
      if ( v28 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * v11 + 28) = v28;
        v50 = (int)v10;
        v49 = v10;
        goto LABEL_8;
      }
    }
    goto LABEL_29;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) != 0 )
  {
LABEL_29:
    v50 = (int)v10;
    v49 = v10;
    MEMORY[0x18208CC20]();
    goto LABEL_8;
  }
  v50 = (int)v10;
  v49 = v10;
LABEL_8:
  sub_184F1A6E0(a1: v13, a2: v12, a3: (__int64)v48, a4: v10, a5, a6, a7: v46);
  v16 = (__int64)v48;
  v17 = (unsigned int)v48[6];
  if ( (_DWORD)v17 == 0 )
    goto LABEL_60;
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v17) >> 3) + 240)))(
    a1: v14,
    a2: v15,
    a3: v8 + 8 * v17);
  v16 = (__int64)v48;
  v18 = (unsigned int)v48[6];
  if ( (_DWORD)v18 == 0 )
    goto LABEL_60;
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v18) >> 3) + 232)))(
    a1: v14,
    a2: v15,
    a3: v8 + 8 * v18);
  v16 = (__int64)v48;
  v19 = (unsigned int)v48[7];
  if ( (_DWORD)v19 == 0 )
    goto LABEL_60;
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v19) >> 3) + 264)))(
    a1: v14,
    a2: v15,
    a3: v8 + 8 * v19);
  v16 = (__int64)v48;
  if ( *((_BYTE *)v48 + 13) != 0 )
  {
    v20 = (unsigned int)v48[1];
    if ( (_DWORD)v20 != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                      + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v20) >> 3) + 120)))(
        a1: v14,
        a2: v15,
        a3: v8 + 8 * v20);
      goto LABEL_14;
    }
    goto LABEL_60;
  }
LABEL_14:
  v21 = v49;
  if ( v49 != 0 )
  {
    v22 = (__int64)v48;
    v23 = *(unsigned int *)((char *)v48 + v50);
    v24 = *(_DWORD *)(v8 + 8 * v23 + 28);
    if ( v24 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v23 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v21 = (unsigned int)(v24 - 1);
      *(_DWORD *)(v8 + 8 * v23 + 28) = v21;
    }
    if ( v24 != 1 )
    {
      result = (_DWORD *)v22;
      goto LABEL_19;
    }
    v26 = *(unsigned int *)(v8 + 8 * v23 + 4);
    if ( (_DWORD)v26 == 0 )
    {
      result = (_DWORD *)v22;
      goto LABEL_19;
    }
    v27 = *(unsigned int *)(v8 + 8 * v26 + 8);
    if ( (_DWORD)v27 == 0 )
    {
      result = (_DWORD *)v22;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v8 + 8 * v27 + 16) == 0 )
    {
      result = (_DWORD *)v22;
      goto LABEL_19;
    }
    v29 = 1;
  }
  else
  {
    v29 = 0xFFFFFFFFLL;
    v22 = (__int64)v48;
  }
  MEMORY[0x18208CCA0](a1: v14, a2: v15, a3: v22, a4: v21, a5: v29);
  result = v48;
LABEL_19:
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
