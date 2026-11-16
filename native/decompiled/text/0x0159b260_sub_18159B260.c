// sub_18159B260
// rva 0x0159b260  size 1648  section .text  group text
// window base 0x18159b260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159B260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // r15
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
  __int64 result; // rax
  unsigned int *v175; // rbx
  __int64 *v176; // r8
  __int64 v177; // [rsp+0h] [rbp-128h] BYREF
  _QWORD *v178; // [rsp+20h] [rbp-108h]
  _QWORD *v179; // [rsp+28h] [rbp-100h]
  __int64 v180; // [rsp+30h] [rbp-F8h]
  _QWORD *v181; // [rsp+38h] [rbp-F0h]
  __int64 v182; // [rsp+40h] [rbp-E8h]
  _QWORD *v183; // [rsp+48h] [rbp-E0h]
  _BYTE v184[48]; // [rsp+50h] [rbp-D8h] BYREF
  _DWORD v185[16]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int *v186; // [rsp+C0h] [rbp-68h]
  unsigned int *v187; // [rsp+C8h] [rbp-60h]
  __int64 v188; // [rsp+D0h] [rbp-58h]
  int i; // [rsp+D8h] [rbp-50h]
  unsigned int v190; // [rsp+DCh] [rbp-4Ch]
  unsigned int *v191; // [rsp+E0h] [rbp-48h]
  unsigned int *v192; // [rsp+E8h] [rbp-40h]
  unsigned int *v193; // [rsp+F0h] [rbp-38h]
  __int64 v194; // [rsp+F8h] [rbp-30h]
  _QWORD *v195; // [rsp+100h] [rbp-28h]
  unsigned int v196; // [rsp+10Ch] [rbp-1Ch]
  __int64 v197; // [rsp+110h] [rbp-18h]
  int v198; // [rsp+118h] [rbp-10h]
  int v199; // [rsp+11Ch] [rbp-Ch]
  __int64 v200; // [rsp+120h] [rbp-8h]

  if ( (unsigned __int64)&v177 <= *(_QWORD *)(v8 + 8) )
  {
    v199 = a2;
    v198 = a1;
    v197 = a6;
    v182 = a3;
    MEMORY[0x181EB83C0]();
  }
  else if ( a5 != v7 )
  {
    v199 = a2;
    v198 = a1;
    v197 = a6;
    v183 = a5;
    v182 = a3;
    v181 = v7 + 47076515;
    v9 = MEMORY[0x182084840](a1, a2, a3: v7 + 47076515, a4: v7 + 45944498, a5: v7 + 45944498);
    MEMORY[0x182084180](a1: v11, a2: v12, a3: v9, a4: v10, a5: 1);
    v16 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v181, a4: v13, a5: v7 + 46215889);
    MEMORY[0x1820845C0](a1: v18, a2: v19, a3: v16, a4: v17, a5: v7[47022662]);
    MEMORY[0x1820841E0](a1: v20, a2: v21, a3: v181);
    v25 = MEMORY[0x182084840](a1: v23, a2: v24, a3: v181, a4: v22, a5: v7 + 46277103);
    v29 = MEMORY[0x182084BC0](a1: v27, a2: v28, a3: v25, a4: v26, a5: v7);
    MEMORY[0x1820841E0](a1: v30, a2: v31, a3: v29);
    v35 = MEMORY[0x182084840](a1: v33, a2: v34, a3: v181, a4: v32, a5: v7 + 46424387);
    v39 = MEMORY[0x182084BC0](a1: v37, a2: v38, a3: v35, a4: v36, a5: v6);
    MEMORY[0x1820841E0](a1: v40, a2: v41, a3: v39);
    v45 = MEMORY[0x182084840](a1: v43, a2: v44, a3: v181, a4: v42, a5: v7 + 46453089);
    v49 = MEMORY[0x182084BC0](a1: v47, a2: v48, a3: v45, a4: v46, a5: v7[46673795]);
    MEMORY[0x1820841E0](a1: v50, a2: v51, a3: v49);
    v55 = MEMORY[0x182084840](a1: v53, a2: v54, a3: v181, a4: v52, a5: v7 + 46420867);
    v59 = MEMORY[0x182083E40](a1: v57, a2: v58, a3: v55, a4: v56, a5: 0);
    MEMORY[0x1820841E0](a1: v60, a2: v61, a3: v59);
    MEMORY[0x182084840](a1: v63, a2: v64, a3: v181, a4: v62, a5: v7 + 46448817);
    v65 = MEMORY[0x181EDF6E0]();
    v68 = v7 + 43858412;
    v180 = (__int64)(v7 + 43858412);
    v196 = v65;
    if ( v65 < 1 )
      v69 = MEMORY[0x182084840](a1: v66, a2: v67, a3: v181, a4: v68, a5: v7 + 43858412);
    else
      v69 = MEMORY[0x182084560](a1: v66, a2: v67, a3: v181, a4: v68, a5: (unsigned int)v65);
    MEMORY[0x1820841E0](a1: v70, a2: v71, a3: v69);
    MEMORY[0x182084840](a1: v73, a2: v74, a3: v181, a4: v72, a5: v7 + 46093605);
    v185[0] = 64;
    v195 = v185;
    MEMORY[0x12001AD8](a1: v75, a2: v76, a3: v185, a4: v185);
    if ( v195[1] != 0 )
    {
      v195 = (_QWORD *)v195[1];
      v80 = MEMORY[0x182084440](a1: 0, a2: v79, a3: v181, a4: v77, a5: v195, a6: 0x100000);
      v84 = MEMORY[0x182084840](a1: v82, a2: v83, a3: v80, a4: v81, a5: v7 + 46119432);
    }
    else
    {
      v195 = nullptr;
      v84 = MEMORY[0x182084840](a1: v78, a2: v79, a3: v181, a4: v180, a5: v180);
    }
    MEMORY[0x1820841E0](a1: v85, a2: v86, a3: v84);
    v90 = MEMORY[0x182084840](a1: v88, a2: v89, a3: v181, a4: v87, a5: v7 + 45997521);
    v93 = MEMORY[0x12001B68];
    if ( MEMORY[0x12001B68] == 0 )
    {
      v194 = 301996904;
      v180 = v90;
      v193 = (unsigned int *)v184;
      MEMORY[0x12001A50](a1: v91, a2: v92, a3: 301996904, a4: v184);
      v175 = v193;
      v176 = (__int64 *)v194;
      *(_QWORD *)v194 = v193[1];
      MEMORY[0x120013D0] = v175[10];
      v93 = *v176;
      v90 = v180;
    }
    v94 = MEMORY[0x182084A00](a1: v91, a2: v92, a3: v90, a4: v93, a5: v93);
    MEMORY[0x1820841E0](a1: v95, a2: v96, a3: v94);
    v100 = MEMORY[0x182084840](a1: v98, a2: v99, a3: v181, a4: v97, a5: v7 + 45778578);
    v101 = v7[47022665];
    v180 = v100;
    v104 = MEMORY[0x1828C0020](a1: v102, a2: v103, a3: v101);
    v107 = MEMORY[0x1820843E0](a1: 3, a2: v106, a3: v180, a4: v105, a5: v104, a6: 1000);
    v111 = MEMORY[0x182084840](a1: v109, a2: v110, a3: v107, a4: v108, a5: v7 + 44019260);
    MEMORY[0x1820841E0](a1: v112, a2: v113, a3: v111);
    v180 = MEMORY[0x182084840](a1: v115, a2: v116, a3: v181, a4: v114, a5: v7 + 46412025);
    v120 = MEMORY[0x181EDF700](a1: v118, a2: v119, a3: 0, a4: v117, a5: 0);
    v124 = MEMORY[0x1820849A0](a1: v122, a2: v123, a3: v180, a4: v121, a5: v120);
    MEMORY[0x1820841E0](a1: v125, a2: v126, a3: v124);
    v127 = (unsigned int *)v7[47022355];
    v128 = *((unsigned int **)v127 + 10);
    v129 = *((unsigned int **)v127 + 9);
    v180 = (__int64)(v7 + 46544047);
    v194 = (__int64)v128 + (_QWORD)v129 - 1;
    v193 = v129;
    v192 = v127;
    v191 = v128;
    MEMORY[0x182084840](a1: v130, a2: v131, a3: v181, a4: v128, a5: v7 + 46544047);
    v179 = v7 + 46554619;
    v135 = MEMORY[0x182084840](a1: v133, a2: v134, a3: v181, a4: v132, a5: v7 + 46554619);
    v139 = MEMORY[0x182084BC0](a1: v137, a2: v138, a3: v135, a4: v136, a5: v191);
    v178 = v7 + 46623159;
    v142 = MEMORY[0x182084840](a1: v140, a2: v141, a3: v139, a4: v7 + 46623159, a5: v7 + 46623159);
    v146 = MEMORY[0x182084BC0](a1: v144, a2: v145, a3: v142, a4: v143, a5: v194);
    MEMORY[0x1820841E0](a1: v147, a2: v148, a3: v146);
    v152 = *((_QWORD *)v192 + 20);
    if ( v152 != 0 )
    {
      for ( i = 1; ; i = v149 )
      {
        v153 = *(unsigned int **)(v152 + 80);
        v154 = *(unsigned int **)(v152 + 72);
        v194 = v152;
        v188 = (__int64)v153 + (_QWORD)v154 - 1;
        v187 = v154;
        v186 = v153;
        MEMORY[0x182084840](a1: v153, a2: v151, a3: v181, a4: v149, a5: v180);
        v158 = MEMORY[0x182084840](a1: v156, a2: v157, a3: v181, a4: v155, a5: v179);
        v162 = MEMORY[0x182084BC0](a1: v160, a2: v161, a3: v158, a4: v159, a5: v186);
        v166 = MEMORY[0x182084840](a1: v164, a2: v165, a3: v162, a4: v163, a5: v178);
        v170 = MEMORY[0x182084BC0](a1: v168, a2: v169, a3: v166, a4: v167, a5: v188);
        MEMORY[0x1820841E0](a1: v171, a2: v172, a3: v170);
        v149 = (unsigned int)(i + 1);
        if ( *(_QWORD *)(v194 + 160) == 0 )
          break;
        if ( *(int *)(v8 + 16) <= 0 )
        {
          MEMORY[0x18277F280](a1: v150, a2: v151, a3: v194, a4: v149);
          v152 = v173;
        }
        else
        {
          v152 = *(_QWORD *)(v194 + 160);
        }
      }
      v192 = v187;
      v193 = v186;
      v190 = i + 1;
      v200 = v6;
      v191 = (unsigned int *)v188;
    }
    else
    {
      v192 = v193;
      v193 = v191;
      v190 = 1;
      v200 = v6;
      v191 = (unsigned int *)v194;
    }
    result = MEMORY[0x182084180](a1: v150, a2: v151, a3: v181, a4: v149, a5: 0);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v196, a2: v195, a3: v193, a4: v190);
    return result;
  }
  MEMORY[0x18276EFE0]();
  JUMPOUT(0x18159B8D0LL);
}
