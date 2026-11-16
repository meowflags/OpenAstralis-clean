// sub_5031B40
// rva 0x05031b40  size 758  section .text  group text
// window base 0x185031b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5031B40(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // rbp
  __int64 v36; // r8
  int v37; // [rsp+0h] [rbp-38h] BYREF
  __int64 v38; // [rsp+10h] [rbp-28h]
  _DWORD *v39; // [rsp+18h] [rbp-20h]
  int v40; // [rsp+24h] [rbp-14h]
  __int64 v41; // [rsp+28h] [rbp-10h]
  unsigned int v42; // [rsp+34h] [rbp-4h]

  v39 = a3;
  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_38;
  }
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  v42 = v9;
  v41 = (int)v9;
  if ( v9 == 0 )
    goto LABEL_21;
  v10 = *(unsigned int *)((char *)a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_21;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_7;
    goto LABEL_21;
  }
  if ( v12 != v11 || (v23 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_21:
    sub_208CC20();
    a3 = v39;
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v23;
LABEL_7:
  v13 = (unsigned int)a3[3];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_38:
    v28 = sub_276BEE0(a1: v12, a2: v11, a3, a4: v42);
    goto LABEL_27;
  }
  v14 = *(_DWORD *)(v7 + 8 * v13 + 28);
  if ( v14 != 0 )
  {
    v40 = v14;
    v33 = v42;
    v34 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v34 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v34 = sub_1EAA920(a1: v12, a2: v11, a3: 37751696, a4: v42);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v34 + 40;
      *(_DWORD *)v34 = 37751696;
      *(_DWORD *)(v34 + 4) = 0;
      *(_QWORD *)(v34 + 8) = 0;
      *(_QWORD *)(v34 + 16) = 0;
      *(_QWORD *)(v34 + 24) = 0;
      *(_QWORD *)(v34 + 32) = 0;
    }
    *(_DWORD *)(v34 + 20) = 46923644;
    *(_DWORD *)(v34 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v34 + 12) = (unsigned __int64)(v34 - v7) >> 3;
    v38 = v34;
    sub_503B9A0(a1: v12, a2: v11, a3: v34, a4: v33, a5: 0);
    v28 = v38;
    v27 = v42;
LABEL_27:
    if ( (_DWORD)v27 != 0 )
    {
      v25 = v39;
      v26 = *(unsigned int *)((char *)v39 + v41);
      v27 = *(unsigned int *)(v7 + 8 * v26 + 28);
      if ( (_DWORD)v27 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v26 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v26 + 28) = v27 - 1;
      }
      if ( (_DWORD)v27 == 1 )
        goto LABEL_32;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = sub_2769900(a1: v29, a2: v30, a3: v28, a4: v27, a5: &a7);
LABEL_32:
          v31 = *(unsigned int *)(v7 + 8 * v26 + 4);
          if ( (_DWORD)v31 != 0 )
          {
            v32 = *(unsigned int *)(v7 + 8 * v31 + 8);
            if ( (_DWORD)v32 != 0 )
            {
              v27 = *(unsigned int *)(v7 + 8 * v32 + 16);
              if ( (_DWORD)v27 != 0 )
                break;
            }
          }
        }
        v35 = v25;
        v36 = (_DWORD)v27 != 0;
        v38 = v28;
LABEL_43:
        sub_208CCA0(a1: v29, a2: v30, a3: v35, a4: v27, a5: v36);
        v28 = v38;
      }
    }
    v36 = 0xFFFFFFFFLL;
    v38 = v28;
    v35 = v39;
    goto LABEL_43;
  }
  sub_5032280(a1: v12, a2: v11, (_DWORD)a3, a4: v9, a5, a6, a7: v37);
  v17 = v42;
  if ( v42 == 0 )
  {
    v24 = 0xFFFFFFFFLL;
    v18 = v39;
    goto LABEL_25;
  }
  v18 = v39;
  v19 = *(unsigned int *)((char *)v39 + v41);
  result = *(unsigned int *)(v7 + 8 * v19 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v7 + 8 * v19 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v17 = (unsigned int)(result - 1);
    *(_DWORD *)(v7 + 8 * v19 + 28) = v17;
  }
  if ( (_DWORD)result == 1 )
  {
    v21 = *(unsigned int *)(v7 + 8 * v19 + 4);
    if ( (_DWORD)v21 != 0 )
    {
      v22 = *(unsigned int *)(v7 + 8 * v21 + 8);
      if ( (_DWORD)v22 != 0 && *(_DWORD *)(v7 + 8 * v22 + 16) != 0 )
      {
        v24 = 1;
LABEL_25:
        result = sub_208CCA0(a1: v15, a2: v16, a3: v18, a4: v17, a5: v24);
      }
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
