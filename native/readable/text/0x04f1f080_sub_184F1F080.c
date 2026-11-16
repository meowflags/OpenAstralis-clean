// sub_4F1F080
// rva 0x04f1f080  size 668  section .text  group text
// window base 0x184f1f080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1F080(
        signed __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r9
  void (__fastcall *v14)(signed __int64, __int64, _DWORD *, _DWORD *, _QWORD); // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // [rsp+0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+10h] [rbp-38h]
  unsigned int v36; // [rsp+1Ch] [rbp-2Ch]
  _DWORD *v37; // [rsp+20h] [rbp-28h]
  _DWORD *v38; // [rsp+28h] [rbp-20h]
  int v39; // [rsp+34h] [rbp-14h]
  __int64 v40; // [rsp+38h] [rbp-10h]
  unsigned int v41; // [rsp+44h] [rbp-4h]

  v38 = a3;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v9 + 8) )
  {
    v41 = a5;
    sub_1EB84E0();
LABEL_38:
    v41 = a5;
    v29 = sub_2771080(a1, a2, a3, a4: v11);
LABEL_39:
    v35 = v29;
    v26 = v37;
    while ( 1 )
    {
      sub_208CCA0(a1: v30, a2: v31, a3: v26);
      v29 = v35;
      v26 = v37;
      while ( 1 )
      {
        v29 = sub_2769900(a1: v30, a2: v31, a3: v29, a4: v26, a5: &a7);
        if ( v39 == 0 )
          goto LABEL_39;
        v26 = v37;
        v27 = *(unsigned int *)((char *)v37 + v40);
        v28 = *(_DWORD *)(v8 + 8 * v27 + 28);
        if ( v28 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v27 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v27 + 28) = v28 - 1;
        }
        if ( v28 == 1 )
        {
          v32 = *(unsigned int *)(v8 + 8 * v27 + 4);
          if ( (_DWORD)v32 != 0 )
          {
            v33 = *(unsigned int *)(v8 + 8 * v32 + 8);
            if ( (_DWORD)v33 != 0 && *(_DWORD *)(v8 + 8 * v33 + 16) != 0 )
              break;
          }
        }
      }
      v35 = v29;
    }
  }
  v10 = (unsigned int)a3[2];
  v11 = v8 + 8 * v10;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_38;
  v37 = (_DWORD *)(v8 + 8 * v10);
  v12 = *(_DWORD *)(v8 + 8LL * (*v37 >> 3) + 48);
  if ( v12 == 0 )
    goto LABEL_21;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_21;
  a1 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v40 = v12;
      v39 = v12;
      v41 = a5;
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  if ( v13 != a1 || (v25 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_21:
    v40 = v12;
    v39 = v12;
    v41 = a5;
    sub_208CC20(a1, a2, a3: v11);
    a3 = v38;
    goto LABEL_9;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v25;
  v40 = v12;
  v39 = v12;
  v41 = a5;
LABEL_9:
  v14 = (void (__fastcall *)(signed __int64, __int64, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                 + *(_QWORD *)(v8
                                                                                             + 8LL * (*a3 >> 3)
                                                                                             + 336));
  v36 = *a3 >> 3;
  v14(a1, a2, a3, a4: a3, a5: v41);
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v36 + 424)))(
             a1: v15,
             a2: v16,
             a3: v38);
  if ( v39 == 0 )
  {
    v20 = v37;
LABEL_25:
    result = sub_208CCA0(a1: v18, a2: v19, a3: v20);
    goto LABEL_13;
  }
  v20 = v37;
  v21 = *(unsigned int *)((char *)v37 + v40);
  v22 = *(_DWORD *)(v8 + 8 * v21 + 28);
  if ( v22 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v21 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v22 - 1);
    *(_DWORD *)(v8 + 8 * v21 + 28) = result;
  }
  if ( v22 == 1 )
  {
    v23 = *(unsigned int *)(v8 + 8 * v21 + 4);
    if ( (_DWORD)v23 != 0 )
    {
      v24 = *(unsigned int *)(v8 + 8 * v23 + 8);
      if ( (_DWORD)v24 != 0 && *(_DWORD *)(v8 + 8 * v24 + 16) != 0 )
        goto LABEL_25;
    }
  }
LABEL_13:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
