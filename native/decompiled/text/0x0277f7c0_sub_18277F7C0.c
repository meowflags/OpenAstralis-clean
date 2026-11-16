// sub_18277F7C0
// rva 0x0277f7c0  size 752  section .text  group text
// window base 0x18277f7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277F7C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r9
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  __m128 v44; // xmm6
  __m128 v45; // xmm7
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v50; // [rsp+8h] [rbp-20h]
  __int64 v51; // [rsp+10h] [rbp-18h]
  __int64 v52; // [rsp+18h] [rbp-10h]
  __int64 v53; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v16 + 8) )
    goto LABEL_41;
  if ( a3 == v15 )
  {
    while ( 1 )
    {
      v33 = (_DWORD *)sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v49);
      v47 = *(unsigned int *)(v15 + 8 * v46 + 4);
      if ( (_DWORD)v47 != 0 )
      {
        v48 = *(unsigned int *)(v15 + 8 * v47 + 8);
        if ( (_DWORD)v48 != 0 && *(_DWORD *)(v15 + 8 * v48 + 16) != 0 )
        {
          v50 = v33;
          MEMORY[0x18208CCA0](a1: v35, a2: v36, a3: v15 + 376668872, a4: v34, a5: 1);
          v33 = v50;
        }
      }
      sub_182769900(
        a1: v35,
        a2: v36,
        a3: v33,
        a4: v34,
        a5: (__int64)&a15,
        a6: v37,
        a7: v38,
        a8: v39,
        a9: v40,
        a10: v41,
        a11: v42,
        a12: v43,
        a13: v44,
        a14: v45);
LABEL_41:
      v51 = a3;
      *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    }
  }
  v17 = *(unsigned int *)(a3 + 124);
  v18 = v15 + 8 * v17;
  if ( (_DWORD)v17 != 0 )
  {
    v51 = a3;
    goto LABEL_5;
  }
  v20 = *(unsigned int *)(v15 + 374455148);
  v21 = v15 + 8 * v20;
  if ( (_DWORD)v20 != 0 )
  {
    v18 = v15 + 8 * v20;
    v51 = a3;
    goto LABEL_5;
  }
  v22 = *(unsigned int *)(v15 + 376668988);
  if ( (_DWORD)v22 == 0 || v16 == *(_QWORD *)(v15 + 376351704) )
    goto LABEL_28;
  a2 = *(_QWORD *)(v16 + 64);
  a1 = *(_QWORD *)(v15 + 8 * v22 + 16);
  if ( a1 != 0 )
  {
    if ( a1 == a2 )
    {
      v31 = *(_DWORD *)(v15 + 8 * v22 + 28) + 1;
      if ( v31 >= 0 )
      {
        *(_DWORD *)(v15 + 8 * v22 + 28) = v31;
        v53 = v21;
        v52 = v18;
        v51 = a3;
        goto LABEL_15;
      }
    }
    goto LABEL_28;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v15 + 8 * v22 + 16), 0, a2) != 0 )
  {
LABEL_28:
    v53 = v21;
    v52 = v18;
    v51 = a3;
    MEMORY[0x18208CC20](a1, a2, a3: v15 + 376668872);
    goto LABEL_15;
  }
  v53 = v15 + 8 * v20;
  v52 = v18;
  v51 = a3;
LABEL_15:
  v23 = *(unsigned int *)(v15 + 374455148);
  v18 = v15 + 8 * v23;
  if ( (_DWORD)v23 == 0 )
  {
    v50 = (_DWORD *)(v15 + 8 * v23);
    v26 = MEMORY[0x185044700]();
    *(_DWORD *)(v15 + 374455148) = (unsigned __int64)(v26 - v15) >> 3;
    __faststorefence();
    v27 = *(_DWORD *)(v15 + 374343744);
    if ( (v27 & 2) != 0 )
    {
      if ( (v27 & 1) != 0 )
      {
        v32 = v15 + 374343744 - *(_QWORD *)(v15 + 374343736);
        if ( *(_BYTE *)(v32 + 265) != 0 )
          *(_BYTE *)(v32 + 265) = 0;
        v18 = v26;
      }
      else
      {
        v29 = (v15 + 374343744) & 0xFFFFFFFFFFF80000LL;
        v30 = (v15 + 374343744 - (v29 + 2112)) >> 9;
        if ( *(_BYTE *)(v29 + v30 + 56) != 0 )
          *(_BYTE *)(v29 + v30 + 56) = 0;
        v18 = v26;
      }
    }
    else
    {
      v18 = v26;
    }
  }
  v24 = *(unsigned int *)(v15 + 376668988);
  a3 = *(unsigned int *)(v15 + 8 * v24 + 28);
  if ( (_DWORD)a3 == 1 )
  {
    *(_QWORD *)(v15 + 8 * v24 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v15 + 8 * v24 + 28) = a3 - 1;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v25 = *(unsigned int *)(v15 + 8 * v24 + 4);
    if ( (_DWORD)v25 != 0 )
    {
      v28 = *(unsigned int *)(v15 + 8 * v25 + 8);
      if ( (_DWORD)v28 != 0 && *(_DWORD *)(v15 + 8 * v28 + 16) != 0 )
      {
        v50 = (_DWORD *)v18;
        MEMORY[0x18208CCA0](a1, a2, a3: v15 + 376668872, a4: v18, a5: 1);
        v18 = (__int64)v50;
      }
    }
  }
LABEL_5:
  if ( *(int *)(v16 + 16) <= 0 )
    sub_18277F280(a1, a2, a3, a4: v18);
  return v18;
}
