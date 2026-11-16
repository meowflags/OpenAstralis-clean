// sub_1ECD000
// rva 0x01ecd000  size 4422  section .text  group text
// window base 0x181ecd000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ECD000(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  signed __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  signed __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r11
  _DWORD *v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  unsigned int *v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
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
  _DWORD *v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r9
  __int64 v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  signed int v84; // eax
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rcx
  _DWORD *v88; // rdx
  unsigned __int64 v89; // r9
  __int64 v90; // rcx
  unsigned int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rdx
  char *v101; // r9
  __int64 v102; // r8
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdi
  __int64 v106; // rsi
  _DWORD *v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  unsigned int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rsi
  unsigned int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rsi
  unsigned int v122; // eax
  __int64 v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rsi
  _DWORD *v126; // rdx
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // r9
  __int64 v129; // rcx
  unsigned int v130; // eax
  __int64 v131; // rcx
  unsigned int v132; // eax
  __int64 v133; // rcx
  unsigned int v134; // eax
  __int64 v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  _DWORD *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rdx
  char *v143; // r9
  __int64 v144; // r8
  __int64 v145; // rdx
  __int64 v146; // rdx
  char *v147; // r9
  __int64 v148; // r8
  unsigned __int64 v149; // rbx
  unsigned __int64 v150; // rbx
  unsigned __int64 v151; // rax
  char v152; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v153; // [rsp+Ch] [rbp-ACh]
  _DWORD *v154; // [rsp+10h] [rbp-A8h]
  __int64 v155; // [rsp+18h] [rbp-A0h]
  _DWORD *v156; // [rsp+20h] [rbp-98h]
  _DWORD *v157; // [rsp+28h] [rbp-90h]
  __int64 v158; // [rsp+30h] [rbp-88h]
  __int64 v159; // [rsp+38h] [rbp-80h]
  __int64 v160; // [rsp+40h] [rbp-78h]
  unsigned int *v161; // [rsp+48h] [rbp-70h]
  _DWORD *v162; // [rsp+50h] [rbp-68h]
  __int64 v163; // [rsp+58h] [rbp-60h]
  _DWORD *v164; // [rsp+60h] [rbp-58h]
  __int64 v165; // [rsp+68h] [rbp-50h]
  _DWORD *v166; // [rsp+70h] [rbp-48h]
  unsigned int v167; // [rsp+78h] [rbp-40h]
  unsigned int v168; // [rsp+7Ch] [rbp-3Ch]
  unsigned __int64 v169; // [rsp+80h] [rbp-38h]
  unsigned int v170; // [rsp+88h] [rbp-30h]
  unsigned int v171; // [rsp+8Ch] [rbp-2Ch]
  __int64 v172; // [rsp+90h] [rbp-28h]
  __int64 v173; // [rsp+98h] [rbp-20h]
  __int64 v174; // [rsp+A0h] [rbp-18h]
  __int64 v175; // [rsp+A8h] [rbp-10h]
  unsigned int v176; // [rsp+B0h] [rbp-8h]
  unsigned int v177; // [rsp+B4h] [rbp-4h]

  v166 = a3;
  v165 = a5;
  v164 = (_DWORD *)a6;
  v177 = a1;
  v176 = a2;
  v163 = a4;
  if ( (unsigned __int64)&v152 <= *(_QWORD *)(v10 + 8) )
  {
    v33 = sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v152);
LABEL_62:
    v170 = v33;
    sub_28C1C40(a1: v30, a2: v31, a3: v9 + 361300432);
LABEL_63:
    v172 = v17;
    v173 = v13;
    v84 = sub_50130C0(a1: v14, a2: v15, a3: 19, a4: v17, a5: v176);
    v171 = v84;
    v87 = (unsigned int)(v84 - 12);
    if ( v84 < 0 )
    {
      v170 = v84 - 12;
      v141 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v141 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v141 = sub_1EAA920(a1: v85, a2: v86, a3: v173);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v141 + 40;
        *(_DWORD *)v141 = 34082880;
        *(_DWORD *)(v141 + 4) = 0;
        *(_QWORD *)(v141 + 8) = 0;
        *(_QWORD *)(v141 + 16) = 0;
        *(_QWORD *)(v141 + 24) = 0;
        *(_QWORD *)(v141 + 32) = 0;
      }
      *(_DWORD *)(v141 + 20) = 46923644;
      *(_DWORD *)(v141 + 16) = *(_DWORD *)(v9 + 374343896);
      *(_DWORD *)(v141 + 12) = (unsigned __int64)(v141 - v9) >> 3;
      v162 = (_DWORD *)v141;
      sub_503B9A0(a1: v85, a2: v86, a3: v141, a4: v141, a5: 0);
      v142 = (__int64)v162;
      v162[2] = 46004603;
      if ( (*(_DWORD *)v142 & 2) != 0 )
      {
        v50 = (v142 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v50) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v50) >> 9) + 0x38) = 0;
        v49 = v142;
      }
      else
      {
        v49 = v142;
      }
    }
    else
    {
      v88 = *(_DWORD **)(v10 + 40);
      v89 = ((unsigned int)v84 + 19LL) & 0x1FFFFFFF8LL;
      if ( v89 >= 0x20000 || (unsigned __int64)(v143 = (char *)v88 + v89) > *(_QWORD *)(v10 + 32) )
      {
        v170 = v84 - 12;
        v88 = (_DWORD *)sub_1EAA840(a1: v85, a2: v86, a3: v174, a4: v87, a5: v84);
        v87 = v170;
      }
      else
      {
        v144 = v174;
        *(_QWORD *)(v10 + 40) = v143;
        *(_QWORD *)v88 = v144;
        v88[2] = v84;
      }
      v162 = v88;
      v170 = v87;
      sub_1EB4960(a1: (unsigned int)v87, a2: 12, a3: (_DWORD *)(v9 + 376659968), a4: v87, a5: 0, a6: v88, a7: v152);
      v91 = sub_5011920(a1: v176, a2: v9 + 58179440, a3: v170, a4: v90, a5: 0, a6: v162);
      v95 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v95 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v171 = v91;
        v95 = sub_1EAA920(a1: v93, a2: v94, a3: v172);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v95 + 40;
        *(_DWORD *)v95 = 34150672;
        *(_DWORD *)(v95 + 4) = 0;
        *(_QWORD *)(v95 + 8) = 0;
        *(_QWORD *)(v95 + 16) = 0;
        *(_QWORD *)(v95 + 24) = 0;
        *(_QWORD *)(v95 + 32) = 0;
      }
      v161 = (unsigned int *)v95;
      *(_DWORD *)(v95 + 20) = 46923644;
      *(_DWORD *)(v95 + 16) = *(_DWORD *)(v9 + 374343896);
      *(_DWORD *)(v95 + 12) = (unsigned __int64)(v95 - v9) >> 3;
      v96 = sub_503B9A0(a1: v93, a2: v94, a3: v95, a4: v92, a5: 0);
      v97 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v97 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v160 = v96;
        v98 = sub_1EAA920(a1: v51, a2: v52, a3: v175);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v97 + 24;
        *(_DWORD *)v97 = 34082680;
        *(_DWORD *)(v97 + 4) = 0;
        *(_QWORD *)(v97 + 8) = 0;
        *(_QWORD *)(v97 + 16) = 0;
        v98 = v97;
      }
      v49 = (__int64)v161;
      *(_DWORD *)(v98 + 4) = ((unsigned __int64)v162 - v9) >> 3;
      *(_DWORD *)(v49 + 8) = (unsigned __int64)(v98 - v9) >> 3;
      if ( (*(_DWORD *)v49 & 2) != 0 )
      {
        v50 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v50) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v50) >> 9) + 0x38) = 0;
      }
    }
    goto LABEL_47;
  }
  sub_1EC4E20(a1, a2, (__int64)a3, a4, a5, a6);
  v175 = 34082680;
  v174 = 34082368;
  v13 = 34082880;
  v14 = v177;
  if ( v177 != 0 )
  {
    v15 = v176;
    v16 = v164;
  }
  else
  {
    v16 = v164;
    if ( v164 == (_DWORD *)v9 )
    {
      sub_2771080(a1: v177, a2: v12, a3: 34082680, a4: v11, a5: 34082368, a6: 34082880);
LABEL_80:
      v103 = v161[9];
      if ( (v103 & 0x200) != 0 )
      {
        v104 = v9 + 360880144;
      }
      else if ( (v103 & 0x400) != 0 )
      {
        v104 = v9 + 365307112;
      }
      else
      {
        v104 = v9 + 364635744;
      }
      v159 = v104;
      v158 = sub_1ECE360(a1: v30, a2: v31, a3: v161, a4: v103, a5: v163);
      v107 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v169)(a1: v105, a2: v106, a3: v166);
      if ( v107 == (_DWORD *)v9 )
      {
        v111 = v9 + 364828328;
      }
      else
      {
        v110 = *(_QWORD *)(v9 + 8LL * (*v107 >> 3) + 288);
        v157 = v107;
        v111 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + v110))(a1: v108, a2: v109, a3: v107);
      }
      v112 = v9 + 353301280;
      if ( v111 == v9 )
        v113 = v9 + 353301280;
      else
        v113 = v111;
      if ( v158 != v9 )
        v112 = v158;
      v157 = (_DWORD *)v111;
      v170 = *(char *)(v112 + 12) | *(char *)(v113 + 12);
      v156 = (_DWORD *)v112;
      v155 = v113;
      v114 = sub_50132E0(a1: v108, a2: v113, a3: 45);
      v118 = sub_50132E0(a1: v116, a2: v117, a3: v114, a4: v115, a5: v159);
      v122 = sub_50132E0(a1: v120, a2: v121, a3: v118, a4: v119, a5: v156);
      v171 = v122;
      LODWORD(v7) = v122 - 1;
      v23 = (_DWORD *)(v9 + 58179464);
      v124 = v170;
      v125 = v122 << v170;
      if ( (int)v125 >= 0 )
      {
        v126 = *(_DWORD **)(v10 + 40);
        v127 = *(_QWORD *)(v10 + 32);
        v128 = ((unsigned int)v125 + 19LL) & 0x1FFFFFFF8LL;
        if ( v128 >= 0x20000 )
          goto LABEL_90;
        goto LABEL_117;
      }
      v168 = v122 - 1;
      v145 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v145 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v167 = v122 << v170;
        v145 = sub_1EAA920(a1: v123, a2: v125, a3: v173);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v145 + 40;
        *(_DWORD *)v145 = 34082880;
        *(_DWORD *)(v145 + 4) = 0;
        *(_QWORD *)(v145 + 8) = 0;
        *(_QWORD *)(v145 + 16) = 0;
        *(_QWORD *)(v145 + 24) = 0;
        *(_QWORD *)(v145 + 32) = 0;
        v167 = v125;
      }
      *(_DWORD *)(v145 + 20) = 46923644;
      *(_DWORD *)(v145 + 16) = *(_DWORD *)(v9 + 374343896);
      *(_DWORD *)(v145 + 12) = (unsigned __int64)(v145 - v9) >> 3;
      v154 = (_DWORD *)v145;
      sub_503B9A0(a1: v123, a2: v125, a3: v145, a4: v124, a5: 0);
      v146 = (__int64)v154;
      v154[2] = 46004603;
      if ( (*(_DWORD *)v146 & 2) != 0 )
      {
        v50 = (v146 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v50) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v50) >> 9) + 0x38) = 0;
        v49 = v146;
      }
      else
      {
        v49 = v146;
      }
      while ( 1 )
      {
LABEL_47:
        v49 = sub_2769900(a1: v51, a2: v52, a3: v49, a4: v50, a5: &a7);
LABEL_48:
        v53 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v53 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v154 = (_DWORD *)v49;
          v53 = sub_1EAA920(a1: v51, a2: v52, a3: 36449800);
          v49 = (__int64)v154;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v53 + 40;
          *(_DWORD *)v53 = 36449800;
          *(_DWORD *)(v53 + 4) = 0;
          *(_QWORD *)(v53 + 8) = 0;
          *(_QWORD *)(v53 + 16) = 0;
          *(_QWORD *)(v53 + 24) = 0;
          *(_QWORD *)(v53 + 32) = 0;
        }
        *(_DWORD *)(v53 + 20) = 46923644;
        *(_DWORD *)(v53 + 16) = *(_DWORD *)(v9 + 374343896);
        *(_DWORD *)(v53 + 12) = (unsigned __int64)(v53 - v9) >> 3;
        v54 = *(unsigned int *)(v49 + 8);
        v154 = (_DWORD *)v49;
        v157 = (_DWORD *)(v9 + 8 * v54);
        v153 = v54;
        v156 = (_DWORD *)v53;
        sub_503B9A0(a1: v51, a2: v52, a3: v53, a4: v54, a5: 0);
        v55 = (__int64)v156;
        v50 = v153;
        v156[2] = v153;
        if ( (*(_DWORD *)v55 & 2) != 0 )
        {
          v50 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v50) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v50) >> 9) + 0x38) = 0;
          v49 = v55;
        }
        else
        {
          v49 = v55;
        }
      }
    }
    v15 = v176;
    if ( v176 == v164[2] )
    {
      v23 = v164;
      goto LABEL_19;
    }
  }
  v17 = 34150672;
  if ( (int)v15 < 0 )
    goto LABEL_63;
  if ( (v177 & 0x80000000) == 0 )
  {
    if ( v16 == (_DWORD *)v9 )
    {
      v64 = sub_2771080(a1: v177, a2: v15, a3: 34082680, a4: 34150672, a5: 34082368, a6: 34082880);
LABEL_77:
      v101 = (char *)v68 + v70;
      if ( (unsigned __int64)v101 <= v69 )
      {
        v102 = v174;
        *(_QWORD *)(v10 + 40) = v101;
        *(_QWORD *)v68 = v102;
        v68[2] = v64;
LABEL_55:
        v162 = v68;
        v171 = v64;
        sub_1EB4960(a1: v64, a2: 0, a3: (_DWORD *)(v9 + 376351544), a4: (__int64)v68, a5: 0, a6: v68, a7: v152);
        v72 = sub_5011920(a1: v176, a2: v9 + 58179368, a3: v171, a4: v71, a5: 0, a6: v162);
        v74 = sub_5011C60(a1: v169, a2: v9 + 58179392, a3: v72, a4: v73, a5: 0, a6: v162);
        v76 = sub_5011920(a1: v177, a2: v9 + 58179416, a3: v74, a4: v75, a5: 0, a6: v162);
        v80 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v80 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v170 = v76;
          v80 = sub_1EAA920(a1: v78, a2: v79, a3: v172);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v80 + 40;
          *(_DWORD *)v80 = 34150672;
          *(_DWORD *)(v80 + 4) = 0;
          *(_QWORD *)(v80 + 8) = 0;
          *(_QWORD *)(v80 + 16) = 0;
          *(_QWORD *)(v80 + 24) = 0;
          *(_QWORD *)(v80 + 32) = 0;
        }
        v161 = (unsigned int *)v80;
        *(_DWORD *)(v80 + 20) = 46923644;
        *(_DWORD *)(v80 + 16) = *(_DWORD *)(v9 + 374343896);
        *(_DWORD *)(v80 + 12) = (unsigned __int64)(v80 - v9) >> 3;
        v81 = sub_503B9A0(a1: v78, a2: v79, a3: v80, a4: v77, a5: 0);
        v82 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v82 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v160 = v81;
          v83 = sub_1EAA920(a1: v51, a2: v52, a3: v175);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v82 + 24;
          *(_DWORD *)v82 = 34082680;
          *(_DWORD *)(v82 + 4) = 0;
          *(_QWORD *)(v82 + 8) = 0;
          *(_QWORD *)(v82 + 16) = 0;
          v83 = v82;
        }
        v49 = (__int64)v161;
        *(_DWORD *)(v83 + 4) = ((unsigned __int64)v162 - v9) >> 3;
        *(_DWORD *)(v49 + 8) = (unsigned __int64)(v83 - v9) >> 3;
        if ( (*(_DWORD *)v49 & 2) != 0 )
        {
          v50 = v49 & 0xFFFFFFFFFFF80000LL;
          v149 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v149) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v149) >> 9) + 0x38) = 0;
        }
        goto LABEL_47;
      }
LABEL_54:
      v171 = v64;
      v68 = (_DWORD *)sub_1EAA840(a1: v66, a2: v67, a3: v174, a4: v65, a5: v64);
      v64 = v171;
      goto LABEL_55;
    }
    v18 = v16[2];
    if ( (int)v177 <= (int)(v18 - v15) )
    {
      if ( v177 > v18 )
      {
        v49 = sub_579B920(a1: v176 + v177, a2: v15, a3: v164, a4: 34150672, a5: v177, a6: v176 + v177);
        if ( *(_DWORD *)v49 >> 3 == 5058766 )
          goto LABEL_48;
        goto LABEL_47;
      }
      v19 = *(_QWORD *)(v10 + 40);
      v20 = (unsigned int)v15;
      v21 = ((unsigned int)v15 + 19LL) & 0x1FFFFFFF8LL;
      if ( v21 >= 0x20000 || (v22 = v19 + v21) > *(_QWORD *)(v10 + 32) )
      {
        v169 = (unsigned int)v15;
        v170 = v18;
        v173 = 34082880;
        v23 = (_DWORD *)sub_1EAA840(a1: v177, a2: v15, a3: v174, a4: v19, a5: v176);
        v20 = v169;
        v18 = v170;
        v13 = v173;
        LODWORD(v15) = v176;
        LODWORD(v14) = v177;
        v16 = v164;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v22;
        *(_QWORD *)v19 = 34082368;
        *(_DWORD *)(v19 + 8) = v15;
        v23 = (_DWORD *)v19;
      }
      LODWORD(v7) = v18 - v14;
      if ( (int)v15 < (int)v7 )
        JUMPOUT(0x303D570F2LL);
      if ( v20 < (int)v7 )
        JUMPOUT(0x303D570FFLL);
      if ( (int)v7 >= 1LL )
      {
        v24 = (__int64)v16 + (unsigned int)v14 + 12;
        v25 = 0;
        do
        {
          LODWORD(v15) = *(char *)(v24 + v25);
          *((_BYTE *)v23 + v25 + 12) = *(_BYTE *)(v24 + v25);
          ++v25;
        }
        while ( v25 <= (int)v7 - 1LL );
      }
      v11 = v20 - (int)v7;
      if ( v11 >= 2048 )
      {
        v173 = v13;
        memset((char *)v23 + (int)v7 + 12, 0, v11);
        LODWORD(v11) = 0;
      }
      else if ( (__int64)v20 > (int)v7 )
      {
        v48 = (__int64)v23 + (int)v7 + 12;
        --v11;
        v7 = 0;
        do
          *(_BYTE *)(v48 + v7++) = 0;
        while ( v7 <= v11 );
      }
LABEL_19:
      v173 = v13;
      v162 = v23;
      v26 = sub_1ECF700(a1: (_DWORD)v23, a2: v15, a3: (_DWORD)v166, a4: v11, a5: v165, a6: v163, a7: v152);
      v161 = (unsigned int *)v26;
      if ( v165 == v9 )
        v160 = v9 + 8LL * *(unsigned int *)(v26 + 8);
      else
        v160 = v165;
      sub_1ECB240(a1: v27, a2: v28, a3: v166, a4: (__int64)v166, a5: v26, a6: v29, a7: v152);
      v169 = v8 + *(_QWORD *)(v9 + 8LL * (*v166 >> 3) + 112);
      if ( *(_BYTE *)(v163 + 20) == 0
        && sub_1EC98E0(a1: v30, a2: v31, a3: (__int64)v166, a4: v163, a5: v160, a6: v32) != (_DWORD *)v9 )
      {
        goto LABEL_80;
      }
      v33 = __sync_fetch_and_add((volatile signed __int32 *)(v9 + 376659924), 1u);
      if ( v33 < 1 )
        goto LABEL_62;
      v34 = v163;
      if ( *(_BYTE *)(v163 + 20) != 0 )
      {
        v170 = v33;
        v35 = (unsigned int *)sub_27C19E0(
                                a1: v9 + 376659936,
                                a2: v31,
                                a3: v161,
                                a4: v163,
                                a5: v165,
                                a6: (unsigned int)v33);
      }
      else
      {
        v170 = v33;
        v35 = v161;
      }
      v161 = v35;
      v36 = (_DWORD *)sub_1ECB800(a1: v160, a2: v170, a3: (__int64)v166, a4: v34, a5: v35, a6: v163, a7: v152);
      v39 = v163;
      if ( *(_BYTE *)(v163 + 20) != 0 )
      {
        if ( *(_BYTE *)(v163 + 21) != 0 )
        {
          v40 = (unsigned int)v166[4];
          if ( (_DWORD)v40 == 0 )
          {
            sub_2771080();
LABEL_117:
            v147 = (char *)v126 + v128;
            if ( (unsigned __int64)v147 <= v127 )
            {
              v148 = v174;
              *(_QWORD *)(v10 + 40) = v147;
              *(_QWORD *)v126 = v148;
              v126[2] = v125;
LABEL_91:
              v154 = v126;
              v168 = v7;
              if ( v170 != 0 )
                sub_4FF2C40(a1: 1, a2: v125, a3: v23, a4: v124, a5: v126, a6: (unsigned int)v7);
              else
                sub_1EB4960(
                  a1: (unsigned int)v7,
                  a2: 1,
                  a3: (_DWORD *)(v9 + 376659992),
                  a4: v124,
                  a5: 0,
                  a6: v154,
                  a7: v152);
              v130 = sub_5011A80(a1: v156, a2: v9 + 58179488, a3: v168, a4: v129, a5: v170, a6: v154);
              v132 = sub_5011A80(a1: v159, a2: v9 + 58179512, a3: v130, a4: v131, a5: v170, a6: v154);
              v134 = sub_5011A80(a1: v155, a2: v9 + 58179536, a3: v132, a4: v133, a5: v170, a6: v154);
              v137 = *(_QWORD *)(v10 + 40);
              if ( (unsigned __int64)(v137 + 40) > *(_QWORD *)(v10 + 32) )
              {
                v171 = v134;
                v137 = sub_1EAA920(a1: v135, a2: v136, a3: 35566272);
              }
              else
              {
                *(_QWORD *)(v10 + 40) = v137 + 40;
                *(_DWORD *)v137 = 35566272;
                *(_DWORD *)(v137 + 4) = 0;
                *(_QWORD *)(v137 + 8) = 0;
                *(_QWORD *)(v137 + 16) = 0;
                *(_QWORD *)(v137 + 24) = 0;
                *(_QWORD *)(v137 + 32) = 0;
              }
              v157 = (_DWORD *)v137;
              *(_DWORD *)(v137 + 20) = 46923644;
              *(_DWORD *)(v137 + 16) = *(_DWORD *)(v9 + 374343896);
              *(_DWORD *)(v137 + 12) = (unsigned __int64)(v137 - v9) >> 3;
              v171 = (char)v170;
              v138 = sub_503B9A0(a1: v135, a2: v136, a3: v137, a4: v137, a5: 0);
              v139 = *(_QWORD *)(v10 + 40);
              if ( (unsigned __int64)(v139 + 24) > *(_QWORD *)(v10 + 32) )
              {
                v156 = (_DWORD *)v138;
                v139 = sub_1EAA920(a1: v51, a2: v52, a3: v175);
              }
              else
              {
                *(_QWORD *)(v10 + 40) = v139 + 24;
                *(_DWORD *)v139 = 34082680;
                *(_DWORD *)(v139 + 4) = 0;
                *(_QWORD *)(v139 + 8) = 0;
                *(_QWORD *)(v139 + 16) = 0;
              }
              v50 = (unsigned __int64)v157;
              v140 = v154;
              *(_BYTE *)(v139 + 12) = v170;
              *(_DWORD *)(v139 + 4) = ((unsigned __int64)v140 - v9) >> 3;
              *(_DWORD *)(v50 + 8) = (unsigned __int64)(v139 - v9) >> 3;
              if ( (*(_DWORD *)v50 & 2) != 0 )
              {
                v151 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v151) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v151) >> 9) + 0x38) = 0;
                v49 = v50;
              }
              else
              {
                v49 = v50;
              }
              goto LABEL_47;
            }
LABEL_90:
            v154 = v23;
            v168 = v7;
            v126 = (_DWORD *)sub_1EAA840(a1: v123, a2: v125, a3: v174, a4: v124, a5: v125);
            v23 = v154;
            LODWORD(v7) = v168;
            goto LABEL_91;
          }
          ++*(_DWORD *)(v9 + 8 * v40 + 4);
          v41 = *(unsigned int *)(v9 + 8 * v40 + 12);
          v42 = v9 + 8LL * *(unsigned int *)(v9 + 8 * v40 + 8);
          v157 = (_DWORD *)(v9 + 8 * v40);
          v154 = v36;
          sub_57881C0(a1: v41, a2: v38, a3: v157, a4: v39, a5: v36, a6: v42);
        }
        else
        {
          v154 = v36;
        }
      }
      else
      {
        v154 = v36;
        sub_1ECFCC0(a1: v37, a2: v38, a3: v166, a4: v163, a5: v36, a6: v160);
      }
      v43 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v169)(a1: v37, a2: v38, a3: v166);
      sub_1ECFD80(a1: v45, a2: v46, a3: v163, a4: v44, a5: v43, a6: v154);
      if ( *(int *)(v10 + 16) <= 0 )
        sub_277F280();
      return v154;
    }
  }
  v172 = 34150672;
  v173 = 34082880;
  v169 = v176 + (__int64)(int)v177;
  v56 = sub_50130C0(a1: v177, a2: v15, a3: 41, a4: 34150672, a5: v177);
  v60 = sub_5013440(a1: v58, a2: v59, a3: v56, a4: v57, a5: v169);
  v64 = sub_50130C0(a1: v62, a2: v63, a3: v60, a4: v61, a5: v176);
  if ( (v64 & 0x80000000) != 0 )
  {
    v171 = v64;
    v99 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v99 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v99 = sub_1EAA920(a1: v66, a2: v67, a3: v173);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v99 + 40;
      *(_DWORD *)v99 = 34082880;
      *(_DWORD *)(v99 + 4) = 0;
      *(_QWORD *)(v99 + 8) = 0;
      *(_QWORD *)(v99 + 16) = 0;
      *(_QWORD *)(v99 + 24) = 0;
      *(_QWORD *)(v99 + 32) = 0;
    }
    *(_DWORD *)(v99 + 20) = 46923644;
    *(_DWORD *)(v99 + 16) = *(_DWORD *)(v9 + 374343896);
    *(_DWORD *)(v99 + 12) = (unsigned __int64)(v99 - v9) >> 3;
    v162 = (_DWORD *)v99;
    sub_503B9A0(a1: v66, a2: v67, a3: v99, a4: v65, a5: 0);
    v100 = (__int64)v162;
    v162[2] = 46004603;
    if ( (*(_DWORD *)v100 & 2) != 0 )
    {
      v50 = v100 & 0xFFFFFFFFFFF80000LL;
      v150 = (v100 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v100 & 0xFFFFFFFFFFF80000LL) + ((v100 - v150) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v100 & 0xFFFFFFFFFFF80000LL) + ((v100 - v150) >> 9) + 0x38) = 0;
      v49 = v100;
    }
    else
    {
      v49 = v100;
    }
    goto LABEL_47;
  }
  v68 = *(_DWORD **)(v10 + 40);
  v69 = *(_QWORD *)(v10 + 32);
  v70 = (v64 + 19LL) & 0x1FFFFFFF8LL;
  if ( v70 >= 0x20000 )
    goto LABEL_54;
  goto LABEL_77;
}
