// sub_5030E80
// rva 0x05030e80  size 1042  section .text  group text
// window base 0x185030e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5030E80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-28h]
  __int64 v33; // [rsp+18h] [rbp-20h]
  _DWORD *v34; // [rsp+20h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-10h]
  unsigned int v36; // [rsp+34h] [rbp-4h]

  v34 = a3;
  v33 = a5;
  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  v36 = v9;
  v35 = (int)v9;
  if ( v9 == 0 )
    goto LABEL_23;
  v10 = *(unsigned int *)((char *)a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_23;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_7;
    goto LABEL_23;
  }
  if ( v12 != v11 || (v17 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_23:
    sub_208CC20();
    a5 = v33;
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v17;
LABEL_7:
  if ( a5 == v7 )
  {
LABEL_30:
    v19 = v36;
    v20 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v20 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v20 = sub_1EAA920(a1: v12, a2: v11, a3: 34101256, a4: v36);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v20 + 48;
      *(_DWORD *)v20 = 34101256;
      *(_DWORD *)(v20 + 4) = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_QWORD *)(v20 + 32) = 0;
      *(_QWORD *)(v20 + 40) = 0;
    }
    v32 = (_DWORD *)v20;
    *(_DWORD *)(v20 + 20) = 46923644;
    *(_DWORD *)(v20 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
    sub_503B9A0(a1: v12, a2: v11, a3: v20, a4: v19, a5: 0);
    v23 = (unsigned __int64)v32;
    v32[2] = 44819362;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v29 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v29) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v29) >> 9) + 0x38) = 0;
    }
    v24 = v36;
    if ( v36 == 0 )
    {
      v30 = 0xFFFFFFFFLL;
      goto LABEL_50;
    }
    v25 = *(unsigned int *)((char *)v34 + v35);
    v24 = *(unsigned int *)(v7 + 8 * v25 + 28);
    if ( (_DWORD)v24 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v25 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v25 + 28) = v24 - 1;
    }
    if ( (_DWORD)v24 == 1 )
      goto LABEL_39;
    v26 = v23;
    while ( 1 )
    {
      sub_2769900(a1: v21, a2: v22, a3: v26, a4: v24, a5: &a7);
LABEL_39:
      v27 = *(unsigned int *)(v7 + 8 * v25 + 4);
      if ( (_DWORD)v27 != 0 )
      {
        v28 = *(unsigned int *)(v7 + 8 * v27 + 8);
        if ( (_DWORD)v28 != 0 )
        {
          if ( *(_DWORD *)(v7 + 8 * v28 + 16) != 0 )
          {
            v30 = 1;
LABEL_50:
            sub_208CCA0(a1: v21, a2: v22, a3: v34, a4: v24, a5: v30);
            v26 = (unsigned __int64)v32;
          }
          else
          {
            v26 = v23;
          }
        }
        else
        {
          v26 = v23;
        }
      }
      else
      {
        v26 = v23;
      }
    }
  }
  v13 = (unsigned __int64)v34;
  v34[1] = (unsigned __int64)(a5 - v7) >> 3;
  __faststorefence();
  if ( (*(_DWORD *)v13 & 2) != 0 )
  {
    v16 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v16) >> 9) + 0x38) = 0;
  }
  if ( v36 == 0 )
  {
    v18 = 0xFFFFFFFF;
    goto LABEL_27;
  }
  result = *(unsigned int *)(v13 + v35);
  v15 = *(unsigned int *)(v7 + 8 * result + 28);
  if ( (_DWORD)v15 == 1 )
  {
    *(_QWORD *)(v7 + 8 * result + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v7 + 8 * result + 28) = v15 - 1;
  }
  if ( (_DWORD)v15 == 1 )
  {
    result = *(unsigned int *)(v7 + 8 * result + 4);
    if ( (_DWORD)result != 0 )
    {
      result = *(unsigned int *)(v7 + 8 * result + 8);
      if ( (_DWORD)result != 0 )
      {
        result = *(unsigned int *)(v7 + 8 * result + 16);
        if ( (_DWORD)result != 0 )
        {
          v18 = 1;
LABEL_27:
          result = sub_208CCA0(a1: v12, a2: v11, a3: v13, a4: v13, a5: v18);
          a5 = v33;
          v13 = (unsigned __int64)v34;
        }
      }
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v12, a2: v11, a3: v13, a4: v15, a5);
  return result;
}
