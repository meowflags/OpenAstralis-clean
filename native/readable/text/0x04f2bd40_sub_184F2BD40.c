// sub_4F2BD40
// rva 0x04f2bd40  size 827  section .text  group text
// window base 0x184f2bd40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2BD40(
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
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // r8
  int v36; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v37; // [rsp+8h] [rbp-30h]
  _DWORD *v38; // [rsp+10h] [rbp-28h]
  __int64 v39; // [rsp+18h] [rbp-20h]
  __int64 v40; // [rsp+20h] [rbp-18h]
  __int64 v41; // [rsp+28h] [rbp-10h]
  int v42; // [rsp+34h] [rbp-4h]

  v40 = a3;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_44;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = v8 + 8 * v10;
  v39 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_44:
    sub_2771080();
    goto LABEL_45;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  v42 = v12;
  v41 = v12;
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
      goto LABEL_8;
    goto LABEL_21;
  }
  if ( v13 != a1 || (v23 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_21:
    sub_208CC20(a1, a2, a3: v11);
    a3 = v40;
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v23;
LABEL_8:
  v14 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v14 == 0 )
  {
LABEL_45:
    v34 = v42;
    v28 = (_DWORD *)sub_276BEE0();
    v24 = *v28 >> 3;
    if ( *(__int16 *)(v8 + 8 * v24 + 62) >= 4
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v24 + 16) + 24) == 81613 )
    {
      v33 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v33 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v38 = v28;
        v33 = sub_1EAA920(a1: v29, a2: v30, a3: 34085168);
        v28 = v38;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v33 + 40;
        *(_DWORD *)v33 = 34085168;
        *(_DWORD *)(v33 + 4) = 0;
        *(_QWORD *)(v33 + 8) = 0;
        *(_QWORD *)(v33 + 16) = 0;
        *(_QWORD *)(v33 + 24) = 0;
        *(_QWORD *)(v33 + 32) = 0;
      }
      v38 = v28;
      v37 = (_DWORD *)v33;
      sub_503ACA0(a1: v29, a2: v30, a3: v33, a4: v33, a5: v28);
      v28 = v37;
      v34 = v42;
    }
    if ( v34 != 0 )
    {
      v25 = v39;
      v26 = *(unsigned int *)(v39 + v41);
      v27 = *(_DWORD *)(v8 + 8 * v26 + 28);
      if ( v27 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v26 + 28) = v27 - 1;
      }
      if ( v27 == 1 )
        goto LABEL_34;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = (_DWORD *)sub_2769900(a1: v29, a2: v30, a3: v28, a4: v25, a5: &a7);
LABEL_34:
          v31 = *(unsigned int *)(v8 + 8 * v26 + 4);
          if ( (_DWORD)v31 != 0 )
          {
            v32 = *(unsigned int *)(v8 + 8 * v31 + 8);
            if ( (_DWORD)v32 != 0 && *(_DWORD *)(v8 + 8 * v32 + 16) != 0 )
              break;
          }
        }
        v35 = 1;
LABEL_47:
        v37 = v28;
        sub_208CCA0(a1: v29, a2: v30, a3: v39, a4: v25, a5: v35);
        v28 = v37;
        v25 = v39;
      }
    }
    v35 = 0xFFFFFFFFLL;
    goto LABEL_47;
  }
  result = ((__int64 (__fastcall *)(signed __int64, __int64, __int64))(v7
                                                                     + *(_QWORD *)(v8
                                                                                 + 8LL
                                                                                 * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                                 + 112)))(
             a1,
             a2,
             a3: v8 + 8 * v14);
  if ( v42 == 0 )
  {
    v18 = v39;
LABEL_25:
    result = sub_208CCA0(a1: v16, a2: v17, a3: v18);
    goto LABEL_13;
  }
  v18 = v39;
  v19 = *(unsigned int *)(v39 + v41);
  v20 = *(_DWORD *)(v8 + 8 * v19 + 28);
  if ( v20 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v19 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v20 - 1);
    *(_DWORD *)(v8 + 8 * v19 + 28) = result;
  }
  if ( v20 == 1 )
  {
    v21 = *(unsigned int *)(v8 + 8 * v19 + 4);
    if ( (_DWORD)v21 != 0 )
    {
      v22 = *(unsigned int *)(v8 + 8 * v21 + 8);
      if ( (_DWORD)v22 != 0 && *(_DWORD *)(v8 + 8 * v22 + 16) != 0 )
        goto LABEL_25;
    }
  }
LABEL_13:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
