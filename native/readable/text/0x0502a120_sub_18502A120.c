// sub_502A120
// rva 0x0502a120  size 697  section .text  group text
// window base 0x18502a120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502A120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rbx
  signed __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // [rsp+0h] [rbp-28h] BYREF
  __int64 v32; // [rsp+10h] [rbp-18h]
  __int64 v33; // [rsp+18h] [rbp-10h]
  __int64 v34; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v8 + 8) )
  {
    v33 = a3;
    v24 = sub_1EB84E0();
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 8 * v30 + 16) != 0 )
      {
        v32 = v24;
        sub_208CCA0(a1: v26, a2: v27, a3: v7 + 376668872, a4: v25, a5: 1);
        v24 = v32;
      }
      do
      {
        do
        {
          v24 = sub_2769900(a1: v26, a2: v27, a3: v24, a4: v25, a5: &a7);
          v29 = *(unsigned int *)(v7 + 8 * v28 + 4);
        }
        while ( (_DWORD)v29 == 0 );
        v30 = *(unsigned int *)(v7 + 8 * v29 + 8);
      }
      while ( (_DWORD)v30 == 0 );
    }
  }
  v9 = *(unsigned int *)(v7 + 374455148);
  v10 = v7 + 8 * v9;
  if ( (_DWORD)v9 != 0 )
  {
    v33 = a3;
    goto LABEL_4;
  }
  v12 = *(unsigned int *)(v7 + 376668988);
  if ( (_DWORD)v12 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_25;
  v13 = *(_QWORD *)(v8 + 64);
  a2 = *(_QWORD *)(v7 + 8 * v12 + 16);
  if ( a2 != 0 )
  {
    if ( a2 == v13 )
    {
      v22 = *(_DWORD *)(v7 + 8 * v12 + 28) + 1;
      if ( v22 >= 0 )
      {
        *(_DWORD *)(v7 + 8 * v12 + 28) = v22;
        v34 = v10;
        v33 = a3;
        goto LABEL_12;
      }
    }
    goto LABEL_25;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v12 + 16), 0, v13) != 0 )
  {
LABEL_25:
    v34 = v10;
    v33 = a3;
    sub_208CC20(a1, a2, a3: v7 + 376668872);
    goto LABEL_12;
  }
  v34 = v7 + 8 * v9;
  v33 = a3;
LABEL_12:
  v14 = *(unsigned int *)(v7 + 374455148);
  v10 = v7 + 8 * v14;
  if ( (_DWORD)v14 == 0 )
  {
    v32 = v7 + 8 * v14;
    v17 = sub_5044700();
    *(_DWORD *)(v7 + 374455148) = (unsigned __int64)(v17 - v7) >> 3;
    __faststorefence();
    v18 = *(_DWORD *)(v7 + 374343744);
    if ( (v18 & 2) != 0 )
    {
      if ( (v18 & 1) != 0 )
      {
        v23 = v7 + 374343744 - *(_QWORD *)(v7 + 374343736);
        if ( *(_BYTE *)(v23 + 265) != 0 )
          *(_BYTE *)(v23 + 265) = 0;
        v10 = v17;
      }
      else
      {
        v20 = (v7 + 374343744) & 0xFFFFFFFFFFF80000LL;
        v21 = (v7 + 374343744 - (v20 + 2112)) >> 9;
        if ( *(_BYTE *)(v20 + v21 + 56) != 0 )
          *(_BYTE *)(v20 + v21 + 56) = 0;
        v10 = v17;
      }
    }
    else
    {
      v10 = v17;
    }
  }
  v15 = *(unsigned int *)(v7 + 376668988);
  a3 = *(unsigned int *)(v7 + 8 * v15 + 28);
  if ( (_DWORD)a3 == 1 )
  {
    *(_QWORD *)(v7 + 8 * v15 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v7 + 8 * v15 + 28) = a3 - 1;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v16 = *(unsigned int *)(v7 + 8 * v15 + 4);
    if ( (_DWORD)v16 != 0 )
    {
      v19 = *(unsigned int *)(v7 + 8 * v16 + 8);
      if ( (_DWORD)v19 != 0 && *(_DWORD *)(v7 + 8 * v19 + 16) != 0 )
      {
        v32 = v10;
        sub_208CCA0(a1, a2, a3: v7 + 376668872, a4: v10, a5: 1);
        v10 = v32;
      }
    }
  }
LABEL_4:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4: v10);
  return v10;
}
