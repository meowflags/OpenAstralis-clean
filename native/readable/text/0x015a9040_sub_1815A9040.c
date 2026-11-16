// sub_15A9040
// rva 0x015a9040  size 824  section .text  group text
// window base 0x1815a9040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A9040(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // r12
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r9
  __int64 v35; // r11
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // r11
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rcx
  int v44; // ebx
  int v45; // ebp
  __int64 v46; // rsi
  int v47; // r8d
  __int64 v48; // rdi
  int v49; // r9d
  int v50; // r10d
  int v51; // r11d
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  unsigned int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  unsigned int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  unsigned int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  int v96; // eax
  __int64 v97; // rdi
  __int64 v98; // rbp
  __int64 v99; // rcx
  __int64 v100; // rsi
  __int64 v101; // rdx
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // r9
  __int64 v104; // rcx
  unsigned int v105; // eax
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 v108; // rcx
  unsigned int v109; // eax
  __int64 v110; // rcx
  unsigned int v111; // eax
  __int64 v112; // rcx
  unsigned int v113; // eax
  __int64 v114; // rcx
  unsigned int v115; // eax
  __int64 v116; // rcx
  unsigned int v117; // eax
  __int64 v118; // rcx
  unsigned int v119; // eax
  __int64 v120; // rcx
  unsigned int v121; // eax
  __int64 v122; // rcx
  unsigned int v123; // eax
  __int64 v124; // rcx
  unsigned int v125; // eax
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  unsigned __int64 v133; // rcx
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // [rsp-8h] [rbp-130h] BYREF
  __int64 v138; // [rsp+0h] [rbp-128h]
  unsigned int *v139; // [rsp+8h] [rbp-120h]
  __int64 v140; // [rsp+10h] [rbp-118h]
  __int64 v141; // [rsp+18h] [rbp-110h]
  __int64 v142; // [rsp+20h] [rbp-108h]
  __int64 v143; // [rsp+28h] [rbp-100h]
  __int64 v144; // [rsp+30h] [rbp-F8h]
  __int64 v145; // [rsp+38h] [rbp-F0h]
  __int64 v146; // [rsp+40h] [rbp-E8h]
  __int64 v147; // [rsp+48h] [rbp-E0h]
  __int64 v148; // [rsp+50h] [rbp-D8h]
  __int64 v149; // [rsp+58h] [rbp-D0h]
  __int64 v150; // [rsp+60h] [rbp-C8h]
  __int64 v151; // [rsp+68h] [rbp-C0h]
  __int64 v152; // [rsp+70h] [rbp-B8h]
  __int64 v153; // [rsp+78h] [rbp-B0h]
  __int64 v154; // [rsp+80h] [rbp-A8h]
  __int64 v155; // [rsp+88h] [rbp-A0h]
  __int64 v156; // [rsp+90h] [rbp-98h]
  __int64 v157; // [rsp+98h] [rbp-90h]
  __int64 v158; // [rsp+A0h] [rbp-88h]
  __int64 v159; // [rsp+A8h] [rbp-80h]
  __int64 v160; // [rsp+B0h] [rbp-78h]
  __int64 v161; // [rsp+B8h] [rbp-70h]
  __int64 v162; // [rsp+C0h] [rbp-68h]
  __int64 v163; // [rsp+C8h] [rbp-60h]
  int v164; // [rsp+D0h] [rbp-58h]
  unsigned int v165; // [rsp+D4h] [rbp-54h]
  int v166; // [rsp+D8h] [rbp-50h]
  unsigned int v167; // [rsp+DCh] [rbp-4Ch]
  __int64 v168; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v169; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int *v170; // [rsp+F0h] [rbp-38h]
  int v171; // [rsp+FCh] [rbp-2Ch]
  int v172; // [rsp+100h] [rbp-28h]
  int v173; // [rsp+104h] [rbp-24h]
  int v174; // [rsp+108h] [rbp-20h]
  int v175; // [rsp+10Ch] [rbp-1Ch]
  int v176; // [rsp+110h] [rbp-18h]
  int v177; // [rsp+114h] [rbp-14h]
  int v178; // [rsp+118h] [rbp-10h]
  int v179; // [rsp+11Ch] [rbp-Ch]
  int v180; // [rsp+120h] [rbp-8h]
  unsigned int v181; // [rsp+124h] [rbp-4h]

  if ( (unsigned __int64)&v168 > *(_QWORD *)(v5 + 8) )
  {
    v170 = a3;
    v6 = a3[1];
    if ( (_DWORD)v6 != 0 )
    {
      v169 = v4 + 8 * v6;
      v181 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v181 = 0;
    }
    v7 = a3[2];
    if ( (_DWORD)v7 != 0 )
    {
      v169 = v4 + 8 * v7;
      v180 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v180 = 0;
    }
    v8 = a3[3];
    if ( (_DWORD)v8 != 0 )
    {
      v169 = v4 + 8 * v8;
      v179 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v179 = 0;
    }
    v9 = a3[4];
    if ( (_DWORD)v9 != 0 )
    {
      v169 = v4 + 8 * v9;
      v178 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v178 = 0;
    }
    v10 = a3[5];
    if ( (_DWORD)v10 != 0 )
    {
      v169 = v4 + 8 * v10;
      v177 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v177 = 0;
    }
    v11 = a3[6];
    if ( (_DWORD)v11 != 0 )
    {
      v169 = v4 + 8 * v11;
      v176 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v176 = 0;
    }
    v12 = a3[7];
    if ( (_DWORD)v12 != 0 )
    {
      v169 = v4 + 8 * v12;
      v175 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v175 = 0;
    }
    v13 = a3[8];
    if ( (_DWORD)v13 != 0 )
    {
      v169 = v4 + 8 * v13;
      v174 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v174 = 0;
    }
    v14 = a3[9];
    if ( (_DWORD)v14 != 0 )
    {
      v169 = v4 + 8 * v14;
      v173 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v173 = 0;
    }
    v15 = a3[10];
    if ( (_DWORD)v15 != 0 )
    {
      v169 = v4 + 8 * v15;
      v172 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v172 = 0;
    }
    v16 = a3[11];
    if ( (_DWORD)v16 != 0 )
    {
      v169 = v4 + 8 * v16;
      v171 = sub_4FF37C0(a1, a2, a3: v169);
      a3 = v170;
    }
    else
    {
      v171 = 0;
    }
    v17 = a3[12];
    if ( (_DWORD)v17 != 0 )
    {
      v169 = v4 + 8 * v17;
      v18 = sub_4FF37C0(a1, a2, a3: v169);
    }
    else
    {
      v18 = 0;
      v169 = v4 + 8 * v17;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      v18 = sub_277F280(a1, a2, a3, a4: v181);
    else
      v19 = v181;
    return 31
         * (31
          * (31
           * (31 * (31 * (31 * (31 * (31 * (31 * (31 * (31 * v19 + v180) + v179) + v178) + v177) + v176) + v175) + v174)
            + v173)
           + v172)
          + v171)
         + v18;
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  if ( (unsigned __int64)&v137 <= *(_QWORD *)(v5 + 8) )
  {
    v139 = v21;
    sub_1EB84E0();
    goto LABEL_94;
  }
  v22 = v21[1];
  v163 = v4 + 8 * v22;
  if ( (_DWORD)v22 != 0 )
    v162 = v4 + 8 * v22;
  else
    v162 = v4 + 353301280;
  v23 = v21[2];
  v24 = v4 + 8 * v23;
  if ( (_DWORD)v23 != 0 )
    v161 = v4 + 8 * v23;
  else
    v161 = v4 + 353301280;
  v25 = v21[3];
  v26 = v4 + 8 * v25;
  if ( (_DWORD)v25 != 0 )
    v160 = v4 + 8 * v25;
  else
    v160 = v4 + 353301280;
  v27 = v21[4];
  v28 = v4 + 8 * v27;
  if ( (_DWORD)v27 != 0 )
    v159 = v4 + 8 * v27;
  else
    v159 = v4 + 353301280;
  v29 = v21[5];
  v30 = v4 + 8 * v29;
  if ( (_DWORD)v29 != 0 )
    v158 = v4 + 8 * v29;
  else
    v158 = v4 + 353301280;
  v31 = v21[6];
  v32 = v4 + 8 * v31;
  if ( (_DWORD)v31 != 0 )
    v157 = v4 + 8 * v31;
  else
    v157 = v4 + 353301280;
  v33 = v21[7];
  v34 = v4 + 8 * v33;
  if ( (_DWORD)v33 != 0 )
    v156 = v4 + 8 * v33;
  else
    v156 = v4 + 353301280;
  v35 = v21[8];
  v36 = v4 + 8 * v35;
  if ( (_DWORD)v35 != 0 )
    v155 = v4 + 8 * v35;
  else
    v155 = v4 + 353301280;
  v37 = v21[9];
  v38 = v4 + 8 * v37;
  if ( (_DWORD)v37 != 0 )
    v154 = v4 + 8 * v37;
  else
    v154 = v4 + 353301280;
  v39 = v21[10];
  v153 = v4 + 8 * v39;
  if ( (_DWORD)v39 != 0 )
    v152 = v4 + 8 * v39;
  else
    v152 = v4 + 353301280;
  v40 = v21[11];
  v151 = v4 + 8 * v40;
  if ( (_DWORD)v40 != 0 )
    v150 = v4 + 8 * v40;
  else
    v150 = v4 + 353301280;
  v41 = v21[12];
  if ( (_DWORD)v41 != 0 )
    v149 = v4 + 8 * v41;
  else
    v149 = v4 + 353301280;
  v148 = v4 + 8 * v41;
  v147 = v38;
  v146 = v36;
  v145 = v34;
  v144 = v32;
  v143 = v30;
  v142 = v28;
  v141 = v26;
  v140 = v24;
  v139 = v21;
  v42 = *(char *)(v152 + 12);
  v43 = (unsigned int)*(char *)(v154 + 12);
  v44 = *(char *)(v155 + 12);
  v45 = *(char *)(v156 + 12);
  v46 = (unsigned int)*(char *)(v157 + 12);
  v47 = *(char *)(v158 + 12);
  v48 = (unsigned int)*(char *)(v159 + 12);
  v49 = *(char *)(v160 + 12);
  v50 = *(char *)(v161 + 12);
  v51 = *(char *)(v162 + 12);
  v167 = *(char *)(v150 + 12);
  v167 |= *(char *)(v149 + 12) | v42 | v43 | v44 | v45 | v46 | v47 | v48 | v49 | v50 | v51;
  v52 = sub_50132E0(a1: v48, a2: v46, a3: 182, a4: v43, a5: v162);
  v56 = sub_50132E0(a1: v54, a2: v55, a3: v52, a4: v53, a5: v161);
  v60 = sub_50132E0(a1: v58, a2: v59, a3: v56, a4: v57, a5: v160);
  v64 = sub_50132E0(a1: v62, a2: v63, a3: v60, a4: v61, a5: v159);
  v68 = sub_50132E0(a1: v66, a2: v67, a3: v64, a4: v65, a5: v158);
  v72 = sub_50132E0(a1: v70, a2: v71, a3: v68, a4: v69, a5: v157);
  v76 = sub_50132E0(a1: v74, a2: v75, a3: v72, a4: v73, a5: v156);
  v80 = sub_50132E0(a1: v78, a2: v79, a3: v76, a4: v77, a5: v155);
  v84 = sub_50132E0(a1: v82, a2: v83, a3: v80, a4: v81, a5: v154);
  v88 = sub_50132E0(a1: v86, a2: v87, a3: v84, a4: v85, a5: v152);
  v92 = sub_50132E0(a1: v90, a2: v91, a3: v88, a4: v89, a5: v150);
  v96 = sub_50132E0(a1: v94, a2: v95, a3: v92, a4: v93, a5: v149);
  v166 = v96;
  v3 = v96 - 1;
  v98 = v4 + 57669672;
  v99 = v167;
  v100 = (unsigned int)(v96 << v167);
  if ( (int)v100 < 0 )
  {
LABEL_94:
    v165 = v3;
    v132 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v132 + 40) > *(_QWORD *)(v5 + 32) )
    {
      v164 = v100;
      v132 = sub_1EAA920(a1: v97, a2: v100, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v132 + 40;
      *(_DWORD *)v132 = 34082880;
      *(_DWORD *)(v132 + 4) = 0;
      *(_QWORD *)(v132 + 8) = 0;
      *(_QWORD *)(v132 + 16) = 0;
      *(_QWORD *)(v132 + 24) = 0;
      *(_QWORD *)(v132 + 32) = 0;
      v164 = v100;
    }
    *(_DWORD *)(v132 + 20) = 46923644;
    *(_DWORD *)(v132 + 16) = *(_DWORD *)(v4 + 374343896);
    *(_DWORD *)(v132 + 12) = (unsigned __int64)(v132 - v4) >> 3;
    v138 = v132;
    sub_503B9A0(a1: v97, a2: v100, a3: v132, a4: v99, a5: 0);
    v136 = v138;
    *(_DWORD *)(v138 + 8) = 46004603;
    if ( (*(_DWORD *)v136 & 2) != 0 )
      goto LABEL_98;
    while ( 1 )
    {
      v136 = sub_2769900(a1: v134, a2: v135, a3: v136, a4: v133, a5: &v169);
LABEL_98:
      v133 = (v136 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v136 & 0xFFFFFFFFFFF80000LL) + ((v136 - v133) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v136 & 0xFFFFFFFFFFF80000LL) + ((v136 - v133) >> 9) + 0x38) = 0;
    }
  }
  v101 = *(_QWORD *)(v5 + 40);
  v102 = ((unsigned int)v100 + 19LL) & 0x1FFFFFFF8LL;
  if ( v102 >= 0x20000 || (v103 = v101 + v102) > *(_QWORD *)(v5 + 32) )
  {
    v138 = v4 + 57669672;
    v165 = v96 - 1;
    v101 = sub_1EAA840(a1: 34082368, a2: v100, a3: 34082368, a4: v167, a5: (unsigned int)v100);
    v98 = v138;
    v3 = v165;
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v103;
    *(_QWORD *)v101 = 34082368;
    *(_DWORD *)(v101 + 8) = v100;
  }
  v138 = v101;
  v165 = v3;
  if ( v167 != 0 )
    sub_4FF2C40(a1: 1, a2: v100, a3: v98, a4: v99, a5: v101, a6: v3);
  else
    sub_1EB4960(a1: v3, a2: 1, a3: v4 + 376614336, a4: v99, a5: 0, a6: v138);
  v105 = sub_5011A80(a1: v149, a2: v4 + 57669696, a3: v165, a4: v104, a5: v167, a6: v138);
  v107 = sub_5011A80(a1: v150, a2: v4 + 57669720, a3: v105, a4: v106, a5: v167, a6: v138);
  v109 = sub_5011A80(a1: v152, a2: v4 + 57669744, a3: v107, a4: v108, a5: v167, a6: v138);
  v111 = sub_5011A80(a1: v154, a2: v4 + 57669768, a3: v109, a4: v110, a5: v167, a6: v138);
  v113 = sub_5011A80(a1: v155, a2: v4 + 57669792, a3: v111, a4: v112, a5: v167, a6: v138);
  v115 = sub_5011A80(a1: v156, a2: v4 + 57669816, a3: v113, a4: v114, a5: v167, a6: v138);
  v117 = sub_5011A80(a1: v157, a2: v4 + 57669840, a3: v115, a4: v116, a5: v167, a6: v138);
  v119 = sub_5011A80(a1: v158, a2: v4 + 57669864, a3: v117, a4: v118, a5: v167, a6: v138);
  v121 = sub_5011A80(a1: v159, a2: v4 + 57669888, a3: v119, a4: v120, a5: v167, a6: v138);
  v123 = sub_5011A80(a1: v160, a2: v4 + 57669912, a3: v121, a4: v122, a5: v167, a6: v138);
  v125 = sub_5011A80(a1: v161, a2: v4 + 57669936, a3: v123, a4: v124, a5: v167, a6: v138);
  v127 = sub_5011A80(a1: v162, a2: v4 + 57669960, a3: v125, a4: v126, a5: v167, a6: v138);
  v130 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v130 + 24) > *(_QWORD *)(v5 + 32) )
  {
    v166 = v127;
    v130 = sub_1EAA920(a1: v128, a2: v129, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v130 + 24;
    *(_DWORD *)v130 = 34082680;
    *(_DWORD *)(v130 + 4) = 0;
    *(_QWORD *)(v130 + 8) = 0;
    *(_QWORD *)(v130 + 16) = 0;
  }
  v131 = v138;
  *(_BYTE *)(v130 + 12) = v167;
  *(_DWORD *)(v130 + 4) = (unsigned __int64)(v131 - v4) >> 3;
  if ( *(int *)(v5 + 16) <= 0 )
    sub_277F280(a1: v128, a2: v129, a3: v130, a4: v131, a5: v131);
  return v130;
}
