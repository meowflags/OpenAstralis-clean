// sub_181E8D740
// rva 0x01e8d740  size 1545  section .text  group text
// window base 0x181e8d740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E8D740(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rsi
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdi
  __int64 v150; // rsi
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // rdi
  __int64 v155; // rsi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdi
  __int64 v159; // rsi
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rdi
  __int64 v163; // rsi
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rsi
  __int64 v167; // rax
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rdi
  __int64 v172; // rsi
  __int64 v173; // rdi
  __int64 v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rdi
  __int64 v178; // rsi
  __int64 v179; // rax
  __int64 v180; // rcx
  __int64 v181; // rdi
  __int64 v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rdi
  __int64 v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rdi
  __int64 v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rdi
  __int64 v195; // rsi
  char v196; // [rsp+0h] [rbp-38h] BYREF
  __int64 v197; // [rsp+8h] [rbp-30h]
  __int64 v198; // [rsp+10h] [rbp-28h]
  __int64 v199; // [rsp+18h] [rbp-20h]
  __int64 v200; // [rsp+20h] [rbp-18h]
  __int64 v201; // [rsp+28h] [rbp-10h]
  __int64 v202; // [rsp+30h] [rbp-8h]

  v202 = a5;
  if ( (unsigned __int64)&v196 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v196);
    goto LABEL_31;
  }
  v9 = *(unsigned int *)(v7 + 376656064);
  if ( (_DWORD)v9 == 47076562 )
    v10 = v7 + 35127280;
  else
    v10 = v7 + 8 * v9;
  if ( v10 != v7 && *(_DWORD *)v10 >> 3 != 4261917 )
    goto LABEL_32;
  if ( v10 == v7 )
  {
LABEL_31:
    MEMORY[0x18276EFE0]();
LABEL_32:
    MEMORY[0x18276EAE0]();
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v10 + 4) != 0 )
  {
    v11 = v7 + 376654936;
    if ( *(_QWORD *)(v7 + 376654976) == 0 )
    {
      v201 = v7 + 376654936;
      v18 = sub_181E8DD60(a1, a2, a3: v7 + 376654936);
      v22 = MEMORY[0x182084840](a1: v20, a2: v21, a3: v18, a4: v19, a5: v7 + 366301000);
      v26 = MEMORY[0x182084840](a1: v24, a2: v25, a3: v22, a4: v23, a5: v7 + 367222032);
      MEMORY[0x1820841E0](a1: v27, a2: v28, a3: v26);
      v31 = sub_181E8DD60(a1: v29, a2: v30, a3: v201);
      v35 = MEMORY[0x1820846E0](a1: v33, a2: v34, a3: v31, a4: v32, a5: 2);
      v39 = MEMORY[0x182084840](a1: v37, a2: v38, a3: v35, a4: v36, a5: v7 + 368748224);
      v43 = *(_QWORD *)(v7 + 376178856);
      if ( v43 == -1 )
      {
LABEL_34:
        v200 = v39;
        MEMORY[0x1828C1C40](a1: v41, a2: v42, a3: v7 + 371563112);
        goto LABEL_35;
      }
      v200 = v39;
      v44 = MEMORY[0x182084440](a1: 0, a2: v42, a3: v39, a4: v40, a5: v43, a6: 0x100000);
      v199 = v7 + 368955456;
      v47 = MEMORY[0x182084840](a1: v45, a2: v46, a3: v44, a4: v7 + 368955456, a5: v7 + 368955456);
      MEMORY[0x1820841E0](a1: v48, a2: v49, a3: v47);
      v52 = sub_181E8DD60(a1: v50, a2: v51, a3: v201);
      v56 = MEMORY[0x1820846E0](a1: v54, a2: v55, a3: v52, a4: v53, a5: 2);
      v60 = MEMORY[0x182084840](a1: v58, a2: v59, a3: v56, a4: v57, a5: v7 + 370500272);
      v61 = *(unsigned int *)(v7 + 376654972);
      if ( (_DWORD)v61 == 0 )
      {
LABEL_35:
        MEMORY[0x18276EFE0]();
        goto LABEL_36;
      }
      v62 = *(_DWORD *)(v7 + 8 * v61) >> 3;
      if ( (unsigned __int16)*(_DWORD *)(v7
                                       + 8LL * *(unsigned int *)(v7 + 8 * v62 + 20)
                                       + 4LL
                                       * (*(_DWORD *)(v7 + 8 * v62 + 44)
                                        & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v62 + 44))))
                                       + 12) != 519 )
      {
LABEL_36:
        MEMORY[0x18276EDE0]();
        goto LABEL_37;
      }
      v198 = v60;
      v63 = *(_DWORD *)(v7 + 8 * v61) >> 3;
      v64 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v63 + 20);
      v65 = *(_DWORD *)(v7 + 8 * v63 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v63 + 44)));
      v66 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                               + *(_QWORD *)(v7
                                                                           + 8 * v63
                                                                           + HIWORD(*(_DWORD *)(v64 + 4 * v65 + 12))
                                                                           + 96)))(
              a1: v65,
              a2: v64,
              a3: v7 + 8 * v61);
      v70 = MEMORY[0x182084840](a1: v68, a2: v69, a3: v198, a4: v67, a5: v66);
      MEMORY[0x1820841E0](a1: v71, a2: v72, a3: v70);
      v75 = sub_181E8DD60(a1: v73, a2: v74, a3: v201);
      v79 = MEMORY[0x1820846E0](a1: v77, a2: v78, a3: v75, a4: v76, a5: 2);
      v83 = MEMORY[0x182084840](a1: v81, a2: v82, a3: v79, a4: v80, a5: v7 + 368774000);
      v85 = *(unsigned int *)(v7 + 376654972);
      if ( (_DWORD)v85 == 0 )
      {
LABEL_37:
        MEMORY[0x18276EFE0]();
        goto LABEL_38;
      }
      v86 = *(_DWORD *)(v7 + 8 * v85) >> 3;
      v87 = *(_DWORD *)(v7 + 8 * v86 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v86 + 44)));
      if ( (unsigned __int16)*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v86 + 20) + 4 * v87 + 12) != 519 )
      {
LABEL_38:
        MEMORY[0x18276EDE0]();
        goto LABEL_39;
      }
      v88 = *(unsigned int *)(v7 + 8 * v85 + 8);
      v89 = v7 + 8 * v85;
      if ( (_DWORD)v88 == 0 )
      {
LABEL_39:
        MEMORY[0x18276EFE0](a1: v84, a2: v87, a3: v89);
        goto LABEL_40;
      }
      v198 = v89;
      v197 = v83;
      v90 = sub_181E9F5C0(a1: v84, a2: v87, a3: v7 + 8 * v88);
      v93 = MEMORY[0x182084440](a1: 0, a2: v92, a3: v197, a4: v91, a5: v90, a6: 0x100000);
      v97 = MEMORY[0x182084840](a1: v95, a2: v96, a3: v93, a4: v94, a5: v199);
      MEMORY[0x1820841E0](a1: v98, a2: v99, a3: v97);
      v102 = sub_181E8DD60(a1: v100, a2: v101, a3: v201);
      v106 = MEMORY[0x1820846E0](a1: v104, a2: v105, a3: v102, a4: v103, a5: 2);
      v110 = MEMORY[0x182084840](a1: v108, a2: v109, a3: v106, a4: v107, a5: v7 + 368774968);
      v112 = *(unsigned int *)(v7 + 376654972);
      if ( (_DWORD)v112 == 0 )
      {
LABEL_40:
        MEMORY[0x18276EFE0]();
        goto LABEL_41;
      }
      v113 = *(_DWORD *)(v7 + 8 * v112) >> 3;
      v114 = *(_DWORD *)(v7 + 8 * v113 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v113 + 44)));
      if ( (unsigned __int16)*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v113 + 20) + 4 * v114 + 12) != 519 )
      {
LABEL_41:
        MEMORY[0x18276EDE0]();
        goto LABEL_42;
      }
      v115 = *(unsigned int *)(v7 + 8 * v112 + 8);
      v116 = v7 + 8 * v112;
      if ( (_DWORD)v115 == 0 )
      {
LABEL_42:
        MEMORY[0x18276EFE0](a1: v111, a2: v114, a3: v116);
        goto LABEL_43;
      }
      v197 = v116;
      v198 = v110;
      v117 = sub_181E9F560(a1: v111, a2: v114, a3: v7 + 8 * v115);
      v120 = MEMORY[0x182084440](a1: 0, a2: v119, a3: v198, a4: v118, a5: v117, a6: 0x100000);
      v124 = MEMORY[0x182084840](a1: v122, a2: v123, a3: v120, a4: v121, a5: v199);
      MEMORY[0x1820841E0](a1: v125, a2: v126, a3: v124);
      v129 = sub_181E8DD60(a1: v127, a2: v128, a3: v201);
      v133 = MEMORY[0x1820846E0](a1: v131, a2: v132, a3: v129, a4: v130, a5: 2);
      v137 = MEMORY[0x182084840](a1: v135, a2: v136, a3: v133, a4: v134, a5: v7 + 368702656);
      v139 = *(unsigned int *)(v7 + 376654972);
      if ( (_DWORD)v139 == 0 )
      {
LABEL_43:
        MEMORY[0x18276EFE0]();
        goto LABEL_44;
      }
      v140 = *(_DWORD *)(v7 + 8 * v139) >> 3;
      v141 = *(_DWORD *)(v7 + 8 * v140 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v140 + 44)));
      if ( (unsigned __int16)*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v140 + 20) + 4 * v141 + 12) != 519 )
      {
LABEL_44:
        MEMORY[0x18276EDE0]();
        goto LABEL_45;
      }
      v142 = *(unsigned int *)(v7 + 8 * v139 + 8);
      v143 = v7 + 8 * v139;
      if ( (_DWORD)v142 == 0 )
      {
LABEL_45:
        MEMORY[0x18276EFE0](a1: v138, a2: v141, a3: v143, a4: v200, a5: v202);
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
        sub_181E8DD60(a1: v194, a2: v195, a3: v193);
        return;
      }
      v198 = v143;
      v197 = v137;
      v144 = sub_181E9F5E0(a1: v138, a2: v141, a3: v7 + 8 * v142);
      v147 = MEMORY[0x182084440](a1: 0, a2: v146, a3: v197, a4: v145, a5: v144, a6: 0x100000);
      v151 = MEMORY[0x182084840](a1: v149, a2: v150, a3: v147, a4: v148, a5: v199);
      MEMORY[0x1820841E0](a1: v152, a2: v153, a3: v151);
      v156 = sub_181E8DD60(a1: v154, a2: v155, a3: v201);
      v160 = MEMORY[0x1820846E0](a1: v158, a2: v159, a3: v156, a4: v157, a5: 2);
      v164 = MEMORY[0x182084840](a1: v162, a2: v163, a3: v160, a4: v161, a5: v7 + 372227408);
      v167 = MEMORY[0x182084440](a1: 0, a2: v166, a3: v164, a4: v165, a5: 0x80000, a6: 1024);
      v199 = v7 + 369589416;
      v170 = MEMORY[0x182084840](a1: v168, a2: v169, a3: v167, a4: v7 + 369589416, a5: v7 + 369589416);
      MEMORY[0x1820841E0](a1: v171, a2: v172, a3: v170);
      v175 = sub_181E8DD60(a1: v173, a2: v174, a3: v201);
      v179 = MEMORY[0x1820846E0](a1: v177, a2: v178, a3: v175, a4: v176, a5: 2);
      v183 = MEMORY[0x182084840](a1: v181, a2: v182, a3: v179, a4: v180, a5: v7 + 369205504);
      v186 = MEMORY[0x182084440](a1: 0, a2: v185, a3: v183, a4: v184, a5: 0x20000, a6: 1024);
      v190 = MEMORY[0x182084840](a1: v188, a2: v189, a3: v186, a4: v187, a5: v199);
      MEMORY[0x1820841E0](a1: v191, a2: v192, a3: v190);
      v11 = v201;
    }
    v12 = sub_181E8DD60(a1, a2, a3: v11);
    if ( v202 != v7 )
    {
      v15 = MEMORY[0x182084840](
              a1: v13,
              a2: v14,
              a3: v12,
              a4: v7 + 8LL * *(unsigned int *)(v202 + 4),
              a5: v7 + 8LL * *(unsigned int *)(v202 + 4));
      MEMORY[0x1820841E0](a1: v16, a2: v17, a3: v15);
      if ( *(int *)(v8 + 16) > 0 )
        return;
LABEL_28:
      MEMORY[0x18277F280]();
      return;
    }
LABEL_33:
    v39 = MEMORY[0x18276EFE0]();
    goto LABEL_34;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    goto LABEL_28;
}
