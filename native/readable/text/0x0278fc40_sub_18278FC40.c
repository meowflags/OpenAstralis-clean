// sub_278FC40
// rva 0x0278fc40  size 1285  section .text  group text
// window base 0x18278fc40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278FC40(
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
        int a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20)
{
  __int64 v20; // r13
  _DWORD *v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbx
  _DWORD *v28; // rsi
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _DWORD *, _DWORD *); // rcx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  __m128 v44; // xmm6
  __m128 v45; // xmm7
  __int64 v47; // rcx
  __int64 v48; // rcx
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r9
  __m128i i; // xmm0
  __m128i v55; // xmm1
  __m128i v56; // xmm2
  __m128i v57; // xmm3
  __m128i v58; // xmm4
  __m128i v59; // xmm5
  __m128i v60; // xmm6
  __m128i v61; // xmm7
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // rsi
  _DWORD *v71; // rdi
  _DWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // r8
  __int64 v78; // r9
  __m128 v79; // xmm0
  __m128 v80; // xmm1
  __m128 v81; // xmm2
  __m128 v82; // xmm3
  __m128 v83; // xmm4
  __m128 v84; // xmm5
  __m128 v85; // xmm6
  __m128 v86; // xmm7
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // rdx
  void (__fastcall *v93)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *); // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // r8
  __int64 v103; // r9
  __m128 v104; // xmm0
  __m128 v105; // xmm1
  __m128 v106; // xmm2
  __m128 v107; // xmm3
  __m128 v108; // xmm4
  __m128 v109; // xmm5
  __m128 v110; // xmm6
  __m128 v111; // xmm7
  char v112; // [rsp+0h] [rbp-38h] BYREF
  __int64 v113; // [rsp+8h] [rbp-30h]
  _DWORD *v114; // [rsp+10h] [rbp-28h]
  _DWORD *v115; // [rsp+18h] [rbp-20h]
  _DWORD *v116; // [rsp+20h] [rbp-18h]
  __int64 v117; // [rsp+28h] [rbp-10h]

  v117 = a3;
  if ( (unsigned __int64)&v112 <= *(_QWORD *)(v22 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_24;
  }
  v23 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v23 == 0 )
  {
LABEL_24:
    i = sub_276BEE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    goto LABEL_6;
  }
  v24 = v21[2 * v23] >> 3;
  v25 = v21[2 * v24 + 11] & (0x23Fu >> HIBYTE(v21[2 * v24 + 11]));
  v26 = (unsigned __int16)v21[2 * (unsigned int)v21[2 * v24 + 5] + 3 + v25];
  if ( (_DWORD)v26 != 575 )
  {
    v49 = (_DWORD *)sub_276B120(a1, a2: v25, a3, a4: v26, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
LABEL_6:
    v47 = *v49 >> 3;
    if ( SHIWORD(v21[2 * v47 + 15]) >= 5 )
    {
      v48 = (unsigned int)v21[2 * v47 + 4];
      if ( v21[2 * v48 + 7] == 86965 )
        goto LABEL_8;
    }
    v48 = *v49 >> 3;
    if ( (_DWORD)v48 == 5058984 )
      goto LABEL_8;
LABEL_12:
    while ( 1 )
    {
      v115 = v49;
      v63 = v117;
      v64 = *(unsigned int *)(v117 + 8);
      if ( (_DWORD)v64 == 0 )
        break;
      v65 = v21[2 * v64] >> 3;
      v66 = (unsigned int)v21[2 * v65 + 11];
      v67 = (unsigned int)v66 & (0x23Fu >> HIBYTE(v21[2 * v65 + 11]));
      v68 = (unsigned __int16)v21[2 * (unsigned int)v21[2 * v65 + 5] + 3 + v67];
      if ( (_DWORD)v68 != 575 )
        goto LABEL_28;
      v69 = v21[2 * v64] >> 3;
      v70 = (unsigned int)v21[2 * v69 + 11];
      v71 = &v21[2 * v21[2 * v69 + 5]];
      v72 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, double))(v20
                                                                                   + *(_QWORD *)((char *)&v21[2 * v69 + 2]
                                                                                               + HIWORD(v71[((unsigned int)v70 & (0x23Fu >> HIBYTE(v21[2 * v69 + 11]))) + 3]))))(
                        a1: v71,
                        a2: v70,
                        a3: &v21[2 * v64],
                        a4: *(double *)i.m128i_i64);
      if ( v72 != v21 )
      {
        v87 = *v72 >> 3;
        v88 = (unsigned int)v21[2 * v87 + 11];
        v89 = (__int64)&v21[2 * v21[2 * v87 + 5]];
        v90 = (unsigned int)v88 & (0x23Eu >> HIBYTE(v21[2 * v87 + 11]));
        v91 = (unsigned __int16)*(_DWORD *)(v89 + 4 * v90 + 12);
        if ( (_DWORD)v91 == 574 )
        {
          v92 = *v72 >> 3;
          v93 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *))(v20
                                                                                            + *(_QWORD *)((char *)&v21[2 * v92 + 4] + HIWORD(v21[2 * v21[2 * v92 + 5] + 3 + (v21[2 * v92 + 11] & (0x23Eu >> HIBYTE(v21[2 * v92 + 11])))])));
          v93(a1: v75, a2: v76, a3: v72, a4: v93, a5: v21 + 91594246, a6: v115);
          v49 = v115;
          goto LABEL_8;
        }
        goto LABEL_30;
      }
LABEL_29:
      sub_2771080(
        a1: v75,
        a2: v76,
        a3: v73,
        a4: v74,
        a5: v77,
        a6: v78,
        a7: v79,
        a8: v80,
        a9: v81,
        a10: v82,
        a11: v83,
        a12: v84,
        a13: v85,
        a14: v86,
        a15: v112);
LABEL_30:
      v98 = sub_2770780(
              a1: v75,
              a2: v76,
              a3: v89,
              a4: v91,
              a5: v88,
              a6: v90,
              a7: v79,
              a8: v80,
              a9: v81,
              a10: v82,
              a11: v83,
              a12: v84,
              a13: v85,
              a14: v86,
              a15: v112);
      v113 = sub_276B120(
               a1: v100,
               a2: v101,
               a3: v99,
               a4: v98,
               a5: v102,
               a6: v103,
               a7: v104,
               a8: v105,
               a9: v106,
               a10: v107,
               a11: v108,
               a12: v109,
               a13: v110,
               a14: v111);
      sub_503AEA0(a1: v96, a2: v97, a3: v95, a4: v95, a5: v113);
      v49 = v114;
      v94 = *v114 >> 3;
      if ( SHIWORD(v21[2 * v94 + 15]) < 5 || (v48 = (unsigned int)v21[2 * v94 + 4], v21[2 * v48 + 7] != 86965) )
      {
        v48 = *v114 >> 3;
        if ( (_DWORD)v48 != 5058984 )
          continue;
      }
      goto LABEL_8;
    }
    sub_2771080(
      a1: v50,
      a2: v51,
      a3: v117,
      a4: v48,
      a5: v52,
      a6: v53,
      a7: (__m128)i.m128i_i128,
      a8: (__m128)v55.m128i_i128,
      a9: (__m128)v56.m128i_i128,
      a10: (__m128)v57.m128i_i128,
      a11: (__m128)v58.m128i_i128,
      a12: (__m128)v59.m128i_i128,
      a13: (__m128)v60.m128i_i128,
      a14: (__m128)v61.m128i_i128,
      a15: v112);
LABEL_28:
    sub_2770780(
      a1: v67,
      a2: v66,
      a3: v63,
      a4: v68,
      a5: v52,
      a6: v53,
      a7: (__m128)i.m128i_i128,
      a8: (__m128)v55.m128i_i128,
      a9: (__m128)v56.m128i_i128,
      a10: (__m128)v57.m128i_i128,
      a11: (__m128)v58.m128i_i128,
      a12: (__m128)v59.m128i_i128,
      a13: (__m128)v60.m128i_i128,
      a14: (__m128)v61.m128i_i128,
      a15: v112);
    goto LABEL_29;
  }
  v27 = v21[2 * v23] >> 3;
  v28 = &v21[2 * v21[2 * v27 + 5]];
  v29 = v21[2 * v27 + 11] & (0x23Fu >> HIBYTE(v21[2 * v27 + 11]));
  v30 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v20
                                                            + *(_QWORD *)((char *)&v21[2 * v27 + 10]
                                                                        + HIWORD(v28[v29 + 3])));
  v116 = v21 + 94167616;
  v31 = (_DWORD *)v30(a1: v29, a2: v28, a3: &v21[2 * v23]);
  if ( v31 == v21 )
  {
    for ( i = sub_276BEE0(
                a1: v34,
                a2: v35,
                a3: v32,
                a4: v33,
                a5: v36,
                a6: v37,
                a7: v38,
                a8: v39,
                a9: v40,
                a10: v41,
                a11: v42,
                a12: v43,
                a13: v44,
                a14: v45);
          ;
          i = sub_2769900(
                a1: v50,
                a2: v51,
                a3: v49,
                a4: v48,
                a5: (__int64)&a15,
                a6: v53,
                a7: (__m128)i.m128i_i128,
                a8: (__m128)v55.m128i_i128,
                a9: (__m128)v56.m128i_i128,
                a10: (__m128)v57.m128i_i128,
                a11: (__m128)v58.m128i_i128,
                a12: (__m128)v59.m128i_i128,
                a13: (__m128)v60.m128i_i128,
                a14: (__m128)v61.m128i_i128) )
    {
      v62 = *v49 >> 3;
      if ( SHIWORD(v21[2 * v62 + 15]) < 5 || (v48 = (unsigned int)v21[2 * v62 + 4], v21[2 * v48 + 7] != 86965) )
      {
        v48 = *v49 >> 3;
        if ( (_DWORD)v48 != 5058984 )
          goto LABEL_12;
      }
LABEL_8:
      ;
    }
  }
  return sub_18278FD0A(
           a1: v34,
           a2: v35,
           a3: (_DWORD)v31,
           a4: (unsigned int)v20 + (unsigned int)*(_QWORD *)&v21[2 * (*v31 >> 3) + 30],
           a5: (_DWORD)v116,
           a6: v37,
           a7: a15,
           a8: a16,
           a9: a17,
           a10: a18,
           a11: a19,
           a12: a20);
}
