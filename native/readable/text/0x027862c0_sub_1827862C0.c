// sub_27862C0
// rva 0x027862c0  size 489  section .text  group text
// window base 0x1827862c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_27862C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r9
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __m128 v25; // xmm6
  __m128 v26; // xmm7
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r9
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm3
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  __m128 v43; // xmm6
  __m128 v44; // xmm7
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // r9
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm2
  __m128 v63; // xmm3
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  __m128 v66; // xmm6
  __m128 v67; // xmm7
  _DWORD *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // r9
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm2
  __m128i v75; // xmm3
  __m128i v76; // xmm4
  __m128i v77; // xmm5
  __m128i v78; // xmm6
  __m128i v79; // xmm7
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  char v84; // [rsp+0h] [rbp-38h] BYREF
  __int64 v85; // [rsp+10h] [rbp-28h]
  _DWORD *v86; // [rsp+18h] [rbp-20h]
  __int64 v87; // [rsp+20h] [rbp-18h]
  __int64 v88; // [rsp+28h] [rbp-10h]
  __int64 v89; // [rsp+30h] [rbp-8h]

  v88 = a3;
  if ( (unsigned __int64)&v84 <= *(_QWORD *)(v8 + 8) )
  {
    *(double *)v19.m128_u64 = sub_1EB84E0();
    goto LABEL_21;
  }
  sub_1EDF740();
  v12 = v88;
  if ( *(_BYTE *)(v88 + 20) != 0 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v10, a2: v11, a3: v88, a4: v9);
    return true;
  }
  v14 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v14 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v14 = sub_1EAA920(a1: v10, a2: v11, a3: 40543856);
    v12 = v88;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v14 + 16;
    *(_DWORD *)v14 = 40543856;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
  }
  v87 = v14;
  v86 = (_DWORD *)(v7 + 8LL * *(unsigned int *)(v12 + 4));
  sub_2789A20(a1: v10, a2: v11, a3: v14, a4: v9, a5: v86);
  v27 = v87;
  v28 = *(unsigned int *)(v87 + 4);
  if ( (_DWORD)v28 == 0 || (v29 = *(unsigned int *)(v7 + 8 * v28 + 4), v28 = v7 + 8 * v28, (_DWORD)v29 == 0) )
  {
LABEL_21:
    v72 = sub_276BEE0(
            a1: v16,
            a2: v17,
            a3: v28,
            a4: v15,
            a5: v27,
            a6: v18,
            a7: v19,
            a8: v20,
            a9: v21,
            a10: v22,
            a11: v23,
            a12: v24,
            a13: v25,
            a14: v26);
    goto LABEL_16;
  }
  v85 = v28;
  v89 = sub_1EBBB60(a1: v16, a2: v17, a3: v7 + 8 * v29, a4: v15, a5: 0);
  v32 = sub_278ACC0(a1: v30, a2: v31, a3: v89);
  v45 = v87;
  v46 = v88;
  *(_QWORD *)(v88 + 8) = v32;
  v47 = *(unsigned int *)(v45 + 4);
  if ( (_DWORD)v47 == 0 )
  {
    sub_2771080(
      a1: v34,
      a2: v35,
      a3: v46,
      a4: v33,
      a5: v45,
      a6: v36,
      a7: v37,
      a8: v38,
      a9: v39,
      a10: v40,
      a11: v41,
      a12: v42,
      a13: v43,
      a14: v44,
      a15: v84);
    goto LABEL_24;
  }
  v48 = *(unsigned int *)(v7 + 8 * v47 + 4);
  v49 = v7 + 8 * v47;
  if ( (_DWORD)v48 == 0 )
  {
LABEL_24:
    v80 = sub_2771080(
            a1: v34,
            a2: v35,
            a3: v89,
            a4: v48,
            a5: v45,
            a6: v36,
            a7: v37,
            a8: v38,
            a9: v39,
            a10: v40,
            a11: v41,
            a12: v42,
            a13: v43,
            a14: v44,
            a15: v84);
    while ( 1 )
    {
      v85 = v80;
      sub_503AEA0(a1: v82, a2: v83, a3: v86, a4: v81, a5: v80);
      while ( 1 )
      {
        v72 = sub_2769900(
                a1: v57,
                a2: v58,
                a3: v86,
                a4: v56,
                a5: (__int64)&a7,
                a6: v59,
                a7: v60,
                a8: v61,
                a9: v62,
                a10: v63,
                a11: v64,
                a12: v65,
                a13: v66,
                a14: v67);
LABEL_16:
        v86 = v68;
        v54 = *(unsigned int *)(v87 + 4);
        if ( (_DWORD)v54 == 0 )
          break;
        v55 = *(unsigned int *)(v7 + 8 * v54 + 4);
        v54 = v7 + 8 * v54;
        if ( (_DWORD)v55 == 0 )
          break;
        v85 = v54;
        *(double *)v60.m128_u64 = sub_1EBBCC0(a1: v69, a2: v70, a3: v7 + 8 * v55);
      }
      sub_276BEE0(
        a1: v69,
        a2: v70,
        a3: v54,
        a4: v55,
        a5: v87,
        a6: v71,
        a7: (__m128)v72.m128i_i128,
        a8: (__m128)v73.m128i_i128,
        a9: (__m128)v74.m128i_i128,
        a10: (__m128)v75.m128i_i128,
        a11: (__m128)v76.m128i_i128,
        a12: (__m128)v77.m128i_i128,
        a13: (__m128)v78.m128i_i128,
        a14: (__m128)v79.m128i_i128);
    }
  }
  v85 = v49;
  sub_1EBBCC0(a1: v34, a2: v35, a3: v7 + 8 * v48);
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v52, a2: v53, a3: v50, a4: v51);
  return *(_QWORD *)(v88 + 8) != 0;
}
