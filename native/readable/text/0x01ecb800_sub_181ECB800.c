// sub_1ECB800
// rva 0x01ecb800  size 5322  section .text  group text
// window base 0x181ecb800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ECB800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // r11
  unsigned __int64 v16; // rdi
  unsigned __int64 i; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 j; // rax
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  char *v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r9
  __int16 v33; // dx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  _DWORD *v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 result; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  unsigned __int64 v54; // r9
  char *v55; // rdx
  __int64 v56; // rax
  _DWORD *v57; // rax
  _DWORD *v58; // rdx
  _DWORD *v59; // r8
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  unsigned int v64; // eax
  __int64 v65; // rdi
  _DWORD *v66; // rbp
  __int64 v67; // rcx
  __int64 v68; // rsi
  _DWORD *v69; // rdx
  unsigned __int64 v70; // r9
  __int64 v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdx
  _DWORD *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  char *v83; // rax
  unsigned __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  unsigned int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rcx
  unsigned int v97; // ebp
  _DWORD *v98; // rdx
  unsigned __int64 v99; // r9
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // eax
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rdx
  char *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  _DWORD *v112; // rcx
  _DWORD *v113; // rdx
  _DWORD *v114; // r8
  unsigned int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rsi
  unsigned int v119; // eax
  __int64 v120; // rdi
  _DWORD *v121; // rbp
  __int64 v122; // rcx
  __int64 v123; // rsi
  _DWORD *v124; // rdx
  unsigned __int64 v125; // r9
  __int64 v126; // rcx
  unsigned int v127; // eax
  __int64 v128; // rcx
  unsigned int v129; // eax
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rdx
  _DWORD *v133; // rax
  __int64 v134; // rdx
  char *v135; // rax
  __int64 v136; // rdx
  unsigned __int64 v137; // rdx
  __int64 v138; // rdx
  unsigned __int64 v139; // rdx
  char *v140; // r9
  __int64 v141; // r11
  char *v142; // r9
  __int64 v143; // r11
  __int64 v144; // rdx
  unsigned __int64 v145; // rdx
  char *v146; // r9
  __int64 v147; // r11
  unsigned __int64 v148; // rax
  unsigned __int64 v149; // rax
  unsigned __int64 v150; // rax
  int v151; // edx
  int v152; // ecx
  int v153; // edi
  int v154; // esi
  int v155; // r8d
  int v156; // r9d
  char v157; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v158; // [rsp+8h] [rbp-F0h]
  _DWORD *v159; // [rsp+10h] [rbp-E8h]
  __int64 v160; // [rsp+18h] [rbp-E0h]
  _DWORD *v161; // [rsp+28h] [rbp-D0h]
  _DWORD *v162; // [rsp+30h] [rbp-C8h]
  _DWORD *v163; // [rsp+38h] [rbp-C0h]
  __int64 v164; // [rsp+40h] [rbp-B8h]
  __int64 v165; // [rsp+48h] [rbp-B0h]
  __int64 v166; // [rsp+50h] [rbp-A8h]
  _DWORD *v167; // [rsp+58h] [rbp-A0h]
  _DWORD *v168; // [rsp+60h] [rbp-98h]
  __int64 v169; // [rsp+68h] [rbp-90h]
  int v170; // [rsp+70h] [rbp-88h]
  int v171; // [rsp+74h] [rbp-84h]
  __int64 v172; // [rsp+78h] [rbp-80h]
  _DWORD *v173; // [rsp+80h] [rbp-78h]
  _DWORD *v174; // [rsp+88h] [rbp-70h]
  __int64 v175; // [rsp+90h] [rbp-68h]
  unsigned int *v176; // [rsp+98h] [rbp-60h]
  _DWORD *v177; // [rsp+A0h] [rbp-58h]
  unsigned int v178; // [rsp+A8h] [rbp-50h]
  unsigned int v179; // [rsp+ACh] [rbp-4Ch]
  __int64 (__fastcall *v180)(__int64, __int64, _DWORD *); // [rsp+B0h] [rbp-48h]
  unsigned int v181; // [rsp+BCh] [rbp-3Ch]
  unsigned int v182; // [rsp+C0h] [rbp-38h]
  unsigned int v183; // [rsp+C4h] [rbp-34h]
  __int64 v184; // [rsp+C8h] [rbp-30h]
  __int64 v185; // [rsp+D0h] [rbp-28h]
  __int64 v186; // [rsp+D8h] [rbp-20h]
  unsigned int v187; // [rsp+E4h] [rbp-14h]
  __int64 v188; // [rsp+E8h] [rbp-10h]
  signed int v189; // [rsp+F0h] [rbp-8h]
  unsigned int v190; // [rsp+F4h] [rbp-4h]

  v177 = (_DWORD *)a3;
  v176 = a5;
  v175 = a1;
  if ( (unsigned __int64)&v157 <= *(_QWORD *)(v11 + 8) )
  {
    v190 = a2;
    v172 = a6;
    sub_1EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v157);
    goto LABEL_49;
  }
  v12 = a5[3];
  v13 = a5[4];
  v7 = (unsigned __int64)&v10[2 * v13];
  v174 = (_DWORD *)v7;
  v8 = (unsigned __int64)&v10[2 * v12];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_49:
    v173 = (_DWORD *)v8;
    v190 = a2;
    v172 = a6;
    sub_2771080();
    goto LABEL_50;
  }
  v171 = v12;
  v170 = v13;
  v14 = v10[2 * v13 + 2];
  v189 = v14;
  if ( v14 != 0 )
  {
    v15 = *(_QWORD *)(v11 + 40);
    v16 = (4LL * v14 + 19) & 0x7FFFFFFF8LL;
    if ( v16 >= 0x20000 || (v13 = v15 + v16, v15 + v16 > *(_QWORD *)(v11 + 32)) )
    {
      v173 = &v10[2 * v12];
      v190 = a2;
      v172 = a6;
      v169 = sub_1EAA840(a1: v16, a2, a3: 34085384, a4: v13, a5: v189);
      v14 = v189;
      v8 = (unsigned __int64)v173;
      v7 = (unsigned __int64)v174;
      LODWORD(a2) = v190;
      a6 = v172;
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_QWORD *)v15 = 34085384;
      *(_DWORD *)(v15 + 8) = v14;
      *(_DWORD *)(v15 + 12) = 0;
      if ( v16 - 16 >= 0x800 )
      {
        v173 = &v10[2 * v12];
        v190 = a2;
        v172 = a6;
        memset((void *)(v15 + 16), 0, v16 - 16);
      }
      else
      {
        for ( i = 16; v16 > i; i += 8LL )
          *(_QWORD *)(v15 + i) = 0;
      }
      v169 = v15;
    }
  }
  else
  {
    v169 = (__int64)(v10 + 94164956);
  }
  LODWORD(v18) = 34082680;
  v19 = 35317296;
  v188 = 34082368;
  if ( v14 == 0 )
  {
    v187 = 0;
    v186 = 34082880;
    v185 = 35317296;
    v184 = 34082680;
    v173 = (_DWORD *)v8;
    v190 = a2;
    v172 = a6;
    goto LABEL_32;
  }
  v186 = 34082880;
  v185 = 35317296;
  v184 = 34082680;
  v173 = (_DWORD *)v8;
  v190 = a2;
  v172 = a6;
  v20 = sub_1ECF0C0(
          a1: v175,
          a2,
          a3: (_DWORD)v177,
          a4: (int)v10 + 8 * v10[2 * v170 + 3],
          a5: v175,
          a6: (int)v10 + 8 * v10[2 * v170 + 3],
          a7: v157);
  v18 = v169;
  LODWORD(v7) = *(_DWORD *)(v169 + 8);
  if ( (_DWORD)v7 == 0 )
  {
    sub_2771220(a1: v21, a2, a3: 0, a4: v169, a5: 0);
LABEL_92:
    sub_2771080();
    goto LABEL_93;
  }
  *(_DWORD *)(v169 + 12) = (unsigned __int64)(v20 - (_QWORD)v10) >> 3;
  if ( (*(_DWORD *)v18 & 2) != 0 )
  {
    if ( (*(_DWORD *)v18 & 1) != 0 )
    {
      v55 = (char *)(v18 - *(_QWORD *)(v18 - 8));
      if ( v55[48] != 0 )
        v55[48] = 0;
    }
    else
    {
      v54 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v54) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v54) >> 9) + 0x38) = 0;
    }
  }
  if ( (_DWORD *)v20 == v10 )
    goto LABEL_92;
  v183 = v7;
  if ( (*(_WORD *)(v20 + 66) & 2) == 0 )
  {
LABEL_93:
    v182 = 0;
    goto LABEL_94;
  }
  for ( j = 1; ; j = (unsigned int)(v8 + 1) )
  {
    v7 = (unsigned __int64)v174;
    v19 = v175;
    if ( v189 <= (int)j )
    {
      v187 = j;
LABEL_32:
      v29 = sub_1ECF0C0(a1: v19, a2, a3: (_DWORD)v177, a4: v18, a5: v175, a6: (_DWORD)v173, a7: v157);
      if ( (_DWORD *)v29 != v10 )
      {
        v168 = (_DWORD *)v29;
        v33 = *(_WORD *)(v29 + 66);
        v34 = v176[2];
        v7 = (unsigned __int64)&v10[2 * v34];
        v167 = (_DWORD *)v7;
        if ( (v33 & 2) == 0 )
        {
          v35 = *(unsigned int *)(v29 + 28);
          if ( (_DWORD)v35 == 0 )
            goto LABEL_71;
          if ( (v10[2 * v35 + 26] & 0x10) != 0 )
            goto LABEL_72;
          sub_1ECAF20(a1: v30, a2: v31, a3: (__int64)v176, a4: v34, a5: (__int64)v176, a6: v32, a7: v157);
          v180 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v9 + *(_QWORD *)&v10[2 * (*v177 >> 3) + 28]);
          v166 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))v180)(
                   a1: v36,
                   a2: v37,
                   a3: v177,
                   a4: v177);
          v165 = sub_27CE280(a1: v38, a2: v39, a3: v175);
          v164 = sub_1ECE160(a1: v41, a2: v42, a3: v177, a4: v40, a5: v165);
          v46 = (_DWORD *)sub_1ECE360(a1: v44, a2: v45, a3: v176, a4: v43, a5: v172);
          v47 = v176[9];
          v163 = &v10[2 * v176[1]];
          v162 = v46;
          v187 = v47;
          v161 = v10 + 13105894;
          v50 = v180(a1: v48, a2: v49, a3: v177);
          v158 = v164;
          v159 = v168;
          v160 = v169;
          sub_2853C80(a1: v187, a2: v50, a3: v161, a4: v165, a5: v162, a6: v163);
          v158 = v166;
          v159 = v168;
          v160 = v169;
          result = sub_284B2C0(a1: v190, a2: v162, a3: v161, a4: v164, a5: v176, a6: v172);
          if ( *(int *)(v11 + 16) <= 0 )
            return sub_277F280(a1: v52, a2: v53, a3: v166, a4: v164);
          return result;
        }
LABEL_51:
        v56 = (__int64)(v10 + 88325320);
        v161 = v10 + 88325320;
        if ( (_DWORD)v34 != 0 )
          v56 = sub_27C6220(a1: v30, a2: v31, a3: v7);
        v165 = v56;
        if ( v171 != 0 )
          v57 = (_DWORD *)sub_27C6220(a1: v30, a2: v31, a3: v173);
        else
          v57 = v161;
        if ( (_DWORD *)v165 == v10 )
          v58 = v161;
        else
          v58 = (_DWORD *)v165;
        if ( v57 == v10 )
          v59 = v161;
        else
          v59 = v57;
        v161 = v57;
        v187 = *((char *)v59 + 12) | *((char *)v58 + 12);
        v167 = v59;
        v164 = (__int64)v58;
        v60 = sub_50132E0(a1: v30, a2: v31, a3: 36, a4: v57, a5: v58);
        v64 = sub_50132E0(a1: v62, a2: v63, a3: v60, a4: v61, a5: v167);
        v179 = v64;
        v7 = v64 - 15;
        v66 = v10 + 14544794;
        v67 = v187;
        v68 = v64 << v187;
        if ( (int)v68 < 0 )
        {
          v189 = v64 - 15;
          v136 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v136 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v178 = v64 << v187;
            v136 = sub_1EAA920(a1: v65, a2: v68, a3: v186);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v136 + 40;
            *(_DWORD *)v136 = 34082880;
            *(_DWORD *)(v136 + 4) = 0;
            *(_QWORD *)(v136 + 8) = 0;
            *(_QWORD *)(v136 + 16) = 0;
            *(_QWORD *)(v136 + 24) = 0;
            *(_QWORD *)(v136 + 32) = 0;
            v178 = v68;
          }
          *(_DWORD *)(v136 + 20) = 46923644;
          *(_DWORD *)(v136 + 16) = v10[93585974];
          *(_DWORD *)(v136 + 12) = (unsigned __int64)(v136 - (_QWORD)v10) >> 3;
          v162 = (_DWORD *)v136;
          sub_503B9A0(a1: v65, a2: v68, a3: v136, a4: v67, a5: 0);
          v137 = (unsigned __int64)v162;
          v162[2] = 46004603;
          if ( (*(_DWORD *)v137 & 2) != 0 )
          {
            v82 = (v137 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v82) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v82) >> 9) + 0x38) = 0;
            v84 = v137;
          }
          else
          {
            v84 = v137;
          }
        }
        else
        {
          v69 = *(_DWORD **)(v11 + 40);
          v70 = ((unsigned int)v68 + 19LL) & 0x1FFFFFFF8LL;
          if ( v70 >= 0x20000 || (unsigned __int64)(v140 = (char *)v69 + v70) > *(_QWORD *)(v11 + 32) )
          {
            v162 = v10 + 14544794;
            v189 = v64 - 15;
            v69 = (_DWORD *)sub_1EAA840(a1: v65, a2: v68, a3: v188, a4: v187, a5: v68);
            v66 = v162;
            LODWORD(v7) = v189;
          }
          else
          {
            v141 = v188;
            *(_QWORD *)(v11 + 40) = v140;
            *(_QWORD *)v69 = v141;
            v69[2] = v68;
          }
          v162 = v69;
          v189 = v7;
          if ( v187 != 0 )
            sub_4FF2C40(a1: 1, a2: v68, a3: v66, a4: v67, a5: v69, a6: (unsigned int)v7);
          else
            sub_1EB4960(a1: (unsigned int)v7, a2: 15, a3: v10 + 94164960, a4: v67, a5: 0, a6: v162, a7: v157);
          v72 = sub_5011A80(a1: v167, a2: v10 + 14544800, a3: (unsigned int)v189, a4: v71, a5: v187, a6: v162);
          v74 = sub_5011A80(a1: v164, a2: v10 + 14544806, a3: v72, a4: v73, a5: v187, a6: v162);
          v77 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v77 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v179 = v74;
            v77 = sub_1EAA920(a1: v75, a2: v76, a3: v185);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v77 + 40;
            *(_DWORD *)v77 = 35317296;
            *(_DWORD *)(v77 + 4) = 0;
            *(_QWORD *)(v77 + 8) = 0;
            *(_QWORD *)(v77 + 16) = 0;
            *(_QWORD *)(v77 + 24) = 0;
            *(_QWORD *)(v77 + 32) = 0;
          }
          v165 = v77;
          *(_DWORD *)(v77 + 20) = 46923644;
          *(_DWORD *)(v77 + 16) = v10[93585974];
          *(_DWORD *)(v77 + 12) = (unsigned __int64)(v77 - (_QWORD)v10) >> 3;
          v179 = (char)v187;
          v78 = (_DWORD *)sub_503B9A0(a1: v75, a2: v76, a3: v77, a4: v77, a5: 0);
          v81 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v81 + 24) > *(_QWORD *)(v11 + 32) )
          {
            v161 = v78;
            v81 = sub_1EAA920(a1: v79, a2: v80, a3: v184);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v81 + 24;
            *(_DWORD *)v81 = 34082680;
            *(_DWORD *)(v81 + 4) = 0;
            *(_QWORD *)(v81 + 8) = 0;
            *(_QWORD *)(v81 + 16) = 0;
          }
          v82 = v165;
          v83 = (char *)v162;
          v7 = v187;
          *(_BYTE *)(v81 + 12) = v187;
          *(_DWORD *)(v81 + 4) = (unsigned __int64)(v83 - (char *)v10) >> 3;
          *(_DWORD *)(v82 + 8) = (unsigned __int64)(v81 - (_QWORD)v10) >> 3;
          if ( (*(_DWORD *)v82 & 2) != 0 )
          {
            v148 = (v82 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v148) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v148) >> 9) + 0x38) = 0;
            v84 = v82;
          }
          else
          {
            v84 = v82;
          }
        }
        while ( 1 )
        {
LABEL_70:
          sub_2769900(a1: v79, a2: v80, a3: v84, a4: v82, a5: &a7);
LABEL_71:
          sub_2771080();
LABEL_72:
          v166 = (__int64)(v10 + 88325320);
          if ( (_DWORD)v34 != 0 )
          {
            v165 = sub_27C6220(a1: v30, a2: v31, a3: v7);
            v85 = v171;
          }
          else
          {
            v85 = v171;
            v165 = (__int64)(v10 + 88325320);
          }
          if ( v85 != 0 )
            v86 = sub_27C6220(a1: v30, a2: v31, a3: v173);
          else
            v86 = v166;
          if ( (_DWORD *)v165 == v10 )
            v87 = v166;
          else
            v87 = v165;
          if ( (_DWORD *)v86 == v10 )
            v88 = v166;
          else
            v88 = v86;
          v166 = v86;
          v187 = *(char *)(v88 + 12) | *(char *)(v87 + 12);
          v164 = v88;
          v162 = (_DWORD *)v87;
          v89 = sub_50132E0(a1: v30, a2: v31, a3: 36, a4: v86, a5: v87);
          v93 = sub_50132E0(a1: v91, a2: v92, a3: v89, a4: v90, a5: v164);
          v7 = (unsigned __int64)(v10 + 93320312);
          v96 = v187;
          v97 = v93 << v187;
          if ( ((v93 << v187) & 0x80000000) != 0 )
          {
            v189 = v93;
            v138 = *(_QWORD *)(v11 + 40);
            if ( (unsigned __int64)(v138 + 40) > *(_QWORD *)(v11 + 32) )
            {
              v179 = v93 << v187;
              v138 = sub_1EAA920(a1: v94, a2: v95, a3: v186);
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v138 + 40;
              *(_DWORD *)v138 = 34082880;
              *(_DWORD *)(v138 + 4) = 0;
              *(_QWORD *)(v138 + 8) = 0;
              *(_QWORD *)(v138 + 16) = 0;
              *(_QWORD *)(v138 + 24) = 0;
              *(_QWORD *)(v138 + 32) = 0;
              v179 = v97;
            }
            *(_DWORD *)(v138 + 20) = 46923644;
            *(_DWORD *)(v138 + 16) = v10[93585974];
            *(_DWORD *)(v138 + 12) = (unsigned __int64)(v138 - (_QWORD)v10) >> 3;
            v161 = (_DWORD *)v138;
            sub_503B9A0(a1: v94, a2: v95, a3: v138, a4: v96, a5: 0);
            v139 = (unsigned __int64)v161;
            v161[2] = 46004603;
            if ( (*(_DWORD *)v139 & 2) != 0 )
            {
              v82 = (v139 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v139 & 0xFFFFFFFFFFF80000LL) + ((v139 - v82) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v139 & 0xFFFFFFFFFFF80000LL) + ((v139 - v82) >> 9) + 0x38) = 0;
              v84 = v139;
            }
            else
            {
              v84 = v139;
            }
          }
          else
          {
            v98 = *(_DWORD **)(v11 + 40);
            v99 = (v97 + 19LL) & 0x1FFFFFFF8LL;
            if ( v99 >= 0x20000 || (unsigned __int64)(v142 = (char *)v98 + v99) > *(_QWORD *)(v11 + 32) )
            {
              v161 = v10 + 93320312;
              v189 = v93;
              v98 = (_DWORD *)sub_1EAA840(a1: v94, a2: v95, a3: v188, a4: v187, a5: v97);
              v7 = (unsigned __int64)v161;
              v93 = v189;
            }
            else
            {
              v143 = v188;
              *(_QWORD *)(v11 + 40) = v142;
              *(_QWORD *)v98 = v143;
              v98[2] = v97;
            }
            v161 = v98;
            v189 = v93;
            if ( v187 != 0 )
              sub_4FF2C40(a1: 1, a2: v95, a3: v7, a4: v98, a5: v98, a6: v93);
            else
              sub_1EB4960(a1: v93, a2: 0, a3: v10 + 94087886, a4: v187, a5: 0, a6: v161, a7: v157);
            v101 = sub_5011A80(
                     a1: v164,
                     a2: v10 + 14544812,
                     a3: (unsigned int)v189,
                     a4: v100,
                     a5: v187,
                     a6: v161);
            v103 = sub_5011A80(a1: v162, a2: v10 + 14544818, a3: v101, a4: v102, a5: v187, a6: v161);
            v106 = *(_QWORD *)(v11 + 40);
            if ( (unsigned __int64)(v106 + 40) > *(_QWORD *)(v11 + 32) )
            {
              v179 = v103;
              v106 = sub_1EAA920(a1: v104, a2: v105, a3: v185);
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v106 + 40;
              *(_DWORD *)v106 = 35317296;
              *(_DWORD *)(v106 + 4) = 0;
              *(_QWORD *)(v106 + 8) = 0;
              *(_QWORD *)(v106 + 16) = 0;
              *(_QWORD *)(v106 + 24) = 0;
              *(_QWORD *)(v106 + 32) = 0;
            }
            v165 = v106;
            *(_DWORD *)(v106 + 20) = 46923644;
            *(_DWORD *)(v106 + 16) = v10[93585974];
            *(_DWORD *)(v106 + 12) = (unsigned __int64)(v106 - (_QWORD)v10) >> 3;
            v179 = (char)v187;
            v107 = sub_503B9A0(a1: v104, a2: v105, a3: v106, a4: v106, a5: 0);
            v108 = *(_QWORD *)(v11 + 40);
            if ( (unsigned __int64)(v108 + 24) > *(_QWORD *)(v11 + 32) )
            {
              v164 = v107;
              v108 = sub_1EAA920(a1: v79, a2: v80, a3: v184);
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v108 + 24;
              *(_DWORD *)v108 = 34082680;
              *(_DWORD *)(v108 + 4) = 0;
              *(_QWORD *)(v108 + 8) = 0;
              *(_QWORD *)(v108 + 16) = 0;
            }
            v82 = v165;
            v109 = (char *)v161;
            v7 = v187;
            *(_BYTE *)(v108 + 12) = v187;
            *(_DWORD *)(v108 + 4) = (unsigned __int64)(v109 - (char *)v10) >> 3;
            *(_DWORD *)(v82 + 8) = (unsigned __int64)(v108 - (_QWORD)v10) >> 3;
            if ( (*(_DWORD *)v82 & 2) != 0 )
            {
              v149 = (v82 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v149) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v149) >> 9) + 0x38) = 0;
              v84 = v82;
            }
            else
            {
              v84 = v82;
            }
          }
        }
      }
LABEL_50:
      sub_2771080();
      goto LABEL_51;
    }
    if ( v189 <= (unsigned int)j )
      break;
    v23 = (_DWORD)v10 + 8 * v174[j + 3];
    v181 = j;
    v24 = sub_1ECF0C0(a1: v175, a2: (_DWORD)v177, a3: (_DWORD)v177, a4: v18, a5: v175, a6: v23, a7: v157);
    LODWORD(v7) = v183;
    if ( v183 <= v181 )
      goto LABEL_172;
    v8 = v181;
    v18 = v169;
    *(_DWORD *)(v169 + 4LL * v181 + 12) = (unsigned __int64)(v24 - (_QWORD)v10) >> 3;
    if ( (*(_DWORD *)v18 & 2) != 0 )
    {
      if ( (*(_DWORD *)v18 & 1) != 0 )
      {
        v27 = (char *)(v18 - *(_QWORD *)(v18 - 8));
        v28 = (4 * v8 + 12) >> 9;
        if ( v27[v28 + 48] != 0 )
          v27[v28 + 48] = 0;
      }
      else
      {
        v26 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v26) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v26) >> 9) + 0x38) = 0;
      }
    }
    if ( (_DWORD *)v24 == v10 )
      goto LABEL_173;
    if ( (*(_WORD *)(v24 + 66) & 2) == 0 )
      goto LABEL_174;
  }
  sub_2771220(a1: v175, a2, a3: (unsigned int)j, a4: v18, a5: (unsigned int)v189);
LABEL_172:
  sub_2771220(a1: v21, a2, a3: v181, a4: v25, a5: (unsigned int)v7);
LABEL_173:
  sub_2771080();
LABEL_174:
  v182 = v8;
LABEL_94:
  v110 = v176[2];
  v162 = v10 + 88325320;
  if ( (_DWORD)v110 != 0 )
  {
    v161 = &v10[2 * v110];
    v165 = sub_27C6220();
    LODWORD(v7) = v183;
  }
  else
  {
    v165 = (__int64)(v10 + 88325320);
  }
  if ( (unsigned int)v7 > v182 )
  {
    v111 = *(unsigned int *)(v169 + 4LL * v182 + 12);
    if ( (_DWORD)v111 != 0 )
    {
      v161 = &v10[2 * v111];
      v112 = (_DWORD *)sub_4F6D020();
    }
    else
    {
      v112 = v162;
    }
    if ( (_DWORD *)v165 == v10 )
      v113 = v162;
    else
      v113 = (_DWORD *)v165;
    if ( v112 == v10 )
      v114 = v162;
    else
      v114 = v112;
    v162 = v112;
    v183 = *((char *)v114 + 12) | *((char *)v113 + 12);
    v161 = v114;
    v168 = v113;
    v115 = sub_50132E0(a1: v21, a2, a3: 56, a4: v112, a5: v113);
    v119 = sub_50132E0(a1: v117, a2: v118, a3: v115, a4: v116, a5: v161);
    v187 = v119;
    v7 = v119 - 32;
    v121 = v10 + 14544824;
    v122 = v183;
    v123 = v119 << v183;
    if ( (int)v123 < 0 )
    {
      v179 = v119 - 32;
      v144 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v144 + 40) > *(_QWORD *)(v11 + 32) )
      {
        v189 = v119 << v183;
        v144 = sub_1EAA920(a1: v120, a2: v123, a3: v186);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v144 + 40;
        *(_DWORD *)v144 = 34082880;
        *(_DWORD *)(v144 + 4) = 0;
        *(_QWORD *)(v144 + 8) = 0;
        *(_QWORD *)(v144 + 16) = 0;
        *(_QWORD *)(v144 + 24) = 0;
        *(_QWORD *)(v144 + 32) = 0;
        v189 = v123;
      }
      *(_DWORD *)(v144 + 20) = 46923644;
      *(_DWORD *)(v144 + 16) = v10[93585974];
      *(_DWORD *)(v144 + 12) = (unsigned __int64)(v144 - (_QWORD)v10) >> 3;
      v167 = (_DWORD *)v144;
      sub_503B9A0(a1: v120, a2: v123, a3: v144, a4: v122, a5: 0);
      v145 = (unsigned __int64)v167;
      v167[2] = 46004603;
      if ( (*(_DWORD *)v145 & 2) != 0 )
      {
        v82 = (v145 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v145 & 0xFFFFFFFFFFF80000LL) + ((v145 - v82) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v145 & 0xFFFFFFFFFFF80000LL) + ((v145 - v82) >> 9) + 0x38) = 0;
        v84 = v145;
      }
      else
      {
        v84 = v145;
      }
    }
    else
    {
      v124 = *(_DWORD **)(v11 + 40);
      v125 = ((unsigned int)v123 + 19LL) & 0x1FFFFFFF8LL;
      if ( v125 >= 0x20000 || (unsigned __int64)(v146 = (char *)v124 + v125) > *(_QWORD *)(v11 + 32) )
      {
        v167 = v10 + 14544824;
        v179 = v119 - 32;
        v124 = (_DWORD *)sub_1EAA840(a1: v120, a2: v123, a3: v188, a4: v183, a5: v123);
        v121 = v167;
        LODWORD(v7) = v179;
      }
      else
      {
        v147 = v188;
        *(_QWORD *)(v11 + 40) = v146;
        *(_QWORD *)v124 = v147;
        v124[2] = v123;
      }
      v167 = v124;
      v179 = v7;
      if ( v183 != 0 )
        sub_4FF2C40(a1: 1, a2: v123, a3: v121, a4: v122, a5: v124, a6: (unsigned int)v7);
      else
        sub_1EB4960(a1: (unsigned int)v7, a2: 32, a3: v10 + 94164968, a4: v122, a5: 0, a6: v167, a7: v157);
      v127 = sub_5011A80(a1: v161, a2: v10 + 14544830, a3: v179, a4: v126, a5: v183, a6: v167);
      v129 = sub_5011A80(a1: v168, a2: v10 + 14544836, a3: v127, a4: v128, a5: v183, a6: v167);
      v132 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v132 + 40) > *(_QWORD *)(v11 + 32) )
      {
        v187 = v129;
        v132 = sub_1EAA920(a1: v130, a2: v131, a3: v185);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v132 + 40;
        *(_DWORD *)v132 = 35317296;
        *(_DWORD *)(v132 + 4) = 0;
        *(_QWORD *)(v132 + 8) = 0;
        *(_QWORD *)(v132 + 16) = 0;
        *(_QWORD *)(v132 + 24) = 0;
        *(_QWORD *)(v132 + 32) = 0;
      }
      v165 = v132;
      *(_DWORD *)(v132 + 20) = 46923644;
      *(_DWORD *)(v132 + 16) = v10[93585974];
      *(_DWORD *)(v132 + 12) = (unsigned __int64)(v132 - (_QWORD)v10) >> 3;
      v187 = (char)v183;
      v133 = (_DWORD *)sub_503B9A0(a1: v130, a2: v131, a3: v132, a4: v132, a5: 0);
      v134 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v134 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v162 = v133;
        v134 = sub_1EAA920(a1: v79, a2: v80, a3: v184);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v134 + 24;
        *(_DWORD *)v134 = 34082680;
        *(_DWORD *)(v134 + 4) = 0;
        *(_QWORD *)(v134 + 8) = 0;
        *(_QWORD *)(v134 + 16) = 0;
      }
      v82 = v165;
      v135 = (char *)v167;
      v7 = v183;
      *(_BYTE *)(v134 + 12) = v183;
      *(_DWORD *)(v134 + 4) = (unsigned __int64)(v135 - (char *)v10) >> 3;
      *(_DWORD *)(v82 + 8) = (unsigned __int64)(v134 - (_QWORD)v10) >> 3;
      if ( (*(_DWORD *)v82 & 2) != 0 )
      {
        v150 = (v82 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v150) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v82 & 0xFFFFFFFFFFF80000LL) + ((v82 - v150) >> 9) + 0x38) = 0;
        v84 = v82;
      }
      else
      {
        v84 = v82;
      }
    }
    goto LABEL_70;
  }
  sub_2771220(a1: v174, a2: v177, a3: v182, a4: v182, a5: (unsigned int)v7, a6: v175);
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
  return sub_1ECCCE0(a1: v153, a2: v154, a3: v151, a4: v152, a5: v155, a6: v156, a7);
}
