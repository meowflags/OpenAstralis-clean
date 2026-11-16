// sub_4F20700
// rva 0x04f20700  size 1017  section .text  group text
// window base 0x184f20700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F20700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  signed __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  _DWORD *result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
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
  __int64 v39; // r8
  int v40; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v41; // [rsp+10h] [rbp-48h]
  _DWORD *v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  __int64 v45; // [rsp+30h] [rbp-28h]
  __int64 v46; // [rsp+38h] [rbp-20h]
  int v47; // [rsp+44h] [rbp-14h]
  unsigned int v48; // [rsp+48h] [rbp-10h]
  unsigned int v49; // [rsp+4Ch] [rbp-Ch]
  __int64 v50; // [rsp+50h] [rbp-8h]

  v45 = a3;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
  {
    v49 = a1;
    v48 = a6;
    v43 = a5;
    sub_1EB84E0();
  }
  else
  {
    v10 = *(unsigned int *)(a3 + 8);
    v11 = v8 + 8 * v10;
    v44 = v11;
    if ( (_DWORD)v10 != 0 )
    {
      v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
      v47 = v12;
      v46 = v12;
      if ( v12 != 0 )
      {
        a2 = *(unsigned int *)(v11 + v12);
        if ( (_DWORD)a2 != 0 && v9 != *(_QWORD *)(v8 + 376351704) )
        {
          v13 = *(_QWORD *)(v9 + 64);
          v14 = *(_QWORD *)(v8 + 8 * a2 + 16);
          if ( v14 != 0 )
          {
            if ( v14 == v13 )
            {
              v27 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1;
              if ( v27 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * a2 + 28) = v27;
                v49 = a1;
                v48 = a6;
                v43 = a5;
LABEL_9:
                sub_4F1DE80(a1, a2, a3: v45, a4: v11, a5, a6, a7: v40);
                v17 = *(unsigned int *)(v45 + 12);
                if ( (_DWORD)v17 != 0 )
                {
                  result = (_DWORD *)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v17) >> 3) + 200)))(
                                       a1: v49,
                                       a2: v16,
                                       a3: v8 + 8 * v17,
                                       a4: v15,
                                       a5: v43,
                                       a6: v48);
                  v42 = (_DWORD *)v8;
                  v21 = v47;
                  goto LABEL_11;
                }
                goto LABEL_54;
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, v13) == 0 )
          {
            v49 = a1;
            v48 = a6;
            v43 = a5;
            goto LABEL_9;
          }
        }
      }
      v49 = a1;
      v48 = a6;
      v43 = a5;
      sub_208CC20(a1, a2, a3: v11);
      goto LABEL_9;
    }
  }
  v49 = a1;
  v48 = a6;
  v43 = a5;
  sub_2771080();
LABEL_54:
  v31 = v46;
  v21 = v47;
  result = (_DWORD *)sub_276BEE0();
  while ( 1 )
  {
    v32 = *result >> 3;
    v28 = *(unsigned int *)(v8 + 8 * v32 + 16);
    v33 = *(_WORD *)(v8 + 8 * v32 + 62);
    if ( v33 >= 5 && *(_DWORD *)(v8 + 8 * v28 + 28) == 87995 )
      break;
    if ( v33 >= 4 && *(_DWORD *)(v8 + 8 * v28 + 24) == 81613 )
    {
      v42 = result;
      goto LABEL_11;
    }
LABEL_29:
    if ( v21 == 0 )
    {
      v39 = 0xFFFFFFFFLL;
      goto LABEL_56;
    }
    v28 = v44;
    v29 = *(unsigned int *)(v44 + v31);
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
            v39 = 1;
LABEL_56:
            v42 = result;
            sub_208CCA0(a1: v19, a2: v20, a3: v44, a4: v28, a5: v39);
            result = v42;
          }
        }
      }
    }
    result = (_DWORD *)sub_2769900(a1: v19, a2: v20, a3: result, a4: v28, a5: &a7);
    v31 = v46;
    v21 = v47;
  }
  v41 = result;
  v34 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v34 == 0
    || ((_DWORD)(v35 = *(unsigned int *)(v8 + 8 * v34 + 72)) == 0
      ? (v36 = (_DWORD *)(v8 + 8 * v34))
      : (v36 = (_DWORD *)(v8 + 8 * v35)),
        v36 == (_DWORD *)v8) )
  {
    result = (_DWORD *)sub_276BEE0();
    goto LABEL_29;
  }
  result = (_DWORD *)((__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*v36 >> 3) + 248)))();
  v50 = v7;
  v42 = v41;
  v21 = v47;
LABEL_11:
  if ( v21 == 0 )
  {
    v22 = v44;
    goto LABEL_27;
  }
  v22 = v44;
  v23 = *(unsigned int *)(v44 + v46);
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
LABEL_27:
        result = (_DWORD *)sub_208CCA0(a1: v19, a2: v20, a3: v22);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
