// sub_181E9C060
// rva 0x01e9c060  size 1291  section .text  group text
// window base 0x181e9c060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9C060(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r8
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // r8
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // r8
  unsigned __int64 v93; // rcx
  __int64 v94; // r8
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // r8
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // rdi
  __int64 v143; // rsi
  __int64 v144; // r8
  unsigned __int64 v145; // rcx
  __int64 v146; // r8
  unsigned __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdi
  __int64 v151; // rsi
  __int64 result; // rax
  double v153; // xmm0_8
  char v154; // [rsp+0h] [rbp-38h] BYREF
  __int64 v155; // [rsp+10h] [rbp-28h]
  __int64 v156; // [rsp+18h] [rbp-20h]
  __int64 v157; // [rsp+20h] [rbp-18h]
  __int64 v158; // [rsp+28h] [rbp-10h]
  unsigned int *v159; // [rsp+30h] [rbp-8h]

  v159 = a3;
  if ( (unsigned __int64)&v154 <= *(_QWORD *)(v7 + 8) )
  {
    v153 = sub_181EB83C0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v154);
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
    return sub_181E9C580(a1: v153);
  }
  else
  {
    v158 = v6 + 376612120;
    v8 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4, a5: v6 + 368270504);
    MEMORY[0x182084180](a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    v157 = v6 + 352289560;
    v15 = MEMORY[0x182084840](a1: v13, a2: v14, a3: v158, a4: v12, a5: v6 + 352289560);
    v19 = 8LL * v159[1];
    if ( v19 != 0 )
      v19 += v6;
    v20 = MEMORY[0x182084BC0](a1: v17, a2: v18, a3: v15, a4: v16, a5: v19);
    v156 = v6 + 372985272;
    v23 = MEMORY[0x182084840](a1: v21, a2: v22, a3: v20, a4: v6 + 372985272, a5: v6 + 372985272);
    v26 = v159[2];
    if ( (_DWORD)v26 != 0 )
    {
      v27 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v26) >> 3) + 32);
      if ( (v27 & 0x80000000) != 0LL )
        v27 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v26 + 8) << v27) + (((int)v27 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      v28 = 8 * v26;
      if ( v28 != 0 )
        v28 += v6;
      v29 = v28 + v27;
    }
    else
    {
      v29 = 0;
    }
    v30 = MEMORY[0x182084BC0](a1: v24, a2: v25, a3: v23, a4: v29, a5: v29);
    MEMORY[0x1820841E0](a1: v31, a2: v32, a3: v30);
    v36 = MEMORY[0x182084840](a1: v34, a2: v35, a3: v158, a4: v33, a5: v6 + 352289608);
    v40 = 8LL * v159[3];
    if ( v40 != 0 )
      v40 += v6;
    v41 = MEMORY[0x182084BC0](a1: v38, a2: v39, a3: v36, a4: v37, a5: v40);
    v45 = MEMORY[0x182084840](a1: v43, a2: v44, a3: v41, a4: v42, a5: v156);
    v48 = v159[4];
    if ( (_DWORD)v48 != 0 )
    {
      v49 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v48) >> 3) + 32);
      if ( (v49 & 0x80000000) != 0LL )
        v49 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v48 + 8) << v49) + (((int)v49 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      v50 = 8 * v48;
      if ( v50 != 0 )
        v50 += v6;
      v51 = v50 + v49;
    }
    else
    {
      v51 = 0;
    }
    v52 = MEMORY[0x182084BC0](a1: v46, a2: v47, a3: v45, a4: v51, a5: v51);
    MEMORY[0x1820841E0](a1: v53, a2: v54, a3: v52);
    v155 = v6 + 350569856;
    v58 = MEMORY[0x182084840](a1: v56, a2: v57, a3: v158, a4: v55, a5: v6 + 350569856);
    v62 = 8LL * v159[5];
    if ( v62 != 0 )
      v62 += v6;
    v63 = MEMORY[0x182084BC0](a1: v60, a2: v61, a3: v58, a4: v59, a5: v62);
    v67 = MEMORY[0x182084840](a1: v65, a2: v66, a3: v63, a4: v64, a5: v156);
    v70 = v159[6];
    if ( (_DWORD)v70 != 0 )
    {
      v71 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v70) >> 3) + 32);
      if ( (v71 & 0x80000000) != 0LL )
        v71 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v70 + 8) << v71) + (((int)v71 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      v72 = 8 * v70;
      if ( v72 != 0 )
        v72 += v6;
      v73 = v72 + v71;
    }
    else
    {
      v73 = 0;
    }
    v74 = MEMORY[0x182084BC0](a1: v68, a2: v69, a3: v67, a4: v73, a5: v73);
    MEMORY[0x1820841E0](a1: v75, a2: v76, a3: v74);
    v80 = MEMORY[0x182084840](a1: v78, a2: v79, a3: v158, a4: v77, a5: v6 + 350566848);
    v84 = 8LL * v159[7];
    if ( v84 != 0 )
      v84 += v6;
    v85 = MEMORY[0x182084BC0](a1: v82, a2: v83, a3: v80, a4: v81, a5: v84);
    v89 = MEMORY[0x182084840](a1: v87, a2: v88, a3: v85, a4: v86, a5: v156);
    v92 = v159[8];
    if ( (_DWORD)v92 != 0 )
    {
      v93 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v92) >> 3) + 32);
      if ( (v93 & 0x80000000) != 0LL )
        v93 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v92 + 8) << v93) + (((int)v93 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      v94 = 8 * v92;
      if ( v94 != 0 )
        v94 += v6;
      v95 = v94 + v93;
    }
    else
    {
      v95 = 0;
    }
    v96 = MEMORY[0x182084BC0](a1: v90, a2: v91, a3: v89, a4: v95, a5: v95);
    MEMORY[0x182084180](a1: v98, a2: v99, a3: v96, a4: v97, a5: 0);
    v103 = MEMORY[0x182084840](a1: v101, a2: v102, a3: v158, a4: v100, a5: v6 + 368270440);
    MEMORY[0x182084180](a1: v105, a2: v106, a3: v103, a4: v104, a5: 1);
    v110 = MEMORY[0x182084840](a1: v108, a2: v109, a3: v158, a4: v107, a5: v155);
    v114 = 8LL * v159[9];
    if ( v114 != 0 )
      v114 += v6;
    v115 = MEMORY[0x182084BC0](a1: v112, a2: v113, a3: v110, a4: v111, a5: v114);
    v119 = MEMORY[0x182084840](a1: v117, a2: v118, a3: v115, a4: v116, a5: v156);
    v122 = v159[10];
    if ( (_DWORD)v122 != 0 )
    {
      v123 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v122) >> 3) + 32);
      if ( (v123 & 0x80000000) != 0LL )
        v123 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v122 + 8) << v123) + (((int)v123 >> 8) & 0xFFF) + 7)
             & 0xFFFFFFFFFFFFFFF8LL;
      v124 = 8 * v122;
      if ( v124 != 0 )
        v124 += v6;
      v125 = v124 + v123;
    }
    else
    {
      v125 = 0;
    }
    v126 = MEMORY[0x182084BC0](a1: v120, a2: v121, a3: v119, a4: v125, a5: v125);
    MEMORY[0x1820841E0](a1: v127, a2: v128, a3: v126);
    v132 = MEMORY[0x182084840](a1: v130, a2: v131, a3: v158, a4: v129, a5: v157);
    v136 = 8LL * v159[11];
    if ( v136 != 0 )
      v136 += v6;
    v137 = MEMORY[0x182084BC0](a1: v134, a2: v135, a3: v132, a4: v133, a5: v136);
    v141 = MEMORY[0x182084840](a1: v139, a2: v140, a3: v137, a4: v138, a5: v156);
    v144 = v159[12];
    if ( (_DWORD)v144 != 0 )
    {
      v145 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v144) >> 3) + 32);
      if ( (v145 & 0x80000000) != 0LL )
        v145 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v144 + 8) << v145) + (((int)v145 >> 8) & 0xFFF) + 7)
             & 0xFFFFFFFFFFFFFFF8LL;
      v146 = 8 * v144;
      if ( v146 != 0 )
        v146 += v6;
      v147 = v146 + v145;
    }
    else
    {
      v147 = 0;
    }
    v148 = MEMORY[0x182084BC0](a1: v142, a2: v143, a3: v141, a4: v147, a5: v147);
    result = MEMORY[0x182084180](a1: v150, a2: v151, a3: v148, a4: v149, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
