// sub_18159E420
// rva 0x0159e420  size 4774  section .text  group text
// window base 0x18159e420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159E420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rbp
  unsigned int v18; // ebp
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // rdi
  __int64 v115; // rsi
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 result; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  unsigned int v124; // eax
  __int64 v125; // rdi
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // r8
  unsigned __int64 v129; // r9
  unsigned __int64 v130; // rdi
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // rsi
  _DWORD *v140; // rdx
  char *v141; // rax
  unsigned __int64 v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // r8
  __int64 v148; // rdx
  __int64 v149; // rdx
  int v150; // eax
  __int64 v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rsi
  __int64 v154; // r8
  unsigned __int64 v155; // r9
  unsigned __int64 v156; // rdi
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rsi
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rdi
  __int64 v166; // rsi
  _DWORD *v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rdx
  char *v170; // r8
  _DWORD *v171; // rdx
  unsigned __int64 v172; // rdx
  unsigned __int64 v173; // rbx
  unsigned __int64 v174; // rbx
  unsigned __int64 v175; // rbx
  unsigned __int64 v176; // rbx
  char v177; // [rsp+0h] [rbp-78h] BYREF
  __int64 v178; // [rsp+10h] [rbp-68h]
  char *v179; // [rsp+18h] [rbp-60h]
  char *v180; // [rsp+20h] [rbp-58h]
  __int64 v181; // [rsp+28h] [rbp-50h]
  __int64 v182; // [rsp+30h] [rbp-48h]
  int v183; // [rsp+38h] [rbp-40h]
  int v184; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v185; // [rsp+40h] [rbp-38h]
  unsigned int v186; // [rsp+44h] [rbp-34h]
  unsigned int v187; // [rsp+48h] [rbp-30h]
  unsigned int v188; // [rsp+4Ch] [rbp-2Ch]
  __int64 v189; // [rsp+50h] [rbp-28h]
  __int64 v190; // [rsp+58h] [rbp-20h]
  __int64 v191; // [rsp+60h] [rbp-18h]
  __int64 v192; // [rsp+68h] [rbp-10h]
  __int64 v193; // [rsp+70h] [rbp-8h]

  v182 = a3;
  if ( (unsigned __int64)&v177 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( (char *)a3 != v8 )
  {
    v10 = MEMORY[0x184FF3F80](a1, a2, a3, a4, a5: 58);
    v13 = 34082680;
    v14 = 34081944;
    v192 = 34082368;
    v15 = 34082880;
    if ( v10 < 1 )
    {
LABEL_88:
      v191 = v15;
      v190 = v14;
      v189 = v13;
      v188 = v10;
      v123 = v182;
      goto LABEL_89;
    }
    v16 = v182;
    v17 = *(unsigned int *)(v182 + 4);
    if ( (_DWORD)v17 == 0 )
    {
      v188 = v10;
      v10 = MEMORY[0x182771080](a1: v11, a2: v12, a3: 34081944, a4: 34082680, a5: 34082368, a6: 34082880);
      goto LABEL_104;
    }
    v189 = 34082680;
    v12 = (unsigned int)*(char *)(v182 + 12);
    v13 = v12;
    v18 = (*(_DWORD *)&v8[8 * v17 + 8] >> *(_BYTE *)(v182 + 12)) - 1;
    if ( v10 == v18 )
    {
LABEL_104:
      v191 = v15;
      v190 = v14;
      v188 = v10;
      v123 = v16;
LABEL_89:
      v124 = MEMORY[0x1850132E0](a1: v11, a2: v12, a3: 25, a4: v13, a5: v123);
      v18 = *(char *)(v182 + 12);
      v126 = v18;
      v127 = v124 << *(_BYTE *)(v182 + 12);
      if ( (int)v127 < 0 )
        goto LABEL_99;
      v185 = *(char *)(v182 + 12);
      v128 = *(_QWORD *)(v9 + 40);
      v129 = *(_QWORD *)(v9 + 32);
      v130 = ((unsigned int)v127 + 19LL) & 0x1FFFFFFF8LL;
      if ( v130 >= 0x20000 )
        goto LABEL_91;
      goto LABEL_124;
    }
    v191 = 34082880;
    v190 = 34081944;
    v188 = v10;
    v181 = MEMORY[0x184FFD140](a1: v11, a2: v12, a3: v182, a4: v12, a5: 0, a6: (unsigned int)v10);
    v185 = sub_18159D3E0(a1: v20, a2: v21, a3: v182, a4: v19, a5: v188, a6: v22, a7: v177);
    v25 = *((unsigned int *)v8 + 94153391);
    if ( (_DWORD)v25 == 0 )
    {
      MEMORY[0x182771080](a1: v23, a2: v24, a3: v25, a4: &v8[8 * v25]);
LABEL_106:
      MEMORY[0x182771080](a1: v28, a2: v29, a3: v187);
LABEL_107:
      MEMORY[0x182771080](a1: v33, a2: v34, a3: v186);
LABEL_108:
      MEMORY[0x182771080](a1: v38, a2: v39, a3: v187);
LABEL_109:
      MEMORY[0x182771080](a1: v43, a2: v44, a3: v186);
LABEL_110:
      MEMORY[0x182771080](a1: v48, a2: v49, a3: v187);
LABEL_111:
      MEMORY[0x182771080](a1: v53, a2: v54, a3: v186);
LABEL_112:
      MEMORY[0x182771080](a1: v58, a2: v59, a3: v187);
LABEL_113:
      MEMORY[0x182771080](a1: v63, a2: v64, a3: v186);
LABEL_114:
      MEMORY[0x182771080](a1: v68, a2: v69, a3: v187);
LABEL_115:
      MEMORY[0x182771080](a1: v73, a2: v74, a3: v186);
LABEL_116:
      MEMORY[0x182771080](a1: v78, a2: v79, a3: v187);
LABEL_117:
      MEMORY[0x182771080](a1: v83, a2: v84, a3: v186);
LABEL_118:
      MEMORY[0x182771080](a1: v88, a2: v89, a3: v187);
LABEL_119:
      MEMORY[0x182771080](a1: v93, a2: v94, a3: v186);
LABEL_120:
      MEMORY[0x182771080](a1: v98, a2: v99, a3: v187);
LABEL_121:
      MEMORY[0x182771080](a1: v103, a2: v104, a3: v186);
LABEL_122:
      MEMORY[0x182771080](a1: v108, a2: v109, a3: v187);
LABEL_123:
      v124 = MEMORY[0x182771080](a1: v114, a2: v115, a3: v113, a4: v186);
LABEL_124:
      v130 += v128;
      if ( v130 <= v129 )
      {
        v131 = v192;
        *(_QWORD *)(v9 + 40) = v130;
        *(_QWORD *)v128 = v131;
        *(_DWORD *)(v128 + 8) = v127;
        v186 = v124;
        goto LABEL_92;
      }
LABEL_91:
      v187 = v18;
      v186 = v124;
      v128 = MEMORY[0x181EAA840](a1: v130, a2: v127, a3: v192, a4: v192, a5: (unsigned int)v127, a6: v129);
      v18 = v187;
LABEL_92:
      v181 = v128;
      v187 = v18;
      MEMORY[0x184FF2C40](a1: v18, a2: v128, a3: v8 + 57669528, a4: v131, a5: v128, a6: 0);
      MEMORY[0x184FF2C40](a1: v187, a2: v133, a3: v182, a4: v132, a5: v181, a6: 1);
      v136 = *(unsigned int *)(v182 + 4);
      if ( (_DWORD)v136 == 0 )
      {
        MEMORY[0x182771080](a1: v134, a2: v135, a3: v182, a4: v136, a5: v181);
        goto LABEL_161;
      }
      MEMORY[0x184FF2C40](
        a1: v187,
        a2: v135,
        a3: v8 + 57669552,
        a4: (unsigned int)*(char *)(v182 + 12),
        a5: v181,
        a6: (unsigned int)((*(_DWORD *)&v8[8 * v136 + 8] >> *(_BYTE *)(v182 + 12)) + 1));
      v140 = *(_DWORD **)(v9 + 40);
      if ( (unsigned __int64)(v140 + 10) > *(_QWORD *)(v9 + 32) )
      {
        v140 = (_DWORD *)MEMORY[0x181EAA920](a1: v138, a2: v139, a3: v190);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v140 + 10;
        *v140 = 34081944;
        v140[1] = 0;
        *((_QWORD *)v140 + 1) = 0;
        *((_QWORD *)v140 + 2) = 0;
        *((_QWORD *)v140 + 3) = 0;
        *((_QWORD *)v140 + 4) = 0;
      }
      v180 = (char *)v140;
      v140[5] = 46923644;
      v140[4] = *((_DWORD *)v8 + 93585974);
      v140[3] = (unsigned __int64)((char *)v140 - v8) >> 3;
      v141 = (char *)MEMORY[0x18503B9A0](a1: v138, a2: v139, a3: v140, a4: v137, a5: 0);
      v145 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v145 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v179 = v141;
        v145 = MEMORY[0x181EAA920](a1: v143, a2: v144, a3: v189);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v145 + 24;
        *(_DWORD *)v145 = 34082680;
        *(_DWORD *)(v145 + 4) = 0;
        *(_QWORD *)(v145 + 8) = 0;
        *(_QWORD *)(v145 + 16) = 0;
      }
      v146 = (__int64)v180;
      v147 = v181;
      *(_BYTE *)(v145 + 12) = v185;
      *(_DWORD *)(v145 + 4) = (unsigned __int64)(v147 - (_QWORD)v8) >> 3;
      *(_DWORD *)(v146 + 8) = (unsigned __int64)(v145 - (_QWORD)v8) >> 3;
      if ( (*(_DWORD *)v146 & 2) != 0 )
      {
        v142 = v146 & 0xFFFFFFFFFFF80000LL;
        v174 = (v146 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v174) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v174) >> 9) + 0x38) = 0;
      }
      while ( 1 )
      {
LABEL_98:
        v124 = MEMORY[0x182769900](a1: v143, a2: v144, a3: v146, a4: v142, a5: &a7);
LABEL_99:
        v187 = v18;
        v186 = v124;
        v148 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v148 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v185 = v127;
          v148 = MEMORY[0x181EAA920](a1: v125, a2: v127, a3: v191);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v148 + 40;
          *(_DWORD *)v148 = 34082880;
          *(_DWORD *)(v148 + 4) = 0;
          *(_QWORD *)(v148 + 8) = 0;
          *(_QWORD *)(v148 + 16) = 0;
          *(_QWORD *)(v148 + 24) = 0;
          *(_QWORD *)(v148 + 32) = 0;
          v185 = v127;
        }
        *(_DWORD *)(v148 + 20) = 46923644;
        *(_DWORD *)(v148 + 16) = *((_DWORD *)v8 + 93585974);
        *(_DWORD *)(v148 + 12) = (unsigned __int64)(v148 - (_QWORD)v8) >> 3;
        v181 = v148;
        MEMORY[0x18503B9A0](a1: v125, a2: v127, a3: v148, a4: v126, a5: 0);
        v149 = v181;
        *(_DWORD *)(v181 + 8) = 46004603;
        if ( (*(_DWORD *)v149 & 2) != 0 )
        {
          v142 = v149 & 0xFFFFFFFFFFF80000LL;
          v173 = (v149 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v149 & 0xFFFFFFFFFFF80000LL) + ((v149 - v173) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v149 & 0xFFFFFFFFFFF80000LL) + ((v149 - v173) >> 9) + 0x38) = 0;
          v146 = v149;
        }
        else
        {
          v146 = v149;
        }
      }
    }
    v180 = &v8[8 * v25];
    v179 = (char *)MEMORY[0x184F686E0](a1: v23, a2: v24, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v27, a3: (__int64)v179, a4: v26, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153413) = v185;
      v187 = 1;
    }
    else
    {
      v187 = 0;
    }
    v30 = *((unsigned int *)v8 + 94153392);
    if ( (_DWORD)v30 == 0 )
      goto LABEL_106;
    v179 = &v8[8 * v30];
    v180 = (char *)MEMORY[0x184F686E0](a1: v28, a2: v29, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v32, a3: (__int64)v180, a4: v31, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153414) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v35 = *((unsigned int *)v8 + 94153393);
    if ( (_DWORD)v35 == 0 )
      goto LABEL_107;
    v180 = &v8[8 * v35];
    v179 = (char *)MEMORY[0x184F686E0](a1: v33, a2: v34, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v37, a3: (__int64)v179, a4: v36, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153415) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v40 = *((unsigned int *)v8 + 94153394);
    if ( (_DWORD)v40 == 0 )
      goto LABEL_108;
    v179 = &v8[8 * v40];
    v180 = (char *)MEMORY[0x184F686E0](a1: v38, a2: v39, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v42, a3: (__int64)v180, a4: v41, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153416) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v45 = *((unsigned int *)v8 + 94153395);
    if ( (_DWORD)v45 == 0 )
      goto LABEL_109;
    v180 = &v8[8 * v45];
    v179 = (char *)MEMORY[0x184F686E0](a1: v43, a2: v44, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v47, a3: (__int64)v179, a4: v46, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153417) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v50 = *((unsigned int *)v8 + 94153396);
    if ( (_DWORD)v50 == 0 )
      goto LABEL_110;
    v179 = &v8[8 * v50];
    v180 = (char *)MEMORY[0x184F686E0](a1: v48, a2: v49, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v52, a3: (__int64)v180, a4: v51, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153418) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v55 = *((unsigned int *)v8 + 94153397);
    if ( (_DWORD)v55 == 0 )
      goto LABEL_111;
    v180 = &v8[8 * v55];
    v179 = (char *)MEMORY[0x184F686E0](a1: v53, a2: v54, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v57, a3: (__int64)v179, a4: v56, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153419) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v60 = *((unsigned int *)v8 + 94153398);
    if ( (_DWORD)v60 == 0 )
      goto LABEL_112;
    v179 = &v8[8 * v60];
    v180 = (char *)MEMORY[0x184F686E0](a1: v58, a2: v59, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v62, a3: (__int64)v180, a4: v61, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153420) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v65 = *((unsigned int *)v8 + 94153399);
    if ( (_DWORD)v65 == 0 )
      goto LABEL_113;
    v180 = &v8[8 * v65];
    v179 = (char *)MEMORY[0x184F686E0](a1: v63, a2: v64, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v67, a3: (__int64)v179, a4: v66, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153421) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v70 = *((unsigned int *)v8 + 94153400);
    if ( (_DWORD)v70 == 0 )
      goto LABEL_114;
    v179 = &v8[8 * v70];
    v180 = (char *)MEMORY[0x184F686E0](a1: v68, a2: v69, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v72, a3: (__int64)v180, a4: v71, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153422) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v75 = *((unsigned int *)v8 + 94153401);
    if ( (_DWORD)v75 == 0 )
      goto LABEL_115;
    v180 = &v8[8 * v75];
    v179 = (char *)MEMORY[0x184F686E0](a1: v73, a2: v74, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v77, a3: (__int64)v179, a4: v76, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153423) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v80 = *((unsigned int *)v8 + 94153402);
    if ( (_DWORD)v80 == 0 )
      goto LABEL_116;
    v179 = &v8[8 * v80];
    v180 = (char *)MEMORY[0x184F686E0](a1: v78, a2: v79, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v82, a3: (__int64)v180, a4: v81, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153424) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v85 = *((unsigned int *)v8 + 94153403);
    if ( (_DWORD)v85 == 0 )
      goto LABEL_117;
    v180 = &v8[8 * v85];
    v179 = (char *)MEMORY[0x184F686E0](a1: v83, a2: v84, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v87, a3: (__int64)v179, a4: v86, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153425) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v90 = *((unsigned int *)v8 + 94153404);
    if ( (_DWORD)v90 == 0 )
      goto LABEL_118;
    v179 = &v8[8 * v90];
    v180 = (char *)MEMORY[0x184F686E0](a1: v88, a2: v89, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v92, a3: (__int64)v180, a4: v91, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153426) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v95 = *((unsigned int *)v8 + 94153405);
    if ( (_DWORD)v95 == 0 )
      goto LABEL_119;
    v180 = &v8[8 * v95];
    v179 = (char *)MEMORY[0x184F686E0](a1: v93, a2: v94, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v97, a3: (__int64)v179, a4: v96, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153427) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v100 = *((unsigned int *)v8 + 94153406);
    if ( (_DWORD)v100 == 0 )
      goto LABEL_120;
    v179 = &v8[8 * v100];
    v180 = (char *)MEMORY[0x184F686E0](a1: v98, a2: v99, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v102, a3: (__int64)v180, a4: v101, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153428) = v185;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v105 = *((unsigned int *)v8 + 94153407);
    if ( (_DWORD)v105 == 0 )
      goto LABEL_121;
    v180 = &v8[8 * v105];
    v179 = (char *)MEMORY[0x184F686E0](a1: v103, a2: v104, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v107, a3: (__int64)v179, a4: v106, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153429) = v185;
      v187 = v186 + 1;
    }
    else
    {
      v193 = v7;
      v187 = v186;
    }
    v110 = *((unsigned int *)v8 + 94153408);
    if ( (_DWORD)v110 == 0 )
      goto LABEL_122;
    v179 = &v8[8 * v110];
    v180 = (char *)MEMORY[0x184F686E0](a1: v108, a2: v109, a3: &v8[8 * (*(_DWORD *)v179 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v112, a3: (__int64)v180, a4: v111, a5: 0, a6: v181, a7: v177) != 0 )
    {
      *((_DWORD *)v8 + 94153430) = v185;
      v113 = v187 + 1;
      v186 = v187 + 1;
    }
    else
    {
      v193 = v7;
      v186 = v187;
    }
    v116 = *((unsigned int *)v8 + 94153409);
    if ( (_DWORD)v116 == 0 )
      goto LABEL_123;
    v180 = &v8[8 * v116];
    v179 = (char *)MEMORY[0x184F686E0](a1: v114, a2: v115, a3: &v8[8 * (*(_DWORD *)v180 >> 3)]);
    if ( (unsigned int)sub_18159CF00(a1: 0, a2: v118, a3: (__int64)v179, a4: v117, a5: 0, a6: v181, a7: v177) != 0 )
    {
      result = v185;
      *((_DWORD *)v8 + 94153431) = v185;
      v122 = v186 + 1;
      goto LABEL_63;
    }
    result = v185;
    if ( v186 == 0 )
    {
      v150 = MEMORY[0x1850132E0](a1: v119, a2: v120, a3: 46, a4: 0, a5: v182);
      v18 = *(char *)(v182 + 12);
      v152 = v18;
      v153 = (unsigned int)(v150 << *(_BYTE *)(v182 + 12));
      if ( (int)v153 >= 0 )
      {
        v183 = *(char *)(v182 + 12);
        v154 = *(_QWORD *)(v9 + 40);
        v155 = *(_QWORD *)(v9 + 32);
        v156 = ((unsigned int)v153 + 19LL) & 0x1FFFFFFF8LL;
        if ( v156 >= 0x20000 || (v156 += v154, v156 > v155) )
        {
          v187 = v18;
          v184 = v150;
          v154 = MEMORY[0x181EAA840](a1: v156, a2: v153, a3: v192, a4: v192, a5: (unsigned int)v153, a6: v155);
          v18 = v187;
        }
        else
        {
          v157 = v192;
          *(_QWORD *)(v9 + 40) = v156;
          *(_QWORD *)v154 = v157;
          *(_DWORD *)(v154 + 8) = v153;
          v184 = v150;
        }
        v179 = (char *)v154;
        v187 = v18;
        MEMORY[0x184FF2C40](a1: v18, a2: v154, a3: v8 + 57669576, a4: v157, a5: v154, a6: 0);
        MEMORY[0x184FF2C40](a1: v187, a2: v159, a3: v182, a4: v158, a5: v179, a6: 13);
        v162 = v182;
        v163 = *(unsigned int *)(v182 + 4);
        if ( (_DWORD)v163 != 0 )
        {
          MEMORY[0x184FF2C40](
            a1: v187,
            a2: v161,
            a3: v8 + 57669600,
            a4: (unsigned int)*(char *)(v182 + 12),
            a5: v179,
            a6: (unsigned int)((*(_DWORD *)&v8[8 * v163 + 8] >> *(_BYTE *)(v182 + 12)) + 13));
          v167 = *(_DWORD **)(v9 + 40);
          if ( (unsigned __int64)(v167 + 10) > *(_QWORD *)(v9 + 32) )
          {
            v167 = (_DWORD *)MEMORY[0x181EAA920](a1: v165, a2: v166, a3: v190);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v167 + 10;
            *v167 = 34081944;
            v167[1] = 0;
            *((_QWORD *)v167 + 1) = 0;
            *((_QWORD *)v167 + 2) = 0;
            *((_QWORD *)v167 + 3) = 0;
            *((_QWORD *)v167 + 4) = 0;
          }
          v180 = (char *)v167;
          v167[5] = 46923644;
          v167[4] = *((_DWORD *)v8 + 93585974);
          v167[3] = (unsigned __int64)((char *)v167 - v8) >> 3;
          v168 = MEMORY[0x18503B9A0](a1: v165, a2: v166, a3: v167, a4: v164, a5: 0);
          v169 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v169 + 24) > *(_QWORD *)(v9 + 32) )
          {
            v178 = v168;
            v169 = MEMORY[0x181EAA920](a1: v143, a2: v144, a3: v189);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v169 + 24;
            *(_DWORD *)v169 = 34082680;
            *(_DWORD *)(v169 + 4) = 0;
            *(_QWORD *)(v169 + 8) = 0;
            *(_QWORD *)(v169 + 16) = 0;
          }
          v146 = (__int64)v180;
          v170 = v179;
          *(_BYTE *)(v169 + 12) = v183;
          *(_DWORD *)(v169 + 4) = (unsigned __int64)(v170 - v8) >> 3;
          *(_DWORD *)(v146 + 8) = (unsigned __int64)(v169 - (_QWORD)v8) >> 3;
          if ( (*(_DWORD *)v146 & 2) != 0 )
          {
            v142 = v146 & 0xFFFFFFFFFFF80000LL;
            v176 = (v146 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v176) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v146 & 0xFFFFFFFFFFF80000LL) + ((v146 - v176) >> 9) + 0x38) = 0;
          }
          goto LABEL_98;
        }
LABEL_161:
        MEMORY[0x182771080](a1: v160, a2: v188, a3: v162, a4: v185, a5: v179);
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
        return sub_18159F6E0();
      }
      v187 = *(char *)(v182 + 12);
      v184 = v150;
      v171 = *(_DWORD **)(v9 + 40);
      if ( (unsigned __int64)(v171 + 10) > *(_QWORD *)(v9 + 32) )
      {
        v183 = v153;
        v171 = (_DWORD *)MEMORY[0x181EAA920](a1: v151, a2: v153, a3: v191);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v171 + 10;
        *v171 = 34082880;
        v171[1] = 0;
        *((_QWORD *)v171 + 1) = 0;
        *((_QWORD *)v171 + 2) = 0;
        *((_QWORD *)v171 + 3) = 0;
        *((_QWORD *)v171 + 4) = 0;
        v183 = v153;
      }
      v171[5] = 46923644;
      v171[4] = *((_DWORD *)v8 + 93585974);
      v171[3] = (unsigned __int64)((char *)v171 - v8) >> 3;
      v179 = (char *)v171;
      MEMORY[0x18503B9A0](a1: v151, a2: v153, a3: v171, a4: v152, a5: 0);
      v172 = (unsigned __int64)v179;
      *((_DWORD *)v179 + 2) = 46004603;
      if ( (*(_DWORD *)v172 & 2) != 0 )
      {
        v142 = v172 & 0xFFFFFFFFFFF80000LL;
        v175 = (v172 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v172 & 0xFFFFFFFFFFF80000LL) + ((v172 - v175) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v172 & 0xFFFFFFFFFFF80000LL) + ((v172 - v175) >> 9) + 0x38) = 0;
        v146 = v172;
      }
      else
      {
        v146 = v172;
      }
      goto LABEL_98;
    }
    v122 = v186;
LABEL_63:
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v119, a2: v120, a3: v122);
    return result;
  }
  v10 = MEMORY[0x182771080]();
  goto LABEL_88;
}
