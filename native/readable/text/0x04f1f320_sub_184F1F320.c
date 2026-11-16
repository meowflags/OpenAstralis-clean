// sub_4F1F320
// rva 0x04f1f320  size 682  section .text  group text
// window base 0x184f1f320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1F320(
        signed __int64 a1,
        __int64 a2,
        _DWORD *a3,
        float a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  void (__fastcall *v15)(float); // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+10h] [rbp-38h]
  unsigned int v37; // [rsp+1Ch] [rbp-2Ch]
  _DWORD *v38; // [rsp+20h] [rbp-28h]
  _DWORD *v39; // [rsp+28h] [rbp-20h]
  int v40; // [rsp+34h] [rbp-14h]
  __int64 v41; // [rsp+38h] [rbp-10h]
  float v42; // [rsp+44h] [rbp-4h]

  v39 = a3;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v10 + 8) )
  {
    v42 = a4;
    a4 = sub_1EB84E0();
LABEL_38:
    v42 = a4;
    v30 = sub_2771080(a1, a2, a3, a4: v12);
LABEL_39:
    v36 = v30;
    v27 = v38;
    while ( 1 )
    {
      sub_208CCA0(a1: v31, a2: v32, a3: v27);
      v30 = v36;
      v27 = v38;
      while ( 1 )
      {
        v30 = sub_2769900(a1: v31, a2: v32, a3: v30, a4: v27, a5: &a8);
        if ( v40 == 0 )
          goto LABEL_39;
        v27 = v38;
        v28 = *(unsigned int *)((char *)v38 + v41);
        v29 = *(_DWORD *)(v9 + 8 * v28 + 28);
        if ( v29 == 1 )
        {
          *(_QWORD *)(v9 + 8 * v28 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v9 + 8 * v28 + 28) = v29 - 1;
        }
        if ( v29 == 1 )
        {
          v33 = *(unsigned int *)(v9 + 8 * v28 + 4);
          if ( (_DWORD)v33 != 0 )
          {
            v34 = *(unsigned int *)(v9 + 8 * v33 + 8);
            if ( (_DWORD)v34 != 0 && *(_DWORD *)(v9 + 8 * v34 + 16) != 0 )
              break;
          }
        }
      }
      v36 = v30;
    }
  }
  v11 = (unsigned int)a3[2];
  v12 = v9 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_38;
  v38 = (_DWORD *)(v9 + 8 * v11);
  v13 = *(_DWORD *)(v9 + 8LL * (*v38 >> 3) + 48);
  if ( v13 == 0 )
    goto LABEL_21;
  a2 = *(unsigned int *)(v12 + v13);
  if ( (_DWORD)a2 == 0 || v10 == *(_QWORD *)(v9 + 376351704) )
    goto LABEL_21;
  a1 = *(_QWORD *)(v10 + 64);
  v14 = *(_QWORD *)(v9 + 8 * a2 + 16);
  if ( v14 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v41 = v13;
      v40 = v13;
      v42 = a4;
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  if ( v14 != a1 || (v26 = *(_DWORD *)(v9 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_21:
    v41 = v13;
    v40 = v13;
    v42 = a4;
    sub_208CC20(a1, a2, a3: v12);
    a3 = v39;
    goto LABEL_9;
  }
  *(_DWORD *)(v9 + 8 * a2 + 28) = v26;
  v41 = v13;
  v40 = v13;
  v42 = a4;
LABEL_9:
  v15 = (void (__fastcall *)(float))(v8 + *(_QWORD *)(v9 + 8LL * (*a3 >> 3) + 360));
  v37 = *a3 >> 3;
  v15(a1: v42);
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)(v9 + 8LL * v37 + 424)))(
             a1: v16,
             a2: v17,
             a3: v39);
  if ( v40 == 0 )
  {
    v21 = v38;
LABEL_25:
    result = sub_208CCA0(a1: v19, a2: v20, a3: v21);
    goto LABEL_13;
  }
  v21 = v38;
  v22 = *(unsigned int *)((char *)v38 + v41);
  v23 = *(_DWORD *)(v9 + 8 * v22 + 28);
  if ( v23 == 1 )
  {
    *(_QWORD *)(v9 + 8 * v22 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v23 - 1);
    *(_DWORD *)(v9 + 8 * v22 + 28) = result;
  }
  if ( v23 == 1 )
  {
    v24 = *(unsigned int *)(v9 + 8 * v22 + 4);
    if ( (_DWORD)v24 != 0 )
    {
      v25 = *(unsigned int *)(v9 + 8 * v24 + 8);
      if ( (_DWORD)v25 != 0 && *(_DWORD *)(v9 + 8 * v25 + 16) != 0 )
        goto LABEL_25;
    }
  }
LABEL_13:
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
