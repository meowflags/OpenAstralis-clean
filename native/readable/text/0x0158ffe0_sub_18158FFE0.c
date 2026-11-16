// sub_158FFE0
// rva 0x0158ffe0  size 1318  section .text  group text
// window base 0x18158ffe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_158FFE0(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  void (__fastcall *v17)(__int64, __int64, _DWORD *); // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r9d
  __int64 (__fastcall *v24)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  unsigned int v50; // r9d
  _DWORD *result; // rax
  unsigned int *v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rbp
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // r8
  unsigned int *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rsi
  _DWORD *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 (__fastcall *v66)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  int v71; // r8d
  int v72; // r9d
  _DWORD *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 (__fastcall *v76)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v77; // rax
  int v78; // edi
  int v79; // esi
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rsi
  unsigned int v97; // eax
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdx
  unsigned int v101; // eax
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r9
  __int64 v105; // rdi
  __int64 v106; // rdi
  unsigned int v107; // r10d
  unsigned int v108; // r11d
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rdi
  __int64 v112; // rcx
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // r9
  unsigned int v115; // r12d
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rdx
  _DWORD *v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // rsi
  _DWORD *v140; // rsi
  __int64 v141; // rcx
  int v142; // edx
  __int64 v143; // r8
  unsigned __int64 v144; // r9
  unsigned __int64 v145; // rdi
  __int64 v146; // rcx
  __int64 v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 v151; // rsi
  __int64 v152; // rdx
  unsigned __int64 v153; // rsi
  char v154; // cl
  unsigned int v155; // ebx
  __int64 v156; // rbp
  unsigned __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  _DWORD *v160; // rbx
  unsigned int v161; // r8d
  unsigned int v162; // ebp
  __int64 v163; // rsi
  __int64 v164; // rcx
  __int64 v165; // rdi
  __int64 v166; // rdi
  __int64 v167; // r8
  unsigned __int64 v168; // r9
  unsigned __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // rsi
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rsi
  __int64 v175; // rdx
  char v176; // cl
  unsigned int v177; // ebx
  _DWORD *v178; // rbp
  unsigned int v179; // edx
  unsigned int v180; // edx
  __int64 v181; // rdx
  unsigned __int64 v182; // rdx
  __int64 v183; // rdx
  unsigned __int64 v184; // rdx
  __int64 v185; // rdx
  unsigned int v186; // r12d
  unsigned __int64 v187; // rdx
  unsigned int v188; // r12d
  __int64 v189; // rdx
  __int64 v190; // rax
  __int64 v191; // rdx
  unsigned __int64 v192; // rdx
  unsigned __int64 v193; // r8
  unsigned __int64 v194; // r8
  unsigned __int64 v195; // rcx
  unsigned __int64 v196; // rcx
  unsigned __int64 v197; // rcx
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // rcx
  __int64 v200; // [rsp-8h] [rbp-D0h] BYREF
  _DWORD *v201; // [rsp+0h] [rbp-C8h]
  unsigned int v202; // [rsp+Ch] [rbp-BCh]
  _DWORD *v203; // [rsp+10h] [rbp-B8h]
  __int64 v204; // [rsp+18h] [rbp-B0h]
  __int64 v205; // [rsp+20h] [rbp-A8h]
  _DWORD *v206; // [rsp+28h] [rbp-A0h]
  __int64 v207; // [rsp+30h] [rbp-98h]
  __int64 v208; // [rsp+38h] [rbp-90h]
  unsigned int v209; // [rsp+40h] [rbp-88h]
  int v210; // [rsp+44h] [rbp-84h]
  unsigned int v211; // [rsp+48h] [rbp-80h]
  unsigned int v212; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v213; // [rsp+50h] [rbp-78h]
  unsigned int v214; // [rsp+54h] [rbp-74h]
  unsigned int v215; // [rsp+58h] [rbp-70h]
  unsigned int v216; // [rsp+5Ch] [rbp-6Ch]
  __int64 v217; // [rsp+60h] [rbp-68h]
  __int64 v218; // [rsp+68h] [rbp-60h]
  __int64 v219; // [rsp+70h] [rbp-58h]
  __int64 v220; // [rsp+78h] [rbp-50h]
  __int64 v221; // [rsp+80h] [rbp-48h]
  __int64 v222; // [rsp+88h] [rbp-40h]
  __int64 v223; // [rsp+90h] [rbp-38h] BYREF
  char v224[8]; // [rsp+98h] [rbp-30h] BYREF
  _DWORD *v225; // [rsp+A0h] [rbp-28h]
  unsigned int v226; // [rsp+ACh] [rbp-1Ch]
  unsigned int *v227; // [rsp+B0h] [rbp-18h]
  __int64 (__fastcall *v228)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-10h]
  unsigned int v229; // [rsp+C4h] [rbp-4h]

  v227 = a3;
  v229 = a6;
  if ( (unsigned __int64)&v223 <= *(_QWORD *)(v16 + 8) )
  {
    v225 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != (_DWORD *)v15 )
  {
    v226 = *a5 >> 3;
    v17 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v14 + *(_QWORD *)(v15 + 8LL * v226 + 176));
    v225 = a5;
    v17(a1, a2, a3: a5);
    if ( v227 == (unsigned int *)v15 )
    {
LABEL_34:
      sub_2771080();
LABEL_35:
      sub_2771080();
      goto LABEL_36;
    }
    sub_1585FC0(a1: v19, a2: v20, a3: v15 + 8LL * v227[1], a4: v18, a5: v225, a6: v229);
    v24 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v14 + *(_QWORD *)(v15 + 8LL * v226 + 256));
    if ( v227[2] == 0 )
      return (_DWORD *)sub_1815901DC(
                         a1: v21,
                         a2: v22,
                         a3: (_DWORD)v227,
                         a4: (_DWORD)v24,
                         a5: 0,
                         a6: v23,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11);
    v228 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(v14 + *(_QWORD *)(v15 + 8LL * v226 + 256));
    v25 = (_DWORD *)v24(a1: v21, a2: v22, a3: v225, a4: v24, a5: v15 + 358641152);
    if ( v25 == (_DWORD *)v15 )
      goto LABEL_37;
    v28 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v14
                                                                        + *(_QWORD *)(v15 + 8LL * (*v25 >> 3) + 144)))(
                      a1: v26,
                      a2: v27,
                      a3: v25);
    if ( v28 == (_DWORD *)v15 )
    {
LABEL_38:
      sub_2771080();
      goto LABEL_39;
    }
    v12 = v14 + *(_QWORD *)(v15 + 8LL * (*v28 >> 3) + 256);
    v31 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))v12)(
                      a1: v29,
                      a2: v30,
                      a3: v28,
                      a4: v15 + 8LL * v227[2],
                      a5: v15 + 8LL * v227[2]);
    if ( v31 == (_DWORD *)v15 )
    {
LABEL_39:
      sub_2771080(a1: v34, a2: v35, a3: v32, a4: v33, a5: v36, a6: v229);
LABEL_40:
      sub_2771080(a1: v47, a2: v48, a3: v52, a4: v49);
      goto LABEL_41;
    }
    ((void (__fastcall *)(__int64, __int64, _DWORD *))(v14 + *(_QWORD *)(v15 + 8LL * (*v31 >> 3) + 184)))(
      a1: v34,
      a2: v35,
      a3: v31);
    if ( v229 != 0 )
      v39 = v15 + 364774944;
    else
      v39 = v15 + 358555168;
    v40 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64))v228)(
                      a1: v37,
                      a2: v38,
                      a3: v225,
                      a4: v228,
                      a5: v39);
    if ( v40 == (_DWORD *)v15 )
      goto LABEL_35;
    v43 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v14
                                                                        + *(_QWORD *)(v15 + 8LL * (*v40 >> 3) + 144)))(
                      a1: v41,
                      a2: v42,
                      a3: v40);
    if ( v43 == (_DWORD *)v15 )
    {
LABEL_36:
      sub_2771080();
LABEL_37:
      sub_2771080();
      goto LABEL_38;
    }
    v13 = v14 + *(_QWORD *)(v15 + 8LL * (*v43 >> 3) + 256);
    LODWORD(v12) = v15 + 8 * v227[3];
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))v13)(
      a1: v45,
      a2: v46,
      a3: v43,
      a4: v44,
      a5: v15 + 8LL * v227[3]);
    v49 = v14 + *(_QWORD *)(v15 + 8LL * v226 + 184);
    v50 = v229;
    if ( v229 != 0 )
    {
      v228 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(v14 + *(_QWORD *)(v15 + 8LL * v226 + 184));
      goto LABEL_14;
    }
    v52 = v227;
    v12 = v227[4];
    if ( (_DWORD)v12 == 0 )
      goto LABEL_40;
    v228 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(v14 + *(_QWORD *)(v15 + 8LL * v226 + 184));
    v13 = *(_DWORD *)(v15 + 8 * v12) >> 3;
    v53 = *(unsigned int *)(v15 + 8 * v13 + 20);
    LODWORD(v13) = *(_DWORD *)(v15 + 8 * v13 + 44);
    if ( (unsigned __int16)*(_DWORD *)(v15 + 8 * v53 + 4LL * ((unsigned int)v13 & (0x1EFBu >> SBYTE3(v13))) + 12) != 7931 )
    {
LABEL_41:
      sub_2770780();
LABEL_42:
      sub_2771080(a1: v47, a2: v48, a3: v58, a4: v49);
      goto LABEL_43;
    }
    v54 = *(_DWORD *)(v15 + 8 * v12) >> 3;
    v55 = *(unsigned int *)(v15 + 8 * v54 + 44);
    v56 = v15 + 8LL * *(unsigned int *)(v15 + 8 * v54 + 20);
    v57 = (unsigned int)v55 & (0x1EFBu >> HIBYTE(*(_DWORD *)(v15 + 8 * v54 + 44)));
    v13 = v15 + 8 * v54;
    v12 = v15 + 8 * v12;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64))(v14
                                                                 + *(_QWORD *)(v13
                                                                             + HIWORD(*(_DWORD *)(v56 + 4 * v57 + 12))
                                                                             + 56)))(
           a1: v55,
           a2: v56,
           a3: v12) == 0 )
    {
      v73 = (_DWORD *)v228(a1: v47, a2: v48, a3: v225);
      if ( v73 != (_DWORD *)v15 )
      {
        v76 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v14
                                                                                  + *(_QWORD *)(v15
                                                                                              + 8LL * (*v73 >> 3)
                                                                                              + 256));
        v77 = v76(a1: v74, a2: v75, a3: v73, a4: v76, a5: v15 + 359077472);
        if ( v77 != v15 )
          return (_DWORD *)sub_181590448(
                             a1: v78,
                             a2: v79,
                             a3: v77,
                             a4: (int)v15 + 376257176,
                             a5: v80,
                             a6: v81,
                             a7,
                             a8,
                             a9,
                             a10,
                             a11,
                             a12);
        goto LABEL_45;
      }
LABEL_44:
      sub_2771080();
LABEL_45:
      sub_2771080();
LABEL_46:
      sub_2771080();
      goto LABEL_47;
    }
    v50 = v229;
LABEL_14:
    if ( v50 != 0 )
      goto LABEL_15;
    v58 = v227;
    v59 = v227[5];
    if ( (_DWORD)v59 == 0 )
      goto LABEL_42;
    v60 = *(_DWORD *)(v15 + 8 * v59) >> 3;
    LODWORD(v13) = *(_DWORD *)(v15 + 8 * v60 + 44);
    v12 = v15 + 8LL * *(unsigned int *)(v15 + 8 * v60 + 20);
    if ( (unsigned __int16)*(_DWORD *)(v12 + 4LL * ((unsigned int)v13 & (0x1EFBu >> SBYTE3(v13))) + 12) != 7931 )
    {
LABEL_43:
      sub_2770780();
      goto LABEL_44;
    }
    v61 = *(_DWORD *)(v15 + 8 * v59) >> 3;
    LODWORD(v13) = *(_DWORD *)(v15 + 8 * v61 + 44);
    v62 = v15 + 8LL * *(unsigned int *)(v15 + 8 * v61 + 20);
    v12 = v15 + 8 * v61;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64, __int64))(v14
                                                                + *(_QWORD *)(v12
                                                                            + HIWORD(*(_DWORD *)(v62
                                                                                               + 4LL
                                                                                               * ((unsigned int)v13
                                                                                                & (0x1EFBu >> SBYTE3(v13)))
                                                                                               + 12))
                                                                            + 56)))(
           a1: (unsigned int)v13 & (0x1EFBu >> SBYTE3(v13)),
           a2: v62,
           a3: v15 + 8 * v59) != 0 )
    {
LABEL_15:
      result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))(v14
                                                                                      + *(_QWORD *)(v15
                                                                                                  + 8LL * v226
                                                                                                  + 168)))(
                           a1: v47,
                           a2: v48,
                           a3: v225,
                           a4: v49);
      if ( *(int *)(v16 + 16) <= 0 )
        return (_DWORD *)sub_277F280();
      return result;
    }
    v63 = (_DWORD *)v228(a1: v47, a2: v48, a3: v225);
    if ( v63 == (_DWORD *)v15 )
      goto LABEL_46;
    v66 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v14
                                                                              + *(_QWORD *)(v15 + 8LL * (*v63 >> 3) + 256));
    v67 = v66(a1: v64, a2: v65, a3: v63, a4: v66, a5: v15 + 364633992);
    if ( v67 != v15 )
      return (_DWORD *)sub_1815903A6(
                         a1: v69,
                         a2: v70,
                         a3: v67,
                         a4: (int)v15 + 376257176,
                         a5: v71,
                         a6: v72,
                         a7,
                         a8,
                         a9,
                         a10);
LABEL_47:
    sub_2771080(a1: v69, a2: v70, a3: v227, a4: v68, a5: v225);
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
    v208 = v82;
    if ( (unsigned __int64)&v200 <= *(_QWORD *)(v16 + 8) )
    {
      sub_1EB84E0();
    }
    else if ( v82 != v15 )
    {
      v83 = *(unsigned int *)(v82 + 4);
      if ( (_DWORD)v83 == 0 )
      {
LABEL_97:
        v84 = sub_2771080();
LABEL_98:
        v140 = (_DWORD *)(v15 + 57668888);
        if ( v84 == 0 )
        {
LABEL_124:
          v179 = *(unsigned __int8 *)(v15 + 57668901);
          v216 = 0;
          v215 = 0xEE1D664E;
          v207 = v15 + 376611960;
          v214 = v179;
LABEL_103:
          v148 = *(_QWORD *)(v16 + 40);
          if ( (unsigned __int64)(v148 + 40) > *(_QWORD *)(v16 + 32) )
          {
            v148 = sub_1EAA920(a1: v87, a2: v140, a3: v219);
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v148 + 40;
            *(_DWORD *)v148 = 34081944;
            *(_DWORD *)(v148 + 4) = 0;
            *(_QWORD *)(v148 + 8) = 0;
            *(_QWORD *)(v148 + 16) = 0;
            *(_QWORD *)(v148 + 24) = 0;
            *(_QWORD *)(v148 + 32) = 0;
          }
          v206 = (_DWORD *)v148;
          *(_DWORD *)(v148 + 20) = 46923644;
          *(_DWORD *)(v148 + 16) = *(_DWORD *)(v15 + 374343896);
          *(_DWORD *)(v148 + 12) = (unsigned __int64)(v148 - v15) >> 3;
          v149 = sub_503B9A0(a1: v87, a2: v140, a3: v148, a4: v148, a5: 0);
          v152 = *(_QWORD *)(v16 + 40);
          if ( (unsigned __int64)(v152 + 24) > *(_QWORD *)(v16 + 32) )
          {
            v205 = v149;
            v152 = sub_1EAA920(a1: v150, a2: v151, a3: v220);
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v152 + 24;
            *(_DWORD *)v152 = 34082680;
            *(_DWORD *)(v152 + 4) = 0;
            *(_QWORD *)(v152 + 8) = 0;
            *(_QWORD *)(v152 + 16) = 0;
          }
          v153 = (unsigned __int64)v206;
          v154 = v216;
          v155 = v215;
          v156 = v207;
          *(_BYTE *)(v152 + 13) = v214;
          *(_BYTE *)(v152 + 12) = v154;
          *(_DWORD *)(v152 + 8) = v155;
          *(_DWORD *)(v152 + 4) = (unsigned __int64)(v156 - v15) >> 3;
          *(_DWORD *)(v153 + 8) = (unsigned __int64)(v152 - v15) >> 3;
          if ( (*(_DWORD *)v153 & 2) != 0 )
          {
            v193 = (v153 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v153 & 0xFFFFFFFFFFF80000LL) + ((v153 - v193) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v153 & 0xFFFFFFFFFFF80000LL) + ((v153 - v193) >> 9) + 0x38) = 0;
            v157 = v153;
          }
          else
          {
            v157 = v153;
          }
          goto LABEL_109;
        }
        v141 = (unsigned int)v12;
        v142 = ((_DWORD)v13 + 21) << v12;
        if ( v142 < 0 )
        {
          v213 = ((_DWORD)v13 + 21) << v12;
          v212 = v12;
          v181 = *(_QWORD *)(v16 + 40);
          if ( (unsigned __int64)(v181 + 40) > *(_QWORD *)(v16 + 32) )
          {
            v181 = sub_1EAA920(a1: v87, a2: v140, a3: v217);
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v181 + 40;
            *(_DWORD *)v181 = 34082880;
            *(_DWORD *)(v181 + 4) = 0;
            *(_QWORD *)(v181 + 8) = 0;
            *(_QWORD *)(v181 + 16) = 0;
            *(_QWORD *)(v181 + 24) = 0;
            *(_QWORD *)(v181 + 32) = 0;
          }
          *(_DWORD *)(v181 + 20) = 46923644;
          *(_DWORD *)(v181 + 16) = *(_DWORD *)(v15 + 374343896);
          *(_DWORD *)(v181 + 12) = (unsigned __int64)(v181 - v15) >> 3;
          v206 = (_DWORD *)v181;
          sub_503B9A0(a1: v87, a2: v140, a3: v181, a4: v141, a5: 0);
          v182 = (unsigned __int64)v206;
          v206[2] = 46004603;
          if ( (*(_DWORD *)v182 & 2) != 0 )
          {
            v195 = (v182 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v182 & 0xFFFFFFFFFFF80000LL) + ((v182 - v195) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v182 & 0xFFFFFFFFFFF80000LL) + ((v182 - v195) >> 9) + 0x38) = 0;
            v157 = v182;
          }
          else
          {
            v157 = v182;
          }
          goto LABEL_109;
        }
        v143 = *(_QWORD *)(v16 + 40);
        v144 = *(_QWORD *)(v16 + 32);
        v145 = ((unsigned int)v142 + 19LL) & 0x1FFFFFFF8LL;
        if ( v145 < 0x20000 )
        {
LABEL_144:
          v145 += v143;
          if ( v145 <= v144 )
          {
            v190 = v218;
            *(_QWORD *)(v16 + 40) = v145;
            *(_QWORD *)v143 = v190;
            *(_DWORD *)(v143 + 8) = v142;
            v213 = v142;
            goto LABEL_102;
          }
        }
        v213 = v142;
        v206 = v140;
        v212 = v12;
        v143 = sub_1EAA840(a1: v145, a2: v140, a3: v218, a4: v141, a5: (unsigned int)v142, a6: v144);
        v140 = v206;
        LODWORD(v12) = v212;
LABEL_102:
        v212 = v12;
        v206 = (_DWORD *)v143;
        sub_4FF2C40(a1: (unsigned int)v12, a2: v140, a3: v140, a4: v143, a5: v143, a6: 0);
        sub_4FF2C40(a1: v212, a2: v147, a3: v208, a4: v146, a5: v206, a6: 21);
        v221 = v14;
        v216 = v212;
        v215 = 0;
        v222 = v14;
        v207 = (__int64)v206;
        v214 = 0;
        goto LABEL_103;
      }
      v84 = *(_DWORD *)(v15 + 8 * v83 + 8);
      LODWORD(v12) = *(char *)(v82 + 12);
      LODWORD(v13) = v84 >> *(_BYTE *)(v82 + 12);
      v220 = 34082680;
      v85 = 34081944;
      v219 = 34081944;
      v86 = 34082368;
      v218 = 34082368;
      v87 = 34082880;
      v217 = 34082880;
      if ( (unsigned int)v13 < 2 )
        goto LABEL_98;
      v88 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int64)(v88 + 24) > *(_QWORD *)(v16 + 32) )
      {
        v88 = sub_1EAA920(a1: 34082880, a2: 34082368, a3: 34161576);
        v87 = v217;
        v86 = v218;
        v85 = v219;
        v82 = v208;
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v88 + 24;
        *(_DWORD *)v88 = 34161576;
        *(_DWORD *)(v88 + 4) = 0;
        *(_QWORD *)(v88 + 8) = 0;
        *(_QWORD *)(v88 + 16) = 0;
      }
      v207 = v88;
      *(_DWORD *)(v88 + 8) = 47045786;
      v214 = 0;
      v89 = 1;
      while ( 1 )
      {
        v215 = v89;
        if ( (unsigned int)sub_4FEBC20(a1: v87, a2: v86, a3: v82, a4: v85, a5: v89, a6: v82) == 41 )
          break;
        if ( (unsigned int)sub_4FEBC20(a1: v91, a2: v92, a3: v208, a4: v90, a5: v215) == 91 )
        {
          v85 = v214 + 1;
          v100 = v15;
          v101 = v215;
        }
        else if ( (unsigned int)sub_4FEBC20(a1: v87, a2: v86, a3: v208, a4: v93, a5: v215) == 76 )
        {
          v216 = sub_4FF40A0(a1: v95, a2: v96, a3: v208, a4: v94, a5: 59, a6: v215 + 1);
          v130 = sub_4FFD140(a1: v128, a2: v129, a3: v208, a4: v127, a5: v215, a6: v216 + 1);
          v134 = sub_657C2C0(a1: v132, a2: v133, a3: v130, a4: v131, a5: 1, a6: 0);
          v85 = v214;
          v100 = v134;
          v101 = v216;
        }
        else
        {
          v97 = sub_4FEBC20(a1: v95, a2: v96, a3: v208, a4: v94, a5: v215);
          v100 = v15 + 8LL * *(unsigned int *)(sub_657AD80(a1: v98, a2: v99, a3: v97) + 16);
          v85 = v214;
          v101 = v215;
        }
        v89 = v101 + 1;
        v216 = v89;
        if ( v100 == v15 )
        {
          v214 = v85;
          v82 = v208;
        }
        else
        {
          v206 = (_DWORD *)v100;
          LODWORD(v12) = v15 + 57668864;
          v205 = v15 + 57668864;
          v102 = v218;
          v103 = v100;
          while ( (int)v85 >= 1 )
          {
            if ( v103 == v15 )
              v104 = v15 + 353301280;
            else
              v104 = v103;
            v204 = v104;
            v105 = *(unsigned int *)(v104 + 4);
            if ( (_DWORD)v105 == 0 )
            {
              v203 = (_DWORD *)v103;
              v212 = v85;
              sub_2771080(a1: v105, a2: v102);
              goto LABEL_126;
            }
            v106 = *(unsigned int *)(v15 + 8 * v105 + 8);
            v107 = v85 - 1;
            if ( (_DWORD)v106 != 0 )
            {
              v212 = v85;
              v108 = *(char *)(v104 + 12);
              v202 = *(_DWORD *)(v15 + 374343896);
              v211 = (char)v108;
              v109 = (unsigned int)(char)v108;
              v110 = ((unsigned int)v106 >> v108) + 2;
              if ( (int)v110 < 0 )
              {
                v203 = (_DWORD *)v103;
                v185 = *(_QWORD *)(v16 + 40);
                if ( (unsigned __int64)(v185 + 40) > *(_QWORD *)(v16 + 32) )
                {
                  v210 = v110;
                  v185 = sub_1EAA920(a1: v110, a2: v102, a3: v217);
                }
                else
                {
                  *(_QWORD *)(v16 + 40) = v185 + 40;
                  *(_DWORD *)v185 = 34082880;
                  *(_DWORD *)(v185 + 4) = 0;
                  *(_QWORD *)(v185 + 8) = 0;
                  *(_QWORD *)(v185 + 16) = 0;
                  *(_QWORD *)(v185 + 24) = 0;
                  *(_QWORD *)(v185 + 32) = 0;
                  v210 = v110;
                }
                v186 = v202;
                *(_DWORD *)(v185 + 20) = 46923644;
                *(_DWORD *)(v185 + 16) = v186;
                *(_DWORD *)(v185 + 12) = (unsigned __int64)(v185 - v15) >> 3;
                v201 = (_DWORD *)v185;
                sub_503B9A0(a1: v110, a2: v102, a3: v185, a4: v109, a5: 0);
                v187 = (unsigned __int64)v201;
                v201[2] = 46004603;
                if ( (*(_DWORD *)v187 & 2) != 0 )
                {
                  v197 = (v187 & 0xFFFFFFFFFFF80000LL) + 2112;
                  if ( *(_BYTE *)((v187 & 0xFFFFFFFFFFF80000LL) + ((v187 - v197) >> 9) + 0x38) != 0 )
                    *(_BYTE *)((v187 & 0xFFFFFFFFFFF80000LL) + ((v187 - v197) >> 9) + 0x38) = 0;
                }
LABEL_138:
                v157 = v187;
                while ( 1 )
                {
LABEL_109:
                  sub_2769900(a1: v150, a2: v153, a3: v157, a4: v157, a5: v224);
LABEL_110:
                  v158 = v218;
                  v159 = *(unsigned int *)(v208 + 4);
                  v160 = (_DWORD *)(v15 + 57668912);
                  if ( (_DWORD)v159 == 0 )
                  {
                    sub_2771080(a1: v91, a2: v92, a3: v208, a4: v214);
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
                    return (_DWORD *)sub_15914E0();
                  }
                  v161 = *(_DWORD *)(v15 + 8 * v159 + 8);
                  if ( v161 != 0 )
                  {
                    v162 = *(char *)(v208 + 12);
                    v163 = *(unsigned int *)(v15 + 374343896);
                    v164 = v162;
                    v165 = (v161 >> *(_BYTE *)(v208 + 12)) + 28;
                    if ( (int)v165 < 0 )
                    {
                      v209 = *(char *)(v208 + 12);
                      v183 = *(_QWORD *)(v16 + 40);
                      if ( (unsigned __int64)(v183 + 40) > *(_QWORD *)(v16 + 32) )
                      {
                        v210 = v165;
                        v202 = v163;
                        v183 = sub_1EAA920(a1: v165, a2: v163, a3: v217);
                        v163 = v202;
                      }
                      else
                      {
                        *(_QWORD *)(v16 + 40) = v183 + 40;
                        *(_DWORD *)v183 = 34082880;
                        *(_DWORD *)(v183 + 4) = 0;
                        *(_QWORD *)(v183 + 8) = 0;
                        *(_QWORD *)(v183 + 16) = 0;
                        *(_QWORD *)(v183 + 24) = 0;
                        *(_QWORD *)(v183 + 32) = 0;
                        v210 = v165;
                      }
                      *(_DWORD *)(v183 + 20) = 46923644;
                      *(_DWORD *)(v183 + 16) = v163;
                      *(_DWORD *)(v183 + 12) = (unsigned __int64)(v183 - v15) >> 3;
                      v206 = (_DWORD *)v183;
                      sub_503B9A0(a1: v165, a2: v163, a3: v183, a4: v164, a5: 0);
                      v184 = (unsigned __int64)v206;
                      v206[2] = 46004603;
                      if ( (*(_DWORD *)v184 & 2) != 0 )
                      {
                        v196 = (v184 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v184 & 0xFFFFFFFFFFF80000LL) + ((v184 - v196) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v184 & 0xFFFFFFFFFFF80000LL) + ((v184 - v196) >> 9) + 0x38) = 0;
                        v157 = v184;
                      }
                      else
                      {
                        v157 = v184;
                      }
                      continue;
                    }
                    v166 = (unsigned int)((_DWORD)v165 << v162);
                    if ( (int)v166 < 0 )
                    {
                      v210 = v166;
                      v209 = v162;
                      v191 = *(_QWORD *)(v16 + 40);
                      if ( (unsigned __int64)(v191 + 40) > *(_QWORD *)(v16 + 32) )
                      {
                        v202 = v163;
                        v191 = sub_1EAA920(a1: v217, a2: v163, a3: v217);
                        v163 = v202;
                      }
                      else
                      {
                        *(_QWORD *)(v16 + 40) = v191 + 40;
                        *(_DWORD *)v191 = 34082880;
                        *(_DWORD *)(v191 + 4) = 0;
                        *(_QWORD *)(v191 + 8) = 0;
                        *(_QWORD *)(v191 + 16) = 0;
                        *(_QWORD *)(v191 + 24) = 0;
                        *(_QWORD *)(v191 + 32) = 0;
                      }
                      *(_DWORD *)(v191 + 20) = 46923644;
                      *(_DWORD *)(v191 + 16) = v163;
                      *(_DWORD *)(v191 + 12) = (unsigned __int64)(v191 - v15) >> 3;
                      v206 = (_DWORD *)v191;
                      sub_503B9A0(a1: v166, a2: v163, a3: v191, a4: v164, a5: 0);
                      v192 = (unsigned __int64)v206;
                      v206[2] = 46004603;
                      if ( (*(_DWORD *)v192 & 2) != 0 )
                      {
                        v199 = (v192 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v192 & 0xFFFFFFFFFFF80000LL) + ((v192 - v199) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v192 & 0xFFFFFFFFFFF80000LL) + ((v192 - v199) >> 9) + 0x38) = 0;
                        v157 = v192;
                      }
                      else
                      {
                        v157 = v192;
                      }
                      continue;
                    }
                    v167 = *(_QWORD *)(v16 + 40);
                    v168 = *(_QWORD *)(v16 + 32);
                    v169 = ((unsigned int)v166 + 19LL) & 0x1FFFFFFF8LL;
                    if ( v169 >= 0x20000 || (v169 += v167, v169 > v168) )
                    {
                      v210 = v166;
                      v209 = v162;
                      v206 = (_DWORD *)(v15 + 57668912);
                      v167 = sub_1EAA840(
                               a1: v166,
                               a2: v163,
                               a3: v218,
                               a4: v169,
                               a5: (unsigned int)v166,
                               a6: v168);
                      v162 = v209;
                      v160 = v206;
                    }
                    else
                    {
                      *(_QWORD *)(v16 + 40) = v169;
                      *(_QWORD *)v167 = v158;
                      *(_DWORD *)(v167 + 8) = v166;
                      v210 = v166;
                    }
                    v209 = v162;
                    v206 = (_DWORD *)v167;
                    sub_4FF2C40(a1: v162, a2: v163, a3: v160, a4: v167, a5: v167, a6: 0);
                    sub_4FF2C40(a1: v209, a2: v171, a3: v208, a4: v170, a5: v206, a6: 28);
                    v221 = v14;
                    v216 = v209;
                    v212 = 0;
                    v222 = v14;
                    v203 = v206;
                    v213 = 0;
                  }
                  else
                  {
LABEL_126:
                    v180 = *(unsigned __int8 *)(v15 + 57668925);
                    v216 = 0;
                    v212 = 0xB59DB6B3;
                    v203 = (_DWORD *)(v15 + 376612000);
                    v213 = v180;
                  }
                  v172 = *(_QWORD *)(v16 + 40);
                  if ( (unsigned __int64)(v172 + 40) > *(_QWORD *)(v16 + 32) )
                  {
                    v172 = sub_1EAA920(a1: v91, a2: v92, a3: v219);
                  }
                  else
                  {
                    *(_QWORD *)(v16 + 40) = v172 + 40;
                    *(_DWORD *)v172 = 34081944;
                    *(_DWORD *)(v172 + 4) = 0;
                    *(_QWORD *)(v172 + 8) = 0;
                    *(_QWORD *)(v172 + 16) = 0;
                    *(_QWORD *)(v172 + 24) = 0;
                    *(_QWORD *)(v172 + 32) = 0;
                  }
                  v206 = (_DWORD *)v172;
                  *(_DWORD *)(v172 + 20) = 46923644;
                  *(_DWORD *)(v172 + 16) = *(_DWORD *)(v15 + 374343896);
                  *(_DWORD *)(v172 + 12) = (unsigned __int64)(v172 - v15) >> 3;
                  v173 = sub_503B9A0(a1: v91, a2: v92, a3: v172, a4: v172, a5: 0);
                  v175 = *(_QWORD *)(v16 + 40);
                  if ( (unsigned __int64)(v175 + 24) > *(_QWORD *)(v16 + 32) )
                  {
                    v205 = v173;
                    v175 = sub_1EAA920(a1: v150, a2: v174, a3: v220);
                  }
                  else
                  {
                    *(_QWORD *)(v16 + 40) = v175 + 24;
                    *(_DWORD *)v175 = 34082680;
                    *(_DWORD *)(v175 + 4) = 0;
                    *(_QWORD *)(v175 + 8) = 0;
                    *(_QWORD *)(v175 + 16) = 0;
                  }
                  v153 = (unsigned __int64)v206;
                  v176 = v216;
                  v177 = v212;
                  v178 = v203;
                  *(_BYTE *)(v175 + 13) = v213;
                  *(_BYTE *)(v175 + 12) = v176;
                  *(_DWORD *)(v175 + 8) = v177;
                  *(_DWORD *)(v175 + 4) = ((unsigned __int64)v178 - v15) >> 3;
                  *(_DWORD *)(v153 + 8) = (unsigned __int64)(v175 - v15) >> 3;
                  if ( (*(_DWORD *)v153 & 2) != 0 )
                  {
                    v194 = (v153 & 0xFFFFFFFFFFF80000LL) + 2112;
                    if ( *(_BYTE *)((v153 & 0xFFFFFFFFFFF80000LL) + ((v153 - v194) >> 9) + 0x38) != 0 )
                      *(_BYTE *)((v153 & 0xFFFFFFFFFFF80000LL) + ((v153 - v194) >> 9) + 0x38) = 0;
                    v157 = v153;
                  }
                  else
                  {
                    v157 = v153;
                  }
                }
              }
              v111 = (unsigned int)((_DWORD)v110 << v108);
              if ( (int)v111 < 0 )
              {
                v210 = v111;
                v188 = v202;
                v203 = (_DWORD *)v103;
                v189 = *(_QWORD *)(v16 + 40);
                if ( (unsigned __int64)(v189 + 40) > *(_QWORD *)(v16 + 32) )
                {
                  v189 = sub_1EAA920(a1: v111, a2: v102, a3: v217);
                  v188 = v202;
                }
                else
                {
                  *(_QWORD *)(v16 + 40) = v189 + 40;
                  *(_DWORD *)v189 = 34082880;
                  *(_DWORD *)(v189 + 4) = 0;
                  *(_QWORD *)(v189 + 8) = 0;
                  *(_QWORD *)(v189 + 16) = 0;
                  *(_QWORD *)(v189 + 24) = 0;
                  *(_QWORD *)(v189 + 32) = 0;
                }
                *(_DWORD *)(v189 + 20) = 46923644;
                *(_DWORD *)(v189 + 16) = v188;
                *(_DWORD *)(v189 + 12) = (unsigned __int64)(v189 - v15) >> 3;
                v201 = (_DWORD *)v189;
                sub_503B9A0(a1: v111, a2: v102, a3: v189, a4: v109, a5: 0);
                v187 = (unsigned __int64)v201;
                v201[2] = 46004603;
                if ( (*(_DWORD *)v187 & 2) != 0 )
                {
                  v198 = (v187 & 0xFFFFFFFFFFF80000LL) + 2112;
                  if ( *(_BYTE *)((v187 & 0xFFFFFFFFFFF80000LL) + ((v187 - v198) >> 9) + 0x38) != 0 )
                    *(_BYTE *)((v187 & 0xFFFFFFFFFFF80000LL) + ((v187 - v198) >> 9) + 0x38) = 0;
                }
                goto LABEL_138;
              }
              v209 = v108;
              v112 = *(_QWORD *)(v16 + 40);
              v113 = ((unsigned int)v111 + 19LL) & 0x1FFFFFFF8LL;
              if ( v113 >= 0x20000 || (v114 = v112 + v113) > *(_QWORD *)(v16 + 32) )
              {
                v210 = v111;
                v213 = v107;
                v203 = (_DWORD *)v103;
                v112 = sub_1EAA840(a1: v111, a2: v102, a3: v218, a4: v112, a5: (unsigned int)v111);
                v115 = v211;
                v116 = v204;
              }
              else
              {
                *(_QWORD *)(v16 + 40) = v114;
                *(_QWORD *)v112 = v102;
                *(_DWORD *)(v112 + 8) = v111;
                v210 = v111;
                v115 = v211;
                v213 = v107;
                v116 = v204;
                v203 = (_DWORD *)v103;
              }
              v201 = (_DWORD *)v112;
              sub_4FF2C40(a1: v115, a2: v102, a3: v116, a4: v112, a5: v112, a6: 0);
              v120 = *(unsigned int *)(v204 + 4);
              if ( (_DWORD)v120 == 0 )
              {
                sub_2771080(a1: v118, a2: v119, a3: v117, a4: v201);
                goto LABEL_144;
              }
              sub_4FF2C40(
                a1: v211,
                a2: v119,
                a3: v205,
                a4: (unsigned int)*(char *)(v204 + 12),
                a5: v201,
                a6: (unsigned int)(*(_DWORD *)(v15 + 8 * v120 + 8) >> *(_BYTE *)(v204 + 12)));
              v123 = *(_QWORD *)(v16 + 40);
              if ( (unsigned __int64)(v123 + 24) > *(_QWORD *)(v16 + 32) )
              {
                v123 = sub_1EAA920(a1: v121, a2: v122, a3: v220);
              }
              else
              {
                *(_QWORD *)(v16 + 40) = v123 + 24;
                *(_DWORD *)v123 = 34082680;
                *(_DWORD *)(v123 + 4) = 0;
                *(_QWORD *)(v123 + 8) = 0;
                *(_QWORD *)(v123 + 16) = 0;
              }
              v124 = v201;
              *(_BYTE *)(v123 + 12) = v209;
              *(_DWORD *)(v123 + 4) = ((unsigned __int64)v124 - v15) >> 3;
              v103 = v123;
              v85 = v213;
              v102 = v218;
            }
            else
            {
              v213 = v85 - 1;
              v203 = (_DWORD *)v103;
              v212 = v85;
              v125 = *(_QWORD *)(v16 + 40);
              if ( (unsigned __int64)(v125 + 24) > *(_QWORD *)(v16 + 32) )
              {
                v125 = sub_1EAA920(a1: v106, a2: v102, a3: v220);
              }
              else
              {
                *(_QWORD *)(v16 + 40) = v125 + 24;
                *(_DWORD *)v125 = 34082680;
                *(_DWORD *)(v125 + 4) = 0;
                *(_QWORD *)(v125 + 8) = 0;
                *(_QWORD *)(v125 + 16) = 0;
              }
              *(_BYTE *)(v125 + 13) = *(_BYTE *)(v15 + 57668877);
              *(_DWORD *)(v125 + 8) = 2914;
              *(_DWORD *)(v125 + 4) = 47076493;
              v103 = v125;
              v85 = v213;
              v102 = v218;
            }
          }
          v203 = (_DWORD *)v103;
          v212 = v85;
          v126 = v207;
          ++*(_DWORD *)(v207 + 4);
          sub_57881C0(
            a1: *(unsigned int *)(v126 + 12),
            a2: v102,
            a3: v126,
            a4: v85,
            a5: v203,
            a6: v15 + 8LL * *(unsigned int *)(v126 + 8));
          v221 = v14;
          v214 = v212;
          v89 = v216;
          v82 = v208;
        }
      }
      if ( (int)v214 >= 1 )
        goto LABEL_110;
      v135 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int64)(v135 + 16) > *(_QWORD *)(v16 + 32) )
      {
        v136 = sub_1EAA840(a1: v91, a2: v92, a3: 34087104, a4: v90, a5: 0);
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v135 + 16;
        *(_QWORD *)v135 = 34087104;
        *(_DWORD *)(v135 + 8) = 0;
        *(_DWORD *)(v135 + 12) = 0;
        v136 = v135;
      }
      result = (_DWORD *)sub_578E980(a1: v91, a2: v92, a3: v207, a4: v90, a5: v136);
      if ( result != (_DWORD *)v15 && *result >> 3 != 4260888 )
      {
        sub_276FC00(a1: v138, a2: v139, a3: result, a4: v137, a5: v15 + 34087104);
        goto LABEL_124;
      }
      if ( *(int *)(v16 + 16) <= 0 )
        return (_DWORD *)sub_277F280();
      return result;
    }
    sub_2771080();
    goto LABEL_97;
  }
  sub_2771080();
  goto LABEL_34;
}
