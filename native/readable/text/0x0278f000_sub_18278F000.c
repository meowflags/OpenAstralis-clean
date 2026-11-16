// sub_278F000
// rva 0x0278f000  size 3129  section .text  group text
// window base 0x18278f000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278F000(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
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
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  unsigned int *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // rcx
  unsigned int *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int64 j; // rbp
  __int64 v60; // rbp
  unsigned int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // r9
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __m128 v67; // xmm2
  __m128 v68; // xmm3
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __m128 v71; // xmm6
  __m128 v72; // xmm7
  unsigned int *v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  unsigned int *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbp
  int v81; // eax
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // r9
  __m128 v85; // xmm0
  __m128 v86; // xmm1
  __m128 v87; // xmm2
  __m128 v88; // xmm3
  __m128 v89; // xmm4
  __m128 v90; // xmm5
  __m128 v91; // xmm6
  __m128 v92; // xmm7
  unsigned int *v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  unsigned int v96; // ebx
  unsigned int v97; // ebx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rsi
  __int16 v101; // ax
  __int64 v102; // rbp
  char *v103; // rdx
  __int64 result; // rax
  __int64 v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  unsigned int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rdx
  unsigned __int64 v115; // r9
  __int64 v116; // rcx
  unsigned int v117; // eax
  __int64 v118; // rcx
  unsigned int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rdx
  unsigned __int64 v123; // r9
  char v124; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v125; // [rsp+14h] [rbp-74h]
  __int64 v126; // [rsp+18h] [rbp-70h]
  __int64 v127; // [rsp+20h] [rbp-68h]
  __int64 v128; // [rsp+28h] [rbp-60h]
  __int64 v129; // [rsp+30h] [rbp-58h]
  unsigned int *v130; // [rsp+38h] [rbp-50h]
  int v131; // [rsp+44h] [rbp-44h]
  unsigned int v132; // [rsp+48h] [rbp-40h]
  unsigned int v133; // [rsp+4Ch] [rbp-3Ch]
  unsigned int v134; // [rsp+50h] [rbp-38h]
  unsigned int v135; // [rsp+54h] [rbp-34h]
  int v136; // [rsp+58h] [rbp-30h]
  unsigned int v137; // [rsp+5Ch] [rbp-2Ch]
  unsigned int v138; // [rsp+60h] [rbp-28h]
  unsigned int v139; // [rsp+64h] [rbp-24h]
  __int64 v140; // [rsp+68h] [rbp-20h]
  __int64 v141; // [rsp+70h] [rbp-18h]
  unsigned int v142; // [rsp+7Ch] [rbp-Ch]
  __int64 v143; // [rsp+80h] [rbp-8h]

  v130 = a3;
  if ( (unsigned __int64)&v124 <= *(_QWORD *)(v17 + 8) )
  {
    v129 = a5;
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_70;
  }
  v18 = a3[3];
  if ( (_DWORD)v18 == 0 )
  {
LABEL_70:
    v129 = a5;
    sub_2771080(a1, a2, (__int64)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v124);
LABEL_71:
    v139 = v33;
    v106 = sub_50130C0(a1: v20, a2: v21, a3: 64, a4: v33, a5: (unsigned int)v33);
    v110 = sub_50130C0(a1: v108, a2: v109, a3: v106, a4: v107, a5: v142);
    if ( (v110 & 0x80000000) == 0 )
    {
      v114 = *(_QWORD *)(v17 + 40);
      v115 = (v110 + 19LL) & 0x1FFFFFFF8LL;
      if ( v115 >= 0x20000 || (v123 = v114 + v115) > *(_QWORD *)(v17 + 32) )
      {
        v138 = v110;
        v114 = sub_1EAA840(a1: 34082368, a2: v113, a3: 34082368, a4: v111, a5: v110);
        v110 = v138;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v123;
        *(_QWORD *)v114 = 34082368;
        *(_DWORD *)(v114 + 8) = v110;
      }
      v128 = v114;
      v138 = v110;
      sub_1EB4960(a1: v110, a2: 0, a3: v16 + 376351544, a4: v114, a5: 0, a6: v114);
      v117 = sub_5011920(a1: v142, a2: v16 + 58185264, a3: v138, a4: v116, a5: 0, a6: v128);
      v119 = sub_5011920(a1: v139, a2: v16 + 58185288, a3: v117, a4: v118, a5: 0, a6: v128);
      v120 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
      {
        v134 = v119;
        v120 = sub_1EAA920(a1: v37, a2: v43, a3: v141);
        v119 = v134;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v120 + 40;
        *(_DWORD *)v120 = 40470128;
        *(_DWORD *)(v120 + 4) = 0;
        *(_QWORD *)(v120 + 8) = 0;
        *(_QWORD *)(v120 + 16) = 0;
        *(_QWORD *)(v120 + 24) = 0;
        *(_QWORD *)(v120 + 32) = 0;
      }
      *(_DWORD *)(v120 + 20) = 46923644;
      *(_DWORD *)(v120 + 16) = *(_DWORD *)(v16 + 374343896);
      *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
      v121 = *(_QWORD *)(v17 + 40);
      v44 = v121 + 24;
      if ( (unsigned __int64)(v121 + 24) > *(_QWORD *)(v17 + 32) )
      {
        v126 = v120;
        v134 = v119;
        v121 = sub_1EAA920(a1: v37, a2: v43, a3: 34082680);
        v120 = v126;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v44;
        *(_DWORD *)v121 = 34082680;
        *(_DWORD *)(v121 + 4) = 0;
        *(_QWORD *)(v121 + 8) = 0;
        *(_QWORD *)(v121 + 16) = 0;
      }
      *(_DWORD *)(v121 + 4) = (unsigned __int64)(v128 - v16) >> 3;
      *(_DWORD *)(v120 + 8) = (unsigned __int64)(v121 - v16) >> 3;
      if ( (*(_DWORD *)v120 & 2) != 0 )
      {
        v44 = (v120 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v120 - v44) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v120 - v44) >> 9) + 0x38) = 0;
      }
      goto LABEL_79;
    }
    goto LABEL_99;
  }
  v129 = a5;
  v19 = sub_27B6940(a1, a2, a3: v16 + 8 * v18);
  v142 = v19;
  v32 = v130;
  v33 = v130[10];
  v141 = 40470128;
  if ( v19 <= (int)v33 )
    goto LABEL_71;
  if ( v19 < 0 )
    goto LABEL_80;
  v34 = *(_QWORD *)(v17 + 40);
  v35 = *(_QWORD *)(v17 + 32);
  v36 = (4LL * (unsigned int)v19 + 19) & 0x7FFFFFFF8LL;
  v37 = 40544584;
  if ( v36 >= 0x20000 || v34 + v36 > v35 )
  {
    v128 = sub_1EAA840(a1: 40544584, a2: v36, a3: 40544584, a4: v35, a5: v142);
    v19 = v142;
    v32 = v130;
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v34 + v36;
    *(_QWORD *)v34 = 40544584;
    *(_DWORD *)(v34 + 8) = v19;
    *(_DWORD *)(v34 + 12) = 0;
    if ( v36 - 16 >= 0x800 )
    {
      memset((void *)(v34 + 16), 0, v36 - 16);
      v37 = v34 + v36;
      v19 = v142;
    }
    else
    {
      for ( i = 16; v36 > i; i += 8LL )
        *(_QWORD *)(v34 + i) = 0;
    }
    v128 = v34;
  }
  v140 = 34089376;
  v39 = v16 + 376670432;
  v127 = v16 + 376670432;
  v40 = 0;
  while ( 1 )
  {
    v139 = v40;
    if ( v19 <= (int)v40 )
      break;
    v41 = v32[3];
    if ( (_DWORD)v41 == 0 )
      goto LABEL_81;
    v42 = sub_27B6940(a1: v37, a2: v39, a3: v16 + 8 * v41);
    v44 = *(unsigned int *)(v16 + 374343896);
    if ( v42 == 0 )
      goto LABEL_82;
    v45 = v130;
    v138 = v42;
    v46 = v130[6];
    if ( (_DWORD)v46 == 0 )
    {
      sub_2771080(
        a1: v37,
        a2: v43,
        a3: (__int64)v130,
        a4: v44,
        a5: v46,
        a6: v23,
        a7: (__m128)v24.m128i_i128,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v124);
LABEL_86:
      sub_2771080(
        a1: v37,
        a2: v43,
        a3: (__int64)v45,
        a4: v44,
        a5: v48,
        a6: v23,
        a7: (__m128)v24.m128i_i128,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v124);
LABEL_87:
      v120 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
      {
        v125 = v44;
        v120 = sub_1EAA920(a1: v37, a2: v43, a3: v141);
        v44 = v125;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v120 + 40;
        *(_DWORD *)v120 = 40470128;
        *(_DWORD *)(v120 + 4) = 0;
        *(_QWORD *)(v120 + 8) = 0;
        *(_QWORD *)(v120 + 16) = 0;
        *(_QWORD *)(v120 + 24) = 0;
        *(_QWORD *)(v120 + 32) = 0;
      }
      *(_DWORD *)(v120 + 20) = 46923644;
      *(_DWORD *)(v120 + 16) = v44;
      *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
      *(_DWORD *)(v120 + 8) = 46229684;
      goto LABEL_79;
    }
    v47 = *(unsigned int *)(v16 + 8 * v46 + 8);
    v48 = v16 + 8 * v46;
    if ( (_DWORD)v47 == 0 )
      goto LABEL_86;
    if ( (signed int)v42 >= *(_DWORD *)(v16 + 8 * v47 + 8) )
      goto LABEL_87;
    v49 = sub_27B9BC0(a1: v37, a2: v43, a3: v48, a4: v44, a5: v42);
    v44 = *(unsigned int *)(v16 + 374343896);
    v43 = v127;
    if ( v127 != v49 )
    {
      v120 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
      {
        v125 = *(_DWORD *)(v16 + 374343896);
        v120 = sub_1EAA920(a1: v37, a2: v127, a3: v141);
        v44 = v125;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v120 + 40;
        *(_DWORD *)v120 = 40470128;
        *(_DWORD *)(v120 + 4) = 0;
        *(_QWORD *)(v120 + 8) = 0;
        *(_QWORD *)(v120 + 16) = 0;
        *(_QWORD *)(v120 + 24) = 0;
        *(_QWORD *)(v120 + 32) = 0;
      }
      *(_DWORD *)(v120 + 20) = 46923644;
      *(_DWORD *)(v120 + 16) = v44;
      *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
      *(_DWORD *)(v120 + 8) = 46229695;
      goto LABEL_79;
    }
    if ( (int)v142 <= (int)v130[10] )
    {
      v120 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
      {
        v125 = *(_DWORD *)(v16 + 374343896);
        v120 = sub_1EAA920(a1: v37, a2: v127, a3: v141);
        v44 = v125;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v120 + 40;
        *(_DWORD *)v120 = 40470128;
        *(_DWORD *)(v120 + 4) = 0;
        *(_QWORD *)(v120 + 8) = 0;
        *(_QWORD *)(v120 + 16) = 0;
        *(_QWORD *)(v120 + 24) = 0;
        *(_QWORD *)(v120 + 32) = 0;
      }
      *(_DWORD *)(v120 + 20) = 46923644;
      *(_DWORD *)(v120 + 16) = v44;
      *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
      *(_DWORD *)(v120 + 8) = 45603475;
      goto LABEL_79;
    }
    v51 = v130[3];
    if ( (_DWORD)v51 == 0 )
    {
      sub_2771080(
        a1: v37,
        a2: v127,
        a3: (__int64)v130,
        a4: v51,
        a5: v50,
        a6: v23,
        a7: (__m128)v24.m128i_i128,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v124);
LABEL_97:
      sub_2770E80(
        a1: v37,
        a2: v43,
        a3: v137,
        a4: v53,
        a5: v54,
        a6: v23,
        a7: (__m128)v24.m128i_i128,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v124);
LABEL_98:
      v110 = sub_2771220(
               a1: v37,
               a2: v43,
               a3: v139,
               a4: v98,
               a5: v142,
               a6: v23,
               a7: (__m128)v24.m128i_i128,
               a8: v25,
               a9: v26,
               a10: v27,
               a11: v28,
               a12: v29,
               a13: v30,
               a14: v31,
               a15: v124);
LABEL_99:
      v138 = v110;
      v122 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v122 + 40) > *(_QWORD *)(v17 + 32) )
        goto LABEL_124;
      *(_QWORD *)(v17 + 40) = v122 + 40;
      *(_DWORD *)v122 = 34082880;
      *(_DWORD *)(v122 + 4) = 0;
      *(_QWORD *)(v122 + 8) = 0;
      *(_QWORD *)(v122 + 16) = 0;
      *(_QWORD *)(v122 + 24) = 0;
      *(_QWORD *)(v122 + 32) = 0;
LABEL_101:
      *(_DWORD *)(v122 + 20) = 46923644;
      *(_DWORD *)(v122 + 16) = *(_DWORD *)(v16 + 374343896);
      *(_DWORD *)(v122 + 12) = (unsigned __int64)(v122 - v16) >> 3;
      v128 = v122;
      sub_503B9A0(a1: v112, a2: v113, a3: v122, a4: v111, a5: 0);
      v120 = v128;
      *(_DWORD *)(v128 + 8) = 46004603;
      if ( (*(_DWORD *)v120 & 2) != 0 )
      {
        v44 = (v120 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v120 - v44) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v120 - v44) >> 9) + 0x38) = 0;
      }
      goto LABEL_79;
    }
    v52 = sub_27B6940(a1: v37, a2: v127, a3: v16 + 8 * v51);
    v137 = v52;
    if ( v52 < 0 )
      goto LABEL_97;
    v55 = *(_QWORD *)(v17 + 40);
    v56 = *(_QWORD *)(v17 + 32);
    v57 = (2LL * (unsigned int)v52 + 19) & 0x3FFFFFFF8LL;
    if ( v57 >= 0x20000 || v55 + v57 > v56 )
    {
      v126 = sub_1EAA840(a1: v37, a2: v43, a3: v140, a4: v56, a5: v137);
      v52 = v137;
      v58 = v140;
    }
    else
    {
      v58 = v140;
      *(_QWORD *)(v17 + 40) = v55 + v57;
      *(_QWORD *)v55 = v58;
      *(_DWORD *)(v55 + 8) = v52;
      *(_DWORD *)(v55 + 12) = 0;
      if ( v57 - 16 >= 0x800 )
      {
        memset((void *)(v55 + 16), 0, v57 - 16);
        v37 = v55 + v57;
        v52 = v137;
        v58 = v140;
      }
      else
      {
        for ( j = 16; v57 > j; j += 8LL )
          *(_QWORD *)(v55 + j) = 0;
      }
      v126 = v55;
    }
    if ( v52 < 1 )
    {
      v136 = 0;
      v97 = v142;
      v98 = v126;
    }
    else
    {
      v60 = v130[3];
      if ( (_DWORD)v60 == 0 )
      {
        sub_2771080(
          a1: v37,
          a2: v43,
          a3: v55,
          a4: v58,
          a5: v54,
          a6: v23,
          a7: (__m128)v24.m128i_i128,
          a8: v25,
          a9: v26,
          a10: v27,
          a11: v28,
          a12: v29,
          a13: v30,
          a14: v31,
          a15: v124);
LABEL_104:
        v135 = v75;
        sub_2771080(
          a1: v62,
          a2: v63,
          a3: (__int64)v73,
          a4: v75,
          a5: v74,
          a6: v64,
          a7: v65,
          a8: v66,
          a9: v67,
          a10: v68,
          a11: v69,
          a12: v70,
          a13: v71,
          a14: v72,
          a15: v124);
LABEL_105:
        v143 = v15;
        v133 = v135;
        v135 = 0;
        goto LABEL_106;
      }
      v61 = sub_27B6940(a1: v37, a2: v43, a3: v16 + 8 * v60);
      v73 = v130;
      v74 = v130[6];
      v75 = (unsigned __int16)v61;
      if ( (_DWORD)v74 == 0 )
        goto LABEL_104;
      v134 = v61;
      v135 = (unsigned __int16)v61;
      if ( *(_BYTE *)(sub_27B9BC0(
                        a1: v62,
                        a2: v63,
                        a3: v16 + 8 * v74,
                        a4: (unsigned __int16)v61,
                        a5: (unsigned __int16)v61)
                    + 17) == 0 )
        goto LABEL_105;
      *(_WORD *)(v126 + 12) = v134;
      v77 = v137;
      v78 = v130;
      v79 = 1;
      while ( v77 > (int)v79 )
      {
        v80 = v78[3];
        if ( (_DWORD)v80 == 0 )
        {
          sub_2771080(
            a1: v37,
            a2: v43,
            a3: (__int64)v78,
            a4: v79,
            a5: v76,
            a6: v23,
            a7: (__m128)v24.m128i_i128,
            a8: v25,
            a9: v26,
            a10: v27,
            a11: v28,
            a12: v29,
            a13: v30,
            a14: v31,
            a15: v124);
LABEL_121:
          v132 = v95;
          sub_2771080(
            a1: v82,
            a2: v83,
            a3: (__int64)v93,
            a4: v95,
            a5: v94,
            a6: v84,
            a7: v85,
            a8: v86,
            a9: v87,
            a10: v88,
            a11: v89,
            a12: v90,
            a13: v91,
            a14: v92,
            a15: v124);
LABEL_122:
          v143 = v15;
          v133 = v132;
          v135 = v134;
LABEL_106:
          v120 = *(_QWORD *)(v17 + 40);
          if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
          {
            v120 = sub_1EAA920(a1: v37, a2: v43, a3: v141);
          }
          else
          {
            *(_QWORD *)(v17 + 40) = v120 + 40;
            *(_DWORD *)v120 = 40470128;
            *(_DWORD *)(v120 + 4) = 0;
            *(_QWORD *)(v120 + 8) = 0;
            *(_QWORD *)(v120 + 16) = 0;
            *(_QWORD *)(v120 + 24) = 0;
            *(_QWORD *)(v120 + 32) = 0;
          }
          *(_DWORD *)(v120 + 20) = 46923644;
          *(_DWORD *)(v120 + 16) = *(_DWORD *)(v16 + 374343896);
          *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
          for ( *(_DWORD *)(v120 + 8) = 46229362; ; *(_DWORD *)(v120 + 8) = 46229709 )
          {
LABEL_79:
            v24 = sub_2769900(
                    a1: v37,
                    a2: v43,
                    a3: (_DWORD *)v120,
                    a4: v44,
                    a5: (__int64)&a15,
                    a6: v23,
                    a7: (__m128)v24.m128i_i128,
                    a8: v25,
                    a9: v26,
                    a10: v27,
                    a11: v28,
                    a12: v29,
                    a13: v30,
                    a14: v31);
LABEL_80:
            sub_2770E80(
              a1: v20,
              a2: v21,
              a3: v142,
              a4: v33,
              a5: v22,
              a6: v23,
              a7: (__m128)v24.m128i_i128,
              a8: v25,
              a9: v26,
              a10: v27,
              a11: v28,
              a12: v29,
              a13: v30,
              a14: v31,
              a15: v124);
LABEL_81:
            sub_2771080(
              a1: v37,
              a2: v39,
              a3: (__int64)v32,
              a4: v40,
              a5: v41,
              a6: v23,
              a7: (__m128)v24.m128i_i128,
              a8: v25,
              a9: v26,
              a10: v27,
              a11: v28,
              a12: v29,
              a13: v30,
              a14: v31,
              a15: v124);
LABEL_82:
            v120 = *(_QWORD *)(v17 + 40);
            if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v17 + 32) )
            {
              v125 = v44;
              v120 = sub_1EAA920(a1: v37, a2: v43, a3: v141);
              v44 = v125;
            }
            else
            {
              *(_QWORD *)(v17 + 40) = v120 + 40;
              *(_DWORD *)v120 = 40470128;
              *(_DWORD *)(v120 + 4) = 0;
              *(_QWORD *)(v120 + 8) = 0;
              *(_QWORD *)(v120 + 16) = 0;
              *(_QWORD *)(v120 + 24) = 0;
              *(_QWORD *)(v120 + 32) = 0;
            }
            *(_DWORD *)(v120 + 20) = 46923644;
            *(_DWORD *)(v120 + 16) = v44;
            *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v16) >> 3;
          }
        }
        v134 = v79;
        v81 = sub_27B6940(a1: v37, a2: v43, a3: v16 + 8 * v80);
        v93 = v130;
        v94 = v130[6];
        v95 = (unsigned __int16)v81;
        if ( (_DWORD)v94 == 0 )
          goto LABEL_121;
        v131 = v81;
        v132 = (unsigned __int16)v81;
        if ( *(_BYTE *)(sub_27B9BC0(
                          a1: v82,
                          a2: v83,
                          a3: v16 + 8 * v94,
                          a4: (unsigned __int16)v81,
                          a5: (unsigned __int16)v81)
                      + 17) == 0 )
          goto LABEL_122;
        v77 = v137;
        if ( v137 <= v134 )
        {
          sub_2771220(
            a1: v139,
            a2: v126,
            a3: v134,
            a4: v138,
            a5: v137,
            a6: v132,
            a7: (__m128)v24.m128i_i128,
            a8: v25,
            a9: v26,
            a10: v27,
            a11: v28,
            a12: v29,
            a13: v30,
            a14: v31,
            a15: v124);
LABEL_124:
          v122 = sub_1EAA920(a1: v112, a2: v113, a3: 34082880);
          goto LABEL_101;
        }
        v96 = v134;
        *(_WORD *)(v126 + 2LL * v134 + 12) = v131;
        v79 = v96 + 1;
        v78 = v130;
      }
      v136 = v79;
      v98 = v126;
      v97 = v142;
    }
    if ( v97 <= v139 )
      goto LABEL_98;
    v99 = *(_QWORD *)(v17 + 40);
    v100 = v99 + 24;
    if ( (unsigned __int64)(v99 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v99 = sub_1EAA920(a1: v37, a2: v100, a3: 40544696, a4: v98);
      v98 = v126;
      v101 = v138;
      v39 = v139;
      v102 = v128;
      v97 = v142;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v100;
      *(_DWORD *)v99 = 40544696;
      *(_DWORD *)(v99 + 4) = 0;
      *(_QWORD *)(v99 + 8) = 0;
      *(_QWORD *)(v99 + 16) = 0;
      v101 = v138;
      v39 = v139;
      v102 = v128;
    }
    *(_WORD *)(v99 + 8) = v101;
    *(_DWORD *)(v99 + 4) = (unsigned __int64)(v98 - v16) >> 3;
    *(_DWORD *)(v102 + 4 * v39 + 12) = (unsigned __int64)(v99 - v16) >> 3;
    v40 = (unsigned int)(v39 + 1);
    if ( (*(_DWORD *)v102 & 2) != 0 )
    {
      if ( (*(_DWORD *)v102 & 1) != 0 )
      {
        v103 = (char *)(v102 - *(_QWORD *)(v102 - 8));
        v39 = (4 * v39 + 12) >> 9;
        if ( v103[v39 + 48] != 0 )
          v103[v39 + 48] = 0;
        v19 = v97;
        v32 = v130;
      }
      else
      {
        v39 = (v102 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v102 & 0xFFFFFFFFFFF80000LL) + ((v102 - v39) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v102 & 0xFFFFFFFFFFF80000LL) + ((v102 - v39) >> 9) + 0x38) = 0;
        v19 = v97;
        v32 = v130;
      }
    }
    else
    {
      v19 = v97;
      v32 = v130;
    }
  }
  result = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v17 + 32) )
  {
    result = sub_1EAA920(a1: v37, a2: v39, a3: 40544808);
  }
  else
  {
    *(_QWORD *)(v17 + 40) = result + 16;
    *(_DWORD *)result = 40544808;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
  }
  v105 = (unsigned __int64)(v128 - v16) >> 3;
  *(_DWORD *)(result + 4) = v105;
  if ( *(int *)(v17 + 16) <= 0 )
    return sub_277F280(a1: v37, a2: v39, a3: v105, a4: v40);
  return result;
}
