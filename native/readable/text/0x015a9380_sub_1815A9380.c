// sub_15A9380
// rva 0x015a9380  size 2029  section .text  group text
// window base 0x1815a9380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A9380(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // r11
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // ebp
  __int64 v34; // rsi
  int v35; // r8d
  __int64 v36; // rdi
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
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
  int v84; // eax
  __int64 v85; // rdi
  __int64 v86; // rbp
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rdx
  unsigned __int64 v90; // r9
  unsigned __int64 v91; // r9
  __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // eax
  __int64 v96; // rcx
  unsigned int v97; // eax
  __int64 v98; // rcx
  unsigned int v99; // eax
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // eax
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
  int v115; // eax
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v121; // rdx
  unsigned __int64 v122; // rcx
  __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v127; // [rsp+8h] [rbp-E0h]
  unsigned int *v128; // [rsp+10h] [rbp-D8h]
  __int64 v129; // [rsp+18h] [rbp-D0h]
  __int64 v130; // [rsp+20h] [rbp-C8h]
  __int64 v131; // [rsp+28h] [rbp-C0h]
  __int64 v132; // [rsp+30h] [rbp-B8h]
  __int64 v133; // [rsp+38h] [rbp-B0h]
  __int64 v134; // [rsp+40h] [rbp-A8h]
  __int64 v135; // [rsp+48h] [rbp-A0h]
  __int64 v136; // [rsp+50h] [rbp-98h]
  __int64 v137; // [rsp+58h] [rbp-90h]
  __int64 v138; // [rsp+60h] [rbp-88h]
  __int64 v139; // [rsp+68h] [rbp-80h]
  __int64 v140; // [rsp+70h] [rbp-78h]
  __int64 v141; // [rsp+78h] [rbp-70h]
  __int64 v142; // [rsp+80h] [rbp-68h]
  __int64 v143; // [rsp+88h] [rbp-60h]
  __int64 v144; // [rsp+90h] [rbp-58h]
  __int64 v145; // [rsp+98h] [rbp-50h]
  __int64 v146; // [rsp+A0h] [rbp-48h]
  __int64 v147; // [rsp+A8h] [rbp-40h]
  __int64 v148; // [rsp+B0h] [rbp-38h]
  __int64 v149; // [rsp+B8h] [rbp-30h]
  __int64 v150; // [rsp+C0h] [rbp-28h]
  __int64 v151; // [rsp+C8h] [rbp-20h]
  __int64 v152; // [rsp+D0h] [rbp-18h]
  int v153; // [rsp+D8h] [rbp-10h]
  unsigned int v154; // [rsp+DCh] [rbp-Ch]
  int v155; // [rsp+E0h] [rbp-8h]
  unsigned int v156; // [rsp+E4h] [rbp-4h]

  if ( (unsigned __int64)&v126 <= *(_QWORD *)(v9 + 8) )
  {
    v128 = a3;
    sub_1EB84E0();
    goto LABEL_53;
  }
  v10 = a3[1];
  v152 = v8 + 8 * v10;
  if ( (_DWORD)v10 != 0 )
    v151 = v8 + 8 * v10;
  else
    v151 = v8 + 353301280;
  v11 = a3[2];
  v12 = v8 + 8 * v11;
  if ( (_DWORD)v11 != 0 )
    v150 = v8 + 8 * v11;
  else
    v150 = v8 + 353301280;
  v13 = a3[3];
  v14 = v8 + 8 * v13;
  if ( (_DWORD)v13 != 0 )
    v149 = v8 + 8 * v13;
  else
    v149 = v8 + 353301280;
  v15 = a3[4];
  v16 = v8 + 8 * v15;
  if ( (_DWORD)v15 != 0 )
    v148 = v8 + 8 * v15;
  else
    v148 = v8 + 353301280;
  v17 = a3[5];
  v18 = v8 + 8 * v17;
  if ( (_DWORD)v17 != 0 )
    v147 = v8 + 8 * v17;
  else
    v147 = v8 + 353301280;
  v19 = a3[6];
  v20 = v8 + 8 * v19;
  if ( (_DWORD)v19 != 0 )
    v146 = v8 + 8 * v19;
  else
    v146 = v8 + 353301280;
  v21 = a3[7];
  v22 = v8 + 8 * v21;
  if ( (_DWORD)v21 != 0 )
    v145 = v8 + 8 * v21;
  else
    v145 = v8 + 353301280;
  v23 = a3[8];
  v24 = v8 + 8 * v23;
  if ( (_DWORD)v23 != 0 )
    v144 = v8 + 8 * v23;
  else
    v144 = v8 + 353301280;
  v25 = a3[9];
  v26 = v8 + 8 * v25;
  if ( (_DWORD)v25 != 0 )
    v143 = v8 + 8 * v25;
  else
    v143 = v8 + 353301280;
  v27 = a3[10];
  v142 = v8 + 8 * v27;
  if ( (_DWORD)v27 != 0 )
    v141 = v8 + 8 * v27;
  else
    v141 = v8 + 353301280;
  v28 = a3[11];
  v140 = v8 + 8 * v28;
  if ( (_DWORD)v28 != 0 )
    v139 = v8 + 8 * v28;
  else
    v139 = v8 + 353301280;
  v29 = a3[12];
  if ( (_DWORD)v29 != 0 )
    v138 = v8 + 8 * v29;
  else
    v138 = v8 + 353301280;
  v137 = v8 + 8 * v29;
  v136 = v26;
  v135 = v24;
  v134 = v22;
  v133 = v20;
  v132 = v18;
  v131 = v16;
  v130 = v14;
  v129 = v12;
  v128 = a3;
  v30 = *(char *)(v141 + 12);
  v31 = (unsigned int)*(char *)(v143 + 12);
  v32 = *(char *)(v144 + 12);
  v33 = *(char *)(v145 + 12);
  v34 = (unsigned int)*(char *)(v146 + 12);
  v35 = *(char *)(v147 + 12);
  v36 = (unsigned int)*(char *)(v148 + 12);
  v37 = *(char *)(v149 + 12);
  v38 = *(char *)(v150 + 12);
  v39 = *(char *)(v151 + 12);
  v156 = *(char *)(v139 + 12);
  v156 |= *(char *)(v138 + 12) | v30 | v31 | v32 | v33 | v34 | v35 | v36 | v37 | v38 | v39;
  v40 = sub_50132E0(a1: v36, a2: v34, a3: 182, a4: v31, a5: v151);
  v44 = sub_50132E0(a1: v42, a2: v43, a3: v40, a4: v41, a5: v150);
  v48 = sub_50132E0(a1: v46, a2: v47, a3: v44, a4: v45, a5: v149);
  v52 = sub_50132E0(a1: v50, a2: v51, a3: v48, a4: v49, a5: v148);
  v56 = sub_50132E0(a1: v54, a2: v55, a3: v52, a4: v53, a5: v147);
  v60 = sub_50132E0(a1: v58, a2: v59, a3: v56, a4: v57, a5: v146);
  v64 = sub_50132E0(a1: v62, a2: v63, a3: v60, a4: v61, a5: v145);
  v68 = sub_50132E0(a1: v66, a2: v67, a3: v64, a4: v65, a5: v144);
  v72 = sub_50132E0(a1: v70, a2: v71, a3: v68, a4: v69, a5: v143);
  v76 = sub_50132E0(a1: v74, a2: v75, a3: v72, a4: v73, a5: v141);
  v80 = sub_50132E0(a1: v78, a2: v79, a3: v76, a4: v77, a5: v139);
  v84 = sub_50132E0(a1: v82, a2: v83, a3: v80, a4: v81, a5: v138);
  v155 = v84;
  v7 = v84 - 1;
  v86 = v8 + 57669672;
  v87 = v156;
  v88 = (unsigned int)(v84 << v156);
  if ( (int)v88 < 0 )
  {
LABEL_53:
    v154 = v7;
    v121 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v121 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v153 = v88;
      v121 = sub_1EAA920(a1: v85, a2: v88, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v121 + 40;
      *(_DWORD *)v121 = 34082880;
      *(_DWORD *)(v121 + 4) = 0;
      *(_QWORD *)(v121 + 8) = 0;
      *(_QWORD *)(v121 + 16) = 0;
      *(_QWORD *)(v121 + 24) = 0;
      *(_QWORD *)(v121 + 32) = 0;
      v153 = v88;
    }
    *(_DWORD *)(v121 + 20) = 46923644;
    *(_DWORD *)(v121 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v121 + 12) = (unsigned __int64)(v121 - v8) >> 3;
    v127 = v121;
    sub_503B9A0(a1: v85, a2: v88, a3: v121, a4: v87, a5: 0);
    v125 = v127;
    *(_DWORD *)(v127 + 8) = 46004603;
    if ( (*(_DWORD *)v125 & 2) != 0 )
      goto LABEL_57;
    while ( 1 )
    {
      v125 = sub_2769900(a1: v123, a2: v124, a3: v125, a4: v122, a5: &a7);
LABEL_57:
      v122 = (v125 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v125 & 0xFFFFFFFFFFF80000LL) + ((v125 - v122) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v125 & 0xFFFFFFFFFFF80000LL) + ((v125 - v122) >> 9) + 0x38) = 0;
    }
  }
  v89 = *(_QWORD *)(v9 + 40);
  v90 = ((unsigned int)v88 + 19LL) & 0x1FFFFFFF8LL;
  if ( v90 >= 0x20000 || (v91 = v89 + v90) > *(_QWORD *)(v9 + 32) )
  {
    v127 = v8 + 57669672;
    v154 = v84 - 1;
    v89 = sub_1EAA840(a1: 34082368, a2: v88, a3: 34082368, a4: v156, a5: (unsigned int)v88);
    v86 = v127;
    v7 = v154;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v91;
    *(_QWORD *)v89 = 34082368;
    *(_DWORD *)(v89 + 8) = v88;
  }
  v127 = v89;
  v154 = v7;
  if ( v156 != 0 )
    sub_4FF2C40(a1: 1, a2: v88, a3: v86, a4: v87, a5: v89, a6: v7);
  else
    sub_1EB4960(a1: v7, a2: 1, a3: v8 + 376614336, a4: v87, a5: 0, a6: v127);
  v93 = sub_5011A80(a1: v138, a2: v8 + 57669696, a3: v154, a4: v92, a5: v156, a6: v127);
  v95 = sub_5011A80(a1: v139, a2: v8 + 57669720, a3: v93, a4: v94, a5: v156, a6: v127);
  v97 = sub_5011A80(a1: v141, a2: v8 + 57669744, a3: v95, a4: v96, a5: v156, a6: v127);
  v99 = sub_5011A80(a1: v143, a2: v8 + 57669768, a3: v97, a4: v98, a5: v156, a6: v127);
  v101 = sub_5011A80(a1: v144, a2: v8 + 57669792, a3: v99, a4: v100, a5: v156, a6: v127);
  v103 = sub_5011A80(a1: v145, a2: v8 + 57669816, a3: v101, a4: v102, a5: v156, a6: v127);
  v105 = sub_5011A80(a1: v146, a2: v8 + 57669840, a3: v103, a4: v104, a5: v156, a6: v127);
  v107 = sub_5011A80(a1: v147, a2: v8 + 57669864, a3: v105, a4: v106, a5: v156, a6: v127);
  v109 = sub_5011A80(a1: v148, a2: v8 + 57669888, a3: v107, a4: v108, a5: v156, a6: v127);
  v111 = sub_5011A80(a1: v149, a2: v8 + 57669912, a3: v109, a4: v110, a5: v156, a6: v127);
  v113 = sub_5011A80(a1: v150, a2: v8 + 57669936, a3: v111, a4: v112, a5: v156, a6: v127);
  v115 = sub_5011A80(a1: v151, a2: v8 + 57669960, a3: v113, a4: v114, a5: v156, a6: v127);
  v118 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v118 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v155 = v115;
    v118 = sub_1EAA920(a1: v116, a2: v117, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v118 + 24;
    *(_DWORD *)v118 = 34082680;
    *(_DWORD *)(v118 + 4) = 0;
    *(_QWORD *)(v118 + 8) = 0;
    *(_QWORD *)(v118 + 16) = 0;
  }
  v119 = v127;
  *(_BYTE *)(v118 + 12) = v156;
  *(_DWORD *)(v118 + 4) = (unsigned __int64)(v119 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v116, a2: v117, a3: v118, a4: v119, a5: v119);
  return v118;
}
