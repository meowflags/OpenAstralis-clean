// sub_18159B8E0
// rva 0x0159b8e0  size 45  section .text  group text
// window base 0x18159b8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159B8E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20)
{
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  _BOOL8 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdx
  int i; // eax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rsi
  int v106; // r8d
  __int64 v107; // r8
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rdi
  __int64 v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rsi
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdi
  __int64 v151; // rsi
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rbx
  __int64 v168; // rbp
  __int64 v169; // rax
  __int64 v170; // rdi
  __int64 v171; // rsi
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rdi
  __int64 v175; // rsi
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rdi
  __int64 v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rdi
  __int64 v184; // rsi
  __int64 v185; // [rsp-8h] [rbp-B0h] BYREF
  __int64 v186; // [rsp+0h] [rbp-A8h]
  __int64 v187; // [rsp+8h] [rbp-A0h]
  __int64 v188; // [rsp+10h] [rbp-98h]
  __int64 v189; // [rsp+18h] [rbp-90h]
  __int64 v190; // [rsp+20h] [rbp-88h]
  unsigned int v191; // [rsp+2Ch] [rbp-7Ch]
  __int64 v192; // [rsp+30h] [rbp-78h]
  __int64 v193; // [rsp+38h] [rbp-70h]
  __int64 v194; // [rsp+40h] [rbp-68h]
  __int64 v195; // [rsp+48h] [rbp-60h]
  __int64 v196; // [rsp+50h] [rbp-58h]
  unsigned int v197; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v198; // [rsp+60h] [rbp-48h]
  int v199; // [rsp+64h] [rbp-44h]
  __int64 v200; // [rsp+68h] [rbp-40h]
  __int64 v201; // [rsp+70h] [rbp-38h]
  __int64 v202; // [rsp+78h] [rbp-30h]
  unsigned int v203; // [rsp+80h] [rbp-28h]
  BOOL v204; // [rsp+84h] [rbp-24h]
  BOOL v205; // [rsp+88h] [rbp-20h]
  int v206; // [rsp+8Ch] [rbp-1Ch]
  __int64 v207; // [rsp+98h] [rbp-10h]
  __int64 v208; // [rsp+A0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v208 > *(_QWORD *)(v22 + 8) )
  {
    if ( *(int *)(v22 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 3;
  }
  MEMORY[0x181EB83C0]();
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
  v206 = v26;
  if ( (unsigned __int64)&v185 <= *(_QWORD *)(v22 + 8) )
  {
    v203 = v25;
    v202 = v28;
    v196 = v27;
    v195 = v24;
    LODWORD(result) = MEMORY[0x181EB83C0]();
LABEL_86:
    v205 = v29;
    v204 = result;
    v203 = v25;
    v202 = v28;
    v195 = v24;
    LODWORD(result) = MEMORY[0x18276EFE0]();
    goto LABEL_87;
  }
  result = (int)v26 < 2;
  v29 = (int)v26 < 3;
  if ( (int)v26 < 3 )
  {
LABEL_7:
    if ( v27 != v21 )
    {
      v205 = (int)v26 < 3;
      v204 = (int)v26 < 2;
      v203 = v25;
      v202 = v28;
      v196 = v27;
      v195 = v24;
      v194 = v21 + 376612120;
      v30 = MEMORY[0x182084840](a1: v25, a2: v26, a3: v21 + 376612120, a4: v29, a5: v21 + 366695432);
      MEMORY[0x182084180](a1: v32, a2: v33, a3: v30, a4: v31, a5: 1);
      v40 = *(_QWORD *)(v21 + 376178832);
      v201 = v40;
      if ( v40 == 0 )
        return sub_18159BF23(
                 a1: v36,
                 a2: v37,
                 a3: v34,
                 a4: v35,
                 a5: v38,
                 a6: v39,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20);
      v41 = MEMORY[0x182084BC0](a1: v36, a2: v37, a3: v194, a4: v35, a5: v40);
      v45 = MEMORY[0x1820846E0](a1: v43, a2: v44, a3: v41, a4: v42, a5: 1);
      v48 = *(_DWORD *)(v201 + 20);
      if ( v48 >= 3 )
      {
        if ( v48 == 3 )
        {
          v49 = v21 + 367455056;
          goto LABEL_17;
        }
        if ( v48 == 4 )
        {
          v49 = v21 + 367454952;
          goto LABEL_17;
        }
      }
      else
      {
        if ( v48 >= 2 )
        {
          v49 = v21 + 367455000;
          goto LABEL_17;
        }
        if ( v48 == 0 )
        {
          v49 = v21 + 367455168;
          goto LABEL_17;
        }
        if ( v48 == 1 )
        {
          v49 = v21 + 367455112;
          goto LABEL_17;
        }
      }
      v49 = v21 + 367455224;
LABEL_17:
      MEMORY[0x182084840](a1: v46, a2: v47, a3: v45, a4: v201, a5: v49);
      v198 = *(_DWORD *)(v201 + 324);
      v193 = v21 + 372990000;
      v52 = MEMORY[0x182084840](a1: v50, a2: v51, a3: v194, a4: v198, a5: v21 + 372990000);
      if ( v198 != 0 )
      {
        if ( v198 == 1 )
        {
          v55 = v21 + 367995344;
        }
        else if ( v198 == 2 )
        {
          v55 = v21 + 366873376;
        }
        else
        {
          v55 = v21 + 369809168;
        }
      }
      else
      {
        v55 = v21 + 372361016;
      }
      v56 = MEMORY[0x182084840](a1: v53, a2: v54, a3: v52, a4: v198, a5: v55);
      v192 = v21 + 372674176;
      MEMORY[0x182084840](a1: v57, a2: v58, a3: v56, a4: v21 + 372674176, a5: v21 + 372674176);
      if ( v206 >= 2 )
        goto LABEL_22;
      v191 = *(_DWORD *)(v201 + 72);
      v190 = v21 + 8LL * v191;
      if ( v191 == 0 )
      {
        MEMORY[0x182084840](a1: v59, a2: v60, a3: v194, a4: 0, a5: v21 + 372901808);
        goto LABEL_22;
      }
      v189 = v21 + 372880464;
      v169 = MEMORY[0x182084840](a1: v59, a2: v60, a3: v194, a4: v191, a5: v21 + 373045416);
      v172 = MEMORY[0x182084840](
               a1: v170,
               a2: v171,
               a3: v169,
               a4: v191,
               a5: v21 + 8LL * *(unsigned int *)(v21 + 8LL * v191 + 4));
      v176 = MEMORY[0x182084840](a1: v174, a2: v175, a3: v172, a4: v173, a5: v189);
      if ( v190 == v21 )
        JUMPOUT(0x302B2801BLL);
      MEMORY[0x182084BC0](a1: v178, a2: v179, a3: v176, a4: v177, a5: v190);
      v180 = *(_DWORD *)(v21 + 8LL * v191) >> 3;
      if ( *(__int16 *)(v21 + 8 * v180 + 62) >= 3
        && *(_DWORD *)(v21 + 8LL * *(unsigned int *)(v21 + 8 * v180 + 16) + 20) == 70129 )
      {
        goto LABEL_82;
      }
      v181 = *(unsigned int *)(v21 + 8LL * v191 + 12);
      if ( (_DWORD)v181 != 0 )
      {
        if ( *(_BYTE *)(v21 + 8 * v181 + 32) != 0 )
LABEL_82:
          MEMORY[0x182084840](a1: v59, a2: v60, a3: v194, a4: v191, a5: v21 + 372635704);
LABEL_22:
        v190 = v21 + 372615960;
        v61 = MEMORY[0x182084840](a1: v59, a2: v60, a3: v194, a4: v21 + 372615960, a5: v21 + 372615960);
        v64 = MEMORY[0x182084BC0](a1: v62, a2: v63, a3: v61, a4: v201, a5: *(_QWORD *)(v201 + 240));
        v189 = v21 + 372643920;
        v67 = MEMORY[0x182084840](a1: v65, a2: v66, a3: v64, a4: v21 + 372643920, a5: v21 + 372643920);
        v70 = MEMORY[0x182084BC0](a1: v68, a2: v69, a3: v67, a4: v201, a5: *(_QWORD *)(v201 + 232));
        MEMORY[0x182084840](a1: v72, a2: v73, a3: v70, a4: v71, a5: v192);
        v188 = v21 + 372642568;
        v77 = MEMORY[0x182084840](a1: v75, a2: v76, a3: v194, a4: v74, a5: v21 + 372642568);
        v80 = MEMORY[0x182084680](a1: v78, a2: v79, a3: v77, a4: v201, a5: *(_QWORD *)(v201 + 224));
        v84 = MEMORY[0x182084840](a1: v82, a2: v83, a3: v80, a4: v81, a5: v193);
        v87 = MEMORY[0x182084BC0](a1: v85, a2: v86, a3: v84, a4: v201, a5: *(_QWORD *)(v201 + 216));
        MEMORY[0x182084840](a1: v89, a2: v90, a3: v87, a4: v88, a5: v192);
        MEMORY[0x1820841E0](a1: v91, a2: v92, a3: v194);
        v96 = *(_QWORD *)(v201 + 256);
        for ( i = 1; ; i = v198 + 1 )
        {
          if ( v96 == 0 )
          {
            v200 = 0;
            v199 = i;
            goto LABEL_93;
          }
          v201 = v96;
          if ( i >= 100000 )
          {
            v198 = i;
            v182 = MEMORY[0x182084840](a1: v94, a2: v95, a3: v194, a4: v93, a5: v21 + 372583328);
            MEMORY[0x1820841E0](a1: v183, a2: v184, a3: v182);
            v207 = v20;
            v200 = v201;
            v199 = v198;
LABEL_93:
            JUMPOUT(0x18159BF35LL);
          }
          v198 = i;
          v98 = MEMORY[0x182084BC0](a1: v94, a2: v95, a3: v194, a4: v93, a5: v96);
          v102 = MEMORY[0x1820846E0](a1: v100, a2: v101, a3: v98, a4: v99, a5: 1);
          v106 = *(_DWORD *)(v201 + 20);
          if ( v106 >= 3 )
          {
            if ( v106 == 3 )
            {
              v107 = v21 + 367455056;
            }
            else
            {
              if ( v106 != 4 )
              {
LABEL_31:
                v107 = v21 + 367455224;
                goto LABEL_32;
              }
              v107 = v21 + 367454952;
            }
          }
          else if ( v106 >= 2 )
          {
            v107 = v21 + 367455000;
          }
          else if ( v106 != 0 )
          {
            if ( v106 != 1 )
              goto LABEL_31;
            v107 = v21 + 367455112;
          }
          else
          {
            v107 = v21 + 367455168;
          }
LABEL_32:
          MEMORY[0x182084840](a1: v104, a2: v105, a3: v102, a4: v103, a5: v107);
          v197 = *(_DWORD *)(v201 + 324);
          v110 = MEMORY[0x182084840](a1: v108, a2: v109, a3: v194, a4: v197, a5: v193);
          if ( v197 != 0 )
          {
            if ( v197 == 1 )
            {
              v113 = v21 + 367995344;
            }
            else if ( v197 == 2 )
            {
              v113 = v21 + 366873376;
            }
            else
            {
              v113 = v21 + 369809168;
            }
          }
          else
          {
            v113 = v21 + 372361016;
          }
          v114 = MEMORY[0x182084840](a1: v111, a2: v112, a3: v110, a4: v197, a5: v113);
          MEMORY[0x182084840](a1: v116, a2: v117, a3: v114, a4: v115, a5: v192);
          if ( v206 < 2 )
          {
            v191 = *(_DWORD *)(v201 + 72);
            v154 = v21 + 8LL * v191;
            v187 = v154;
            if ( v191 != 0 )
            {
              v186 = v21 + 372880464;
              v155 = MEMORY[0x182084840](a1: v119, a2: v120, a3: v194, a4: v154, a5: v21 + 373045416);
              v158 = MEMORY[0x182084840](
                       a1: v156,
                       a2: v157,
                       a3: v155,
                       a4: v191,
                       a5: v21 + 8LL * *(unsigned int *)(v21 + 8LL * v191 + 4));
              v162 = MEMORY[0x182084840](a1: v160, a2: v161, a3: v158, a4: v159, a5: v186);
              if ( v187 == v21 )
                JUMPOUT(0x302B27DF9LL);
              MEMORY[0x182084BC0](a1: v163, a2: v164, a3: v162, a4: v187, a5: v187);
              v165 = *(_DWORD *)(v21 + 8LL * v191) >> 3;
              if ( *(__int16 *)(v21 + 8 * v165 + 62) >= 3
                && *(_DWORD *)(v21 + 8LL * *(unsigned int *)(v21 + 8 * v165 + 16) + 20) == 70129 )
              {
                goto LABEL_45;
              }
              v166 = *(unsigned int *)(v21 + 8LL * v191 + 12);
              if ( (_DWORD)v166 == 0 )
                goto LABEL_90;
              if ( *(_BYTE *)(v21 + 8 * v166 + 32) != 0 )
LABEL_45:
                MEMORY[0x182084840](a1: v119, a2: v120, a3: v194, a4: v118, a5: v21 + 372635704);
            }
            else
            {
              MEMORY[0x182084840](a1: v119, a2: v120, a3: v194, a4: v154, a5: v21 + 372901808);
            }
          }
          v121 = MEMORY[0x182084840](a1: v119, a2: v120, a3: v194, a4: v118, a5: v190);
          v124 = MEMORY[0x182084BC0](a1: v122, a2: v123, a3: v121, a4: v201, a5: *(_QWORD *)(v201 + 240));
          v128 = MEMORY[0x182084840](a1: v126, a2: v127, a3: v124, a4: v125, a5: v189);
          v131 = MEMORY[0x182084BC0](a1: v129, a2: v130, a3: v128, a4: v201, a5: *(_QWORD *)(v201 + 232));
          MEMORY[0x182084840](a1: v133, a2: v134, a3: v131, a4: v132, a5: v192);
          v138 = MEMORY[0x182084840](a1: v136, a2: v137, a3: v194, a4: v135, a5: v188);
          v141 = MEMORY[0x182084680](a1: v139, a2: v140, a3: v138, a4: v201, a5: *(_QWORD *)(v201 + 224));
          v145 = MEMORY[0x182084840](a1: v143, a2: v144, a3: v141, a4: v142, a5: v193);
          v148 = MEMORY[0x182084BC0](a1: v146, a2: v147, a3: v145, a4: v201, a5: *(_QWORD *)(v201 + 216));
          MEMORY[0x182084840](a1: v150, a2: v151, a3: v148, a4: v149, a5: v192);
          MEMORY[0x1820841E0](a1: v152, a2: v153, a3: v194);
          v96 = *(_QWORD *)(v201 + 256);
        }
      }
      goto LABEL_89;
    }
    goto LABEL_86;
  }
  if ( v22 != *(_QWORD *)(v21 + 376351704) )
  {
LABEL_58:
    v205 = (int)v26 < 3;
    v204 = (int)v26 < 2;
    v203 = v25;
    v202 = v28;
    v196 = v27;
    v195 = v24;
    if ( *(int *)(v22 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v167 = *(unsigned int *)(v21 + 376351692);
  if ( (_DWORD)v167 == 0 )
  {
LABEL_87:
    v205 = v29;
    v204 = result;
    v203 = v25;
    v202 = v28;
    v196 = v27;
    v195 = v24;
    LODWORD(result) = MEMORY[0x18276EFE0]();
    goto LABEL_88;
  }
  v168 = *(unsigned int *)(v21 + 8 * v167 + 4);
  if ( (_DWORD)v168 != 0 )
  {
    if ( *(_DWORD *)(v21 + 8 * v168 + 8) == 47076659 )
      goto LABEL_7;
    goto LABEL_58;
  }
LABEL_88:
  v205 = v29;
  v204 = result;
  v203 = v25;
  v202 = v28;
  v196 = v27;
  v195 = v24;
  MEMORY[0x18276EFE0]();
LABEL_89:
  MEMORY[0x18276EFE0](a1: v59, a2: v60, a3: v181, a4: v198);
LABEL_90:
  MEMORY[0x18276EFE0](a1: v204, a2: (unsigned int)v206, a3: v201, a4: v187, a5: v203, a6: v202);
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
  return sub_18159C260();
}
