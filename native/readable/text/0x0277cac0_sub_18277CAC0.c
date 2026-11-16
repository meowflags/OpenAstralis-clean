// sub_277CAC0
// rva 0x0277cac0  size 3384  section .text  group text
// window base 0x18277cac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277CAC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 i; // rbp
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 j; // rbx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  __m128 v42; // xmm3
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  __m128 v45; // xmm6
  __m128 v46; // xmm7
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // ebx
  unsigned int v52; // ecx
  int v53; // edx
  int v54; // ecx
  __int64 v55; // rdi
  __int64 v56; // rsi
  int v57; // r8d
  int v58; // r9d
  _DWORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r9
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm2
  __m128 v66; // xmm3
  __m128 v67; // xmm4
  __m128 v68; // xmm5
  __m128 v69; // xmm6
  __m128 v70; // xmm7
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rsi
  _DWORD *v76; // rax
  __int64 v77; // rdi
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
  __int64 result; // rax
  __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rsi
  _DWORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __m128 v97; // xmm0
  __m128 v98; // xmm1
  __m128 v99; // xmm2
  __m128 v100; // xmm3
  __m128 v101; // xmm4
  __m128 v102; // xmm5
  __m128 v103; // xmm6
  __m128 v104; // xmm7
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  _DWORD *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rsi
  int v126; // eax
  __int64 v127; // rcx
  unsigned __int64 v128; // rbp
  unsigned __int64 v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // r9
  __int64 v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rdx
  int v135; // ebp
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rsi
  __int64 v139; // rax
  int v140; // eax
  void (__fastcall *v141)(__int64, _QWORD, _DWORD *); // rsi
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rbx
  __int64 v148; // rdx
  int v149; // [rsp+0h] [rbp-78h] BYREF
  __int64 v150; // [rsp+8h] [rbp-70h]
  __int64 v151; // [rsp+10h] [rbp-68h]
  _DWORD *v152; // [rsp+18h] [rbp-60h]
  __int64 v153; // [rsp+20h] [rbp-58h]
  __int64 v154; // [rsp+28h] [rbp-50h]
  unsigned int v155; // [rsp+34h] [rbp-44h]
  _DWORD *v156; // [rsp+38h] [rbp-40h]
  __int64 v157; // [rsp+40h] [rbp-38h]
  __int64 v158; // [rsp+48h] [rbp-30h]
  __int64 v159; // [rsp+50h] [rbp-28h]
  __int64 v160; // [rsp+58h] [rbp-20h]
  int v161; // [rsp+60h] [rbp-18h]
  unsigned int v162; // [rsp+64h] [rbp-14h]
  __int64 v163; // [rsp+68h] [rbp-10h]
  __int64 v164; // [rsp+70h] [rbp-8h]

  if ( (unsigned __int64)&v149 <= *(_QWORD *)(v13 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_29;
  }
  *(_DWORD *)(v12 + 376195596) = 3;
  __faststorefence();
  v160 = sub_277A7C0(a1, a2, a3, a4, a5, a6, a7: v149);
  v16 = *(_QWORD *)(v13 + 40);
  v17 = 34248584;
  if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v13 + 32) )
  {
    v164 = 34248584;
    v16 = sub_1EAA920(a1: v14, a2: v15, a3: 34248584);
    v17 = v164;
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v16 + 40;
    *(_DWORD *)v16 = 34248584;
    *(_DWORD *)(v16 + 4) = 0;
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 32) = 0;
  }
  v18 = *(_QWORD *)(v13 + 40);
  v163 = 34084944;
  if ( (unsigned __int64)(v18 + 272) > *(_QWORD *)(v13 + 32) )
  {
    v159 = v16;
    v164 = v17;
    v18 = sub_1EAA840(a1: v14, a2: 34084944, a3: v163, a4: v18, a5: 64);
    v16 = v159;
    v17 = v164;
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v18 + 272;
    *(_QWORD *)v18 = 34084944;
    *(_DWORD *)(v18 + 8) = 64;
    *(_DWORD *)(v18 + 12) = 0;
    for ( i = 16; i < 0x110; i += 8LL )
      *(_QWORD *)(v18 + i) = 0;
  }
  *(_DWORD *)(v16 + 12) = (unsigned __int64)(v18 - v12) >> 3;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    v129 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v129) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v129) >> 9) + 0x38) = 0;
  }
  v164 = v17;
  v159 = sub_5809A40();
  v22 = *(_QWORD *)(v13 + 40);
  if ( (unsigned __int64)(v22 + 40) > *(_QWORD *)(v13 + 32) )
  {
    v22 = sub_1EAA920(a1: v20, a2: v21, a3: v164);
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v22 + 40;
    *(_DWORD *)v22 = 34248584;
    *(_DWORD *)(v22 + 4) = 0;
    *(_QWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_QWORD *)(v22 + 32) = 0;
  }
  v23 = *(_QWORD *)(v13 + 40);
  if ( (unsigned __int64)(v23 + 272) > *(_QWORD *)(v13 + 32) )
  {
    v158 = v22;
    v23 = sub_1EAA840(a1: v20, a2: v21, a3: v163, a4: v23, a5: 64);
    v22 = v158;
  }
  else
  {
    v24 = v163;
    *(_QWORD *)(v13 + 40) = v23 + 272;
    *(_QWORD *)v23 = v24;
    *(_DWORD *)(v23 + 8) = 64;
    *(_DWORD *)(v23 + 12) = 0;
    for ( j = 16; j < 0x110; j += 8LL )
      *(_QWORD *)(v23 + j) = 0;
  }
  *(_DWORD *)(v22 + 12) = (unsigned __int64)(v23 - v12) >> 3;
  if ( (*(_DWORD *)v22 & 2) != 0 )
  {
    v128 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v128) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v128) >> 9) + 0x38) = 0;
  }
  v158 = sub_5809A40();
  v28 = *(_QWORD *)(v13 + 40);
  if ( (unsigned __int64)(v28 + 32) > *(_QWORD *)(v13 + 32) )
  {
    v28 = sub_1EAA920(a1: v26, a2: v27, a3: 34115016);
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v28 + 32;
    *(_DWORD *)v28 = 34115016;
    *(_DWORD *)(v28 + 4) = 0;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 16) = 0;
    *(_QWORD *)(v28 + 24) = 0;
  }
  v29 = v160;
  v157 = v28;
  *(_DWORD *)(v28 + 16) = *(_DWORD *)(v160 + 4);
  *(_DWORD *)(v28 + 12) = -1;
  *(_DWORD *)(v28 + 4) = (unsigned __int64)(v29 - v12) >> 3;
  if ( *(_DWORD *)(v29 + 12) == 0 )
  {
LABEL_19:
    sub_57DCBE0(a1: v26, a2: v27, a3: v159, a4: v29, a5: v158);
    v32 = (_DWORD *)sub_57DC920(a1: v30, a2: v31, a3: v159);
    if ( v32 == (_DWORD *)v12 )
    {
      sub_2771080(
        a1: v35,
        a2: v36,
        a3: v33,
        a4: v34,
        a5: v37,
        a6: v38,
        a7: v39,
        a8: v40,
        a9: v41,
        a10: v42,
        a11: v43,
        a12: v44,
        a13: v45,
        a14: v46,
        a15: v149);
    }
    else
    {
      v156 = v32;
      v47 = *v32 >> 3;
      v48 = v12 + 8LL * *(unsigned int *)(v12 + 8 * v47 + 20);
      v49 = (unsigned __int16)*(_DWORD *)(v48
                                        + 4LL
                                        * (*(_DWORD *)(v12 + 8 * v47 + 44)
                                         & (0x61Bu >> HIBYTE(*(_DWORD *)(v12 + 8 * v47 + 44))))
                                        + 12);
      if ( (_DWORD)v49 == 1563 )
      {
        v50 = *v32 >> 3;
        v51 = *(_DWORD *)(v12 + 8 * v50 + 44);
        v154 = v12 + 8LL * *(unsigned int *)(v12 + 8 * v50 + 20);
        v162 = v51 & (0x61Bu >> SHIBYTE(v51));
        v52 = *(_DWORD *)(v154 + 4LL * v162 + 12);
        v153 = v12 + 8 * v50;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v11 + *(_QWORD *)(v153 + HIWORD(v52) + 8)))(
               a1: v35,
               a2: v154,
               a3: v32) != 0 )
        {
          v59 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                                              + *(_QWORD *)(v153
                                                                                          + HIWORD(*(_DWORD *)(v154 + 4LL * v162 + 12))
                                                                                          + 16)))(
                            a1: v55,
                            a2: v56,
                            a3: v156);
          if ( v59 != (_DWORD *)v12 )
          {
            v71 = (unsigned __int16)*(_DWORD *)(v12
                                              + 8LL * *(unsigned int *)(v12 + 8LL * (*v59 >> 3) + 20)
                                              + 4LL
                                              * (*(_DWORD *)(v12 + 8LL * (*v59 >> 3) + 44)
                                               & (0x171Eu >> HIBYTE(*(_DWORD *)(v12 + 8LL * (*v59 >> 3) + 44))))
                                              + 12);
            if ( (_DWORD)v71 != 5918 )
            {
              sub_276FC00(
                a1: v60,
                a2: v61,
                a3: v59,
                a4: v71,
                a5: (_DWORD *)(v12 + 40542096),
                a6: v62,
                a7: v63,
                a8: v64,
                a9: v65,
                a10: v66,
                a11: v67,
                a12: v68,
                a13: v69,
                a14: v70,
                a15: v149);
LABEL_110:
              v116 = (_DWORD *)sub_2771080(
                                 a1: v26,
                                 a2: v27,
                                 a3: v114,
                                 a4: v94,
                                 a5: v95,
                                 a6: v96,
                                 a7: v97,
                                 a8: v98,
                                 a9: v99,
                                 a10: v100,
                                 a11: v101,
                                 a12: v102,
                                 a13: v103,
                                 a14: v104,
                                 a15: v149);
LABEL_111:
              sub_276FC00(
                a1: v26,
                a2: v27,
                a3: v116,
                a4: v94,
                a5: (_DWORD *)(v12 + 34099232),
                a6: v96,
                a7: v97,
                a8: v98,
                a9: v99,
                a10: v100,
                a11: v101,
                a12: v102,
                a13: v103,
                a14: v104,
                a15: v149);
              goto LABEL_112;
            }
          }
          v152 = v59;
          v72 = *(unsigned int *)(v12 + 374356872);
          v73 = v12 + 8 * v72;
          if ( (_DWORD)v72 == 0 )
          {
            v151 = v12 + 8 * v72;
            v73 = sub_1EDB4A0();
          }
          if ( (_DWORD *)v73 == v152 )
          {
            v151 = v12 + 376668616;
            v119 = sub_5401D60(a1: v60, a2: v61, a3: v12 + 376668616);
            v161 = v119;
            if ( *(_BYTE *)(v12 + 376668632) == 0 || v119 != 0 )
              v123 = sub_631C320();
            else
              v123 = v12;
            if ( *(_BYTE *)(v12 + 376668632) != 0 )
            {
              v151 = v123;
            }
            else
            {
              v130 = v151;
              v131 = v12 + 8LL * *(unsigned int *)(v12 + 376668644);
              v132 = v12 + 8LL * (*v152 >> 3);
              v151 = v123;
              sub_53F5560(a1: v132, a2: 2, a3: v130, a4: v152, a5: v123, a6: v131);
            }
            v124 = *(_QWORD *)(v13 + 40);
            if ( (unsigned __int64)(v124 + 24) > *(_QWORD *)(v13 + 32) )
            {
              v124 = sub_1EAA840(a1: v121, a2: v122, a3: v163, a4: v120, a5: 2);
              v126 = v161;
              v125 = v163;
            }
            else
            {
              v125 = v163;
              *(_QWORD *)(v13 + 40) = v124 + 24;
              *(_QWORD *)v124 = v125;
              *(_DWORD *)(v124 + 8) = 2;
              *(_DWORD *)(v124 + 12) = 0;
              *(_QWORD *)(v124 + 16) = 0;
              v126 = v161;
            }
            v150 = v124;
            v127 = v12 + 58184952;
            *(_DWORD *)(v124 + 16) = 4456446;
            *(_DWORD *)(v124 + 12) = 4456446;
            if ( v126 == 0 )
              goto LABEL_108;
            goto LABEL_67;
          }
          if ( v152 != (_DWORD *)v12 )
          {
LABEL_28:
            v74 = *v152 >> 3;
            v75 = *(_DWORD *)(v12 + 8 * v74 + 44) & (0x171Eu >> HIBYTE(*(_DWORD *)(v12 + 8 * v74 + 44)));
            ((void (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                             + *(_QWORD *)(v12
                                                                         + 8 * v74
                                                                         + HIWORD(*(_DWORD *)(v12
                                                                                            + 8LL
                                                                                            * *(unsigned int *)(v12 + 8 * v74 + 20)
                                                                                            + 4 * v75
                                                                                            + 12))
                                                                         + 72)))(
              a1: v60,
              a2: v75,
              a3: v152);
          }
LABEL_29:
          while ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                                           + *(_QWORD *)(v153
                                                                                       + HIWORD(*(_DWORD *)(v154 + 4LL * v162 + 12))
                                                                                       + 8)))(
                    a1: v60,
                    a2: v61,
                    a3: v156) != 0 )
          {
            v76 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                                                + *(_QWORD *)(v153
                                                                                            + HIWORD(*(_DWORD *)(v154 + 4LL * v162 + 12))
                                                                                            + 16)))(
                              a1: v55,
                              a2: v56,
                              a3: v156);
            v152 = v76;
            if ( v76 != (_DWORD *)v12 )
            {
              v87 = (unsigned __int16)*(_DWORD *)(v12
                                                + 8LL * *(unsigned int *)(v12 + 8LL * (*v76 >> 3) + 20)
                                                + 4LL
                                                * (*(_DWORD *)(v12 + 8LL * (*v76 >> 3) + 44)
                                                 & (0x171Eu >> HIBYTE(*(_DWORD *)(v12 + 8LL * (*v76 >> 3) + 44))))
                                                + 12);
              if ( (_DWORD)v87 != 5918 )
              {
                sub_276FC00(
                  a1: v77,
                  a2: v61,
                  a3: v76,
                  a4: v87,
                  a5: (_DWORD *)(v12 + 40542096),
                  a6: v78,
                  a7: v79,
                  a8: v80,
                  a9: v81,
                  a10: v82,
                  a11: v83,
                  a12: v84,
                  a13: v85,
                  a14: v86,
                  a15: v149);
                goto LABEL_139;
              }
            }
            v60 = *(unsigned int *)(v12 + 374356872);
            v88 = v12 + 8 * v60;
            if ( (_DWORD)v60 == 0 )
            {
LABEL_99:
              v150 = v88;
              v88 = sub_1EDB4A0();
            }
            if ( (_DWORD *)v88 == v152 )
            {
              v150 = v12 + 376668616;
              v136 = sub_5401D60(a1: v60, a2: v61, a3: v12 + 376668616);
              v161 = v136;
              if ( *(_BYTE *)(v12 + 376668632) != 0 && v136 == 0 )
LABEL_112:
                v139 = v12;
              else
                v139 = sub_631C320();
              v151 = v139;
              if ( *(_BYTE *)(v12 + 376668632) == 0 )
                sub_53F5560(
                  a1: v12 + 8LL * (*v152 >> 3),
                  a2: 2,
                  a3: v150,
                  a4: v152,
                  a5: v139,
                  a6: v12 + 8LL * *(unsigned int *)(v12 + 376668644));
              v124 = *(_QWORD *)(v13 + 40);
              if ( (unsigned __int64)(v124 + 24) > *(_QWORD *)(v13 + 32) )
              {
                v124 = sub_1EAA840(a1: v121, a2: v138, a3: v163, a4: v137, a5: 2);
                v140 = v161;
                v125 = v163;
              }
              else
              {
                v125 = v163;
                *(_QWORD *)(v13 + 40) = v124 + 24;
                *(_QWORD *)v124 = v125;
                *(_DWORD *)(v124 + 8) = 2;
                *(_DWORD *)(v124 + 12) = 0;
                *(_QWORD *)(v124 + 16) = 0;
                v140 = v161;
              }
              v150 = v124;
              v127 = v12 + 58184952;
              *(_DWORD *)(v124 + 16) = 4456446;
              *(_DWORD *)(v124 + 12) = 4456446;
              if ( v140 != 0 )
LABEL_67:
                sub_2757300(
                  a1: v151,
                  a2: v125,
                  a3: v12 + 58184952,
                  a4: v127,
                  a5: (__int64)v152,
                  a6: v124,
                  a7: v149,
                  a8: v150,
                  a9: v151,
                  a10: (__int64)v152,
                  a11: v153,
                  a12: v154);
              else
LABEL_108:
                sub_2757260(a1: v121, a2: v125, a3: v12 + 58184952, a4: v127, a5: (__int64)v152, a6: v124);
            }
            else if ( v152 != (_DWORD *)v12 )
            {
              goto LABEL_28;
            }
          }
        }
        result = sub_277DBC0(a1: v55, a2: v56, a3: v53, a4: v54, a5: v57, a6: v58, a7: v149);
        if ( *(int *)(v13 + 16) <= 0 )
          return sub_277F280(a1: v91, a2: v92, a3: v90);
        return result;
      }
    }
    sub_2770780(
      a1: v35,
      a2: v36,
      a3: v48,
      a4: v49,
      a5: v37,
      a6: v38,
      a7: v39,
      a8: v40,
      a9: v41,
      a10: v42,
      a11: v43,
      a12: v44,
      a13: v45,
      a14: v46,
      a15: v149);
    goto LABEL_99;
  }
  v93 = (_DWORD *)sub_5782CA0();
  v156 = v93;
  if ( v93 != (_DWORD *)v12 )
  {
    v105 = *v93 >> 3;
    if ( *(__int16 *)(v12 + 8 * v105 + 62) < 2
      || *(_DWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 8 * v105 + 16) + 16) != 27277 )
    {
      v93 = (_DWORD *)sub_276FC00(
                        a1: v26,
                        a2: v27,
                        a3: v93,
                        a4: v94,
                        a5: (_DWORD *)(v12 + 34099232),
                        a6: v96,
                        a7: v97,
                        a8: v98,
                        a9: v99,
                        a10: v100,
                        a11: v101,
                        a12: v102,
                        a13: v103,
                        a14: v104,
                        a15: v149);
    }
  }
  v106 = v12 + 8LL * *(unsigned int *)(v13 + 72);
  if ( (_DWORD *)v106 != v93 )
  {
    if ( v93 == (_DWORD *)v12 )
    {
      sub_2771080(
        a1: v26,
        a2: v27,
        a3: v106,
        a4: v94,
        a5: v95,
        a6: v96,
        a7: v97,
        a8: v98,
        a9: v99,
        a10: v100,
        a11: v101,
        a12: v102,
        a13: v103,
        a14: v104,
        a15: v149);
    }
    else
    {
      v107 = *(_QWORD *)(v12 + 8LL * (*v93 >> 3) + 248);
      v155 = *v93 >> 3;
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v11 + v107))(a1: v26, a2: v27, a3: v93);
      v108 = *(unsigned int *)(v12 + 8LL * v155 + 16);
      v109 = (unsigned int)*(__int16 *)(v12 + 8LL * v155 + 62);
      if ( *(__int16 *)(v12 + 8LL * v155 + 62) >= 3 && *(_DWORD *)(v12 + 8 * v108 + 20) == 70129 )
      {
        v111 = v159;
        v94 = (__int64)v156;
        goto LABEL_47;
      }
      v94 = (__int64)v156;
      v110 = (unsigned int)v156[3];
      if ( (_DWORD)v110 != 0 )
      {
        if ( *(_BYTE *)(v12 + 8 * v110 + 32) != 0 )
          v111 = v159;
        else
          v111 = v158;
LABEL_47:
        if ( *(__int16 *)(v12 + 8LL * v155 + 62) >= 3 && *(_DWORD *)(v12 + 8 * v108 + 20) == 70516 )
        {
          v133 = *(unsigned int *)(v94 + 104);
          if ( (_DWORD)v133 != 0 && *(_DWORD *)(v12 + 8 * v133) >> 3 == 5059230 )
          {
            v154 = v12 + 8 * v133;
            v153 = v111;
            sub_57DC1C0(a1: v26, a2: v27, a3: v111, a4: v94, a5: v154);
          }
          goto LABEL_51;
        }
        v112 = *(unsigned int *)(v94 + 12);
        if ( (_DWORD)v112 != 0 )
        {
          v113 = *(unsigned int *)(v12 + 8 * v112 + 8);
          if ( (_DWORD)v113 != 0 && *(_DWORD *)(v12 + 8 * v113) >> 3 == 5067741 )
          {
            v134 = *(unsigned int *)(v12 + 8 * v113 + 28);
            if ( (_DWORD)v134 != 0 )
            {
              v135 = *(_DWORD *)(v12 + 8 * v134) >> 3;
              if ( v135 == 4270704 || v135 == 4414499 )
              {
                v153 = v111;
                v154 = v12 + 8 * v113;
                v152 = (_DWORD *)(v12 + 8 * v134);
                sub_57DC1C0(a1: v26, a2: v27, a3: v111, a4: v152, a5: v152);
              }
            }
          }
          goto LABEL_51;
        }
LABEL_127:
        v143 = sub_2771080(
                 a1: v26,
                 a2: v27,
                 a3: v112,
                 a4: v94,
                 a5: v95,
                 a6: v96,
                 a7: v97,
                 a8: v98,
                 a9: v99,
                 a10: v100,
                 a11: v101,
                 a12: v102,
                 a13: v103,
                 a14: v104,
                 a15: v149);
        goto LABEL_128;
      }
    }
    sub_2771080(
      a1: v26,
      a2: v27,
      a3: v109,
      a4: v94,
      a5: v95,
      a6: v96,
      a7: v97,
      a8: v98,
      a9: v99,
      a10: v100,
      a11: v101,
      a12: v102,
      a13: v103,
      a14: v104,
      a15: v149);
    goto LABEL_127;
  }
  while ( 1 )
  {
    do
    {
LABEL_51:
      v114 = v157;
      v115 = *(unsigned int *)(v157 + 4);
      if ( (_DWORD)v115 == 0 )
        goto LABEL_110;
      v29 = *(unsigned int *)(v157 + 8);
      if ( (_DWORD)v29 == *(_DWORD *)(v12 + 8 * v115 + 12) )
        goto LABEL_19;
      v116 = (_DWORD *)sub_5782CA0();
      v156 = v116;
      if ( v116 != (_DWORD *)v12 )
      {
        v118 = *v116 >> 3;
        if ( *(__int16 *)(v12 + 8 * v118 + 62) < 2 )
          goto LABEL_111;
        v117 = *(unsigned int *)(v12 + 8 * v118 + 16);
        if ( *(_DWORD *)(v12 + 8 * v117 + 16) != 27277 )
          goto LABEL_111;
      }
    }
    while ( (_DWORD *)(v12 + 8LL * *(unsigned int *)(v13 + 72)) == v116 );
    if ( v116 == (_DWORD *)v12 )
      break;
    v141 = (void (__fastcall *)(__int64, _QWORD, _DWORD *))(v11 + *(_QWORD *)(v12 + 8LL * (*v116 >> 3) + 248));
    v155 = *v116 >> 3;
    v141(a1: v26, a2: v141, a3: v116);
    v142 = *(unsigned int *)(v12 + 8LL * v155 + 16);
    v95 = (unsigned int)*(__int16 *)(v12 + 8LL * v155 + 62);
    if ( *(__int16 *)(v12 + 8LL * v155 + 62) >= 3 && *(_DWORD *)(v12 + 8 * v142 + 20) == 70129 )
    {
      v94 = v159;
      v143 = (__int64)v156;
    }
    else
    {
      v143 = (__int64)v156;
      v144 = (unsigned int)v156[3];
      if ( (_DWORD)v144 == 0 )
        goto LABEL_140;
      if ( *(_BYTE *)(v12 + 8 * v144 + 32) != 0 )
        v94 = v159;
      else
LABEL_128:
        v94 = v158;
    }
    if ( (__int16)v95 >= 3 && *(_DWORD *)(v12 + 8 * v142 + 20) == 70516 )
    {
      v148 = *(unsigned int *)(v143 + 104);
      if ( (_DWORD)v148 != 0 )
      {
        v95 = *(_DWORD *)(v12 + 8 * v148) >> 3;
        if ( (_DWORD)v95 == 5059230 )
          return sub_18277D761(
                   a1: v26,
                   a2: v27,
                   a3: v94,
                   a4: v94,
                   a5: (int)v12 + 8 * (int)v148,
                   a6: v96,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11);
      }
    }
    else
    {
      v145 = *(unsigned int *)(v143 + 12);
      if ( (_DWORD)v145 == 0 )
        goto LABEL_141;
      v146 = *(unsigned int *)(v12 + 8 * v145 + 8);
      if ( (_DWORD)v146 != 0 )
      {
        v95 = *(_DWORD *)(v12 + 8 * v146) >> 3;
        if ( (_DWORD)v95 == 5067741 )
        {
          v147 = *(unsigned int *)(v12 + 8 * v146 + 28);
          if ( (_DWORD)v147 != 0 )
          {
            v95 = *(_DWORD *)(v12 + 8 * v147) >> 3;
            if ( (_DWORD)v95 == 4270704 || (_DWORD)v95 == 4414499 )
            {
              v154 = v12 + 8 * v146;
              return sub_18277D712(
                       a1: v26,
                       a2: v27,
                       a3: v94,
                       a4: v94,
                       a5: (int)v12 + 8 * (int)v147,
                       a6: v96,
                       a7,
                       a8,
                       a9,
                       a10);
            }
          }
        }
      }
    }
  }
LABEL_139:
  sub_2771080(
    a1: v26,
    a2: v27,
    a3: v117,
    a4: v94,
    a5: v95,
    a6: v96,
    a7: v97,
    a8: v98,
    a9: v99,
    a10: v100,
    a11: v101,
    a12: v102,
    a13: v103,
    a14: v104,
    a15: v149);
LABEL_140:
  sub_2771080(
    a1: v26,
    a2: v27,
    a3: v142,
    a4: v144,
    a5: v95,
    a6: v96,
    a7: v97,
    a8: v98,
    a9: v99,
    a10: v100,
    a11: v101,
    a12: v102,
    a13: v103,
    a14: v104,
    a15: v149);
LABEL_141:
  sub_2771080(
    a1: v26,
    a2: v160,
    a3: v159,
    a4: v94,
    a5: v95,
    a6: v96,
    a7: v97,
    a8: v98,
    a9: v99,
    a10: v100,
    a11: v101,
    a12: v102,
    a13: v103,
    a14: v104,
    a15: v149);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_277D800();
}
