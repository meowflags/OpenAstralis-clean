// sub_4F1C8C0
// rva 0x04f1c8c0  size 1186  section .text  group text
// window base 0x184f1c8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F1C8C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  _DWORD *result; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int16 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rbx
  _DWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r8
  int v48; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v49; // [rsp+10h] [rbp-28h]
  __int64 v50; // [rsp+18h] [rbp-20h]
  _DWORD *v51; // [rsp+20h] [rbp-18h]
  unsigned int v52; // [rsp+2Ch] [rbp-Ch]
  __int64 v53; // [rsp+30h] [rbp-8h]

  v51 = a3;
  v50 = a5;
  if ( (unsigned __int64)&v48 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_62:
    v46 = v53;
    result = (_DWORD *)sub_276BEE0(a1: v15, a2: v16, a3: v17, a4: v52);
    if ( (_DWORD)v45 == 0 )
    {
      v47 = 0xFFFFFFFFLL;
      v49 = result;
      goto LABEL_66;
    }
    v32 = (__int64)v51;
    v33 = *(unsigned int *)((char *)v51 + v46);
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
      goto LABEL_47;
    while ( 1 )
    {
      v35 = *result >> 3;
      v36 = *(unsigned int *)(v8 + 8 * v35 + 16);
      v37 = *(_WORD *)(v8 + 8 * v35 + 62);
      if ( v37 >= 5 && *(_DWORD *)(v8 + 8 * v36 + 28) == 87995 )
      {
        v42 = *(unsigned int *)(v9 + 72);
        if ( (_DWORD)v42 != 0 )
        {
          v43 = *(unsigned int *)(v8 + 8 * v42 + 72);
          v44 = (_DWORD *)((_DWORD)v43 != 0 ? v8 + 8 * v43 : v8 + 8 * v42);
          if ( v44 != (_DWORD *)v8 )
          {
            v49 = result;
            ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*v44 >> 3) + 248)))(
              a1: v38,
              a2: v39,
              a3: v44);
            result = v49;
            goto LABEL_19;
          }
        }
        result = (_DWORD *)sub_2771080();
LABEL_57:
        v45 = *(unsigned int *)(v8 + 8 * v41 + 16);
        if ( (_DWORD)v45 != 0 )
        {
          v49 = result;
          v47 = (_DWORD)v45 != 0;
LABEL_66:
          sub_208CCA0(a1: v38, a2: v39, a3: v51, a4: v45, a5: v47);
          result = v49;
          v32 = (__int64)v51;
        }
      }
      else
      {
        if ( v37 >= 4 && *(_DWORD *)(v8 + 8 * v36 + 24) == 81613 )
        {
          *(_BYTE *)(v32 + 14) = 1;
          goto LABEL_19;
        }
        result = (_DWORD *)sub_2769900(a1: v38, a2: v39, a3: result, a4: v36, a5: &a7);
LABEL_47:
        v40 = *(unsigned int *)(v8 + 8 * v33 + 4);
        if ( (_DWORD)v40 != 0 )
        {
          v41 = *(unsigned int *)(v8 + 8 * v40 + 8);
          if ( (_DWORD)v41 != 0 )
            goto LABEL_57;
        }
      }
    }
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_31;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_31;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 != 0 )
  {
    if ( v13 == v12 )
    {
      v30 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1;
      if ( v30 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * v11 + 28) = v30;
        v53 = (int)v10;
        v52 = v10;
        goto LABEL_8;
      }
    }
    goto LABEL_31;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) != 0 )
  {
LABEL_31:
    v53 = (int)v10;
    v52 = v10;
    sub_208CC20();
    goto LABEL_8;
  }
  v53 = (int)v10;
  v52 = v10;
LABEL_8:
  sub_4F1A6E0(a1: v13, a2: v12, a3: (__int64)v51, a4: v10, a5, a6, a7: v48);
  v17 = (__int64)v51;
  v18 = (unsigned int)v51[6];
  if ( (_DWORD)v18 == 0 )
    goto LABEL_62;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                    + *(_QWORD *)(v8
                                                                                + 8LL * (*(_DWORD *)(v8 + 8 * v18) >> 3)
                                                                                + 184)))(
    a1: v15,
    a2: v16,
    a3: v8 + 8 * v18,
    a4: v14,
    a5: v50);
  v17 = (__int64)v51;
  v19 = (unsigned int)v51[6];
  if ( (_DWORD)v19 == 0 )
    goto LABEL_62;
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v19) >> 3) + 232)))(
    a1: v15,
    a2: v16,
    a3: v8 + 8 * v19);
  v17 = (__int64)v51;
  v20 = (unsigned int)v51[7];
  if ( (_DWORD)v20 == 0 )
    goto LABEL_62;
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v20) >> 3) + 264)))(
    a1: v15,
    a2: v16,
    a3: v8 + 8 * v20);
  v17 = (__int64)v51;
  if ( *((_BYTE *)v51 + 13) != 0 )
  {
    if ( v50 != v8 )
    {
      if ( (int)sub_4FF3F80(a1: v15, a2: v16, a3: v50, a4: v21, a5: 10) < 0 )
        goto LABEL_14;
      v17 = (__int64)v51;
      v29 = (unsigned int)v51[1];
      if ( (_DWORD)v29 != 0 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                        + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v29) >> 3) + 120)))(
          a1: v15,
          a2: v16,
          a3: v8 + 8 * v29);
        goto LABEL_14;
      }
    }
    goto LABEL_62;
  }
LABEL_14:
  v22 = v52;
  if ( v52 != 0 )
  {
    v23 = (__int64)v51;
    v24 = *(unsigned int *)((char *)v51 + v53);
    v25 = *(_DWORD *)(v8 + 8 * v24 + 28);
    if ( v25 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v24 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v22 = (unsigned int)(v25 - 1);
      *(_DWORD *)(v8 + 8 * v24 + 28) = v22;
    }
    if ( v25 != 1 )
    {
      result = (_DWORD *)v23;
      goto LABEL_19;
    }
    v27 = *(unsigned int *)(v8 + 8 * v24 + 4);
    if ( (_DWORD)v27 == 0 )
    {
      result = (_DWORD *)v23;
      goto LABEL_19;
    }
    v28 = *(unsigned int *)(v8 + 8 * v27 + 8);
    if ( (_DWORD)v28 == 0 )
    {
      result = (_DWORD *)v23;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v8 + 8 * v28 + 16) == 0 )
    {
      result = (_DWORD *)v23;
      goto LABEL_19;
    }
    v31 = 1;
  }
  else
  {
    v31 = 0xFFFFFFFFLL;
    v23 = (__int64)v51;
  }
  sub_208CCA0(a1: v15, a2: v16, a3: v23, a4: v22, a5: v31);
  result = v51;
LABEL_19:
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
