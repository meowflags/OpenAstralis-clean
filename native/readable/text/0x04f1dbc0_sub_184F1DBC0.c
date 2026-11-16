// sub_4F1DBC0
// rva 0x04f1dbc0  size 680  section .text  group text
// window base 0x184f1dbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1DBC0(
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
  __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+10h] [rbp-28h]
  _DWORD *v29; // [rsp+18h] [rbp-20h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  int v31; // [rsp+2Ch] [rbp-Ch]
  __int64 v32; // [rsp+30h] [rbp-8h]

  v30 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else
  {
    v10 = *(unsigned int *)(a3 + 8);
    v11 = v8 + 8 * v10;
    if ( (_DWORD)v10 != 0 )
    {
      v29 = (_DWORD *)(v8 + 8 * v10);
      v12 = *(_DWORD *)(v8 + 8LL * (*v29 >> 3) + 48);
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
              v21 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1;
              if ( v21 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * a2 + 28) = v21;
                v32 = v12;
                v31 = v12;
                goto LABEL_9;
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
          {
            v32 = v12;
            v31 = v12;
LABEL_9:
            v14 = *(unsigned int *)(a3 + 12);
            if ( (_DWORD)v14 != 0 )
            {
              ((void (__fastcall *)(signed __int64, __int64, __int64))(v7
                                                                     + *(_QWORD *)(v8
                                                                                 + 8LL
                                                                                 * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                                 + 160)))(
                a1,
                a2,
                a3: v8 + 8 * v14);
              *(_DWORD *)(v30 + 12) = 0;
            }
            v15 = v31;
            goto LABEL_12;
          }
        }
      }
      v32 = v12;
      v31 = v12;
      sub_208CC20(a1, a2, a3: v11);
      a3 = v30;
      goto LABEL_9;
    }
  }
  v22 = sub_2771080(a1, a2, a3, a4: v11);
  v15 = *(_DWORD *)(v8 + 8 * v26 + 16);
  if ( v15 != 0 )
  {
    v28 = v22;
    sub_208CCA0(a1: v24, a2: v25, a3: v23);
    v22 = v28;
    v23 = v29;
  }
  sub_2769900(a1: v24, a2: v25, a3: v22, a4: v23, a5: &a7);
LABEL_12:
  if ( v15 == 0 )
  {
    v16 = v29;
LABEL_29:
    result = sub_208CCA0(a1, a2, a3: v16);
    goto LABEL_16;
  }
  v16 = v29;
  v17 = *(unsigned int *)((char *)v29 + v32);
  result = *(unsigned int *)(v8 + 8 * v17 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v17 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v17 + 28) = result - 1;
  }
  if ( (_DWORD)result == 1 )
  {
    v19 = *(unsigned int *)(v8 + 8 * v17 + 4);
    if ( (_DWORD)v19 != 0 )
    {
      v20 = *(unsigned int *)(v8 + 8 * v19 + 8);
      if ( (_DWORD)v20 != 0 && *(_DWORD *)(v8 + 8 * v20 + 16) != 0 )
        goto LABEL_29;
    }
  }
LABEL_16:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
