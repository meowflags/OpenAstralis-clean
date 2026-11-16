// sub_279A460
// rva 0x0279a460  size 19345  section .text  group text
// window base 0x18279a460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_279A460(
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
  unsigned __int64 v15; // rbx
  __int64 v16; // r13
  _DWORD *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // eax
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
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // r10
  unsigned __int64 v41; // r11
  unsigned __int64 i; // r9
  __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int64 j; // rsi
  __int64 v46; // rsi
  __int64 v47; // rdi
  char *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rbp
  __int64 v55; // rsi
  __int64 v56; // r8
  __int64 v57; // rdi
  _DWORD *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // r9
  __m128 v62; // xmm0
  __m128 v63; // xmm1
  __m128 v64; // xmm2
  __m128 v65; // xmm3
  __m128 v66; // xmm4
  __m128 v67; // xmm5
  __m128 v68; // xmm6
  __m128 v69; // xmm7
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  unsigned __int16 v74; // bp
  __int64 v75; // rsi
  __int64 v76; // rdi
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // r10
  __int64 v79; // rsi
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rdi
  __int64 (__fastcall *v88)(__int64, _DWORD *, _DWORD *); // rcx
  _DWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // r8
  __int64 v95; // r9
  __m128 v96; // xmm0
  __m128 v97; // xmm1
  __m128 v98; // xmm2
  __m128 v99; // xmm3
  __m128 v100; // xmm4
  __m128 v101; // xmm5
  __m128 v102; // xmm6
  __m128 v103; // xmm7
  __int64 v104; // rcx
  _DWORD *v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rcx
  int v109; // r10d
  int v110; // r9d
  __int64 v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __m128 v117; // xmm0
  __m128 v118; // xmm1
  __m128 v119; // xmm2
  __m128 v120; // xmm3
  __m128 v121; // xmm4
  __m128 v122; // xmm5
  __m128 v123; // xmm6
  __m128 v124; // xmm7
  __int64 v125; // rdx
  __int64 v126; // rsi
  __int64 v127; // rdx
  int v128; // eax
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rcx
  __int64 v132; // rdx
  unsigned __int64 v133; // r9
  __int64 v134; // rcx
  int v135; // eax
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // r9
  __m128 v139; // xmm0
  __m128 v140; // xmm1
  __m128 v141; // xmm2
  __m128 v142; // xmm3
  __m128 v143; // xmm4
  __m128 v144; // xmm5
  __m128 v145; // xmm6
  __m128 v146; // xmm7
  __int64 v147; // rdx
  __int64 v148; // r8
  unsigned __int64 v149; // rcx
  _DWORD *v150; // rax
  __int64 v151; // rdx
  unsigned __int64 v152; // rdx
  __int64 v153; // rdx
  unsigned int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rdx
  unsigned __int64 v159; // r9
  __int64 v160; // rcx
  unsigned int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // rdx
  unsigned __int64 v165; // rdx
  unsigned __int64 v166; // r9
  __int64 v167; // rbp
  unsigned __int64 v168; // r9
  __int64 v169; // rcx
  int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rdi
  __int64 v175; // rsi
  unsigned int v176; // eax
  __int64 v177; // rcx
  __int64 v178; // rdi
  __int64 v179; // rsi
  __int64 v180; // rdx
  unsigned __int64 v181; // r9
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // r8
  unsigned int v190; // eax
  __int64 v191; // rdi
  __int64 v192; // rsi
  __int64 v193; // r9
  unsigned __int64 v194; // r9
  unsigned __int64 v195; // r8
  __int64 v196; // rbp
  __int64 v197; // rdx
  unsigned __int64 v198; // rdx
  unsigned __int64 v199; // r9
  __int64 v200; // rcx
  char v201; // [rsp+0h] [rbp-178h] BYREF
  _DWORD *v202; // [rsp+18h] [rbp-160h]
  int v203; // [rsp+24h] [rbp-154h]
  int v204; // [rsp+28h] [rbp-150h]
  int v205; // [rsp+2Ch] [rbp-14Ch]
  _DWORD *v206; // [rsp+48h] [rbp-130h]
  __int64 v207; // [rsp+58h] [rbp-120h]
  __int64 v208; // [rsp+60h] [rbp-118h]
  __int64 v209; // [rsp+68h] [rbp-110h]
  __int64 v210; // [rsp+B0h] [rbp-C8h]
  _DWORD *v211; // [rsp+B8h] [rbp-C0h]
  _DWORD *v212; // [rsp+C0h] [rbp-B8h]
  __int64 v213; // [rsp+C8h] [rbp-B0h]
  unsigned int v214; // [rsp+D4h] [rbp-A4h]
  __int64 v215; // [rsp+D8h] [rbp-A0h]
  char *v216; // [rsp+E0h] [rbp-98h]
  __int64 v217; // [rsp+E8h] [rbp-90h]
  BOOL v218; // [rsp+F0h] [rbp-88h]
  int v219; // [rsp+F4h] [rbp-84h]
  int v220; // [rsp+F8h] [rbp-80h]
  int v221; // [rsp+FCh] [rbp-7Ch]
  unsigned int v222; // [rsp+100h] [rbp-78h]
  unsigned int v223; // [rsp+104h] [rbp-74h]
  int v224; // [rsp+114h] [rbp-64h]
  unsigned int v225; // [rsp+11Ch] [rbp-5Ch]
  unsigned int v226; // [rsp+128h] [rbp-50h]
  unsigned int v227; // [rsp+12Ch] [rbp-4Ch]
  __int64 v228; // [rsp+130h] [rbp-48h]
  __int64 v229; // [rsp+138h] [rbp-40h]
  unsigned int v230; // [rsp+140h] [rbp-38h]
  int v231; // [rsp+144h] [rbp-34h]
  __int64 v232; // [rsp+148h] [rbp-30h]
  __int64 v233; // [rsp+150h] [rbp-28h]
  __int64 v234; // [rsp+158h] [rbp-20h]
  unsigned int v235; // [rsp+164h] [rbp-14h]
  __int64 v236; // [rsp+168h] [rbp-10h]

  v217 = a3;
  if ( (unsigned __int64)&v201 <= *(_QWORD *)(v18 + 8) )
    goto LABEL_66;
  v19 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v19 == 0 )
    goto LABEL_67;
  v20 = sub_27B6940(a1, a2, a3: &v17[2 * v19]);
  v235 = v20;
  v33 = 34082680;
  v34 = 34082368;
  v234 = 34082368;
  v15 = 34082880;
  if ( v20 < 1 )
    goto LABEL_68;
  v35 = *(unsigned int *)(v217 + 12);
  if ( (_DWORD)v35 == 0 )
  {
    sub_2771080(
      a1: v21,
      a2: v35,
      a3: 34082680,
      a4: 34082368,
      a5: v23,
      a6: v24,
      a7: v25,
      a8: v26,
      a9: v27,
      a10: v28,
      a11: v29,
      a12: v30,
      a13: v31,
      a14: v32,
      a15: v201);
    goto LABEL_78;
  }
  v36 = (unsigned int)v17[2 * v35 + 2];
  v37 = (__int64)&v17[2 * v35];
  if ( (_DWORD)v36 == 0 )
  {
LABEL_78:
    sub_2771080(
      a1: v36,
      a2: v37,
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
      a14: v32,
      a15: v201);
LABEL_79:
    sub_2771080(
      a1: v47,
      a2: v46,
      a3: v53,
      a4: v34,
      a5: v38,
      a6: v43,
      a7: v25,
      a8: v26,
      a9: v27,
      a10: v28,
      a11: v29,
      a12: v30,
      a13: v31,
      a14: v32,
      a15: v201);
    goto LABEL_80;
  }
  v216 = (char *)v37;
  v38 = *(_QWORD *)(v18 + 40);
  v39 = *(_QWORD *)(v18 + 32);
  v40 = (unsigned int)v20;
  v41 = ((unsigned int)v20 + 19LL) & 0x1FFFFFFF8LL;
  if ( v41 >= 0x20000 || v38 + v41 > v39 )
  {
    v229 = (unsigned int)v20;
    v214 = v36;
    v233 = 34082880;
    v232 = 34082680;
    v38 = sub_1EAA840(a1: v36, a2: v37, a3: v234, a4: 34082368, a5: v235, a6: v39);
    v40 = v229;
    v37 = (__int64)v216;
    v36 = v214;
    v15 = v233;
    v34 = v234;
    v33 = v232;
    v20 = v235;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v38 + v41;
    *(_QWORD *)v38 = 34082368;
    *(_DWORD *)(v38 + 8) = v20;
    *(_DWORD *)(v38 + 12) = 0;
    if ( v41 - 16 >= 0x800 )
    {
      v229 = (unsigned int)v20;
      v214 = v36;
      v233 = 34082880;
      v232 = 34082680;
      memset((void *)(v38 + 16), 0, v41 - 16);
      v36 = v214;
      v34 = v234;
      v20 = v235;
    }
    else
    {
      for ( i = 16; v41 > i; i += 8LL )
        *(_QWORD *)(v38 + i) = 0;
    }
  }
  v215 = v38;
  v43 = *(_QWORD *)(v18 + 40);
  v44 = (4 * v40 + 19) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v44 >= 0x20000 || (v37 = v43 + v44, v43 + v44 > *(_QWORD *)(v18 + 32)) )
  {
    v214 = v36;
    v233 = v15;
    v232 = v33;
    v213 = sub_1EAA840(a1: v36, a2: v37, a3: 34089120, a4: v34, a5: v235, a6: v43);
    v38 = v215;
    v36 = v214;
    v15 = v233;
    v34 = v234;
    v33 = v232;
    v20 = v235;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v37;
    *(_QWORD *)v43 = 34089120;
    *(_DWORD *)(v43 + 8) = v20;
    *(_DWORD *)(v43 + 12) = 0;
    if ( v44 - 16 >= 0x800 )
    {
      v214 = v36;
      v233 = v15;
      v232 = v33;
      memset((void *)(v43 + 16), 0, v44 - 16);
      v38 = v215;
      v36 = v214;
      v34 = v234;
      v20 = v235;
    }
    else
    {
      for ( j = 16; v44 > j; j += 8LL )
        *(_QWORD *)(v43 + j) = 0;
    }
    v213 = v43;
  }
  v46 = (unsigned int)v17[2 * v36 + 5];
  v231 = v17[2 * v36 + 5];
  *(_BYTE *)(v38 + 12) = 0;
  v47 = 34161576;
  if ( v20 >= 2 )
  {
    v229 = 34161576;
    v233 = v15;
    v232 = v33;
    v48 = v216;
    v216 = (char *)(v17 + 94091572);
    v49 = sub_27B6800(a1: 34161576, a2: v46, a3: v48);
    *(_BYTE *)(v215 + 13) = v49;
    v212 = v17 + 94167592;
    if ( (unsigned int)v49 <= 0x14 )
      __asm { jmp     rdx; switch jump }
    v211 = v17;
    v15 = 40471872;
    v228 = 40471872;
    v227 = v49;
    v153 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v153 + 24) > *(_QWORD *)(v18 + 32) )
    {
      v153 = sub_1EAA920(a1: v50, a2: v51, a3: v229);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v153 + 24;
      *(_DWORD *)v153 = 34161576;
      *(_DWORD *)(v153 + 4) = 0;
      *(_QWORD *)(v153 + 8) = 0;
      *(_QWORD *)(v153 + 16) = 0;
    }
    *(_DWORD *)(v153 + 8) = 47045786;
    v210 = v153;
    v236 = v16;
    v226 = v227;
    v223 = 1;
    v154 = sub_50130C0(a1: v50, a2: v51, a3: 41, a4: 1, a5: 1);
    if ( (v154 & 0x80000000) != 0 )
    {
      v230 = v154;
      v164 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v164 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v164 = sub_1EAA920(a1: v156, a2: v157, a3: v233);
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v164 + 40;
        *(_DWORD *)v164 = 34082880;
        *(_DWORD *)(v164 + 4) = 0;
        *(_QWORD *)(v164 + 8) = 0;
        *(_QWORD *)(v164 + 16) = 0;
        *(_QWORD *)(v164 + 24) = 0;
        *(_QWORD *)(v164 + 32) = 0;
      }
      *(_DWORD *)(v164 + 20) = 46923644;
      *(_DWORD *)(v164 + 16) = v17[93585974];
      *(_DWORD *)(v164 + 12) = (unsigned __int64)(v164 - (_QWORD)v17) >> 3;
      v216 = (char *)v164;
      sub_503B9A0(a1: v156, a2: v157, a3: v164, a4: v155, a5: 0);
      v165 = (unsigned __int64)v216;
      *((_DWORD *)v216 + 2) = 46004603;
      if ( (*(_DWORD *)v165 & 2) != 0 )
      {
        v149 = (v165 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v165 & 0xFFFFFFFFFFF80000LL) + ((v165 - v149) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v165 & 0xFFFFFFFFFFF80000LL) + ((v165 - v149) >> 9) + 0x38) = 0;
        v150 = (_DWORD *)v165;
      }
      else
      {
        v150 = (_DWORD *)v165;
      }
    }
    else
    {
      v158 = *(_QWORD *)(v18 + 40);
      v159 = (v154 + 19LL) & 0x1FFFFFFF8LL;
      if ( v159 >= 0x20000 || (v168 = v158 + v159) > *(_QWORD *)(v18 + 32) )
      {
        v230 = v154;
        v158 = sub_1EAA840(a1: v156, a2: v157, a3: v234, a4: v155, a5: v154);
        v154 = v230;
      }
      else
      {
        v169 = v234;
        *(_QWORD *)(v18 + 40) = v168;
        *(_QWORD *)v158 = v169;
        *(_DWORD *)(v158 + 8) = v154;
      }
      v216 = (char *)v158;
      v230 = v154;
      sub_1EB4960(a1: v154, a2: 0, a3: v17 + 94087886, a4: v158, a5: 0, a6: v158);
      v161 = sub_5011920(a1: v223, a2: v17 + 14546412, a3: v230, a4: v160, a5: 0, a6: v216);
      v162 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v162 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v222 = v161;
        v162 = sub_1EAA920(a1: v136, a2: v137, a3: v228);
        v161 = v222;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v162 + 40;
        *(_DWORD *)v162 = 40471872;
        *(_DWORD *)(v162 + 4) = 0;
        *(_QWORD *)(v162 + 8) = 0;
        *(_QWORD *)(v162 + 16) = 0;
        *(_QWORD *)(v162 + 24) = 0;
        *(_QWORD *)(v162 + 32) = 0;
      }
      *(_DWORD *)(v162 + 20) = 46923644;
      *(_DWORD *)(v162 + 16) = v17[93585974];
      *(_DWORD *)(v162 + 12) = (unsigned __int64)(v162 - (_QWORD)v17) >> 3;
      v163 = *(_QWORD *)(v18 + 40);
      v149 = v163 + 24;
      if ( (unsigned __int64)(v163 + 24) > *(_QWORD *)(v18 + 32) )
      {
        v212 = (_DWORD *)v162;
        v222 = v161;
        v163 = sub_1EAA920(a1: v136, a2: v137, a3: v232);
        v162 = (__int64)v212;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v149;
        *(_DWORD *)v163 = 34082680;
        *(_DWORD *)(v163 + 4) = 0;
        *(_QWORD *)(v163 + 8) = 0;
        *(_QWORD *)(v163 + 16) = 0;
      }
      *(_DWORD *)(v163 + 4) = (unsigned __int64)(v216 - (char *)v17) >> 3;
      *(_DWORD *)(v162 + 8) = (unsigned __int64)(v163 - (_QWORD)v17) >> 3;
      if ( (*(_DWORD *)v162 & 2) != 0 )
      {
        v149 = (v162 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v162 & 0xFFFFFFFFFFF80000LL) + ((v162 - v149) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v162 & 0xFFFFFFFFFFF80000LL) + ((v162 - v149) >> 9) + 0x38) = 0;
      }
      v150 = (_DWORD *)v162;
    }
    goto LABEL_65;
  }
  v229 = 34161576;
  v52 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v18 + 32) )
  {
    v52 = sub_1EAA920(a1: 34161576, a2: v46, a3: v229);
    v38 = v215;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v52 + 24;
    *(_DWORD *)v52 = 34161576;
    *(_DWORD *)(v52 + 4) = 0;
    *(_QWORD *)(v52 + 8) = 0;
    *(_QWORD *)(v52 + 16) = 0;
  }
  *(_DWORD *)(v52 + 8) = 47045786;
  v15 = v52;
  v230 = 1;
  v53 = v217;
  v216 = (char *)v15;
  v54 = *(unsigned int *)(v217 + 12);
  if ( (_DWORD)v54 == 0 )
    goto LABEL_79;
  v55 = (unsigned int)v17[2 * v54 + 2];
  if ( (_DWORD)v55 == 0 )
  {
LABEL_80:
    sub_2771080(
      a1: v47,
      a2: v55,
      a3: v53,
      a4: v34,
      a5: v38,
      a6: v43,
      a7: v25,
      a8: v26,
      a9: v27,
      a10: v28,
      a11: v29,
      a12: v30,
      a13: v31,
      a14: v32,
      a15: v201);
LABEL_81:
    sub_276FC00(
      a1: v59,
      a2: v60,
      a3: v212,
      a4: v70,
      a5: v17 + 10136364,
      a6: v61,
      a7: v62,
      a8: v63,
      a9: v64,
      a10: v65,
      a11: v66,
      a12: v67,
      a13: v68,
      a14: v69,
      a15: v201);
    goto LABEL_82;
  }
  v56 = *(_QWORD *)(v18 + 40);
  v57 = 40545456;
  if ( (unsigned __int64)(v56 + 16) > *(_QWORD *)(v18 + 32) )
  {
    v214 = v17[2 * v54 + 2];
    sub_1EAA840(a1: 40545456, a2: v55, a3: 40545456, a4: v34, a5: 0);
    v55 = v214;
    v15 = (unsigned __int64)v216;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v56 + 16;
    *(_QWORD *)v56 = 40545456;
    *(_DWORD *)(v56 + 8) = 0;
    *(_DWORD *)(v56 + 12) = 0;
  }
  v223 = v17[2 * v55 + 5] - v231;
  v58 = (_DWORD *)sub_578E980(a1: v57, a2: v55, a3: v15);
  v212 = v58;
  if ( v58 != v17 )
  {
    v70 = *v58 >> 3;
    if ( (_DWORD)v70 != 5068182 )
      goto LABEL_81;
  }
  v71 = v213;
  v72 = v215;
  v73 = v217;
  v15 = *(unsigned __int16 *)(v217 + 32);
  v222 = *(unsigned __int16 *)(v217 + 32);
  v74 = *(_WORD *)(v217 + 28);
  v221 = v74;
  v75 = *(unsigned int *)(v217 + 20);
  v76 = (unsigned __int64)((char *)v58 - (char *)v17) >> 3;
  v214 = v76;
  v77 = (unsigned __int64)(v213 - (_QWORD)v17) >> 3;
  v205 = v77;
  v78 = (unsigned __int64)(v215 - (_QWORD)v17) >> 3;
  v204 = v78;
  if ( (_DWORD)v75 != 0 )
  {
    v79 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v79 + 32) > *(_QWORD *)(v18 + 32) )
    {
      v229 = 40545568;
      v79 = sub_1EAA920(a1: v76, a2: v79, a3: 40545568);
      LODWORD(v78) = v204;
      LODWORD(v77) = v205;
      v76 = v214;
      v74 = v221;
      LOWORD(v15) = v222;
      v71 = v213;
      v73 = v217;
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v79 + 32;
      *(_DWORD *)v79 = 40545568;
      *(_DWORD *)(v79 + 4) = 0;
      *(_QWORD *)(v79 + 8) = 0;
      *(_QWORD *)(v79 + 16) = 0;
      *(_QWORD *)(v79 + 24) = 0;
    }
    *(_WORD *)(v79 + 18) = v74;
    *(_WORD *)(v79 + 16) = v15;
    *(_DWORD *)(v79 + 12) = v76;
    *(_DWORD *)(v79 + 8) = v77;
    *(_DWORD *)(v79 + 4) = v78;
    if ( *(int *)(v18 + 16) <= 0 )
      sub_277F280(a1: v76, a2: v79, a3: v73, a4: v71);
    return v79;
  }
  if ( *(_BYTE *)(v217 + 48) == 0 )
  {
    v229 = 40545568;
    v127 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v127 + 32) > *(_QWORD *)(v18 + 32) )
    {
      v127 = sub_1EAA920(a1: v76, a2: v75, a3: v229);
      LODWORD(v78) = v204;
      LODWORD(v77) = v205;
      v76 = v214;
      v74 = v221;
      LOWORD(v15) = v222;
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v127 + 32;
      *(_DWORD *)v127 = 40545568;
      *(_DWORD *)(v127 + 4) = 0;
      *(_QWORD *)(v127 + 8) = 0;
      *(_QWORD *)(v127 + 16) = 0;
      *(_QWORD *)(v127 + 24) = 0;
    }
    *(_WORD *)(v127 + 18) = v74;
    *(_WORD *)(v127 + 16) = v15;
    *(_DWORD *)(v127 + 12) = v76;
    *(_DWORD *)(v127 + 8) = v77;
    *(_DWORD *)(v127 + 4) = v78;
    goto LABEL_48;
  }
  v81 = *(unsigned int *)(v217 + 8);
  v220 = v74;
  if ( (_DWORD)v81 == 0 )
  {
    v219 = (unsigned __int16)v15;
    sub_2771080(
      a1: v76,
      a2: v81,
      a3: v217,
      a4: v213,
      a5: v215,
      a6: v77,
      a7: v62,
      a8: v63,
      a9: v64,
      a10: v65,
      a11: v66,
      a12: v67,
      a13: v68,
      a14: v69,
      a15: v201);
    goto LABEL_106;
  }
  v82 = v17[2 * v81] >> 3;
  v203 = v81;
  v83 = (__int64)&v17[2 * v17[2 * v82 + 5]];
  v84 = v17[2 * v82 + 11] & (0x23Fu >> HIBYTE(v17[2 * v82 + 11]));
  v85 = (unsigned __int16)*(_DWORD *)(v83 + 4 * v84 + 12);
  if ( (_DWORD)v85 != 575 )
  {
LABEL_106:
    v219 = (unsigned __int16)v15;
    sub_2770780(
      a1: v76,
      a2: v83,
      a3: v84,
      a4: v85,
      a5: v72,
      a6: v77,
      a7: v62,
      a8: v63,
      a9: v64,
      a10: v65,
      a11: v66,
      a12: v67,
      a13: v68,
      a14: v69,
      a15: v201);
LABEL_107:
    v170 = sub_2771080(
             a1: v92,
             a2: v93,
             a3: v90,
             a4: v91,
             a5: v94,
             a6: v95,
             a7: v96,
             a8: v97,
             a9: v98,
             a10: v99,
             a11: v100,
             a12: v101,
             a13: v102,
             a14: v103,
             a15: v201);
    v209 = v171;
    v208 = v172;
    v207 = v173;
    v224 = v170;
    v223 = v174;
    v225 = v174 - 1;
    v176 = sub_50130C0(a1: v174, a2: v175, a3: 30, a4: v171, a5: (unsigned int)(v174 - 1));
    if ( (v176 & 0x80000000) != 0 )
    {
      v226 = v176;
      v197 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v197 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v197 = sub_1EAA920(a1: v178, a2: v179, a3: v233);
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v197 + 40;
        *(_DWORD *)v197 = 34082880;
        *(_DWORD *)(v197 + 4) = 0;
        *(_QWORD *)(v197 + 8) = 0;
        *(_QWORD *)(v197 + 16) = 0;
        *(_QWORD *)(v197 + 24) = 0;
        *(_QWORD *)(v197 + 32) = 0;
      }
      *(_DWORD *)(v197 + 20) = 46923644;
      *(_DWORD *)(v197 + 16) = v17[93585974];
      *(_DWORD *)(v197 + 12) = (unsigned __int64)(v197 - (_QWORD)v17) >> 3;
      v216 = (char *)v197;
      sub_503B9A0(a1: v178, a2: v179, a3: v197, a4: v177, a5: 0);
      v198 = (unsigned __int64)v216;
      *((_DWORD *)v216 + 2) = 46004603;
      if ( (*(_DWORD *)v198 & 2) != 0 )
      {
        v149 = v198 & 0xFFFFFFFFFFF80000LL;
        v15 = (v198 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v198 & 0xFFFFFFFFFFF80000LL) + ((v198 - v15) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v198 & 0xFFFFFFFFFFF80000LL) + ((v198 - v15) >> 9) + 0x38) = 0;
        v150 = (_DWORD *)v198;
      }
      else
      {
        v150 = (_DWORD *)v198;
      }
    }
    else
    {
      v180 = *(_QWORD *)(v18 + 40);
      v181 = (v176 + 19LL) & 0x1FFFFFFF8LL;
      if ( v181 >= 0x20000 || (v199 = v180 + v181) > *(_QWORD *)(v18 + 32) )
      {
        v226 = v176;
        v180 = sub_1EAA840(a1: v178, a2: v179, a3: v234, a4: v177, a5: v176);
        v176 = v226;
      }
      else
      {
        v200 = v234;
        *(_QWORD *)(v18 + 40) = v199;
        *(_QWORD *)v180 = v200;
        *(_DWORD *)(v180 + 8) = v176;
      }
      v216 = (char *)v180;
      v226 = v176;
      sub_1EB4960(a1: v176, a2: 0, a3: v17 + 94087886, a4: v180, a5: 0, a6: v180);
      v222 = sub_5011920(a1: v225, a2: v17 + 14546418, a3: v226, a4: v182, a5: 0, a6: v216);
      v183 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v183 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v183 = sub_1EAA920(a1: v136, a2: v137, a3: v228);
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v183 + 40;
        *(_DWORD *)v183 = 40471872;
        *(_DWORD *)(v183 + 4) = 0;
        *(_QWORD *)(v183 + 8) = 0;
        *(_QWORD *)(v183 + 16) = 0;
        *(_QWORD *)(v183 + 24) = 0;
        *(_QWORD *)(v183 + 32) = 0;
      }
      *(_DWORD *)(v183 + 20) = 46923644;
      *(_DWORD *)(v183 + 16) = v17[93585974];
      *(_DWORD *)(v183 + 12) = (unsigned __int64)(v183 - (_QWORD)v17) >> 3;
      v184 = *(_QWORD *)(v18 + 40);
      v149 = v184 + 24;
      if ( (unsigned __int64)(v184 + 24) > *(_QWORD *)(v18 + 32) )
      {
        v212 = (_DWORD *)v183;
        v184 = sub_1EAA920(a1: v136, a2: v137, a3: v232);
        v183 = (__int64)v212;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v149;
        *(_DWORD *)v184 = 34082680;
        *(_DWORD *)(v184 + 4) = 0;
        *(_QWORD *)(v184 + 8) = 0;
        *(_QWORD *)(v184 + 16) = 0;
      }
      *(_DWORD *)(v184 + 4) = (unsigned __int64)(v216 - (char *)v17) >> 3;
      *(_DWORD *)(v183 + 8) = (unsigned __int64)(v184 - (_QWORD)v17) >> 3;
      if ( (*(_DWORD *)v183 & 2) != 0 )
      {
        v149 = v183 & 0xFFFFFFFFFFF80000LL;
        v15 = (v183 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v183 & 0xFFFFFFFFFFF80000LL) + ((v183 - v15) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v183 & 0xFFFFFFFFFFF80000LL) + ((v183 - v15) >> 9) + 0x38) = 0;
      }
      v150 = (_DWORD *)v183;
    }
    while ( 1 )
    {
LABEL_65:
      sub_2769900(
        a1: v136,
        a2: v137,
        a3: v150,
        a4: v149,
        a5: (__int64)&a15,
        a6: v138,
        a7: v139,
        a8: v140,
        a9: v141,
        a10: v142,
        a11: v143,
        a12: v144,
        a13: v145,
        a14: v146);
LABEL_66:
      *(double *)a7.m128_u64 = sub_1EB84E0();
LABEL_67:
      sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v201);
LABEL_68:
      v233 = v15;
      v232 = v33;
      v128 = sub_50130C0(a1: v21, a2: v22, a3: 29, a4: v34, a5: v235);
      v231 = v128;
      v131 = (unsigned int)(v128 - 1);
      if ( v128 < 0 )
      {
LABEL_82:
        v230 = v131;
        v151 = *(_QWORD *)(v18 + 40);
        if ( (unsigned __int64)(v151 + 40) > *(_QWORD *)(v18 + 32) )
        {
          v151 = sub_1EAA920(a1: v129, a2: v130, a3: v233);
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v151 + 40;
          *(_DWORD *)v151 = 34082880;
          *(_DWORD *)(v151 + 4) = 0;
          *(_QWORD *)(v151 + 8) = 0;
          *(_QWORD *)(v151 + 16) = 0;
          *(_QWORD *)(v151 + 24) = 0;
          *(_QWORD *)(v151 + 32) = 0;
        }
        *(_DWORD *)(v151 + 20) = 46923644;
        *(_DWORD *)(v151 + 16) = v17[93585974];
        *(_DWORD *)(v151 + 12) = (unsigned __int64)(v151 - (_QWORD)v17) >> 3;
        v216 = (char *)v151;
        sub_503B9A0(a1: v129, a2: v130, a3: v151, a4: v151, a5: 0);
        v152 = (unsigned __int64)v216;
        *((_DWORD *)v216 + 2) = 46004603;
        if ( (*(_DWORD *)v152 & 2) != 0 )
        {
          v149 = (v152 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - v149) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - v149) >> 9) + 0x38) = 0;
          v150 = (_DWORD *)v152;
        }
        else
        {
          v150 = (_DWORD *)v152;
        }
      }
      else
      {
        v132 = *(_QWORD *)(v18 + 40);
        v133 = ((unsigned int)v128 + 19LL) & 0x1FFFFFFF8LL;
        if ( v133 >= 0x20000 || (v166 = v132 + v133) > *(_QWORD *)(v18 + 32) )
        {
          v230 = v128 - 1;
          v132 = sub_1EAA840(a1: v129, a2: v130, a3: v234, a4: v131, a5: (unsigned int)v128);
          v131 = v230;
        }
        else
        {
          v167 = v234;
          *(_QWORD *)(v18 + 40) = v166;
          *(_QWORD *)v132 = v167;
          *(_DWORD *)(v132 + 8) = v128;
        }
        v216 = (char *)v132;
        v230 = v131;
        sub_1EB4960(a1: (unsigned int)v131, a2: 1, a3: v17 + 94167932, a4: v131, a5: 0, a6: v132);
        v135 = sub_5011920(a1: v235, a2: v17 + 14546406, a3: v230, a4: v134, a5: 0, a6: v216);
        v147 = *(_QWORD *)(v18 + 40);
        if ( (unsigned __int64)(v147 + 40) > *(_QWORD *)(v18 + 32) )
        {
          v231 = v135;
          v147 = sub_1EAA920(a1: v136, a2: v137, a3: 40470128);
          v135 = v231;
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v147 + 40;
          *(_DWORD *)v147 = 40470128;
          *(_DWORD *)(v147 + 4) = 0;
          *(_QWORD *)(v147 + 8) = 0;
          *(_QWORD *)(v147 + 16) = 0;
          *(_QWORD *)(v147 + 24) = 0;
          *(_QWORD *)(v147 + 32) = 0;
        }
        *(_DWORD *)(v147 + 20) = 46923644;
        *(_DWORD *)(v147 + 16) = v17[93585974];
        *(_DWORD *)(v147 + 12) = (unsigned __int64)(v147 - (_QWORD)v17) >> 3;
        v148 = *(_QWORD *)(v18 + 40);
        v149 = v148 + 24;
        if ( (unsigned __int64)(v148 + 24) > *(_QWORD *)(v18 + 32) )
        {
          v215 = v147;
          v231 = v135;
          v148 = sub_1EAA920(a1: v136, a2: v137, a3: v232);
          v147 = v215;
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v149;
          *(_DWORD *)v148 = 34082680;
          *(_DWORD *)(v148 + 4) = 0;
          *(_QWORD *)(v148 + 8) = 0;
          *(_QWORD *)(v148 + 16) = 0;
        }
        *(_DWORD *)(v148 + 4) = (unsigned __int64)(v216 - (char *)v17) >> 3;
        *(_DWORD *)(v147 + 8) = (unsigned __int64)(v148 - (_QWORD)v17) >> 3;
        if ( (*(_DWORD *)v147 & 2) != 0 )
        {
          v149 = (v147 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v147 & 0xFFFFFFFFFFF80000LL) + ((v147 - v149) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v147 & 0xFFFFFFFFFFF80000LL) + ((v147 - v149) >> 9) + 0x38) = 0;
        }
        v150 = (_DWORD *)v147;
      }
    }
  }
  v219 = (unsigned __int16)v15;
  v229 = 40545568;
  v86 = v17[2 * v203] >> 3;
  v87 = (unsigned int)v17[2 * v86 + 11];
  v88 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v16
                                                            + *(_QWORD *)((char *)&v17[2 * v86 + 10]
                                                                        + HIWORD(v17[2 * v17[2 * v86 + 5]
                                                                                   + 3
                                                                                   + ((unsigned int)v87
                                                                                    & (0x23Fu >> HIBYTE(v17[2 * v86 + 11])))])));
  v15 = (unsigned __int64)(v17 + 94167928);
  v206 = v17 + 94167928;
  v89 = (_DWORD *)v88(a1: v87, a2: &v17[2 * v203], a3: &v17[2 * v203]);
  v202 = v89;
  if ( v89 == v17 )
    goto LABEL_107;
  v104 = *(_QWORD *)&v17[2 * (*v89 >> 3) + 30];
  v105 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v16 + v104))(
                     a1: v92,
                     a2: v93,
                     a3: v89,
                     a4: v104,
                     a5: v206);
  v206 = v105;
  v108 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v108 + 32) > *(_QWORD *)(v18 + 32) )
  {
    v108 = sub_1EAA920(a1: v106, a2: v107, a3: v229);
    v105 = v206;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v108 + 32;
    *(_DWORD *)v108 = 40545568;
    *(_DWORD *)(v108 + 4) = 0;
    *(_QWORD *)(v108 + 8) = 0;
    *(_QWORD *)(v108 + 16) = 0;
    *(_QWORD *)(v108 + 24) = 0;
  }
  v109 = v204;
  v110 = v205;
  v111 = v214;
  v15 = v222;
  v202 = (_DWORD *)v108;
  *(_WORD *)(v108 + 18) = v221;
  *(_WORD *)(v108 + 16) = v15;
  *(_DWORD *)(v108 + 12) = v111;
  *(_DWORD *)(v108 + 8) = v110;
  *(_DWORD *)(v108 + 4) = v109;
  if ( v105 == v17 )
  {
    v218 = false;
    v113 = v108;
  }
  else
  {
    v112 = *v105 >> 3;
    v15 = (unsigned __int64)&v17[2 * v17[2 * v112 + 5]];
    v113 = v108;
    v218 = (unsigned __int16)*(_DWORD *)(v15 + 4LL * (v17[2 * v112 + 11] & (0x14DEu >> HIBYTE(v17[2 * v112 + 11]))) + 12) == 5342;
  }
  sub_27BC420(a1: v111, a2: v113, a3: v113);
  if ( v206 == v17 )
  {
    v127 = (__int64)v202;
    goto LABEL_48;
  }
  if ( !v218 )
  {
    v190 = sub_2770780(
             a1: v76,
             a2: v75,
             a3: v114,
             a4: 0,
             a5: v115,
             a6: v116,
             a7: v117,
             a8: v118,
             a9: v119,
             a10: v120,
             a11: v121,
             a12: v122,
             a13: v123,
             a14: v124,
             a15: v201);
    v194 = v185 + v193;
    if ( v194 > v195 )
    {
      v230 = v186;
      v185 = sub_1EAA840(a1: v191, a2: v192, a3: v234, a4: v186, a5: v190);
      v186 = v230;
    }
    else
    {
      v196 = v234;
      *(_QWORD *)(v18 + 40) = v194;
      *(_QWORD *)v185 = v196;
      *(_DWORD *)(v185 + 8) = v190;
    }
    v216 = (char *)v185;
    v230 = v186;
    sub_1EB4960(a1: (unsigned int)v186, a2: 14, a3: v17 + 94167936, a4: v186, a5: 0, a6: v185);
    v223 = sub_5011920(a1: v222, a2: v17 + 14546430, a3: v230, a4: v187, a5: 0, a6: v216);
    v188 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v188 + 40) > *(_QWORD *)(v18 + 32) )
    {
      v188 = sub_1EAA920(a1: v136, a2: v137, a3: v228);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v188 + 40;
      *(_DWORD *)v188 = 40471872;
      *(_DWORD *)(v188 + 4) = 0;
      *(_QWORD *)(v188 + 8) = 0;
      *(_QWORD *)(v188 + 16) = 0;
      *(_QWORD *)(v188 + 24) = 0;
      *(_QWORD *)(v188 + 32) = 0;
    }
    *(_DWORD *)(v188 + 20) = 46923644;
    *(_DWORD *)(v188 + 16) = v17[93585974];
    *(_DWORD *)(v188 + 12) = (unsigned __int64)(v188 - (_QWORD)v17) >> 3;
    v189 = *(_QWORD *)(v18 + 40);
    v149 = v189 + 24;
    if ( (unsigned __int64)(v189 + 24) > *(_QWORD *)(v18 + 32) )
    {
      v212 = (_DWORD *)v188;
      v189 = sub_1EAA920(a1: v136, a2: v137, a3: v232);
      v188 = (__int64)v212;
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v149;
      *(_DWORD *)v189 = 34082680;
      *(_DWORD *)(v189 + 4) = 0;
      *(_QWORD *)(v189 + 8) = 0;
      *(_QWORD *)(v189 + 16) = 0;
    }
    *(_DWORD *)(v189 + 4) = (unsigned __int64)(v216 - (char *)v17) >> 3;
    *(_DWORD *)(v188 + 8) = (unsigned __int64)(v189 - (_QWORD)v17) >> 3;
    if ( (*(_DWORD *)v188 & 2) != 0 )
    {
      v149 = v188 & 0xFFFFFFFFFFF80000LL;
      v15 = (v188 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v188 & 0xFFFFFFFFFFF80000LL) + ((v188 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v188 & 0xFFFFFFFFFFF80000LL) + ((v188 - v15) >> 9) + 0x38) = 0;
    }
    v150 = (_DWORD *)v188;
    goto LABEL_65;
  }
  v125 = *v206 >> 3;
  v126 = v17[2 * v125 + 11] & (0x14DEu >> HIBYTE(v17[2 * v125 + 11]));
  ((void (__fastcall *)(__int64, __int64, _DWORD *))(v16
                                                   + *(_QWORD *)((char *)&v17[2 * v125]
                                                               + HIWORD(v17[2 * (unsigned int)v17[2 * v125 + 5]
                                                                          + 3
                                                                          + v126]))))(
    a1: v76,
    a2: v126,
    a3: v206);
  v127 = (__int64)v202;
LABEL_48:
  if ( *(int *)(v18 + 16) <= 0 )
    sub_277F280(a1: v76, a2: v75, a3: v127, a4: v71);
  return v127;
}
