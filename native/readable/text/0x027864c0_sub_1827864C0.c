// sub_27864C0
// rva 0x027864c0  size 487  section .text  group text
// window base 0x1827864c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27864C0(
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
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 (__fastcall *v30)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r9
  __m128 v46; // xmm0
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  __m128 v52; // xmm6
  __m128 v53; // xmm7
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  char v57; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v58; // [rsp+8h] [rbp-40h]
  __int64 v59; // [rsp+10h] [rbp-38h]
  __int64 v60; // [rsp+18h] [rbp-30h]
  _DWORD *v61; // [rsp+20h] [rbp-28h]
  __int64 v62; // [rsp+28h] [rbp-20h]
  __int64 v63; // [rsp+30h] [rbp-18h]
  __int64 v64; // [rsp+38h] [rbp-10h]
  unsigned int v65; // [rsp+44h] [rbp-4h]

  v63 = a3;
  v62 = a5;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v17 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a3 + 20) != 0 )
  {
    if ( *(_DWORD *)(a3 + 16) != 0 )
    {
      result = sub_2786760(a1, a2, a3: (int)v16 + 376651888, a4, a5, a6, a7: v57);
      if ( *(int *)(v17 + 16) <= 0 )
        return sub_277F280(a1: v21, a2: v22, a3: v19, a4: v20);
      return result;
    }
LABEL_18:
    v59 = sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v57);
    sub_503AEA0(a1: v55, a2: v56, a3: v58, a4: v54, a5: v59);
    while ( 1 )
    {
      sub_2769900(
        a1: v43,
        a2: v44,
        a3: v58,
        a4: v42,
        a5: (__int64)&a15,
        a6: v45,
        a7: v46,
        a8: v47,
        a9: v48,
        a10: v49,
        a11: v50,
        a12: v51,
        a13: v52,
        a14: v53);
      v58 = v40;
      *(double *)v46.m128_u64 = ((double (__fastcall *)(__int64, _QWORD, _DWORD *))(v15
                                                                                  + *(_QWORD *)(v60
                                                                                              + HIWORD(*(_DWORD *)(v59 + 4LL * v65 + 12)))))(
                                  a1: v41,
                                  a2: v65,
                                  a3: v61);
    }
  }
  if ( a5 == v16 )
  {
    v24 = (_DWORD *)(v16 + 376653848);
  }
  else
  {
    v23 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v23 + 16) > *(_QWORD *)(v17 + 32) )
    {
      v23 = sub_1EAA920(a1, a2, a3: 40462112);
      a5 = v62;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v23 + 16;
      *(_DWORD *)v23 = 40462112;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
    }
    v61 = (_DWORD *)v23;
    sub_15A7DA0(a1, a2, a3: v23, a4: a5);
    v24 = v61;
  }
  v61 = v24;
  v25 = *v24 >> 3;
  v26 = v16 + 8LL * *(unsigned int *)(v16 + 8 * v25 + 20);
  v27 = *(_DWORD *)(v16 + 8 * v25 + 44) & (0x1977u >> HIBYTE(*(_DWORD *)(v16 + 8 * v25 + 44)));
  v28 = v16 + 8 * v25;
  v29 = *(_QWORD *)(v63 + 8);
  v30 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v15
                                                                             + *(_QWORD *)(v28
                                                                                         + HIWORD(*(_DWORD *)(v26 + 4 * v27 + 12))
                                                                                         + 8));
  v60 = v28;
  v59 = v26;
  v65 = v27;
  v64 = v29;
  v31 = v30(a1: v26, a2: v27, a3: v24, a4: v30, a5: v24);
  v64 = sub_278ACA0(a1: v33, a2: v34, a3: v64, a4: v32, a5: v31);
  ((void (__fastcall *)(__int64, _QWORD, _DWORD *))(v15 + *(_QWORD *)(v60 + HIWORD(*(_DWORD *)(v59 + 4LL * v65 + 12)))))(
    a1: v35,
    a2: v65,
    a3: v61);
  if ( *(int *)(v17 + 16) <= 0 )
    sub_277F280(a1: v38, a2: v39, a3: v36, a4: v37);
  return v64;
}
