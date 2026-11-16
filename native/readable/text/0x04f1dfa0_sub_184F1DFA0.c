// sub_4F1DFA0
// rva 0x04f1dfa0  size 727  section .text  group text
// window base 0x184f1dfa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1DFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // [rsp+0h] [rbp-38h] BYREF
  __int64 v35; // [rsp+10h] [rbp-28h]
  __int64 v36; // [rsp+18h] [rbp-20h]
  __int64 v37; // [rsp+20h] [rbp-18h]
  int v38; // [rsp+2Ch] [rbp-Ch]
  __int64 v39; // [rsp+30h] [rbp-8h]

  v37 = a3;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else
  {
    v10 = *(unsigned int *)(a3 + 8);
    v11 = v8 + 8 * v10;
    v36 = v11;
    if ( (_DWORD)v10 != 0 )
    {
      v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
      if ( v12 != 0 )
      {
        a2 = *(unsigned int *)(v11 + v12);
        if ( (_DWORD)a2 != 0 && v9 != *(_QWORD *)(v8 + 376351704) )
        {
          a1 = *(_QWORD *)(v9 + 64);
          v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
          if ( v13 != 0 )
          {
            if ( v13 == a1 )
            {
              v26 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1;
              if ( v26 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * a2 + 28) = v26;
                v39 = v12;
                v38 = v12;
LABEL_9:
                sub_4F1DE80(a1, a2, a3: v37, a4: v11, a5: v13, a6, a7: v34);
                v16 = *(unsigned int *)(v37 + 12);
                if ( (_DWORD)v16 != 0 )
                {
                  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                                              + *(_QWORD *)(v8
                                                                                          + 8LL
                                                                                          * (*(_DWORD *)(v8 + 8 * v16) >> 3)
                                                                                          + 168)))(
                             a1: v14,
                             a2: v15,
                             a3: v8 + 8 * v16);
                  v20 = v38;
                  goto LABEL_11;
                }
                goto LABEL_44;
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
          {
            v39 = v12;
            v38 = v12;
            goto LABEL_9;
          }
        }
      }
      v39 = v12;
      v38 = v12;
      sub_208CC20(a1, a2, a3: v11);
      goto LABEL_9;
    }
  }
  sub_2771080();
LABEL_44:
  v30 = v39;
  v20 = v38;
  result = sub_276BEE0();
  while ( 1 )
  {
    v31 = *(_DWORD *)result >> 3;
    if ( *(__int16 *)(v8 + 8 * v31 + 62) >= 4
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v31 + 16) + 24) == 81613 )
    {
      break;
    }
    if ( v20 == 0 )
    {
      v35 = result;
      v27 = v36;
      goto LABEL_46;
    }
    v27 = v36;
    v28 = *(unsigned int *)(v36 + v30);
    v29 = *(_DWORD *)(v8 + 8 * v28 + 28);
    if ( v29 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v28 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v28 + 28) = v29 - 1;
    }
    if ( v29 == 1 )
    {
      v32 = *(unsigned int *)(v8 + 8 * v28 + 4);
      if ( (_DWORD)v32 != 0 )
      {
        v33 = *(unsigned int *)(v8 + 8 * v32 + 8);
        if ( (_DWORD)v33 != 0 && *(_DWORD *)(v8 + 8 * v33 + 16) != 0 )
        {
          v35 = result;
LABEL_46:
          sub_208CCA0(a1: v18, a2: v19, a3: v27);
          result = v35;
          v27 = v36;
        }
      }
    }
    result = sub_2769900(a1: v18, a2: v19, a3: result, a4: v27, a5: &a7);
    v30 = v39;
    v20 = v38;
  }
  v39 = v30;
LABEL_11:
  if ( v20 == 0 )
  {
    v21 = v36;
    goto LABEL_27;
  }
  v21 = v36;
  v22 = *(unsigned int *)(v36 + v39);
  v23 = *(_DWORD *)(v8 + 8 * v22 + 28);
  if ( v23 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v22 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v23 - 1);
    *(_DWORD *)(v8 + 8 * v22 + 28) = result;
  }
  if ( v23 == 1 )
  {
    v24 = *(unsigned int *)(v8 + 8 * v22 + 4);
    if ( (_DWORD)v24 != 0 )
    {
      v25 = *(unsigned int *)(v8 + 8 * v24 + 8);
      if ( (_DWORD)v25 != 0 && *(_DWORD *)(v8 + 8 * v25 + 16) != 0 )
LABEL_27:
        result = sub_208CCA0(a1: v18, a2: v19, a3: v21);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
