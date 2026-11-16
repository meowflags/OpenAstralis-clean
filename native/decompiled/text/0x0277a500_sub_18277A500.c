// sub_18277A500
// rva 0x0277a500  size 695  section .text  group text
// window base 0x18277a500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277A500(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  _DWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  signed __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // r8
  __int64 result; // rax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // r8
  _DWORD *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r9
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __m128i v48; // xmm3
  __m128i v49; // xmm4
  __m128i v50; // xmm5
  __m128i v51; // xmm6
  __m128i v52; // xmm7
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // rbx
  _DWORD *v56; // rbp
  __int64 v57; // r8
  int v58; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v59; // [rsp+8h] [rbp-20h]
  _DWORD *v60; // [rsp+10h] [rbp-18h]
  unsigned int v61; // [rsp+1Ch] [rbp-Ch]
  __int64 v62; // [rsp+20h] [rbp-8h]

  v60 = a3;
  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v8 + 8) )
  {
    *(double *)v14.m128_u64 = MEMORY[0x181EB84E0]();
LABEL_41:
    sub_182771080(
      a1: v10,
      a2: v11,
      a3: (__int64)v22,
      a4: v9,
      a5: v12,
      a6: v13,
      a7: v14,
      a8: v15,
      a9: v16,
      a10: v17,
      a11: v18,
      a12: v19,
      a13: v20,
      a14: v21,
      a15: v58);
    goto LABEL_42;
  }
  sub_182780480(a1, a2, a3: v7 + 376658360);
  v22 = v60;
  if ( v60 != (_DWORD *)v7 )
  {
    MEMORY[0x18502F060]();
    v22 = v60;
  }
  if ( v22 == (_DWORD *)v7 )
    goto LABEL_41;
  v23 = *(unsigned int *)(v7 + 8LL * (*v22 >> 3) + 48);
  if ( (_DWORD)v23 == 0 )
    goto LABEL_24;
  v24 = *(unsigned int *)((char *)v22 + (int)v23);
  if ( (_DWORD)v24 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_24;
  v25 = *(_QWORD *)(v8 + 64);
  v26 = *(_QWORD *)(v7 + 8 * v24 + 16);
  if ( v26 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v24 + 16), 0, v25) == 0 )
    {
      v62 = (int)v23;
      v61 = v23;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  if ( v26 != v25 || (v36 = *(_DWORD *)(v7 + 8 * v24 + 28) + 1) < 0 )
  {
LABEL_24:
    v62 = (int)v23;
    v61 = v23;
    MEMORY[0x18208CC20]();
    v22 = v60;
    goto LABEL_11;
  }
  *(_DWORD *)(v7 + 8 * v24 + 28) = v36;
  v62 = (int)v23;
  v61 = v23;
LABEL_11:
  v27 = (unsigned int)v22[3];
  if ( (_DWORD)v27 == 0 )
  {
LABEL_42:
    v55 = v62;
    v45 = sub_18276BEE0(
            a1: v26,
            a2: v25,
            a3: (__int64)v22,
            a4: v61,
            a5: v27,
            a6: v13,
            a7: v14,
            a8: v15,
            a9: v16,
            a10: v17,
            a11: v18,
            a12: v19,
            a13: v20,
            a14: v21);
    if ( (_DWORD)v40 != 0 )
    {
      v38 = v60;
      v39 = *(unsigned int *)((char *)v60 + v55);
      v40 = *(unsigned int *)(v7 + 8 * v39 + 28);
      if ( (_DWORD)v40 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v39 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v39 + 28) = v40 - 1;
      }
      if ( (_DWORD)v40 == 1 )
        goto LABEL_35;
      while ( 1 )
      {
        while ( 1 )
        {
          v45 = sub_182769900(
                  a1: v42,
                  a2: v43,
                  a3: v41,
                  a4: v40,
                  a5: (__int64)&a7,
                  a6: v44,
                  a7: (__m128)v45.m128i_i128,
                  a8: (__m128)v46.m128i_i128,
                  a9: (__m128)v47.m128i_i128,
                  a10: (__m128)v48.m128i_i128,
                  a11: (__m128)v49.m128i_i128,
                  a12: (__m128)v50.m128i_i128,
                  a13: (__m128)v51.m128i_i128,
                  a14: (__m128)v52.m128i_i128);
LABEL_35:
          v53 = *(unsigned int *)(v7 + 8 * v39 + 4);
          if ( (_DWORD)v53 != 0 )
          {
            v54 = *(unsigned int *)(v7 + 8 * v53 + 8);
            if ( (_DWORD)v54 != 0 )
            {
              v40 = *(unsigned int *)(v7 + 8 * v54 + 16);
              if ( (_DWORD)v40 != 0 )
                break;
            }
          }
        }
        v56 = v38;
        v57 = (_DWORD)v40 != 0;
        v59 = v41;
LABEL_44:
        MEMORY[0x18208CCA0](a1: v42, a2: v43, a3: v56, a4: v40, a5: v57, a6: *(double *)v45.m128i_i64);
        v41 = v59;
      }
    }
    v57 = 0xFFFFFFFFLL;
    v59 = v41;
    v56 = v60;
    goto LABEL_44;
  }
  *(_DWORD *)(v7 + 8 * v27 + 28) = 2;
  __faststorefence();
  MEMORY[0x18208CAA0](a1: v26, a2: v25, a3: v7 + 376381032, a4: v23, a5: v22, a6: 1);
  v30 = v61;
  if ( v61 == 0 )
  {
    v37 = 0xFFFFFFFFLL;
    v31 = v60;
    goto LABEL_28;
  }
  v31 = v60;
  v32 = *(unsigned int *)((char *)v60 + v62);
  result = *(unsigned int *)(v7 + 8 * v32 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v7 + 8 * v32 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v30 = (unsigned int)(result - 1);
    *(_DWORD *)(v7 + 8 * v32 + 28) = v30;
  }
  if ( (_DWORD)result == 1 )
  {
    v34 = *(unsigned int *)(v7 + 8 * v32 + 4);
    if ( (_DWORD)v34 != 0 )
    {
      v35 = *(unsigned int *)(v7 + 8 * v34 + 8);
      if ( (_DWORD)v35 != 0 && *(_DWORD *)(v7 + 8 * v35 + 16) != 0 )
      {
        v37 = 1;
LABEL_28:
        result = MEMORY[0x18208CCA0](a1: v28, a2: v29, a3: v31, a4: v30, a5: v37);
        v31 = v60;
      }
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v28, a2: v29, a3: v31);
  return result;
}
