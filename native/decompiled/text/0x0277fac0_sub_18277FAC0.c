// sub_18277FAC0
// rva 0x0277fac0  size 814  section .text  group text
// window base 0x18277fac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_18277FAC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  signed __int64 v21; // rbp
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r9
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm3
  __m128i v39; // xmm4
  __m128i v40; // xmm5
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  int v46; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v47; // [rsp+8h] [rbp-20h]
  unsigned __int64 v48; // [rsp+10h] [rbp-18h]
  __int64 v49; // [rsp+18h] [rbp-10h]
  __int64 v50; // [rsp+20h] [rbp-8h]

  v50 = a3;
  v49 = a13;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a4.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_46;
  }
  result = *(unsigned int *)(v15 + 374455148);
  v18 = v15 + 8 * result;
  if ( (_DWORD)result == 0 )
  {
    v20 = *(unsigned int *)(v15 + 376668988);
    if ( (_DWORD)v20 != 0 && v16 != *(_QWORD *)(v15 + 376351704) )
    {
      v21 = *(_QWORD *)(v16 + 64);
      a2 = *(_QWORD *)(v15 + 8 * v20 + 16);
      if ( a2 != 0 )
      {
        if ( a2 == v21 )
        {
          v28 = *(_DWORD *)(v15 + 8 * v20 + 28) + 1;
          if ( v28 >= 0 )
          {
            *(_DWORD *)(v15 + 8 * v20 + 28) = v28;
            v48 = v18;
            goto LABEL_13;
          }
        }
      }
      else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v15 + 8 * v20 + 16), 0, v21) == 0 )
      {
        v48 = v15 + 8 * result;
LABEL_13:
        result = *(unsigned int *)(v15 + 374455148);
        v18 = v15 + 8 * result;
        if ( (_DWORD)result == 0 )
        {
          v47 = (_DWORD *)(v15 + 8 * result);
          result = MEMORY[0x185044700]();
          *(_DWORD *)(v15 + 374455148) = (result - v15) >> 3;
          __faststorefence();
          v23 = *(_DWORD *)(v15 + 374343744);
          if ( (v23 & 2) != 0 )
          {
            if ( (v23 & 1) != 0 )
            {
              v29 = v15 + 374343744 - *(_QWORD *)(v15 + 374343736);
              if ( *(_BYTE *)(v29 + 265) != 0 )
                *(_BYTE *)(v29 + 265) = 0;
              v18 = result;
            }
            else
            {
              v26 = (v15 + 374343744) & 0xFFFFFFFFFFF80000LL;
              v27 = (v15 + 374343744 - (v26 + 2112)) >> 9;
              if ( *(_BYTE *)(v26 + v27 + 56) != 0 )
                *(_BYTE *)(v26 + v27 + 56) = 0;
              v18 = result;
            }
          }
          else
          {
            v18 = result;
          }
        }
        v22 = *(unsigned int *)(v15 + 376668988);
        a13 = *(unsigned int *)(v15 + 8 * v22 + 28);
        if ( (_DWORD)a13 == 1 )
        {
          *(_QWORD *)(v15 + 8 * v22 + 16) = 0;
          __faststorefence();
        }
        else
        {
          result = (unsigned int)(a13 - 1);
          *(_DWORD *)(v15 + 8 * v22 + 28) = result;
        }
        if ( (_DWORD)a13 == 1 )
        {
          v24 = *(unsigned int *)(v15 + 8 * v22 + 4);
          if ( (_DWORD)v24 != 0 )
          {
            v25 = *(unsigned int *)(v15 + 8 * v24 + 8);
            if ( (_DWORD)v25 != 0 && *(_DWORD *)(v15 + 8 * v25 + 16) != 0 )
            {
              v47 = (_DWORD *)v18;
              result = MEMORY[0x18208CCA0](a1, a2, a3: v15 + 376668872, a4: v18, a5: 1);
              v18 = (unsigned __int64)v47;
            }
          }
        }
        goto LABEL_3;
      }
    }
    v48 = v18;
    MEMORY[0x18208CC20](a1, a2, a3: v15 + 376668872);
    goto LABEL_13;
  }
LABEL_3:
  if ( v18 == v49 )
  {
    v19 = v50;
    goto LABEL_6;
  }
  v19 = v50;
  if ( v50 == v15 )
  {
LABEL_46:
    v30 = (_DWORD *)sub_182771080(
                      a1,
                      a2,
                      a3: v19,
                      a4: v18,
                      a5: a13,
                      a6: a14,
                      a7: a4,
                      a8: a5,
                      a9: a6,
                      a10: a7,
                      a11: a8,
                      a12: a9,
                      a13: a10,
                      a14: a11,
                      a15: v46);
    while ( 1 )
    {
      if ( *(_DWORD *)(v15 + 8 * v45 + 16) != 0 )
      {
        v47 = v30;
        MEMORY[0x18208CCA0](a1: v32, a2: v33, a3: v15 + 376668872, a4: v31, a5: 1, a6: *(double *)v35.m128i_i64);
        v30 = v47;
      }
      do
      {
        do
        {
          v35 = sub_182769900(
                  a1: v32,
                  a2: v33,
                  a3: v30,
                  a4: v31,
                  a5: (__int64)&a15,
                  a6: v34,
                  a7: (__m128)v35.m128i_i128,
                  a8: (__m128)v36.m128i_i128,
                  a9: (__m128)v37.m128i_i128,
                  a10: (__m128)v38.m128i_i128,
                  a11: (__m128)v39.m128i_i128,
                  a12: (__m128)v40.m128i_i128,
                  a13: (__m128)v41.m128i_i128,
                  a14: (__m128)v42.m128i_i128);
          v44 = *(unsigned int *)(v15 + 8 * v43 + 4);
        }
        while ( (_DWORD)v44 == 0 );
        v45 = *(unsigned int *)(v15 + 8 * v44 + 8);
      }
      while ( (_DWORD)v45 == 0 );
    }
  }
  *(_DWORD *)(v50 + 124) = (unsigned __int64)(v49 - v15) >> 3;
  result = *(unsigned int *)v19;
  if ( (result & 2) != 0 )
  {
    v18 = v19 & 0xFFFFFFFFFFF80000LL;
    result = (v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)(v18 + result + 56) = 0;
  }
LABEL_6:
  if ( *(int *)(v16 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3: v19, a4: v18);
  return result;
}
