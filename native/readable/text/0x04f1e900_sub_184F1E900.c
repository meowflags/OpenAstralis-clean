// sub_4F1E900
// rva 0x04f1e900  size 1130  section .text  group text
// window base 0x184f1e900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F1E900(
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
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  _DWORD *result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int16 v33; // dx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int16 v40; // dx
  __int64 v41; // r8
  int v42; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v43; // [rsp+10h] [rbp-38h]
  _DWORD *v44; // [rsp+18h] [rbp-30h]
  __int64 v45; // [rsp+20h] [rbp-28h]
  __int64 v46; // [rsp+28h] [rbp-20h]
  __int64 v47; // [rsp+30h] [rbp-18h]
  int v48; // [rsp+3Ch] [rbp-Ch]
  __int64 v49; // [rsp+40h] [rbp-8h]

  v46 = a3;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_60;
  }
  v10 = *(unsigned int *)(a3 + 8);
  v11 = v8 + 8 * v10;
  v45 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_60:
    sub_2771080();
    goto LABEL_61;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  v48 = v12;
  v47 = v12;
  if ( v12 == 0 )
    goto LABEL_25;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_25;
  a1 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
      goto LABEL_8;
    goto LABEL_25;
  }
  if ( v13 != a1 || (v27 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_25:
    sub_208CC20(a1, a2, a3: v11);
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v27;
LABEL_8:
  sub_4F1DE80(a1, a2, a3: v46, a4: v11, a5: v13, a6, a7: v42);
  v16 = *(unsigned int *)(v46 + 12);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_61:
    v31 = v47;
    v21 = v48;
    result = (_DWORD *)sub_276BEE0();
    goto LABEL_36;
  }
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                                          + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v16) >> 3) + 184)))(
                       a1: v14,
                       a2: v15,
                       a3: v8 + 8 * v16,
                       a4: v8 + 57135224,
                       a5: v8 + 57135224);
  if ( *(_BYTE *)(v46 + 24) == 0 )
  {
    v44 = (_DWORD *)v8;
    v21 = v48;
    goto LABEL_12;
  }
  v20 = *(unsigned int *)(v46 + 12);
  if ( (_DWORD)v20 != 0 )
  {
    result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                                          + *(_QWORD *)(v8
                                                                                      + 8LL
                                                                                      * (*(_DWORD *)(v8 + 8 * v20) >> 3)
                                                                                      + 168)))(
                         a1: v18,
                         a2: v19,
                         a3: v8 + 8 * v20);
    v44 = (_DWORD *)v8;
    v21 = v48;
    goto LABEL_12;
  }
  v31 = v47;
  v21 = v48;
  result = (_DWORD *)sub_276BEE0();
  v39 = *result >> 3;
  v28 = *(unsigned int *)(v8 + 8 * v39 + 16);
  v40 = *(_WORD *)(v8 + 8 * v39 + 62);
  if ( v40 >= 5 && *(_DWORD *)(v8 + 8 * v28 + 28) == 87995 )
    goto LABEL_41;
  if ( v40 < 4 || *(_DWORD *)(v8 + 8 * v28 + 24) != 81613 )
  {
    while ( v21 != 0 )
    {
      v28 = v45;
      v29 = *(unsigned int *)(v45 + v31);
      v30 = *(_DWORD *)(v8 + 8 * v29 + 28);
      if ( v30 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v29 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v29 + 28) = v30 - 1;
      }
      if ( v30 == 1 )
      {
        v37 = *(unsigned int *)(v8 + 8 * v29 + 4);
        if ( (_DWORD)v37 != 0 )
        {
          v38 = *(unsigned int *)(v8 + 8 * v37 + 8);
          if ( (_DWORD)v38 != 0 )
          {
            v28 = *(unsigned int *)(v8 + 8 * v38 + 16);
            if ( (_DWORD)v28 != 0 )
            {
              v41 = 1;
LABEL_64:
              v44 = result;
              sub_208CCA0(a1: v18, a2: v19, a3: v45, a4: v28, a5: v41);
              result = v44;
            }
          }
        }
      }
      result = (_DWORD *)sub_2769900(a1: v18, a2: v19, a3: result, a4: v28, a5: &a7);
      v31 = v47;
      v21 = v48;
LABEL_36:
      v32 = *result >> 3;
      v28 = *(unsigned int *)(v8 + 8 * v32 + 16);
      v33 = *(_WORD *)(v8 + 8 * v32 + 62);
      if ( v33 >= 5 && *(_DWORD *)(v8 + 8 * v28 + 28) == 87995 )
      {
LABEL_41:
        v43 = result;
        v34 = *(unsigned int *)(v9 + 72);
        if ( (_DWORD)v34 != 0 )
        {
          v35 = *(unsigned int *)(v8 + 8 * v34 + 72);
          v36 = (_DWORD *)((_DWORD)v35 != 0 ? v8 + 8 * v35 : v8 + 8 * v34);
          if ( v36 != (_DWORD *)v8 )
          {
            result = (_DWORD *)((__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*v36 >> 3) + 248)))();
            v49 = v7;
            v44 = v43;
            v21 = v48;
            goto LABEL_12;
          }
        }
        result = (_DWORD *)sub_276BEE0();
      }
      else if ( v33 >= 4 && *(_DWORD *)(v8 + 8 * v28 + 24) == 81613 )
      {
        v44 = result;
        goto LABEL_12;
      }
    }
    v41 = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  v44 = result;
LABEL_12:
  if ( v21 == 0 )
  {
    v22 = v45;
LABEL_29:
    result = (_DWORD *)sub_208CCA0(a1: v18, a2: v19, a3: v22);
    goto LABEL_16;
  }
  v22 = v45;
  v23 = *(unsigned int *)(v45 + v47);
  v24 = *(_DWORD *)(v8 + 8 * v23 + 28);
  if ( v24 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v23 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v23 + 28) = v24 - 1;
  }
  if ( v24 == 1 )
  {
    v25 = *(unsigned int *)(v8 + 8 * v23 + 4);
    if ( (_DWORD)v25 != 0 )
    {
      v26 = *(unsigned int *)(v8 + 8 * v25 + 8);
      if ( (_DWORD)v26 != 0 && *(_DWORD *)(v8 + 8 * v26 + 16) != 0 )
        goto LABEL_29;
    }
  }
LABEL_16:
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
