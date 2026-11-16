// sub_277D8C0
// rva 0x0277d8c0  size 190  section .text  group text
// window base 0x18277d8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_277D8C0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
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
        __m128 a14)
{
  __int64 v14; // r13
  _DWORD *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  _DWORD *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r9
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __m128 v34; // xmm6
  __m128 v35; // xmm7
  __m128i v36; // xmm0
  _QWORD v37[2]; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v38; // [rsp+10h] [rbp-8h]

  v38 = a3;
  if ( (unsigned __int64)v37 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else
  {
    if ( (int)v15[94048899] >= 3 )
    {
      v17 = *(unsigned int *)(v16 + 72);
      if ( (_DWORD)v17 == 0 )
        goto LABEL_10;
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v14 + *(_QWORD *)&v15[2 * (v15[2 * v17] >> 3) + 62]))(
        a1,
        a2,
        a3: &v15[2 * v17]);
      a3 = v38;
    }
    if ( a3 != v15 )
    {
      sub_2780680(a1, a2, a3: v15 + 94164590);
      result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v14
                                                                                       + *(_QWORD *)&v15[2 * (*v38 >> 3) + 72]))(
                           a1: v18,
                           a2: v19,
                           a3: v38,
                           a4: v38);
      goto LABEL_7;
    }
  }
LABEL_10:
  v36 = sub_276BEE0(a1, a2, (__int64)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v37[1] = v24;
  result = sub_2778C80(
             a1: v26,
             a2: v27,
             a3: v38,
             a4: v25,
             a5: v24,
             a6: v28,
             a7: (__m128)v36.m128i_i128,
             a8: v29,
             a9: v30,
             a10: v31,
             a11: v32,
             a12: v33,
             a13: v34,
             a14: v35);
LABEL_7:
  if ( *(int *)(v16 + 16) <= 0 )
    return (_DWORD *)sub_277F280(a1: v22, a2: v23, a3: v21);
  return result;
}
