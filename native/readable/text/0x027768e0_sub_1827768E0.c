// sub_27768E0
// rva 0x027768e0  size 1702  section .text  group text
// window base 0x1827768e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27768E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        unsigned __int64 a14)
{
  unsigned int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 i; // rcx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  int v29; // ebp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rsi
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm3
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  __m128 v43; // xmm6
  __m128 v44; // xmm7
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r8
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r8
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rbx
  unsigned int v64; // edx
  __int64 v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r9
  __m128 v68; // xmm0
  __m128 v69; // xmm1
  __m128 v70; // xmm2
  __m128 v71; // xmm3
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __m128 v74; // xmm6
  __m128 v75; // xmm7
  __int64 v76; // rcx
  unsigned __int64 v77; // rbp
  __int64 v78; // rsi
  unsigned int v79; // eax
  __int64 v80; // rsi
  __int64 v81; // r9
  __m128 v82; // xmm0
  __m128 v83; // xmm1
  __m128 v84; // xmm2
  __m128 v85; // xmm3
  __m128 v86; // xmm4
  __m128 v87; // xmm5
  __m128 v88; // xmm6
  __m128 v89; // xmm7
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rsi
  unsigned int v98; // ebp
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdi
  __int64 v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rdx
  unsigned __int64 v105; // r9
  unsigned int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // r9
  __m128 v111; // xmm0
  __m128 v112; // xmm1
  __m128 v113; // xmm2
  __m128 v114; // xmm3
  __m128 v115; // xmm4
  __m128 v116; // xmm5
  __m128 v117; // xmm6
  __m128 v118; // xmm7
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rdx
  unsigned int v122; // eax
  __int64 v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // r8
  __int64 v138; // r8
  __int64 v139; // rsi
  unsigned int v140; // ebp
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdi
  __int64 v149; // rsi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rbx
  unsigned __int64 v155; // r9
  unsigned __int64 v156; // r8
  unsigned __int64 v157; // rcx
  unsigned __int64 v158; // rax
  unsigned __int64 v159; // r8
  int v160; // [rsp-10h] [rbp-150h] BYREF
  int v161; // [rsp-8h] [rbp-148h]
  __int64 v162; // [rsp+0h] [rbp-140h]
  __int64 v163; // [rsp+8h] [rbp-138h]
  int v164; // [rsp+10h] [rbp-130h]
  unsigned int v165; // [rsp+14h] [rbp-12Ch]
  __int64 v166; // [rsp+18h] [rbp-128h]
  __int64 v167; // [rsp+20h] [rbp-120h]
  __int64 v168; // [rsp+28h] [rbp-118h]
  __int64 v169; // [rsp+30h] [rbp-110h]
  unsigned int v170; // [rsp+3Ch] [rbp-104h]
  __int64 v171; // [rsp+40h] [rbp-100h]
  __int64 v172; // [rsp+48h] [rbp-F8h]
  unsigned int v173; // [rsp+54h] [rbp-ECh]
  unsigned int v174; // [rsp+58h] [rbp-E8h]
  unsigned int v175; // [rsp+5Ch] [rbp-E4h]
  __int64 v176; // [rsp+60h] [rbp-E0h]
  unsigned int v177; // [rsp+68h] [rbp-D8h]
  unsigned int v178; // [rsp+6Ch] [rbp-D4h]
  unsigned int v179; // [rsp+70h] [rbp-D0h]
  unsigned int v180; // [rsp+74h] [rbp-CCh]
  __int64 v181; // [rsp+78h] [rbp-C8h]
  __int64 v182; // [rsp+80h] [rbp-C0h]
  unsigned int v183; // [rsp+8Ch] [rbp-B4h]
  __int64 v184; // [rsp+90h] [rbp-B0h]
  unsigned int v185; // [rsp+9Ch] [rbp-A4h]
  __int64 v186; // [rsp+A0h] [rbp-A0h]
  int v187; // [rsp+A8h] [rbp-98h] BYREF
  int v188; // [rsp+B0h] [rbp-90h]
  __int64 v189; // [rsp+B8h] [rbp-88h]
  __int64 v190; // [rsp+C0h] [rbp-80h]
  __int64 v191; // [rsp+C8h] [rbp-78h]
  __int64 v192; // [rsp+D0h] [rbp-70h]
  __int64 v193; // [rsp+D8h] [rbp-68h]
  __int64 v194; // [rsp+E0h] [rbp-60h]
  __int64 v195; // [rsp+E8h] [rbp-58h]
  unsigned __int64 v196; // [rsp+F0h] [rbp-50h]
  unsigned int v197; // [rsp+FCh] [rbp-44h]
  unsigned int v198; // [rsp+100h] [rbp-40h]
  unsigned int v199; // [rsp+104h] [rbp-3Ch]
  unsigned int v200; // [rsp+108h] [rbp-38h]
  unsigned int v201; // [rsp+10Ch] [rbp-34h]
  unsigned int v202; // [rsp+110h] [rbp-30h]
  unsigned int v203; // [rsp+114h] [rbp-2Ch]
  __int64 v204; // [rsp+118h] [rbp-28h]
  __int64 v205; // [rsp+120h] [rbp-20h]
  unsigned int v206; // [rsp+12Ch] [rbp-14h]
  __int64 v207; // [rsp+130h] [rbp-10h]
  unsigned int v208; // [rsp+13Ch] [rbp-4h]

  v196 = a14;
  v195 = a1;
  if ( (unsigned __int64)&v187 <= *(_QWORD *)(v17 + 8) )
  {
    v193 = a13;
    v203 = a11;
    *(double *)a2.m128_u64 = sub_1EB84E0();
  }
  else
  {
    v208 = *(_DWORD *)(a1 + 8);
    i = 34082368;
    v207 = 34082368;
    v14 = 34085680;
    v19 = (unsigned __int64)(a13 - v16) >> 3;
    HIDWORD(v194) = v19;
    v20 = MEMORY[0x112397b8]/* 0x112397b8 */ & a11;
    v206 = MEMORY[0x112397b8]/* 0x112397b8 */ & a11;
    if ( v208 != 0 )
    {
      v205 = 40540632;
      v204 = 34085680;
      v193 = a13;
      v200 = MEMORY[0x112397b8]/* 0x112397b8 */ & a11;
      v203 = a11;
      v21 = sub_4FEBC20(a1, a2: v20, a3: a14, a4: 34082368, a5: 0);
      v192 = v16 + 8LL * *(unsigned int *)(v195 + 12);
      v199 = v21;
      v24 = sub_2777E80(a1: v195, a2: v23, a3: v196, a4: v22, a5: 1);
      v27 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v27 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v191 = v24;
        v27 = sub_1EAA920(a1: v25, a2: v26, a3: v205);
        v24 = v191;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v27 + 32;
        *(_DWORD *)v27 = 40540632;
        *(_DWORD *)(v27 + 4) = 0;
        *(_QWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = 0;
        *(_QWORD *)(v27 + 24) = 0;
      }
      v28 = v206;
      v29 = HIDWORD(v194);
      v190 = v27;
      *(_BYTE *)(v27 + 20) = v206;
      *(_DWORD *)(v27 + 4) = v29;
      v30 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v17 + 32) )
      {
        v191 = v24;
        v30 = sub_1EAA920(a1: v25, a2: v28, a3: v204);
        v27 = v190;
        v24 = v191;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v30 + 24;
        *(_DWORD *)v30 = 34085680;
        *(_DWORD *)(v30 + 4) = 0;
        *(_QWORD *)(v30 + 8) = 0;
        *(_QWORD *)(v30 + 16) = 0;
      }
      v31 = *(_QWORD *)(v17 + 40);
      v32 = v31 + 32;
      if ( (unsigned __int64)(v31 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v189 = v30;
        v191 = v24;
        v31 = sub_1EAA840(a1: v32, a2: v28, a3: v207, a4: v207, a5: 16);
        v30 = v189;
        v27 = v190;
        v24 = v191;
      }
      else
      {
        v33 = v207;
        *(_QWORD *)(v17 + 40) = v32;
        *(_QWORD *)v31 = v33;
        *(_DWORD *)(v31 + 8) = 16;
        *(_DWORD *)(v31 + 12) = 0;
        *(_QWORD *)(v31 + 16) = 0;
        *(_QWORD *)(v31 + 24) = 0;
      }
      *(_DWORD *)(v27 + 8) = (unsigned __int64)(v30 - v16) >> 3;
      if ( (*(_DWORD *)v27 & 2) != 0 )
      {
        v57 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v57) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v57) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v30 + 4) = (unsigned __int64)(v31 - v16) >> 3;
      if ( (*(_DWORD *)v30 & 2) != 0 )
      {
        v58 = v30 & 0xFFFFFFFFFFF80000LL;
        v59 = (v30 - ((v30 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(v58 + v59 + 56) != 0 )
          *(_BYTE *)(v58 + v59 + 56) = 0;
      }
      v200 = *(_DWORD *)(v24 + 12);
      sub_2774880(
        a1: v24,
        a2: v28,
        a3: v27,
        a4: v200,
        a5: v192,
        a6: v199,
        a7: v187,
        a8: v188,
        a9: v189,
        a10: v190,
        a11: v24,
        a12: v192,
        a13: v193,
        a14: v194);
      v14 = 1;
      for ( i = v200; ; i = v197 )
      {
        v48 = v196;
        if ( (int)v208 <= (int)v14 )
          break;
        v200 = v14;
        v199 = i + 1;
        v35 = sub_4FEBC20(a1: v34, a2: v20, a3: v196, a4: i, a5: (unsigned int)i);
        v14 = v200 + 1;
        v45 = v208;
        if ( v208 <= v200 )
          goto LABEL_52;
        v206 = v200 + 1;
        v198 = v35;
        v192 = v16 + 8LL * *(unsigned int *)(v195 + 4LL * v200 + 12);
        v46 = sub_2777E80(a1: v195, a2: v36, a3: v196, a4: v208, a5: v199);
        v197 = *(_DWORD *)(v46 + 12);
        sub_2774880(
          a1: v46,
          a2: v47,
          a3: v190,
          a4: v197,
          a5: v192,
          a6: v198,
          a7: v187,
          a8: v188,
          a9: v189,
          a10: v190,
          a11: v46,
          a12: v192,
          a13: v193,
          a14: v194);
        v14 = v206;
      }
      v49 = v190;
      v202 = i;
      v201 = v14;
    }
    else
    {
      v205 = 40540632;
      v204 = 34085680;
      v193 = a13;
      v203 = a11;
      v49 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v49 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v49 = sub_1EAA920(a1, a2: v20, a3: v205);
        v20 = v206;
        LODWORD(v19) = HIDWORD(v194);
        i = v207;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v49 + 32;
        *(_DWORD *)v49 = 40540632;
        *(_DWORD *)(v49 + 4) = 0;
        *(_QWORD *)(v49 + 8) = 0;
        *(_QWORD *)(v49 + 16) = 0;
        *(_QWORD *)(v49 + 24) = 0;
      }
      *(_BYTE *)(v49 + 20) = v20;
      *(_DWORD *)(v49 + 4) = v19;
      v50 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v50 + 24) > *(_QWORD *)(v17 + 32) )
      {
        v192 = v49;
        v50 = sub_1EAA920(a1, a2: v20, a3: v204);
        v49 = v192;
        i = v207;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v50 + 24;
        *(_DWORD *)v50 = 34085680;
        *(_DWORD *)(v50 + 4) = 0;
        *(_QWORD *)(v50 + 8) = 0;
        *(_QWORD *)(v50 + 16) = 0;
      }
      v51 = *(_QWORD *)(v17 + 40);
      v52 = v51 + 32;
      if ( (unsigned __int64)(v51 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v191 = v50;
        v192 = v49;
        v51 = sub_1EAA840(a1: v52, a2: v20, a3: v207, a4: i, a5: 16);
        v50 = v191;
        v49 = v192;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v52;
        *(_QWORD *)v51 = i;
        *(_DWORD *)(v51 + 8) = 16;
        *(_DWORD *)(v51 + 12) = 0;
        *(_QWORD *)(v51 + 16) = 0;
        *(_QWORD *)(v51 + 24) = 0;
      }
      *(_DWORD *)(v49 + 8) = (unsigned __int64)(v50 - v16) >> 3;
      v34 = *(unsigned int *)v49;
      if ( (v34 & 2) != 0 )
      {
        i = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
        v34 = (unsigned __int64)(v49 - i) >> 9;
        if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + v34 + 0x38) != 0 )
          *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v49 - i) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v50 + 4) = (unsigned __int64)(v51 - v16) >> 3;
      v48 = *(unsigned int *)v50;
      if ( (v48 & 2) != 0 )
      {
        v48 = v50 & 0xFFFFFFFFFFF80000LL;
        v34 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
        v60 = (unsigned __int64)(v50 - v34) >> 9;
        if ( *(_BYTE *)(v48 + v60 + 56) != 0 )
          *(_BYTE *)(v48 + v60 + 56) = 0;
      }
      v202 = 0;
      v201 = 0;
    }
    v53 = *(unsigned int *)(v49 + 8);
    if ( (_DWORD)v53 != 0 )
    {
      if ( *(_DWORD *)(v16 + 8 * v53 + 8) != 0 )
      {
        v54 = *(_QWORD *)(v17 + 40);
        if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v17 + 32) )
        {
          HIDWORD(v194) = *(_DWORD *)(v49 + 8);
          v191 = v49;
          v54 = sub_1EAA920(a1: v34, a2: v20, a3: 34082680);
          v53 = HIDWORD(v194);
        }
        else
        {
          *(_QWORD *)(v17 + 40) = v54 + 24;
          *(_DWORD *)v54 = 34082680;
          *(_DWORD *)(v54 + 4) = 0;
          *(_QWORD *)(v54 + 8) = 0;
          *(_QWORD *)(v54 + 16) = 0;
          v191 = v49;
        }
        v192 = v54;
        v189 = v16 + 8 * v53;
        sub_4FE9280(a1: v34, a2: v20, a3: v54, a4: i, a5: v189, a6: v16);
        v55 = v192;
      }
      else
      {
        v191 = v49;
        v55 = v16 + 373281248;
      }
      if ( *(int *)(v17 + 16) <= 0 )
        sub_277F280(a1: v34, a2: v20, a3: v49);
      return v55;
    }
  }
  sub_2771080(
    a1: v34,
    a2: v20,
    a3: v202,
    a4: i,
    a5: v201,
    a6: v48,
    a7: a2,
    a8: a3,
    a9: a4,
    a10: a5,
    a11: a6,
    a12: a7,
    a13: a8,
    a14: a9,
    a15: v187);
LABEL_52:
  v61 = v45;
  v62 = v14;
  v63 = v200;
  sub_2771220(
    a1: v195,
    a2: v190,
    a3: v200,
    a4: v62,
    a5: v61,
    a6: v199,
    a7: v37,
    a8: v38,
    a9: v39,
    a10: v40,
    a11: v41,
    a12: v42,
    a13: v43,
    a14: v44,
    a15: v187);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v172 = v67;
  v171 = v65;
  if ( (unsigned __int64)&v160 <= *(_QWORD *)(v17 + 8) )
  {
    v169 = v66;
    v180 = v64;
    *(double *)v68.m128_u64 = sub_1EB84E0();
LABEL_133:
    sub_2771080(
      a1: v103,
      a2: v78,
      a3: v179,
      a4: v76,
      a5: v178,
      a6: v105,
      a7: v68,
      a8: v69,
      a9: v70,
      a10: v71,
      a11: v72,
      a12: v73,
      a13: v74,
      a14: v75,
      a15: v160);
    goto LABEL_134;
  }
  v185 = *(_DWORD *)(v65 + 8);
  v76 = 34082368;
  v184 = 34082368;
  v77 = (unsigned __int64)(v66 - v16) >> 3;
  v170 = v77;
  v78 = MEMORY[0x112397bc]/* 0x112397bc */ & v64;
  v183 = MEMORY[0x112397bc]/* 0x112397bc */ & v64;
  if ( v185 == 0 )
  {
    v182 = 40540632;
    v181 = 34085680;
    v169 = v66;
    v180 = v64;
    v104 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v104 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v104 = sub_1EAA920(a1: v65, a2: v78, a3: v182);
      v78 = v183;
      LODWORD(v77) = v170;
      v76 = v184;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v104 + 32;
      *(_DWORD *)v104 = 40540632;
      *(_DWORD *)(v104 + 4) = 0;
      *(_QWORD *)(v104 + 8) = 0;
      *(_QWORD *)(v104 + 16) = 0;
      *(_QWORD *)(v104 + 24) = 0;
    }
    *(_BYTE *)(v104 + 20) = v78;
    *(_DWORD *)(v104 + 4) = v77;
    v133 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v133 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v168 = v104;
      v133 = sub_1EAA920(a1: v65, a2: v78, a3: v181);
      v104 = v168;
      v76 = v184;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v133 + 24;
      *(_DWORD *)v133 = 34085680;
      *(_DWORD *)(v133 + 4) = 0;
      *(_QWORD *)(v133 + 8) = 0;
      *(_QWORD *)(v133 + 16) = 0;
    }
    v134 = *(_QWORD *)(v17 + 40);
    v135 = v134 + 32;
    if ( (unsigned __int64)(v134 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v167 = v133;
      v168 = v104;
      v134 = sub_1EAA840(a1: v135, a2: v78, a3: v184, a4: v76, a5: 16);
      v133 = v167;
      v104 = v168;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v135;
      *(_QWORD *)v134 = v76;
      *(_DWORD *)(v134 + 8) = 16;
      *(_DWORD *)(v134 + 12) = 0;
      *(_QWORD *)(v134 + 16) = 0;
      *(_QWORD *)(v134 + 24) = 0;
    }
    *(_DWORD *)(v104 + 8) = (unsigned __int64)(v133 - v16) >> 3;
    v103 = *(unsigned int *)v104;
    if ( (v103 & 2) != 0 )
    {
      v76 = (v104 & 0xFFFFFFFFFFF80000LL) + 2112;
      v103 = (unsigned __int64)(v104 - v76) >> 9;
      if ( *(_BYTE *)((v104 & 0xFFFFFFFFFFF80000LL) + v103 + 0x38) != 0 )
        *(_BYTE *)((v104 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v104 - v76) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v133 + 4) = (unsigned __int64)(v134 - v16) >> 3;
    v105 = *(unsigned int *)v133;
    if ( (v105 & 2) != 0 )
    {
      v105 = v133 & 0xFFFFFFFFFFF80000LL;
      v103 = (v133 & 0xFFFFFFFFFFF80000LL) + 2112;
      v153 = (unsigned __int64)(v133 - v103) >> 9;
      if ( *(_BYTE *)(v105 + v153 + 56) != 0 )
        *(_BYTE *)(v105 + v153 + 56) = 0;
    }
    v136 = v104;
    v179 = 0;
    v178 = 0;
LABEL_85:
    v63 = *(unsigned int *)(v136 + 8);
    if ( (_DWORD)v63 != 0 )
    {
      if ( *(_DWORD *)(v16 + 8 * v63 + 8) != 0 )
      {
        v137 = *(_QWORD *)(v17 + 40);
        if ( (unsigned __int64)(v137 + 24) > *(_QWORD *)(v17 + 32) )
        {
          v170 = *(_DWORD *)(v136 + 8);
          v167 = v136;
          v137 = sub_1EAA920(a1: v103, a2: v78, a3: 34082680);
          v63 = v170;
        }
        else
        {
          *(_QWORD *)(v17 + 40) = v137 + 24;
          *(_DWORD *)v137 = 34082680;
          *(_DWORD *)(v137 + 4) = 0;
          *(_QWORD *)(v137 + 8) = 0;
          *(_QWORD *)(v137 + 16) = 0;
          v167 = v136;
        }
        v163 = v137;
        v166 = v16 + 8 * v63;
        sub_4FE9280(a1: v103, a2: v78, a3: v137, a4: v76, a5: v166, a6: v16);
        v138 = v163;
      }
      else
      {
        v167 = v136;
        v138 = v16 + 373281248;
      }
      if ( *(int *)(v17 + 16) <= 0 )
        sub_277F280(a1: v103, a2: v78, a3: v104);
      return v138;
    }
    goto LABEL_133;
  }
  v182 = 40540632;
  v181 = 34085680;
  v169 = v66;
  v180 = v64;
  v177 = MEMORY[0x112397bc]/* 0x112397bc */ & v64;
  v79 = sub_4FEBC20(a1: v65, a2: v78, a3: v67, a4: 34082368, a5: 0);
  v90 = v171;
  v91 = *(unsigned int *)(v171 + 12);
  v63 = v16 + 8 * v91;
  v176 = 34084944;
  if ( v79 != 102 )
  {
    v168 = v16 + 8 * v91;
    v175 = v79;
    v92 = sub_2777E80(a1: v171, a2: v80, a3: v172, a4: v91, a5: 1);
    v96 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v96 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v167 = v92;
      v96 = sub_1EAA920(a1: v94, a2: v95, a3: v182);
      v92 = v167;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v96 + 32;
      *(_DWORD *)v96 = 40540632;
      *(_DWORD *)(v96 + 4) = 0;
      *(_QWORD *)(v96 + 8) = 0;
      *(_QWORD *)(v96 + 16) = 0;
      *(_QWORD *)(v96 + 24) = 0;
    }
    v97 = v183;
    v98 = v170;
    *(_BYTE *)(v96 + 20) = v183;
    *(_DWORD *)(v96 + 4) = v98;
    v99 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v99 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v163 = v96;
      v167 = v92;
      v99 = sub_1EAA920(a1: v94, a2: v97, a3: v181);
      v96 = v163;
      v92 = v167;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v99 + 24;
      *(_DWORD *)v99 = 34085680;
      *(_DWORD *)(v99 + 4) = 0;
      *(_QWORD *)(v99 + 8) = 0;
      *(_QWORD *)(v99 + 16) = 0;
    }
    v100 = *(_QWORD *)(v17 + 40);
    v101 = v100 + 32;
    if ( (unsigned __int64)(v100 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v166 = v99;
      v163 = v96;
      v167 = v92;
      v100 = sub_1EAA840(a1: v101, a2: v97, a3: v184, a4: v93, a5: 16);
      v99 = v166;
      v96 = v163;
      v92 = v167;
    }
    else
    {
      v102 = v184;
      *(_QWORD *)(v17 + 40) = v101;
      *(_QWORD *)v100 = v102;
      *(_DWORD *)(v100 + 8) = 16;
      *(_DWORD *)(v100 + 12) = 0;
      *(_QWORD *)(v100 + 16) = 0;
      *(_QWORD *)(v100 + 24) = 0;
    }
    *(_DWORD *)(v96 + 8) = (unsigned __int64)(v99 - v16) >> 3;
    if ( (*(_DWORD *)v96 & 2) != 0 )
    {
      v154 = (v96 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v96 & 0xFFFFFFFFFFF80000LL) + ((v96 - v154) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v96 & 0xFFFFFFFFFFF80000LL) + ((v96 - v154) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v99 + 4) = (unsigned __int64)(v100 - v16) >> 3;
    if ( (*(_DWORD *)v99 & 2) != 0 )
    {
      v155 = v99 & 0xFFFFFFFFFFF80000LL;
      v156 = (v99 - ((v99 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v155 + v156 + 56) != 0 )
        *(_BYTE *)(v155 + v156 + 56) = 0;
    }
    v63 = v96;
    v177 = *(_DWORD *)(v92 + 12);
    sub_2774880(
      a1: v92,
      a2: v97,
      a3: v96,
      a4: v177,
      a5: v168,
      a6: v175,
      a7: v160,
      a8: v161,
      a9: v162,
      a10: v96,
      a11: v164,
      a12: v166,
      a13: v92,
      a14: v168);
    v186 = v15;
    v162 = v163;
    v76 = v177;
    v104 = 1;
    goto LABEL_64;
  }
  v168 = v16 + 8 * v91;
  v139 = v183;
  v140 = v170;
  v141 = v184;
  if ( (_DWORD)v91 == 0 || *(_DWORD *)(v16 + 8 * v91) >> 3 == 4260335 )
  {
    if ( v185 < 2 )
    {
LABEL_134:
      sub_2771220(
        a1: v90,
        a2: v139,
        a3: 1,
        a4: v91,
        a5: 1,
        a6: v81,
        a7: v82,
        a8: v83,
        a9: v84,
        a10: v85,
        a11: v86,
        a12: v87,
        a13: v88,
        a14: v89,
        a15: v160);
      goto LABEL_135;
    }
    v142 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v142 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v142 = sub_1EAA920(a1: v171, a2: v183, a3: v182);
      v139 = v183;
      v140 = v170;
      v141 = v184;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v142 + 32;
      *(_DWORD *)v142 = 40540632;
      *(_DWORD *)(v142 + 4) = 0;
      *(_QWORD *)(v142 + 8) = 0;
      *(_QWORD *)(v142 + 16) = 0;
      *(_QWORD *)(v142 + 24) = 0;
    }
    *(_BYTE *)(v142 + 20) = v139;
    *(_DWORD *)(v142 + 4) = v140;
    v143 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v143 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v167 = v142;
      v143 = sub_1EAA920(a1: v90, a2: v139, a3: v181);
      v142 = v167;
      v141 = v184;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v143 + 24;
      *(_DWORD *)v143 = 34085680;
      *(_DWORD *)(v143 + 4) = 0;
      *(_QWORD *)(v143 + 8) = 0;
      *(_QWORD *)(v143 + 16) = 0;
    }
    v144 = *(_QWORD *)(v17 + 40);
    v145 = v144 + 32;
    if ( (unsigned __int64)(v144 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v166 = v143;
      v167 = v142;
      v144 = sub_1EAA840(a1: v145, a2: v139, a3: v141, a4: v141, a5: 16);
      v143 = v166;
      v142 = v167;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v145;
      *(_QWORD *)v144 = v141;
      *(_DWORD *)(v144 + 8) = 16;
      *(_DWORD *)(v144 + 12) = 0;
      *(_QWORD *)(v144 + 16) = 0;
      *(_QWORD *)(v144 + 24) = 0;
    }
    *(_DWORD *)(v142 + 8) = (unsigned __int64)(v143 - v16) >> 3;
    if ( (*(_DWORD *)v142 & 2) != 0 )
    {
      v157 = (v142 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v157) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v157) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v143 + 4) = (unsigned __int64)(v144 - v16) >> 3;
    if ( (*(_DWORD *)v143 & 2) != 0 )
    {
      v158 = v143 & 0xFFFFFFFFFFF80000LL;
      v159 = (v143 - ((v143 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v158 + v159 + 56) != 0 )
        *(_BYTE *)(v158 + v159 + 56) = 0;
    }
    v165 = *(_DWORD *)(v171 + 16);
    v63 = v142;
    v166 = v16 + 8LL * v165;
    v167 = v142;
    v146 = sub_27744E0(a1: v171, a2: v139, a3: v142);
    v150 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v150 + 16) > *(_QWORD *)(v17 + 32) )
    {
      v163 = v146;
      v150 = sub_1EAA840(a1: v148, a2: v149, a3: v176, a4: v147, a5: 1);
      v146 = v163;
    }
    else
    {
      v151 = v176;
      *(_QWORD *)(v17 + 40) = v150 + 16;
      *(_QWORD *)v150 = v151;
      *(_DWORD *)(v150 + 8) = 1;
      *(_DWORD *)(v150 + 12) = 0;
    }
    *(_DWORD *)(v150 + 12) = v165;
    v152 = v16 + 8LL * *(unsigned int *)(v146 + 8);
    v163 = v146;
    v162 = v150;
    sub_584DE00(a1: v162, a2: v149, a3: v146, a4: v162, a5: v152, a6: v168);
    v186 = v15;
    v162 = v167;
    v76 = 1;
    v104 = 2;
LABEL_64:
    while ( 1 )
    {
      v105 = v172;
      if ( (int)v185 <= (int)v104 )
        break;
      v177 = v104;
      v175 = v76 + 1;
      v106 = sub_4FEBC20(a1: v103, a2: (unsigned int)(v76 + 1), a3: v172, a4: v76, a5: (unsigned int)v76);
      if ( v106 == 102 )
      {
        v183 = v177 + 1;
        v121 = v177;
        v122 = v185;
        if ( v185 <= v177 )
          goto LABEL_136;
        v123 = v171;
        v124 = *(unsigned int *)(v171 + 4LL * v177 + 12);
        v63 = v16 + 8 * v124;
        if ( (_DWORD)v124 != 0 && *(_DWORD *)(v16 + 8 * v124) >> 3 != 4260335 )
          goto LABEL_139;
        v125 = v177 + 2;
        if ( v185 <= v183 )
          goto LABEL_138;
        v174 = v177 + 2;
        v163 = v63;
        v170 = *(_DWORD *)(v171 + 4LL * v183 + 12);
        v167 = v16 + 8LL * v170;
        v126 = sub_27744E0(a1: v171, a2: v167, a3: v162);
        v130 = *(_QWORD *)(v17 + 40);
        if ( (unsigned __int64)(v130 + 16) > *(_QWORD *)(v17 + 32) )
        {
          v168 = v126;
          v130 = sub_1EAA840(a1: v128, a2: v129, a3: v176, a4: v127, a5: 1);
          v126 = v168;
        }
        else
        {
          v131 = v176;
          *(_QWORD *)(v17 + 40) = v130 + 16;
          *(_QWORD *)v130 = v131;
          *(_DWORD *)(v130 + 8) = 1;
          *(_DWORD *)(v130 + 12) = 0;
        }
        *(_DWORD *)(v130 + 12) = v170;
        v132 = v16 + 8LL * *(unsigned int *)(v126 + 8);
        v168 = v126;
        v166 = v130;
        sub_584DE00(a1: v166, a2: v129, a3: v126, a4: v166, a5: v132, a6: v163);
        v104 = v174;
        v76 = v175;
      }
      else
      {
        if ( v185 <= v177 )
          goto LABEL_137;
        v183 = v177 + 1;
        v174 = v106;
        v163 = v16 + 8LL * *(unsigned int *)(v171 + 4LL * v177 + 12);
        v119 = sub_2777E80(a1: v171, a2: v109, a3: v172, a4: v185, a5: v175);
        v173 = *(_DWORD *)(v119 + 12);
        sub_2774880(
          a1: v119,
          a2: v120,
          a3: v162,
          a4: v173,
          a5: v163,
          a6: v174,
          a7: v160,
          a8: v161,
          a9: v162,
          a10: v163,
          a11: v164,
          a12: v166,
          a13: v119,
          a14: v168);
        v104 = v183;
        v76 = v173;
      }
    }
    v136 = v162;
    v179 = v76;
    v178 = v104;
    goto LABEL_85;
  }
LABEL_135:
  sub_276FC00(
    a1: v90,
    a2: v139,
    a3: (_DWORD *)v63,
    a4: v91,
    a5: (_DWORD *)(v16 + 34082680),
    a6: v81,
    a7: v82,
    a8: v83,
    a9: v84,
    a10: v85,
    a11: v86,
    a12: v87,
    a13: v88,
    a14: v89,
    a15: v160);
LABEL_136:
  v106 = sub_2771220(
           a1: v108,
           a2: v109,
           a3: v121,
           a4: v107,
           a5: v185,
           a6: v110,
           a7: v111,
           a8: v112,
           a9: v113,
           a10: v114,
           a11: v115,
           a12: v116,
           a13: v117,
           a14: v118,
           a15: v160);
LABEL_137:
  v122 = sub_2771220(
           a1: v108,
           a2: v109,
           a3: v177,
           a4: v106,
           a5: v185,
           a6: v110,
           a7: v111,
           a8: v112,
           a9: v113,
           a10: v114,
           a11: v115,
           a12: v116,
           a13: v117,
           a14: v118,
           a15: v160);
LABEL_138:
  v163 = v63;
  sub_2771220(
    a1: v123,
    a2: v109,
    a3: v183,
    a4: v125,
    a5: v122,
    a6: v110,
    a7: v111,
    a8: v112,
    a9: v113,
    a10: v114,
    a11: v115,
    a12: v116,
    a13: v117,
    a14: v118,
    a15: v160);
LABEL_139:
  sub_276FC00(
    a1: v123,
    a2: v175,
    a3: (_DWORD *)v63,
    a4: v162,
    a5: (_DWORD *)(v16 + 34082680),
    a6: v172,
    a7: v111,
    a8: v112,
    a9: v113,
    a10: v114,
    a11: v115,
    a12: v116,
    a13: v117,
    a14: v118,
    a15: v160);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2777AE0();
}
