// sub_159B220
// rva 0x0159b220  size 45  section .text  group text
// window base 0x18159b220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159B220()
{
  __int64 v0; // r13
  _QWORD *v1; // r14
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  int v65; // eax
  __int64 v66; // rdi
  __int64 v67; // rsi
  _QWORD *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdi
  __int64 v110; // rsi
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // rsi
  unsigned int *v127; // rax
  unsigned int *v128; // rcx
  unsigned int *v129; // rbx
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rcx
  __int64 v133; // rdi
  __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // rdi
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdi
  __int64 v145; // rsi
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rsi
  __int64 v149; // rcx
  __int64 v150; // rdi
  __int64 v151; // rsi
  __int64 v152; // rdx
  unsigned int *v153; // rdi
  unsigned int *v154; // r9
  __int64 v155; // rcx
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rdi
  __int64 v172; // rsi
  __int64 v173; // r8
  unsigned int *v174; // rbx
  __int64 *v175; // r8
  __int64 v176; // [rsp-20h] [rbp-130h] BYREF
  _QWORD *v177; // [rsp+0h] [rbp-110h]
  _QWORD *v178; // [rsp+8h] [rbp-108h]
  __int64 v179; // [rsp+10h] [rbp-100h]
  _QWORD *v180; // [rsp+18h] [rbp-F8h]
  __int64 v181; // [rsp+20h] [rbp-F0h]
  _QWORD *v182; // [rsp+28h] [rbp-E8h]
  _BYTE v183[48]; // [rsp+30h] [rbp-E0h] BYREF
  _DWORD v184[16]; // [rsp+60h] [rbp-B0h] BYREF
  unsigned int *v185; // [rsp+A0h] [rbp-70h]
  unsigned int *v186; // [rsp+A8h] [rbp-68h]
  __int64 v187; // [rsp+B0h] [rbp-60h]
  int i; // [rsp+B8h] [rbp-58h]
  unsigned int v189; // [rsp+BCh] [rbp-54h]
  unsigned int *v190; // [rsp+C0h] [rbp-50h]
  unsigned int *v191; // [rsp+C8h] [rbp-48h]
  unsigned int *v192; // [rsp+D0h] [rbp-40h]
  __int64 v193; // [rsp+D8h] [rbp-38h]
  _QWORD *v194; // [rsp+E0h] [rbp-30h]
  unsigned int v195; // [rsp+ECh] [rbp-24h]
  __int64 v196; // [rsp+F0h] [rbp-20h]
  int v197; // [rsp+F8h] [rbp-18h]
  int v198; // [rsp+FCh] [rbp-14h]
  __int64 v199; // [rsp+100h] [rbp-10h]
  __int64 v200; // [rsp+108h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v200 > *(_QWORD *)(v2 + 8) )
  {
    if ( *(int *)(v2 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  sub_1EB83C0();
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
  if ( (unsigned __int64)&v176 <= *(_QWORD *)(v2 + 8) )
  {
    v198 = v6;
    v197 = v5;
    v196 = v8;
    v181 = v4;
    sub_1EB83C0();
  }
  else if ( v7 != v1 )
  {
    v198 = v6;
    v197 = v5;
    v196 = v8;
    v182 = v7;
    v181 = v4;
    v180 = v1 + 47076515;
    v9 = sub_2084840(a1: v5, a2: v6, a3: v1 + 47076515, a4: v1 + 45944498, a5: v1 + 45944498);
    sub_2084180(a1: v11, a2: v12, a3: v9, a4: v10, a5: 1);
    v16 = sub_2084840(a1: v14, a2: v15, a3: v180, a4: v13, a5: v1 + 46215889);
    sub_20845C0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v1[47022662]);
    sub_20841E0(a1: v20, a2: v21, a3: v180);
    v25 = sub_2084840(a1: v23, a2: v24, a3: v180, a4: v22, a5: v1 + 46277103);
    v29 = sub_2084BC0(a1: v27, a2: v28, a3: v25, a4: v26, a5: v1);
    sub_20841E0(a1: v30, a2: v31, a3: v29);
    v35 = sub_2084840(a1: v33, a2: v34, a3: v180, a4: v32, a5: v1 + 46424387);
    v39 = sub_2084BC0(a1: v37, a2: v38, a3: v35, a4: v36, a5: v0);
    sub_20841E0(a1: v40, a2: v41, a3: v39);
    v45 = sub_2084840(a1: v43, a2: v44, a3: v180, a4: v42, a5: v1 + 46453089);
    v49 = sub_2084BC0(a1: v47, a2: v48, a3: v45, a4: v46, a5: v1[46673795]);
    sub_20841E0(a1: v50, a2: v51, a3: v49);
    v55 = sub_2084840(a1: v53, a2: v54, a3: v180, a4: v52, a5: v1 + 46420867);
    v59 = sub_2083E40(a1: v57, a2: v58, a3: v55, a4: v56, a5: 0);
    sub_20841E0(a1: v60, a2: v61, a3: v59);
    sub_2084840(a1: v63, a2: v64, a3: v180, a4: v62, a5: v1 + 46448817);
    v65 = sub_1EDF6E0();
    v68 = v1 + 43858412;
    v179 = (__int64)(v1 + 43858412);
    v195 = v65;
    if ( v65 < 1 )
      v69 = sub_2084840(a1: v66, a2: v67, a3: v180, a4: v68, a5: v1 + 43858412);
    else
      v69 = sub_2084560(a1: v66, a2: v67, a3: v180, a4: v68, a5: (unsigned int)v65);
    sub_20841E0(a1: v70, a2: v71, a3: v69);
    sub_2084840(a1: v73, a2: v74, a3: v180, a4: v72, a5: v1 + 46093605);
    v184[0] = 64;
    v194 = v184;
    MEMORY[0x12001ad8]/* 0x12001ad8 */(a1: v75, a2: v76, a3: v184, a4: v184);
    if ( v194[1] != 0 )
    {
      v194 = (_QWORD *)v194[1];
      v80 = sub_2084440(a1: 0, a2: v79, a3: v180, a4: v77, a5: v194, a6: 0x100000);
      v84 = sub_2084840(a1: v82, a2: v83, a3: v80, a4: v81, a5: v1 + 46119432);
    }
    else
    {
      v194 = nullptr;
      v84 = sub_2084840(a1: v78, a2: v79, a3: v180, a4: v179, a5: v179);
    }
    sub_20841E0(a1: v85, a2: v86, a3: v84);
    v90 = sub_2084840(a1: v88, a2: v89, a3: v180, a4: v87, a5: v1 + 45997521);
    v93 = MEMORY[0x12001b68]/* 0x12001b68 */;
    if ( MEMORY[0x12001b68]/* 0x12001b68 */ == 0 )
    {
      v193 = 301996904;
      v179 = v90;
      v192 = (unsigned int *)v183;
      MEMORY[0x12001a50]/* 0x12001a50 */(a1: v91, a2: v92, a3: 301996904, a4: v183);
      v174 = v192;
      v175 = (__int64 *)v193;
      *(_QWORD *)v193 = v192[1];
      MEMORY[0x120013d0]/* 0x120013d0 */ = v174[10];
      v93 = *v175;
      v90 = v179;
    }
    v94 = sub_2084A00(a1: v91, a2: v92, a3: v90, a4: v93, a5: v93);
    sub_20841E0(a1: v95, a2: v96, a3: v94);
    v100 = sub_2084840(a1: v98, a2: v99, a3: v180, a4: v97, a5: v1 + 45778578);
    v101 = v1[47022665];
    v179 = v100;
    v104 = sub_28C0020(a1: v102, a2: v103, a3: v101);
    v107 = sub_20843E0(a1: 3, a2: v106, a3: v179, a4: v105, a5: v104, a6: 1000);
    v111 = sub_2084840(a1: v109, a2: v110, a3: v107, a4: v108, a5: v1 + 44019260);
    sub_20841E0(a1: v112, a2: v113, a3: v111);
    v179 = sub_2084840(a1: v115, a2: v116, a3: v180, a4: v114, a5: v1 + 46412025);
    v120 = sub_1EDF700(a1: v118, a2: v119, a3: 0, a4: v117, a5: 0);
    v124 = sub_20849A0(a1: v122, a2: v123, a3: v179, a4: v121, a5: v120);
    sub_20841E0(a1: v125, a2: v126, a3: v124);
    v127 = (unsigned int *)v1[47022355];
    v128 = *((unsigned int **)v127 + 10);
    v129 = *((unsigned int **)v127 + 9);
    v179 = (__int64)(v1 + 46544047);
    v193 = (__int64)v128 + (_QWORD)v129 - 1;
    v192 = v129;
    v191 = v127;
    v190 = v128;
    sub_2084840(a1: v130, a2: v131, a3: v180, a4: v128, a5: v1 + 46544047);
    v178 = v1 + 46554619;
    v135 = sub_2084840(a1: v133, a2: v134, a3: v180, a4: v132, a5: v1 + 46554619);
    v139 = sub_2084BC0(a1: v137, a2: v138, a3: v135, a4: v136, a5: v190);
    v177 = v1 + 46623159;
    v142 = sub_2084840(a1: v140, a2: v141, a3: v139, a4: v1 + 46623159, a5: v1 + 46623159);
    v146 = sub_2084BC0(a1: v144, a2: v145, a3: v142, a4: v143, a5: v193);
    sub_20841E0(a1: v147, a2: v148, a3: v146);
    v152 = *((_QWORD *)v191 + 20);
    if ( v152 != 0 )
    {
      for ( i = 1; ; i = v149 )
      {
        v153 = *(unsigned int **)(v152 + 80);
        v154 = *(unsigned int **)(v152 + 72);
        v193 = v152;
        v187 = (__int64)v153 + (_QWORD)v154 - 1;
        v186 = v154;
        v185 = v153;
        sub_2084840(a1: v153, a2: v151, a3: v180, a4: v149, a5: v179);
        v158 = sub_2084840(a1: v156, a2: v157, a3: v180, a4: v155, a5: v178);
        v162 = sub_2084BC0(a1: v160, a2: v161, a3: v158, a4: v159, a5: v185);
        v166 = sub_2084840(a1: v164, a2: v165, a3: v162, a4: v163, a5: v177);
        v170 = sub_2084BC0(a1: v168, a2: v169, a3: v166, a4: v167, a5: v187);
        sub_20841E0(a1: v171, a2: v172, a3: v170);
        v149 = (unsigned int)(i + 1);
        if ( *(_QWORD *)(v193 + 160) == 0 )
          break;
        if ( *(int *)(v2 + 16) <= 0 )
        {
          sub_277F280(a1: v150, a2: v151, a3: v193, a4: v149);
          v152 = v173;
        }
        else
        {
          v152 = *(_QWORD *)(v193 + 160);
        }
      }
      v191 = v186;
      v192 = v185;
      v189 = i + 1;
      v199 = v0;
      v190 = (unsigned int *)v187;
    }
    else
    {
      v191 = v192;
      v192 = v190;
      v189 = 1;
      v199 = v0;
      v190 = (unsigned int *)v193;
    }
    result = sub_2084180(a1: v150, a2: v151, a3: v180, a4: v149, a5: 0);
    if ( *(int *)(v2 + 16) <= 0 )
      return sub_277F280(a1: v195, a2: v194, a3: v192, a4: v189);
    return result;
  }
  sub_276EFE0();
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
  return sub_159B8E0();
}
