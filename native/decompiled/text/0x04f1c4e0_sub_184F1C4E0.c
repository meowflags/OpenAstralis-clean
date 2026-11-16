// sub_184F1C4E0
// rva 0x04f1c4e0  size 966  section .text  group text
// window base 0x184f1c4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_184F1C4E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  _DWORD *result; // rax
  __int64 v24; // rax
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
  int v45; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v46; // [rsp+8h] [rbp-20h]
  _DWORD *v47; // [rsp+10h] [rbp-18h]
  unsigned int v48; // [rsp+18h] [rbp-10h]
  unsigned int v49; // [rsp+1Ch] [rbp-Ch]
  __int64 v50; // [rsp+20h] [rbp-8h]

  v47 = a3;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v9 + 8) )
  {
    v48 = a5;
    MEMORY[0x181EB84E0]();
LABEL_59:
    v43 = v50;
    result = (_DWORD *)MEMORY[0x18276BEE0](a1: v15, a2: v16, a3: v17, a4: v49);
    if ( (_DWORD)v42 == 0 )
    {
      v44 = 0xFFFFFFFFLL;
      v46 = result;
      goto LABEL_62;
    }
    v29 = (__int64)v47;
    v30 = *(unsigned int *)((char *)v47 + v43);
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
      goto LABEL_44;
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
            goto LABEL_15;
          }
        }
        result = (_DWORD *)MEMORY[0x182771080]();
LABEL_54:
        v42 = *(unsigned int *)(v8 + 8 * v38 + 16);
        if ( (_DWORD)v42 != 0 )
        {
          v46 = result;
          v44 = (_DWORD)v42 != 0;
LABEL_62:
          MEMORY[0x18208CCA0](a1: v35, a2: v36, a3: v47, a4: v42, a5: v44);
          result = v46;
          v29 = (__int64)v47;
        }
      }
      else
      {
        if ( v34 >= 4 && *(_DWORD *)(v8 + 8 * v33 + 24) == 81613 )
        {
          *(_BYTE *)(v29 + 14) = 1;
          goto LABEL_15;
        }
        result = (_DWORD *)MEMORY[0x182769900](a1: v35, a2: v36, a3: result, a4: v33, a5: &a7);
LABEL_44:
        v37 = *(unsigned int *)(v8 + 8 * v30 + 4);
        if ( (_DWORD)v37 != 0 )
        {
          v38 = *(unsigned int *)(v8 + 8 * v37 + 8);
          if ( (_DWORD)v38 != 0 )
            goto LABEL_54;
        }
      }
    }
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_28;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_28;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 != 0 )
  {
    if ( v13 == v12 )
    {
      v27 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1;
      if ( v27 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * v11 + 28) = v27;
        v50 = (int)v10;
        v49 = v10;
        v48 = a5;
        goto LABEL_8;
      }
    }
    goto LABEL_28;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) != 0 )
  {
LABEL_28:
    v50 = (int)v10;
    v49 = v10;
    v48 = a5;
    MEMORY[0x18208CC20]();
    goto LABEL_8;
  }
  v50 = (int)v10;
  v49 = v10;
  v48 = a5;
LABEL_8:
  sub_184F1A6E0(a1: v13, a2: v12, a3: (__int64)v47, a4: v10, a5, a6, a7: v45);
  v17 = (__int64)v47;
  v18 = (unsigned int)v47[1];
  if ( (_DWORD)v18 == 0 )
    goto LABEL_59;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))(v7
                                                                   + *(_QWORD *)(v8
                                                                               + 8LL * (*(_DWORD *)(v8 + 8 * v18) >> 3)
                                                                               + 128)))(
    a1: v15,
    a2: v16,
    a3: v8 + 8 * v18,
    a4: v14,
    a5: v48);
  if ( v48 == 10 )
  {
    v17 = (__int64)v47;
    if ( *((_BYTE *)v47 + 13) == 0 )
      goto LABEL_10;
    v24 = (unsigned int)v47[1];
    if ( (_DWORD)v24 == 0 )
      goto LABEL_59;
    ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v24) >> 3) + 120)))(
      a1: v15,
      a2: v16,
      a3: v8 + 8 * v24);
  }
LABEL_10:
  v19 = v49;
  if ( v49 != 0 )
  {
    v20 = (__int64)v47;
    v21 = *(unsigned int *)((char *)v47 + v50);
    v22 = *(_DWORD *)(v8 + 8 * v21 + 28);
    if ( v22 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v21 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v19 = (unsigned int)(v22 - 1);
      *(_DWORD *)(v8 + 8 * v21 + 28) = v19;
    }
    if ( v22 != 1 )
    {
      result = (_DWORD *)v20;
      goto LABEL_15;
    }
    v25 = *(unsigned int *)(v8 + 8 * v21 + 4);
    if ( (_DWORD)v25 == 0 )
    {
      result = (_DWORD *)v20;
      goto LABEL_15;
    }
    v26 = *(unsigned int *)(v8 + 8 * v25 + 8);
    if ( (_DWORD)v26 == 0 )
    {
      result = (_DWORD *)v20;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v8 + 8 * v26 + 16) == 0 )
    {
      result = (_DWORD *)v20;
      goto LABEL_15;
    }
    v28 = 1;
  }
  else
  {
    v28 = 0xFFFFFFFFLL;
    v20 = (__int64)v47;
  }
  MEMORY[0x18208CCA0](a1: v15, a2: v16, a3: v20, a4: v19, a5: v28);
  result = v47;
LABEL_15:
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
