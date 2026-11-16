// sub_277DA60
// rva 0x0277da60  size 187  section .text  group text
// window base 0x18277da60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277DA60(
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
        int a15,
        __int64 a16,
        __int64 a17)
{
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __m128 v31; // xmm6
  __m128 v32; // xmm7
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r9
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm2
  __m128 v44; // xmm3
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __m128 v47; // xmm6
  __m128 v48; // xmm7
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  char v52; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v53; // [rsp+10h] [rbp-18h]
  __int64 v54; // [rsp+18h] [rbp-10h]
  __int64 v55; // [rsp+20h] [rbp-8h]

  v55 = a3;
  if ( (unsigned __int64)&v52 <= *(_QWORD *)(v18 + 8) )
  {
    *(double *)v25.m128_u64 = sub_1EB84E0();
    goto LABEL_10;
  }
  result = sub_277A040(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v54 = result;
  if ( result != v17 )
  {
    v33 = *(unsigned int *)(result + 4);
    v34 = v17 + 8 * v33;
    if ( (_DWORD)v33 == 0 )
      return sub_18277DABB(a1: v21, a2: v22, a3: 0, a4: v34, a5: v23, a6: v24, a7: a15, a8: a16, a9: a17);
    if ( v34 == v17 )
    {
LABEL_10:
      sub_276BEE0(
        a1: v21,
        a2: v22,
        a3: v33,
        a4: v34,
        a5: v23,
        a6: v24,
        a7: v25,
        a8: v26,
        a9: v27,
        a10: v28,
        a11: v29,
        a12: v30,
        a13: v31,
        a14: v32);
      while ( 1 )
      {
        v53 = v49;
        sub_2780140(a1: v50, a2: v51, a3: v54);
        sub_2769900(
          a1: v38,
          a2: v39,
          a3: v53,
          a4: v37,
          a5: (__int64)&a15,
          a6: v40,
          a7: v41,
          a8: v42,
          a9: v43,
          a10: v44,
          a11: v45,
          a12: v46,
          a13: v47,
          a14: v48);
      }
    }
    sub_2787720(a1: v21, a2: v22, a3: v17 + 8 * v33, a4: v34, a5: v23, a6: v24, a7: v52);
    result = sub_2780140(a1: v35, a2: v36, a3: v54);
  }
  if ( *(int *)(v18 + 16) <= 0 )
    return sub_277F280(a1: v21, a2: v22, a3: v20);
  return result;
}
