// sub_1E61B60
// rva 0x01e61b60  size 4169  section .text  group text
// window base 0x181e61b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_1E61B60(__int64 a1, __int64 a2, char *a3, unsigned int a4, char *a5, int a6)
{
  __int64 v6; // r13
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbp
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  char *v25; // rcx
  unsigned __int64 v26; // rbx
  char *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rax
  _BOOL8 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  int v39; // ebx
  char *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  char *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rdi
  unsigned int v63; // r11d
  _DWORD *v64; // rcx
  unsigned __int64 m; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  char *v68; // rdx
  char *result; // rax
  __int64 v70; // rsi
  _BOOL8 v71; // rcx
  __int64 v72; // rax
  char *v73; // rbx
  unsigned int v74; // ecx
  unsigned int v75; // edi
  unsigned int v76; // ebp
  unsigned int v77; // esi
  _DWORD *v78; // rdx
  unsigned __int64 n; // r8
  __int64 v80; // rdx
  __int64 v81; // r9
  int v82; // ebx
  __int64 v83; // rcx
  unsigned int v84; // r11d
  __int64 v85; // rcx
  __int64 v86; // rcx
  char *v87; // r10
  unsigned int v88; // r8d
  _DWORD *v89; // r9
  unsigned __int64 k; // rdx
  _DWORD *v91; // r8
  __int64 v92; // r9
  int v93; // r12d
  __int64 v94; // rdx
  char *v95; // r10
  __int64 (__fastcall *v96)(__int64, _QWORD, __int64); // rcx
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rsi
  char *v102; // rcx
  unsigned __int64 i; // rdx
  _BOOL8 v104; // rcx
  unsigned __int64 ii; // rdx
  int v106; // r9d
  char *v107; // rbx
  unsigned int v108; // ecx
  unsigned int v109; // ebp
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rsi
  char *v114; // rdx
  unsigned __int64 j; // r8
  char *v116; // rdx
  char *v117; // rbp
  unsigned int v118; // ebx
  unsigned int v119; // ebx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // [rsp+0h] [rbp-F8h] BYREF
  int v127; // [rsp+10h] [rbp-E8h]
  int v128; // [rsp+14h] [rbp-E4h]
  unsigned int v129; // [rsp+18h] [rbp-E0h]
  unsigned int v130; // [rsp+1Ch] [rbp-DCh]
  char *v131; // [rsp+20h] [rbp-D8h]
  unsigned int v132; // [rsp+2Ch] [rbp-CCh]
  __int64 v133; // [rsp+30h] [rbp-C8h]
  __int64 v134; // [rsp+38h] [rbp-C0h]
  __int64 v135; // [rsp+40h] [rbp-B8h]
  __int64 v136; // [rsp+48h] [rbp-B0h]
  __int64 v137; // [rsp+50h] [rbp-A8h]
  __int64 v138; // [rsp+58h] [rbp-A0h]
  int v139; // [rsp+64h] [rbp-94h]
  __int64 v140; // [rsp+68h] [rbp-90h]
  char *v141; // [rsp+70h] [rbp-88h]
  char *v142; // [rsp+78h] [rbp-80h]
  int v143; // [rsp+84h] [rbp-74h]
  __int64 v144; // [rsp+88h] [rbp-70h]
  __int64 v145; // [rsp+90h] [rbp-68h]
  unsigned int v146; // [rsp+98h] [rbp-60h]
  unsigned int v147; // [rsp+9Ch] [rbp-5Ch]
  char *v148; // [rsp+A0h] [rbp-58h]
  char *v149; // [rsp+A8h] [rbp-50h]
  unsigned int v150; // [rsp+B4h] [rbp-44h]
  BOOL v151; // [rsp+B8h] [rbp-40h]
  int v152; // [rsp+BCh] [rbp-3Ch]
  int v153; // [rsp+C0h] [rbp-38h]
  unsigned int v154; // [rsp+C4h] [rbp-34h]
  __int64 v155; // [rsp+C8h] [rbp-30h]
  __int64 v156; // [rsp+D0h] [rbp-28h]
  int v157; // [rsp+DCh] [rbp-1Ch]
  int v158; // [rsp+E0h] [rbp-18h]
  int v159; // [rsp+E4h] [rbp-14h]
  int v160; // [rsp+E8h] [rbp-10h]
  unsigned int v161; // [rsp+ECh] [rbp-Ch]
  unsigned int v162; // [rsp+F0h] [rbp-8h]
  int v163; // [rsp+F4h] [rbp-4h]

  v149 = a3;
  v148 = a5;
  v163 = a6;
  v162 = a2;
  v161 = a4;
  if ( (unsigned __int64)&v126 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v7 )
  {
    v9 = *(_DWORD *)a3 >> 3;
    v10 = *(_DWORD *)&v7[8 * v9 + 44] & (0x749u >> HIBYTE(*(_DWORD *)&v7[8 * v9 + 44]));
    v11 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v6
                                                                    + *(_QWORD *)&v7[8 * v9
                                                                                   + 80
                                                                                   + HIWORD(*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v9 + 20] + 12 + 4 * v10])]))(
            a1: v10,
            a2,
            a3,
            a4: a3);
    v160 = v11;
    if ( (v11 & 0x8000000) != 0 )
      JUMPOUT(0x303C84C00LL);
    if ( (v11 & 0x40000000) != 0 )
      JUMPOUT(0x303C84C13LL);
    if ( v11 < 0 )
      JUMPOUT(0x303C84C26LL);
    v159 = 0;
    v158 = 0;
    v157 = 0;
    v14 = sub_1E61A20(a1: v12, a2: v13, a3: (__int64)v149, a4: 0, a5: v161, a6: 0);
    v147 = (unsigned __int64)(v14 - (_QWORD)v7) >> 3;
    v17 = 34095464;
    v146 = (unsigned __int64)(v148 - v7) >> 3;
    v18 = 34613584;
    if ( (v160 & 0x40000000) != 0 )
    {
      v156 = 34613584;
      v155 = 34095464;
      v145 = v14;
      v19 = (char *)sub_1E63480(a1: v15, a2: v16, a3: v149, a4: (unsigned __int64)(v14 - (_QWORD)v7) >> 3, a5: v161);
      if ( v19 == v7
        || (v23 = *(_DWORD *)v19 >> 3, *(__int16 *)&v7[8 * v23 + 62] >= 3)
        && *(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v23 + 16] + 20] == 70242 )
      {
        if ( v163 != 0 )
        {
          if ( v19 == v7 )
          {
LABEL_141:
            sub_2771080();
            goto LABEL_142;
          }
          v66 = *(_QWORD *)&v7[8 * (*(_DWORD *)v19 >> 3) + 352];
          v132 = *(_DWORD *)v19 >> 3;
          v144 = (__int64)v19;
          if ( (((__int64 (__fastcall *)(__int64, __int64, char *))(v6 + v66))(a1: v21, a2: v22, a3: v19) & 1) != 0 )
          {
            v19 = (char *)v144;
            v67 = v161;
          }
          else
          {
            v96 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))(v6 + *(_QWORD *)&v7[8 * v132 + 384]);
            v154 = v160 | 0x10000000;
            if ( v162 != 0 )
            {
              v156 = (__int64)v96;
              v141 = (char *)((__int64 (__fastcall *)(__int64, _QWORD, __int64))(v6 + *(_QWORD *)&v7[8 * v132 + 360]))(
                               a1: v21,
                               a2: v162,
                               a3: v144);
              v99 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v156)(a1: v97, a2: v98, a3: v144);
              v102 = *(char **)(v8 + 40);
              if ( (unsigned __int64)(v102 + 104) > *(_QWORD *)(v8 + 32) )
              {
                v140 = v99;
                v116 = (char *)sub_1EAA920(a1: v100, a2: v101, a3: v155);
                v99 = v140;
              }
              else
              {
                *(_QWORD *)(v8 + 40) = v102 + 104;
                *(_DWORD *)v102 = 34095464;
                *((_DWORD *)v102 + 1) = 0;
                for ( i = 8; i < 0x68; i += 8LL )
                  *(_QWORD *)&v102[i] = 0;
                v116 = v102;
              }
              v117 = v141;
              v118 = v154;
              v22 = v146;
              v21 = v147;
              v67 = v161;
              *((_DWORD *)v116 + 23) = v161;
              *((_DWORD *)v116 + 21) = v118;
              *((_DWORD *)v116 + 20) = -1;
              *((_DWORD *)v116 + 10) = (unsigned __int64)(v99 - (_QWORD)v7) >> 3;
              *((_DWORD *)v116 + 9) = 4260687;
              *((_DWORD *)v116 + 8) = (unsigned __int64)(v117 - v7) >> 3;
              *((_DWORD *)v116 + 7) = v22;
              *((_DWORD *)v116 + 2) = v21;
              v19 = v116;
            }
            else
            {
              v111 = v96(a1: v21, a2: 0, a3: v144);
              v114 = *(char **)(v8 + 40);
              if ( (unsigned __int64)(v114 + 88) > *(_QWORD *)(v8 + 32) )
              {
                v141 = (char *)v111;
                v114 = (char *)sub_1EAA920(a1: v112, a2: v113, a3: v156);
                v111 = (__int64)v141;
                v119 = v154;
                v22 = v146;
                v21 = v147;
                v67 = v161;
              }
              else
              {
                *(_QWORD *)(v8 + 40) = v114 + 88;
                *(_DWORD *)v114 = 34613584;
                *((_DWORD *)v114 + 1) = 0;
                for ( j = 8; j < 0x58; j += 8LL )
                  *(_QWORD *)&v114[j] = 0;
                v119 = v154;
                v22 = v146;
                v21 = v147;
                v67 = v161;
              }
              *((_DWORD *)v114 + 18) = v119;
              *((_DWORD *)v114 + 17) = -1;
              *((_DWORD *)v114 + 8) = (unsigned __int64)(v111 - (_QWORD)v7) >> 3;
              *((_DWORD *)v114 + 7) = v22;
              *((_DWORD *)v114 + 2) = v21;
              v19 = v114;
            }
          }
        }
        else
        {
          v67 = v161;
        }
        if ( v160 >= 0 )
          v68 = v7;
        else
          v68 = v19;
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280(a1: v21, a2: v22, a3: v68, a4: v67);
        return v68;
      }
      v18 = (__int64)v149;
      v14 = sub_276FC00(a1: v21, a2: v22, a3: v19, a4: v20, a5: v7 + 40451120);
    }
    v156 = v18;
    v155 = v17;
    v145 = v14;
    v24 = v162;
    v154 = v160 & 0x7FFFFFFF;
    if ( (v160 & 0x20000000) != 0 )
      JUMPOUT(0x303C84D4DLL);
    if ( (v160 & 0x10000000) != 0 )
      JUMPOUT(0x303C84D60LL);
    if ( v162 != 0 )
    {
      v153 = 0;
      v152 = 0;
      v144 = sub_1E633C0(a1: v15, a2: v162, a3: v149, a4: v160 & 0x7FFFFFFF, a5: v161);
    }
    else
    {
      v144 = (__int64)v7;
      v153 = 0;
      v152 = 0;
    }
    v25 = v7 + 34096120;
    v26 = (unsigned __int64)(v149 - v7) >> 3;
    v143 = v26;
    if ( v160 < 0 )
    {
      v27 = v149;
LABEL_16:
      v28 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v142 = v7 + 34096120;
        v29 = sub_1EAA920(a1: v15, a2: v24, a3: 40450712);
        LODWORD(v26) = v143;
        v25 = v142;
        v30 = v161;
        v27 = v149;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v28 + 24;
        *(_DWORD *)v28 = 40450712;
        *(_DWORD *)(v28 + 4) = 0;
        *(_QWORD *)(v28 + 8) = 0;
        *(_QWORD *)(v28 + 16) = 0;
        v29 = v28;
        v30 = v161;
      }
      *(_DWORD *)(v29 + 8) = v30;
      *(_DWORD *)(v29 + 4) = v26;
      v142 = v25;
      v31 = sub_1E61720(a1: v30, a2: v24, a3: v27, a4: v25, a5: v25, a6: v29);
      goto LABEL_19;
    }
    if ( (v160 & 0x20000000) != 0 )
    {
      v27 = v149;
      goto LABEL_16;
    }
    v27 = v149;
    if ( (v160 & 0x10000000) != 0 )
      goto LABEL_16;
    v142 = v7 + 34096120;
    v80 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v80 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v81 = sub_1EAA920(a1: v15, a2: v24, a3: 40450984, a4: v25);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v80 + 24;
      *(_DWORD *)v80 = 40450984;
      *(_DWORD *)(v80 + 4) = 0;
      *(_QWORD *)(v80 + 8) = 0;
      *(_QWORD *)(v80 + 16) = 0;
      v81 = v80;
    }
    v82 = v143;
    v83 = v161;
    *(_DWORD *)(v81 + 8) = v161;
    *(_DWORD *)(v81 + 4) = v82;
    v31 = sub_1E61720(a1: (unsigned int)v83, a2: v24, a3: v149, a4: v83, a5: v7 + 34082680, a6: v81);
LABEL_19:
    v141 = (char *)v31;
    v35 = v162;
    if ( v162 != 0 )
    {
      if ( v160 < 0 || (v160 & 0x20000000) != 0 )
        v140 = sub_1E63720(a1: v34, a2: v162, a3: v149, a4: v33, a5: v161);
      else
        v140 = (__int64)v7;
    }
    else
    {
      v140 = (__int64)v7;
    }
    if ( v141 == v7 )
    {
      v151 = true;
    }
    else
    {
      v32 = *(_DWORD *)v141 >> 3 == 4260673;
      v151 = *(_DWORD *)v141 >> 3 == 4260673;
    }
    v139 = (unsigned __int64)(v144 - (_QWORD)v7) >> 3;
    if ( v160 < 0 )
    {
      v36 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v37 = sub_1EAA920(a1: v34, a2: v35, a3: 40450848);
        v39 = v143;
        v38 = v161;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v36 + 24;
        *(_DWORD *)v36 = 40450848;
        *(_DWORD *)(v36 + 4) = 0;
        *(_QWORD *)(v36 + 8) = 0;
        *(_QWORD *)(v36 + 16) = 0;
        v37 = v36;
        v38 = v161;
        v39 = v143;
      }
      *(_DWORD *)(v37 + 8) = v38;
      *(_DWORD *)(v37 + 4) = v39;
      v40 = (char *)sub_1E61720(a1: (unsigned int)v38, a2: v35, a3: v149, a4: v38, a5: v142, a6: v37);
      v142 = v40;
      if ( v40 == v7 || *(_DWORD *)v40 >> 3 == 4260673 )
      {
        v138 = sub_1E63580(a1: v42, a2: v43, a3: v149, a4: v41, a5: v161);
        v137 = sub_1E617E0(a1: v44, a2: v45, a3: v149);
        v136 = sub_1E617E0(a1: v46, a2: v47, a3: v149);
        v49 = v162;
        if ( v162 == 0 )
        {
          v135 = (__int64)v7;
          goto LABEL_33;
        }
        if ( v148 != v7 )
        {
          if ( (unsigned int)sub_4F692C0(a1: v48, a2: v162, a3: v148) != 0 )
            v135 = sub_1E617E0(a1: v48, a2: v49, a3: v149);
          else
            v135 = (__int64)v7;
LABEL_33:
          v134 = sub_1E617E0(a1: v48, a2: v49, a3: v149);
          v133 = sub_1E617E0(a1: v50, a2: v51, a3: v149);
          v55 = (char *)sub_1E63480(a1: v53, a2: v54, a3: v149, a4: v52, a5: v161);
          if ( v163 != 0 )
          {
            if ( (v160 & 1) != 0 )
              v56 = v154;
            else
              v56 = v154 | 0x10000000;
          }
          else
          {
            v56 = v154;
          }
          v150 = v56;
          v57 = (unsigned __int64)(v133 - (_QWORD)v7) >> 3;
          v143 = v57;
          v58 = (unsigned __int64)(v134 - (_QWORD)v7) >> 3;
          v132 = v58;
          v59 = (unsigned __int64)(v136 - (_QWORD)v7) >> 3;
          v60 = (unsigned __int64)(v137 - (_QWORD)v7) >> 3;
          v61 = (unsigned __int64)(v138 - (_QWORD)v7) >> 3;
          v62 = (unsigned __int64)(v142 - v7) >> 3;
          if ( v162 == 0 )
          {
            v84 = v56;
            if ( v151 )
            {
              if ( v55 == v7
                || (_DWORD)(v85 = (unsigned __int16)*(_DWORD *)&v7[8
                                                                 * *(unsigned int *)&v7[8 * (*(_DWORD *)v55 >> 3) + 20]
                                                                 + 12
                                                                 + 4
                                                                 * (*(_DWORD *)&v7[8 * (*(_DWORD *)v55 >> 3) + 44]
                                                                  & (0x81Eu >> HIBYTE(*(_DWORD *)&v7[8 * (*(_DWORD *)v55 >> 3) + 44])))]) == 2078 )
              {
                v86 = (unsigned int)v58;
                v87 = v141;
                v88 = v146;
                v89 = *(_DWORD **)(v8 + 40);
                if ( (unsigned __int64)(v89 + 22) > *(_QWORD *)(v8 + 32) )
                {
                  v130 = (unsigned __int64)(v142 - v7) >> 3;
                  v129 = (unsigned __int64)(v138 - (_QWORD)v7) >> 3;
                  v128 = (unsigned __int64)(v137 - (_QWORD)v7) >> 3;
                  v127 = (unsigned __int64)(v136 - (_QWORD)v7) >> 3;
                  v131 = v55;
                  v89 = (_DWORD *)sub_1EAA920(a1: v62, a2: v61, a3: v156, a4: (unsigned int)v58, a5: v146);
                  v62 = v130;
                  v61 = v129;
                  LODWORD(v60) = v128;
                  LODWORD(v59) = v127;
                  v86 = v132;
                  LODWORD(v57) = v143;
                  v84 = v150;
                  v55 = v131;
                  v87 = v141;
                  v88 = v146;
                }
                else
                {
                  *(_QWORD *)(v8 + 40) = v89 + 22;
                  *v89 = 34613584;
                  v89[1] = 0;
                  for ( k = 2; k < 22; k += 2LL )
                    *(_QWORD *)&v89[k] = 0;
                }
                v94 = v147;
                v89[18] = v84;
                v89[17] = -1;
                v89[16] = (unsigned __int64)(v55 - v7) >> 3;
                v89[12] = v59;
                v89[11] = v60;
                v89[10] = v61;
                v89[9] = v62;
                v89[8] = (unsigned __int64)(v87 - v7) >> 3;
                v89[7] = v88;
                v89[6] = v57;
                v89[3] = v86;
                v89[2] = v94;
                v91 = v89;
                goto LABEL_94;
              }
              goto LABEL_146;
            }
            goto LABEL_144;
          }
          if ( v151 )
          {
            if ( v55 == v7 )
            {
              v63 = v56;
              goto LABEL_40;
            }
            v63 = v56;
            if ( (unsigned __int16)*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * (*(_DWORD *)v55 >> 3) + 20]
                                                + 12
                                                + 4
                                                * (*(_DWORD *)&v7[8 * (*(_DWORD *)v55 >> 3) + 44]
                                                 & (0x820u >> HIBYTE(*(_DWORD *)&v7[8 * (*(_DWORD *)v55 >> 3) + 44])))] == 2080 )
            {
LABEL_40:
              v64 = *(_DWORD **)(v8 + 40);
              if ( (unsigned __int64)(v64 + 26) > *(_QWORD *)(v8 + 32) )
              {
                v130 = (unsigned __int64)(v142 - v7) >> 3;
                v129 = (unsigned __int64)(v138 - (_QWORD)v7) >> 3;
                v128 = (unsigned __int64)(v137 - (_QWORD)v7) >> 3;
                v127 = (unsigned __int64)(v136 - (_QWORD)v7) >> 3;
                v131 = v55;
                v91 = (_DWORD *)sub_1EAA920(a1: v62, a2: v61, a3: v155);
                v62 = v130;
                v61 = v129;
                LODWORD(v60) = v128;
                LODWORD(v59) = v127;
                v63 = v150;
                v55 = v131;
              }
              else
              {
                *(_QWORD *)(v8 + 40) = v64 + 26;
                *v64 = 34095464;
                v64[1] = 0;
                for ( m = 2; m < 26; m += 2LL )
                  *(_QWORD *)&v64[m] = 0;
                v91 = v64;
              }
              v92 = v135;
              v93 = v139;
              v94 = v140;
              v95 = v141;
              v91[23] = v161;
              v91[21] = v63;
              v91[20] = -1;
              v91[19] = (unsigned __int64)(v55 - v7) >> 3;
              v91[15] = (unsigned __int64)(v92 - (_QWORD)v7) >> 3;
              v91[14] = v59;
              v91[13] = v60;
              v91[12] = v61;
              v91[11] = v62;
              v91[10] = (unsigned __int64)(v95 - v7) >> 3;
              v91[9] = (unsigned __int64)(v94 - (_QWORD)v7) >> 3;
              v91[8] = v93;
              v91[7] = v146;
              v91[6] = v143;
              v91[3] = v132;
              v86 = v147;
              v91[2] = v147;
LABEL_94:
              if ( *(int *)(v8 + 16) <= 0 )
              {
                v131 = v55;
                sub_277F280(a1: v62, a2: v61, a3: v94, a4: v86, a5: v91);
              }
              return (char *)v91;
            }
            goto LABEL_145;
          }
LABEL_143:
          v131 = v55;
          v55 = (char *)sub_276FC00(a1: v62, a2: v61, a3: v141, a4: v56, a5: v7 + 34085384);
LABEL_144:
          v131 = v55;
          v55 = (char *)sub_276FC00(a1: v62, a2: v61, a3: v141, a4: v56, a5: v7 + 34085384);
LABEL_145:
          v55 = (char *)sub_276FC00(a1: v134, a2: v133, a3: v55, a4: v63, a5: v7 + 40451192, a6: v135);
LABEL_146:
          v131 = v55;
          sub_276FC00(a1: v62, a2: v61, a3: v55, a4: v85, a5: v7 + 40451264);
          goto LABEL_147;
        }
LABEL_142:
        v55 = (char *)sub_2771080();
        goto LABEL_143;
      }
      goto LABEL_140;
    }
    if ( (v160 & 0x20000000) != 0 )
    {
      v70 = v162;
    }
    else
    {
      v70 = v162;
      if ( (v160 & 0x10000000) == 0 )
      {
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280(a1: v34, a2: v162, a3: v32, a4: v151);
        return v7;
      }
    }
    if ( (_DWORD)v70 != 0 )
    {
      v71 = v151;
      if ( !v151 )
      {
LABEL_148:
        sub_276FC00(a1: v34, a2: v70, a3: v141, a4: v71, a5: v7 + 34085384);
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
        return (char *)sub_1E62BC0(a1: v122, a2: v123, a3: v120, a4: v121, a5: v124, a6: v125);
      }
      if ( (v160 & 0x10000000) != 0 )
        v72 = (__int64)(v7 + 34085496);
      else
        v72 = v140;
      v73 = v141;
      v74 = v154;
      v75 = v147;
      v76 = v161;
      v77 = v146;
      v78 = *(_DWORD **)(v8 + 40);
      if ( (unsigned __int64)(v78 + 26) > *(_QWORD *)(v8 + 32) )
      {
        v138 = v72;
        v78 = (_DWORD *)sub_1EAA920(a1: v147, a2: v146, a3: v155, a4: v154);
        v72 = v138;
        v106 = v139;
        v73 = v141;
        v74 = v154;
        v77 = v146;
        v75 = v147;
        v76 = v161;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v78 + 26;
        *v78 = 34095464;
        v78[1] = 0;
        for ( n = 2; n < 26; n += 2LL )
          *(_QWORD *)&v78[n] = 0;
        v106 = v139;
      }
      v78[23] = v76;
      v78[21] = v74;
      v78[20] = -1;
      v78[10] = (unsigned __int64)(v73 - v7) >> 3;
      v78[9] = (unsigned __int64)(v72 - (_QWORD)v7) >> 3;
      v78[8] = v106;
      v78[7] = v77;
      v78[2] = v75;
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return (char *)v78;
    }
    else
    {
      v104 = v151;
      if ( !v151 )
      {
LABEL_147:
        sub_276FC00(a1: v34, a2: v70, a3: v141, a4: v104, a5: v7 + 34085384);
        goto LABEL_148;
      }
      result = *(char **)(v8 + 40);
      if ( (unsigned __int64)(result + 88) > *(_QWORD *)(v8 + 32) )
      {
        result = (char *)sub_1EAA920(a1: v34, a2: v70, a3: v156);
        v107 = v141;
        v108 = v154;
        v109 = v146;
        v110 = v147;
        v70 = v162;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = result + 88;
        *(_DWORD *)result = 34613584;
        *((_DWORD *)result + 1) = 0;
        for ( ii = 8; ii < 0x58; ii += 8LL )
          *(_QWORD *)&result[ii] = 0;
        v107 = v141;
        v108 = v154;
        v109 = v146;
        v110 = v147;
      }
      *((_DWORD *)result + 18) = v108;
      *((_DWORD *)result + 17) = -1;
      *((_DWORD *)result + 8) = (unsigned __int64)(v107 - v7) >> 3;
      *((_DWORD *)result + 7) = v109;
      *((_DWORD *)result + 2) = v110;
      if ( *(int *)(v8 + 16) <= 0 )
        return (char *)sub_277F280(a1: v110, a2: v70);
    }
    return result;
  }
  sub_2771080();
LABEL_140:
  sub_276FC00(a1: v42, a2: v43, a3: v142, a4: v41, a5: v7 + 34085384);
  goto LABEL_141;
}
