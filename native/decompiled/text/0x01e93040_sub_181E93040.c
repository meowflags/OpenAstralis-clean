// sub_181E93040
// rva 0x01e93040  size 11599  section .text  group text
// window base 0x181e93040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E93040(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r14
  int v7; // ebp
  unsigned __int64 v8; // rbx
  unsigned __int64 result; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v16; // r12
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rbp
  int v19; // r12d
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  _BOOL8 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  char *v26; // rcx
  unsigned __int64 v27; // rdi
  _DWORD *v28; // rcx
  char *v29; // rcx
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  char *v32; // rdx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rdi
  BOOL v37; // ebp
  int v38; // ebp
  unsigned int *v39; // rbx
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rbp
  unsigned __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rcx
  char v46; // dl
  char v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rbp
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  _DWORD *v55; // rdi
  unsigned __int64 v56; // rdx
  char *v57; // rbx
  __int64 v58; // rax
  int v59; // ecx
  BOOL v60; // edx
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  BOOL v65; // edx
  __int64 v66; // rdx
  __int64 v67; // r8
  unsigned __int64 v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rdi
  unsigned __int64 *v72; // rbp
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  char *v75; // r9
  __int64 v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r10
  char *v85; // r10
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // rsi
  int v92; // ebx
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // rbx
  int v99; // edx
  int v100; // ecx
  int v101; // ebx
  int v102; // r8d
  int j; // ecx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // rdx
  int v112; // ecx
  int v113; // edx
  char v114; // bp
  int i; // ecx
  unsigned __int64 v116; // r9
  unsigned __int64 *v117; // rbx
  unsigned __int64 v118; // r10
  int v119; // r12d
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // r12
  unsigned __int64 v122; // rbp
  char *v123; // rax
  unsigned __int64 v124; // rbx
  unsigned __int64 v125; // rbx
  __int64 v126; // rax
  unsigned __int64 v127; // rbx
  unsigned __int64 v128; // rdx
  __int64 v129; // rax
  BOOL v130; // eax
  int v131; // ebx
  unsigned int *v132; // rbp
  __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rax
  char v136; // r9
  __int64 v137; // rax
  unsigned __int64 v138; // r8
  __int64 v139; // rcx
  int v140; // eax
  unsigned __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rax
  char *v146; // r9
  __int64 v147; // rax
  unsigned __int64 v148; // r8
  unsigned __int64 v149; // rcx
  unsigned __int64 v150; // rdx
  unsigned __int64 v151; // r12
  unsigned __int64 *v152; // rbx
  __int64 v153; // rbp
  __int64 v154; // rbp
  __int64 v155; // r10
  unsigned __int64 v156; // rbp
  unsigned __int64 v157; // rbx
  unsigned __int64 v158; // rcx
  unsigned __int64 v159; // rsi
  unsigned __int64 v160; // rsi
  int v161; // ebx
  unsigned __int64 v162; // rcx
  unsigned __int64 v163; // r9
  unsigned __int64 v164; // rbx
  unsigned __int64 v165; // rbx
  int v166; // ecx
  int v167; // ebx
  int m; // ecx
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rax
  char *v174; // r10
  int v175; // ecx
  char v176; // bp
  int k; // ecx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rdi
  __int64 v181; // rsi
  __int64 v182; // r8
  unsigned __int64 v183; // [rsp+8h] [rbp-E0h]
  unsigned int v184; // [rsp+10h] [rbp-D8h]
  unsigned int v185; // [rsp+10h] [rbp-D8h]
  unsigned int v186; // [rsp+14h] [rbp-D4h]
  unsigned int v187; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v188; // [rsp+18h] [rbp-D0h]
  unsigned int *v189; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v190; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v191; // [rsp+30h] [rbp-B8h]
  int v192; // [rsp+3Ch] [rbp-ACh]
  unsigned __int64 v193; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v194; // [rsp+48h] [rbp-A0h]
  unsigned int v195; // [rsp+54h] [rbp-94h]
  __int64 v196; // [rsp+58h] [rbp-90h]
  unsigned __int64 v197; // [rsp+58h] [rbp-90h]
  __int64 v198; // [rsp+58h] [rbp-90h]
  unsigned __int64 v199; // [rsp+60h] [rbp-88h]
  __int64 v200; // [rsp+60h] [rbp-88h]
  unsigned __int64 v201; // [rsp+60h] [rbp-88h]
  unsigned __int64 v202; // [rsp+68h] [rbp-80h]
  __int64 v203; // [rsp+68h] [rbp-80h]
  unsigned int v204; // [rsp+70h] [rbp-78h]
  unsigned int v205; // [rsp+74h] [rbp-74h]
  unsigned int v206; // [rsp+74h] [rbp-74h]
  unsigned __int64 v207; // [rsp+78h] [rbp-70h]
  __int64 v208; // [rsp+78h] [rbp-70h]
  int v209; // [rsp+84h] [rbp-64h]
  unsigned __int64 v210; // [rsp+88h] [rbp-60h]
  int v211; // [rsp+90h] [rbp-58h]
  unsigned int v212; // [rsp+94h] [rbp-54h]
  unsigned __int64 v213; // [rsp+98h] [rbp-50h]
  int v214; // [rsp+A4h] [rbp-44h]
  int v215; // [rsp+A4h] [rbp-44h]
  char *v216; // [rsp+A8h] [rbp-40h]
  unsigned __int64 *v217; // [rsp+A8h] [rbp-40h]
  unsigned __int64 *v218; // [rsp+A8h] [rbp-40h]
  unsigned __int64 *v219; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v220; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v221; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v222; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v223; // [rsp+C0h] [rbp-28h]
  char *v224; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v225; // [rsp+C8h] [rbp-20h]
  __int64 v226; // [rsp+D0h] [rbp-18h]
  unsigned int v227; // [rsp+DCh] [rbp-Ch]

  v194 = a3;
  v227 = a1;
  v193 = a2;
  v7 = *(_DWORD *)(a3 + 4);
  v192 = v7;
  v8 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
  v191 = v8;
  result = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
  v190 = result;
  v10 = (int)a1;
  v226 = (int)a1;
  v11 = a5 + (int)a1 * (unsigned __int64)(unsigned int)a4;
  v225 = v11;
  if ( a6 != 0 )
  {
    v212 = a6;
    v12 = a5;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( v11 <= v12 )
                  return result;
                if ( v7 == 0 )
                {
                  MEMORY[0x18276EFE0]();
                  goto LABEL_582;
                }
                v13 = 8LL * *(unsigned int *)v12;
                if ( v13 != 0 )
                  v13 += v6;
                v14 = v12 + v10;
                if ( v13 != 0 )
                  break;
                v12 += v10;
              }
              if ( v8 == v6 )
                JUMPOUT(0x303D1D101LL);
              if ( v8 > v13 )
                break;
              if ( result == v6 )
                JUMPOUT(0x303D1D2CFLL);
              if ( v13 > result )
                break;
              v12 += v10;
            }
            v216 = (char *)v12;
            v15 = *(unsigned int *)v13;
            v220 = v15;
            v16 = *(_BYTE *)(v6 + 376654992);
            v17 = v15 & 6;
            if ( v17 == 6 )
              break;
            if ( v16 != 0 || (v15 & 2) == 0 )
            {
              if ( v17 == 4 )
              {
                v31 = *(unsigned int *)(v13 + 4);
                *(_DWORD *)v12 = v31;
                if ( a2 == v6 )
                {
                  v12 += v10;
                  v7 = v192;
                }
                else if ( (_DWORD)v31 != 0 )
                {
                  if ( *(_BYTE *)(v6 + 376654992) != 0 )
                  {
                    if ( a2 == v6 )
                      JUMPOUT(0x303D1D409LL);
                    if ( v8 == v6 )
                      JUMPOUT(0x303D1D413LL);
                    if ( v8 <= a2 )
                    {
                      if ( result == v6 )
                        JUMPOUT(0x303D1DBA6LL);
                      if ( a2 <= result )
                      {
                        v222 = v12 + v10;
                        v57 = (char *)v12;
                        goto LABEL_62;
                      }
                    }
                    v222 = v12 + v10;
                    if ( *(_QWORD *)(v6 + 376612552) <= a2 )
                      JUMPOUT(0x303D1D449LL);
LABEL_61:
                    v12 = v222;
                    result = v190;
                    v8 = v191;
                    v7 = v192;
                  }
                  else
                  {
                    v54 = v6 + 8 * v31;
                    if ( v54 == v6 )
                      JUMPOUT(0x303D1D890LL);
                    v55 = (_DWORD *)(v6 + 8 * v31);
                    if ( (*v55 & 1) != 0 )
                    {
                      v56 = v54 - *(_QWORD *)(v54 - 8);
                      v222 = v14;
                      v57 = v216;
                    }
                    else
                    {
                      v222 = v14;
                      v57 = v216;
                      v55 = (_DWORD *)(v54 & 0xFFFFFFFFFFF80000LL);
                      v56 = v54 & 0xFFFFFFFFFFF80000LL;
                    }
                    v58 = *(unsigned int *)(v56 + 40);
                    v59 = *(_DWORD *)(v6 + 8 * v31);
                    if ( (v59 & 6) == 6 )
                    {
                      if ( (_DWORD)v58 == 0 )
                        goto LABEL_593;
                      v60 = *(_DWORD *)(v6 + 8 * v58 + 48) < 16;
                    }
                    else
                    {
                      if ( (v59 & 2) != 0 )
                        JUMPOUT(0x303D1D8DALL);
                      v60 = true;
                    }
                    if ( v60 )
                    {
                      if ( (*(_DWORD *)a2 & 6) != 6 )
                      {
                        if ( (*(_DWORD *)a2 & 2) != 0 )
                          JUMPOUT(0x303D1D90BLL);
                        goto LABEL_61;
                      }
                      if ( a2 == v6 )
                        JUMPOUT(0x303D1DF0ALL);
                      v79 = a2;
                      if ( (*(_DWORD *)a2 & 1) != 0 )
                      {
                        v80 = a2 - *(_QWORD *)(a2 - 8);
                      }
                      else
                      {
                        v79 = a2 & 0xFFFFFFFFFFF80000LL;
                        v80 = a2 & 0xFFFFFFFFFFF80000LL;
                      }
                      v81 = *(unsigned int *)(v80 + 40);
                      if ( (_DWORD)v81 == 0 )
                        goto LABEL_601;
                      if ( *(int *)(v6 + 8 * v81 + 48) >= 16 )
                      {
LABEL_62:
                        if ( a2 == v6 )
                          JUMPOUT(0x303D1D45DLL);
                        if ( (*(_DWORD *)a2 & 1) != 0 )
                        {
                          v32 = (char *)(a2 - *(_QWORD *)(a2 - 8));
                          if ( a2 == v6 )
                            JUMPOUT(0x303D1D47ALL);
                          v33 = (unsigned __int64)&v57[-a2] >> 9;
                          if ( v32[v33 + 48] != 0 )
                            v32[v33 + 48] = 0;
                          v12 = v222;
                          result = v190;
                          v8 = v191;
                          v7 = v192;
                        }
                        else
                        {
                          if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL)
                                        + ((a2 - ((a2 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                        + 0x38) != 0 )
                            *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL)
                                     + ((a2 - ((a2 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                     + 0x38) = 0;
                          v12 = v222;
                          result = v190;
                          v8 = v191;
                          v7 = v192;
                        }
                      }
                      else
                      {
                        v12 = v222;
                        result = v190;
                        v8 = v191;
                        v7 = v192;
                      }
                    }
                    else
                    {
                      v12 = v222;
                      result = v190;
                      v8 = v191;
                      v7 = v192;
                    }
                  }
                }
                else
                {
                  v12 += v10;
                  v7 = v192;
                }
              }
              else
              {
                v18 = (_DWORD *)v13;
                v189 = (unsigned int *)v13;
                v19 = *(_DWORD *)v13 & 1;
                if ( (v15 & 1) != 0 )
                  v20 = v13 - *(_QWORD *)(v13 - 8);
                else
                  v20 = v13 & 0xFFFFFFFFFFF80000LL;
                v213 = v20;
                v21 = *(unsigned int *)(v20 + 40);
                v183 = v6 + 8 * v21;
                v22 = !(*(_BYTE *)v13 & 1);
                if ( (_DWORD)v21 == 0 )
                  goto LABEL_583;
                if ( *(_BYTE *)(v6 + 8 * v21 + 52) != 0 )
                {
                  v221 = v12 + v10;
                  v23 = (unsigned __int64)v18;
                }
                else
                {
                  v209 = v19;
                  v186 = *v18 >> 3;
                  v38 = *(_DWORD *)(v6 + 8LL * v186 + 32);
                  v214 = v38;
                  v210 = (unsigned int)v38;
                  v205 = (unsigned __int8)v38;
                  v12 = (v38 >> 8) & 0xFFF;
                  v207 = v12;
                  if ( *(_BYTE *)(v6 + 376654992) != 0 )
                  {
                    v221 = v14;
                    v23 = v6;
                    v39 = v189;
                  }
                  else
                  {
                    v41 = *(unsigned int *)(v6 + 376654972);
                    if ( (_DWORD)v41 == 0 )
                      goto LABEL_587;
                    v42 = *(_DWORD *)(v6 + 8 * v41) >> 3;
                    v43 = v6 + 8LL * *(unsigned int *)(v6 + 8 * v42 + 20);
                    v44 = (unsigned int)v21;
                    v45 = (unsigned __int16)*(_DWORD *)(v43
                                                      + 4LL
                                                      * (*(_DWORD *)(v6 + 8 * v42 + 44)
                                                       & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v42 + 44))))
                                                      + 12);
                    if ( (_DWORD)v45 != 519 )
                      goto LABEL_590;
                    v21 = *(unsigned int *)(v6 + 8 * v44 + 48);
                    v12 = (unsigned int)(*(_DWORD *)(v6 + 8 * v41 + 16) + 1);
                    if ( (int)v12 > *(_DWORD *)(v6 + 8 * v44 + 48) + 1 )
                    {
                      if ( v209 != 0 )
                      {
                        v204 = *(_DWORD *)(v6 + 8 * v44 + 48) + 1;
                        v195 = *(_DWORD *)(v6 + 8 * v44 + 48);
                        v221 = v14;
                        if ( (unsigned int)sub_181EA85C0(a1: v12, a2, a3: v6 + 376652784, a4: v21, a5: v20) != 0 )
                        {
                          if ( v195 >= 0xF )
                            goto LABEL_605;
                          sub_181E9D6C0(
                            a1: v12,
                            a2,
                            a3: v213,
                            a4: v21,
                            a5: v183,
                            a6: v6 + 8LL * *(unsigned int *)(v6 + 4LL * v195 + 376654108));
                          v23 = (unsigned __int64)v189;
                          v38 = v214;
                          v39 = v189;
                        }
                        else
                        {
                          v23 = v6;
                          v38 = v214;
                          v39 = v189;
                        }
                      }
                      else
                      {
                        v204 = *(_DWORD *)(v6 + 8 * v44 + 48) + 1;
                        v221 = v14;
                        if ( (unsigned int)v21 >= 0xF )
                          goto LABEL_598;
                        if ( v214 < 0 )
                        {
                          v12 = (unsigned __int64)v189;
                          v73 = (v207 + ((unsigned __int64)v189[2] << v205) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                        }
                        else
                        {
                          v73 = v210;
                          v12 = (unsigned __int64)v189;
                        }
                        v74 = *(unsigned int *)(v6 + 4LL * (unsigned int)v21 + 376654108);
                        v21 = v6 + 8 * v74;
                        if ( (_DWORD)v74 == 0 )
                          goto LABEL_600;
                        v184 = v74;
                        v75 = *(char **)(v6 + 8 * v74 + 24);
                        if ( v75 != nullptr
                          && (v84 = *((_QWORD *)v75 + 4), v73 <= *(_QWORD *)v75 - v84)
                          && (v85 = &v75[v84], *((_QWORD *)v75 + 4) = &v85[v73] - v75, v85 != nullptr) )
                        {
                          v202 = v73;
                          v76 = (__int64)v85;
                        }
                        else
                        {
                          v202 = v73;
                          v76 = sub_181E9D600(a1: v12, a2, a3: v73, a4: v21, a5: v6 + 8 * v74);
                        }
                        if ( v76 != 0 )
                        {
                          v200 = v76;
                          MEMORY[0x1828393A0](a1: v12, a2, a3: v189, a4: v21, a5: v76, a6: v202);
                          v23 = v200;
                          v21 = v184;
                          if ( *(_DWORD *)(v6 + 8LL * v184 + 48) == 16 && *(_BYTE *)(v6 + 376654992) == 0 )
                          {
                            v93 = v200 & 0xFFFFFFFFFFF80000LL;
                            v94 = v200 - ((v200 & 0xFFFFFFFFFFF80000LL) + 2112);
                            v95 = v94 >> 9;
                            v96 = (v94 + v202 - 1) >> 9;
                            if ( v96 != v94 >> 9 || (v94 & 0x1FF) == 0 )
                            {
                              if ( (v94 & 0x1FF) != 0 )
                              {
                                v97 = v95 + 1;
                                *(_BYTE *)(v93 + v95 + 1081) = -(__int64)((((v95 + 1) << 9) - v94) >> 3);
                              }
                              else
                              {
                                *(_BYTE *)(v93 + v95 + 1080) = 0;
                                v97 = (v200 - ((v200 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                              }
                              if ( v97 + 63 < v96 )
                                JUMPOUT(0x303D1E176LL);
                              v98 = v97 + 1;
                              v99 = 1;
                              while ( v98 <= v96 )
                                *(_BYTE *)(v93 + v98++ + 1080) = v99++;
                              v112 = 6;
LABEL_267:
                              while ( v98 <= v96 )
                              {
                                v113 = v112 + 1;
                                v114 = v112 + 58;
                                a2 = (unsigned int)(1 << v112);
                                for ( i = 0; ; ++i )
                                {
                                  if ( (int)a2 <= i )
                                  {
                                    v112 = v113;
                                    goto LABEL_267;
                                  }
                                  *(_BYTE *)(v93 + v98++ + 1080) = v114;
                                  if ( v98 > v96 )
                                    break;
                                }
                                v112 = v113;
                              }
                            }
                            v21 = *(unsigned int *)v200 | 2LL;
                            *(_DWORD *)v200 = v21;
                          }
                        }
                        else
                        {
                          v23 = v6;
                        }
                        if ( v23 == v6 )
                        {
                          v38 = v214;
                          v39 = v189;
                        }
                        else
                        {
                          v38 = v214;
                          v21 = (v23 - v6) >> 3;
                          if ( v214 < 0 )
                          {
                            v39 = v189;
                            v21 = v205;
                            v77 = (v207 + ((unsigned __int64)v189[2] << v205) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                          }
                          else
                          {
                            v77 = v210;
                            v39 = v189;
                          }
                          *(_QWORD *)v39 = ((unsigned __int64)(unsigned int)((v23 - v6) >> 3) << 32) | v77 | 4;
                        }
                      }
                      if ( v23 == v6 )
                        *(_BYTE *)(v6 + 376652620) = 1;
                    }
                    else
                    {
                      v38 = v214;
                      v221 = v14;
                      v23 = v6;
                      v39 = v189;
                    }
                  }
                  if ( v23 == v6 )
                  {
                    v46 = *(_BYTE *)(v6 + 376654992);
                    v47 = *(_BYTE *)(v6 + 8LL * v186 + 68);
                    v12 = v6 + 8LL * v186;
                    v48 = ((unsigned __int64)v39 - v6) >> 3;
                    if ( v209 != 0 )
                    {
                      if ( v46 != 0 )
                      {
                        if ( (*v39 & 6LL) == 6 )
                        {
                          v23 = (unsigned __int64)v39;
                        }
                        else
                        {
                          *v39 |= 6u;
                          if ( v47 == 6 )
                          {
                            if ( v39[2] != 0 )
                            {
                              v104 = *(_QWORD *)(v6 + 376654880);
                              if ( v104 == 0 || (_DWORD)(v105 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                              {
                                v48 = sub_181EA8720(a1: v12, a2, a3: *(_QWORD *)(v6 + 376654880));
                                *(_QWORD *)(v6 + 376654880) = v48;
                                *(_DWORD *)(v6 + 376654876) = 0;
                                v104 = v48;
                                v105 = 0;
                                LODWORD(v48) = ((unsigned __int64)v39 - v6) >> 3;
                              }
                              *(_DWORD *)(v6 + 376654876) = v105 + 1;
                              *(_DWORD *)(v104 + 4 * v105 + 8) = v48;
                              v106 = *(_QWORD *)(v6 + 376654880);
                              if ( v106 == 0 || (_DWORD)(v107 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                              {
                                v106 = sub_181EA8720(a1: v12, a2, a3: *(_QWORD *)(v6 + 376654880));
                                *(_QWORD *)(v6 + 376654880) = v106;
                                *(_DWORD *)(v6 + 376654876) = 0;
                                v107 = 0;
                              }
                              *(_DWORD *)(v6 + 376654876) = v107 + 1;
                              *(_DWORD *)(v106 + 4 * v107 + 8) = 0;
                              v23 = (unsigned __int64)v189;
                            }
                            else
                            {
                              v23 = (unsigned __int64)v39;
                            }
                          }
                          else
                          {
                            v49 = *(_QWORD *)(v6 + 376654856);
                            if ( v49 == 0 || (_DWORD)(v50 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                            {
                              v48 = sub_181EA8720(a1: v12, a2, a3: *(_QWORD *)(v6 + 376654856));
                              *(_QWORD *)(v6 + 376654856) = v48;
                              *(_DWORD *)(v6 + 376654852) = 0;
                              v49 = v48;
                              v50 = 0;
                              LODWORD(v48) = ((unsigned __int64)v39 - v6) >> 3;
                            }
                            *(_DWORD *)(v6 + 376654852) = v50 + 1;
                            *(_DWORD *)(v49 + 4 * v50 + 8) = v48;
                            v23 = (unsigned __int64)v189;
                          }
                        }
                      }
                      else
                      {
                        sub_181E9D6C0(a1: v12, a2, a3: v213, a4: v21, a5: v183, a6: v6 + 376653896);
                        v23 = (unsigned __int64)v189;
                      }
                    }
                    else if ( v46 != 0 )
                    {
                      if ( (*v39 & 6) == 6 )
                      {
                        v23 = (unsigned __int64)v39;
                      }
                      else
                      {
                        *v39 |= 6u;
                        if ( v47 == 6 )
                        {
                          if ( v39[2] != 0 )
                          {
                            v108 = *(_QWORD *)(v6 + 376654880);
                            if ( v108 == 0 || (_DWORD)(v109 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                            {
                              v48 = sub_181EA8720(a1: v12, a2, a3: v108);
                              *(_QWORD *)(v6 + 376654880) = v48;
                              *(_DWORD *)(v6 + 376654876) = 0;
                              v108 = v48;
                              v109 = 0;
                              LODWORD(v48) = ((unsigned __int64)v39 - v6) >> 3;
                            }
                            *(_DWORD *)(v6 + 376654876) = v109 + 1;
                            *(_DWORD *)(v108 + 4 * v109 + 8) = v48;
                            v110 = *(_QWORD *)(v6 + 376654880);
                            if ( v110 == 0 || (_DWORD)(v111 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                            {
                              v110 = sub_181EA8720(a1: v12, a2, a3: *(_QWORD *)(v6 + 376654880));
                              *(_QWORD *)(v6 + 376654880) = v110;
                              *(_DWORD *)(v6 + 376654876) = 0;
                              v111 = 0;
                            }
                            *(_DWORD *)(v6 + 376654876) = v111 + 1;
                            *(_DWORD *)(v110 + 4 * v111 + 8) = 0;
                            v23 = (unsigned __int64)v189;
                          }
                          else
                          {
                            v23 = (unsigned __int64)v39;
                          }
                        }
                        else
                        {
                          v66 = *(_QWORD *)(v6 + 376654856);
                          if ( v66 == 0 || (_DWORD)(v67 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                          {
                            v48 = sub_181EA8720(a1: v12, a2, a3: v66);
                            *(_QWORD *)(v6 + 376654856) = v48;
                            *(_DWORD *)(v6 + 376654852) = 0;
                            v66 = v48;
                            v67 = 0;
                            LODWORD(v48) = ((unsigned __int64)v39 - v6) >> 3;
                          }
                          *(_DWORD *)(v6 + 376654852) = v67 + 1;
                          *(_DWORD *)(v66 + 4 * v67 + 8) = v48;
                          v23 = (unsigned __int64)v189;
                        }
                      }
                    }
                    else
                    {
                      if ( v38 < 0 )
                      {
                        v21 = v205;
                        v68 = (v207 + ((unsigned __int64)v189[2] << v205) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      }
                      else
                      {
                        v68 = v210;
                      }
                      v69 = *(_QWORD **)(v6 + 376653920);
                      if ( v69 != nullptr
                        && (v21 = v69[4], v68 <= *v69 - v21)
                        && (v21 += (__int64)v69, v69[4] = v21 + v68 - (_QWORD)v69, v21 != 0) )
                      {
                        v70 = v21;
                        v199 = v68;
                      }
                      else
                      {
                        v199 = v68;
                        v70 = sub_181E9D600(a1: v12, a2, a3: v68, a4: v21, a5: v6 + 376653896);
                      }
                      if ( v70 != 0 )
                      {
                        v196 = v70;
                        MEMORY[0x1828393A0](a1: v12, a2, a3: v189, a4: v21, a5: v70, a6: v199);
                        v23 = v196;
                        if ( *(_BYTE *)(v6 + 376654992) == 0 )
                        {
                          v86 = v196 & 0xFFFFFFFFFFF80000LL;
                          v87 = v196 - ((v196 & 0xFFFFFFFFFFF80000LL) + 2112);
                          v88 = v87 >> 9;
                          v89 = (v87 + v199 - 1) >> 9;
                          if ( v89 != v87 >> 9 || (v87 & 0x1FF) == 0 )
                          {
                            if ( (v87 & 0x1FF) != 0 )
                            {
                              v90 = v88 + 1;
                              v12 = -(__int64)((((v88 + 1) << 9) - v87) >> 3);
                              *(_BYTE *)(v86 + v88 + 1081) = v12;
                            }
                            else
                            {
                              *(_BYTE *)(v86 + v88 + 1080) = 0;
                              v90 = (v196 - ((v196 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                            }
                            if ( v90 + 63 < v89 )
                              JUMPOUT(0x303D1E0C5LL);
                            v91 = v90 + 1;
                            v92 = 1;
                            while ( v91 <= v89 )
                              *(_BYTE *)(v86 + v91++ + 1080) = v92++;
                            v100 = 6;
LABEL_232:
                            while ( v91 <= v89 )
                            {
                              v101 = v100 + 1;
                              v12 = (unsigned int)(v100 + 58);
                              v102 = 1 << v100;
                              for ( j = 0; ; ++j )
                              {
                                if ( v102 <= j )
                                {
                                  v100 = v101;
                                  goto LABEL_232;
                                }
                                *(_BYTE *)(v86 + v91++ + 1080) = v12;
                                if ( v91 > v89 )
                                  break;
                              }
                              v100 = v101;
                            }
                          }
                          *(_DWORD *)v196 |= 2u;
                        }
                      }
                      else
                      {
                        v23 = v6;
                      }
                      if ( v23 != v6 )
                      {
                        if ( v214 < 0 )
                        {
                          v72 = (unsigned __int64 *)v189;
                          v71 = (v207 + ((unsigned __int64)v189[2] << v205) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                        }
                        else
                        {
                          v71 = v210;
                          v72 = (unsigned __int64 *)v189;
                        }
                        v12 = ((unsigned __int64)(unsigned int)((v23 - v6) >> 3) << 32) | v71 | 4;
                        *v72 = v12;
                      }
                    }
                  }
                }
                if ( (unsigned int *)v23 != v189 )
                  *(_DWORD *)v216 = (v23 - v6) >> 3;
                a2 = v193;
                if ( v193 == v6 || v23 == v6 )
                {
                  v12 = v221;
                  v11 = v225;
                  v10 = v226;
                  result = v190;
                  v8 = v191;
                  v7 = v192;
                }
                else if ( *(_BYTE *)(v6 + 376654992) != 0 )
                {
                  v24 = v191;
                  if ( v193 == v6 )
                    JUMPOUT(0x303D1D219LL);
                  if ( v191 == v6 )
                    JUMPOUT(0x303D1D223LL);
                  if ( v191 > v193 )
                  {
                    v25 = v190;
                  }
                  else
                  {
                    if ( v190 == v6 )
                      JUMPOUT(0x303D1D23BLL);
                    if ( v193 <= v190 )
                    {
                      v25 = v190;
LABEL_29:
                      if ( v193 == v6 )
                        JUMPOUT(0x303D1D258LL);
                      if ( (*(_DWORD *)v193 & 1) != 0 )
                      {
                        v26 = (char *)(v193 - *(_QWORD *)(v193 - 8));
                        if ( v193 == v6 )
                          JUMPOUT(0x303D1D27ALL);
                        v27 = (unsigned __int64)&v216[-v193] >> 9;
                        if ( v26[v27 + 48] != 0 )
                          v26[v27 + 48] = 0;
                      }
                      else
                      {
                        v78 = (v193 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v193 & 0xFFFFFFFFFFF80000LL) + ((v193 - v78) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v193 & 0xFFFFFFFFFFF80000LL) + ((v193 - v78) >> 9) + 0x38) = 0;
                      }
                      goto LABEL_133;
                    }
                    v25 = v190;
                  }
                  if ( *(_QWORD *)(v6 + 376612552) <= v193 )
                    JUMPOUT(0x303D1DC2CLL);
LABEL_133:
                  v12 = v221;
                  v10 = v226;
                  result = v25;
                  v8 = v24;
                  v7 = v192;
                  v11 = v225;
                }
                else
                {
                  v25 = v190;
                  v24 = v191;
                  if ( v23 == v6 )
                    JUMPOUT(0x303D1D926LL);
                  if ( (*(_DWORD *)v23 & 1) != 0 )
                    v61 = v23 - *(_QWORD *)(v23 - 8);
                  else
                    v61 = v23 & 0xFFFFFFFFFFF80000LL;
                  v62 = *(unsigned int *)(v61 + 40);
                  v63 = *(unsigned int *)v23;
                  v64 = *(_DWORD *)v23 & 6;
                  if ( v64 == 6 )
                  {
                    if ( (_DWORD)v62 == 0 )
                      goto LABEL_596;
                    v65 = *(_DWORD *)(v6 + 8 * v62 + 48) < 16;
                  }
                  else
                  {
                    if ( (v63 & 2) != 0 )
                      JUMPOUT(0x303D1D95CLL);
                    v65 = true;
                  }
                  if ( v65 )
                  {
                    if ( (*(_DWORD *)v193 & 6) != 6 )
                    {
                      if ( (*(_DWORD *)v193 & 2) != 0 )
                        JUMPOUT(0x303D1D98BLL);
                      goto LABEL_133;
                    }
                    if ( v193 == v6 )
                      JUMPOUT(0x303D1DF63LL);
                    if ( (*(_DWORD *)v193 & 1) != 0 )
                      v82 = v193 - *(_QWORD *)(v193 - 8);
                    else
                      v82 = v193 & 0xFFFFFFFFFFF80000LL;
                    v83 = *(unsigned int *)(v82 + 40);
                    if ( (_DWORD)v83 == 0 )
                      goto LABEL_604;
                    if ( *(int *)(v6 + 8 * v83 + 48) >= 16 )
                      goto LABEL_29;
                  }
                  v12 = v221;
                  v10 = v226;
                  result = v190;
                  v8 = v191;
                  v7 = v192;
                  v11 = v225;
                }
              }
            }
            else
            {
              v12 += v10;
            }
          }
          v28 = (_DWORD *)v13;
          if ( a2 != v6 )
            break;
          v12 += v10;
        }
        if ( v16 == 0 )
          break;
        if ( a2 == v6 )
          JUMPOUT(0x303D1D304LL);
        if ( v8 == v6 )
          JUMPOUT(0x303D1D30ELL);
        if ( v8 <= a2 )
        {
          if ( result == v6 )
            JUMPOUT(0x303D1D63CLL);
          if ( a2 <= result )
          {
            v223 = v12 + v10;
            goto LABEL_45;
          }
        }
        if ( *(_QWORD *)(v6 + 376612552) <= a2 )
          JUMPOUT(0x303D1D339LL);
LABEL_44:
        v12 = v14;
        v7 = v192;
      }
      if ( (*(_DWORD *)v13 & 1) != 0 )
        v34 = v13 - *(_QWORD *)(v13 - 8);
      else
        v34 = v13 & 0xFFFFFFFFFFF80000LL;
      v35 = *(unsigned int *)(v34 + 40);
      v36 = *v28 & 6;
      if ( v36 == 6 )
      {
        if ( (_DWORD)v35 == 0 )
          goto LABEL_586;
        v37 = *(_DWORD *)(v6 + 8 * v35 + 48) < 16;
      }
      else
      {
        if ( (*v28 & 2) != 0 )
          JUMPOUT(0x303D1D4FBLL);
        v37 = true;
      }
      if ( v37 )
      {
        if ( (*(_DWORD *)a2 & 6) != 6 )
        {
          if ( (*(_DWORD *)a2 & 2) != 0 )
            JUMPOUT(0x303D1D52BLL);
          goto LABEL_44;
        }
        if ( a2 == v6 )
          JUMPOUT(0x303D1D839LL);
        v51 = a2;
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          v52 = a2 - *(_QWORD *)(a2 - 8);
          v223 = v14;
        }
        else
        {
          v223 = v14;
          v51 = a2 & 0xFFFFFFFFFFF80000LL;
          v52 = a2 & 0xFFFFFFFFFFF80000LL;
        }
        v53 = *(unsigned int *)(v52 + 40);
        if ( (_DWORD)v53 == 0 )
          goto LABEL_591;
        if ( *(int *)(v6 + 8 * v53 + 48) < 16 )
        {
          v12 = v223;
          result = v190;
          v8 = v191;
          v7 = v192;
          a2 = v193;
        }
        else
        {
          a2 = v193;
LABEL_45:
          if ( a2 == v6 )
            JUMPOUT(0x303D1D35CLL);
          if ( (*(_DWORD *)a2 & 1) != 0 )
          {
            v29 = (char *)(a2 - *(_QWORD *)(a2 - 8));
            if ( a2 == v6 )
              JUMPOUT(0x303D1D382LL);
            v30 = (unsigned __int64)&v216[-a2] >> 9;
            if ( v29[v30 + 48] != 0 )
              v29[v30 + 48] = 0;
            v12 = v223;
            result = v190;
            v8 = v191;
            v7 = v192;
          }
          else
          {
            v40 = (a2 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - v40) >> 9) + 0x38) != 0 )
              *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - v40) >> 9) + 0x38) = 0;
            v12 = v223;
            result = v190;
            v8 = v191;
            v7 = v192;
          }
        }
      }
      else
      {
        v12 = v14;
        v7 = v192;
      }
    }
  }
  v116 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
  v117 = (unsigned __int64 *)a5;
  result = a5 + (int)a1 * (unsigned __int64)(unsigned int)a4;
  v118 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
  while ( result > (unsigned __int64)v117 )
  {
    if ( v7 == 0 )
    {
LABEL_582:
      MEMORY[0x18276EFE0](a1, a2, a3, a4, a5, a6: v116);
LABEL_583:
      MEMORY[0x18276EFE0](a1: v12, a2, a3: v22, a4: v21, a5: v14);
LABEL_584:
      MEMORY[0x18276EFE0](a1);
LABEL_585:
      MEMORY[0x18276EFE0](a1);
LABEL_586:
      MEMORY[0x18276EFE0](a1: v36, a2, a3: v6 + 8 * v35, a4: v28, a5: v14);
LABEL_587:
      MEMORY[0x18276EFE0](a1: v12, a2, a3: v41, a4: v21, a5: v14);
LABEL_588:
      v220 = a4;
      MEMORY[0x18276EFE0](a1);
LABEL_589:
      MEMORY[0x18276EDE0](a1);
LABEL_590:
      MEMORY[0x18276EDE0](a1: v43, a2, a3: v41, a4: v45, a5: v14);
LABEL_591:
      MEMORY[0x18276EFE0](a1: v51, a2: v193);
LABEL_592:
      MEMORY[0x18276EFE0](a1, a2: v193, a3, a4: v6 + 8 * a4);
LABEL_593:
      MEMORY[0x18276EFE0](a1: v55);
LABEL_594:
      MEMORY[0x18276EFE0](a1, a2, a3, a4: v6 + 8 * v139);
LABEL_595:
      MEMORY[0x18276EFE0](a1, a2, a3: v143, a4: v6 + 8 * v142);
LABEL_596:
      MEMORY[0x18276EFE0](a1: v12, a2, a3: v63, a4: v6 + 8 * v62, a5: v64, a6: v24);
LABEL_597:
      MEMORY[0x18276F0E0]();
LABEL_598:
      MEMORY[0x18276F0E0]();
LABEL_599:
      MEMORY[0x18276EFE0](a1, a2, a3, a4);
LABEL_600:
      MEMORY[0x18276EFE0](a1: v12, a2, a3: v73, a4: v21);
LABEL_601:
      MEMORY[0x18276EFE0](a1: v55, a2, a3: v79, a4: v6 + 8 * v81);
LABEL_602:
      MEMORY[0x18276EFE0](a1, a2, a3, a4: v6 + 8 * a4, a5);
LABEL_603:
      MEMORY[0x18276EFE0](a1, a2, a3: v6 + 8 * a3);
LABEL_604:
      MEMORY[0x18276EFE0](a1: v12, a2, a3: v6 + 8 * v83);
LABEL_605:
      MEMORY[0x18276F0E0](a1: v227, a2: v193, a3: v212, a4: v213, a5: v194, a6: v183);
LABEL_606:
      MEMORY[0x18276F0E0](a1: v212, a2: v193, a3: v213, a4: v189, a5: v204, a6: v220);
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
      return sub_181E95DA0(a1: v180, a2: v181, a3: v178, a4: v179, a5: v182);
    }
    a4 = *v117 - v6;
    if ( *v117 != v6 )
      a4 = *v117;
    a1 = (__int64)v117 + v10;
    if ( a4 != 0 )
    {
      if ( v116 == v6 )
        JUMPOUT(0x303D1E661LL);
      if ( v116 > a4 )
        goto LABEL_299;
      if ( v118 == v6 )
        JUMPOUT(0x303D1E824LL);
      a3 = v118;
      if ( a4 > v118 )
      {
LABEL_299:
        v224 = (char *)v117;
        v119 = *(_DWORD *)a4;
        a3 = (unsigned int)*(char *)(v6 + 376654992);
        a5 = *(_DWORD *)a4 & 6;
        if ( a5 == 6 )
        {
          a5 = a4;
          if ( a2 == v6 )
          {
            v117 = (unsigned __int64 *)((char *)v117 + v10);
          }
          else if ( *(_BYTE *)(v6 + 376654992) != 0 )
          {
            if ( a2 == v6 )
              JUMPOUT(0x303D1E85BLL);
            a4 = a2;
            if ( v116 == v6 )
              JUMPOUT(0x303D1E865LL);
            if ( v116 <= a2 )
            {
              if ( v118 == v6 )
                JUMPOUT(0x303D1EB74LL);
              if ( a2 <= v118 )
              {
                v219 = (unsigned __int64 *)((char *)v117 + v10);
                goto LABEL_333;
              }
            }
            a3 = 0;
            if ( *(_QWORD *)(v6 + 376612552) <= a2 )
              JUMPOUT(0x303D1E893LL);
            a5 = 0;
LABEL_379:
            v117 = (unsigned __int64 *)((char *)v117 + v10);
            result = v225;
          }
          else
          {
            if ( (*(_DWORD *)a4 & 1) != 0 )
              v128 = a4 - *(_QWORD *)(a4 - 8);
            else
              v128 = a4 & 0xFFFFFFFFFFF80000LL;
            v129 = *(unsigned int *)(v128 + 40);
            if ( (*(_DWORD *)a4 & 6) == 6 )
            {
              if ( (_DWORD)v129 == 0 )
                goto LABEL_585;
              a3 = *(_DWORD *)(v6 + 8 * v129 + 48) < 16;
              v130 = *(_DWORD *)(v6 + 8 * v129 + 48) < 16;
            }
            else
            {
              a3 = 1;
              if ( (*(_DWORD *)a4 & 2) != 0 )
                JUMPOUT(0x303D1EA4BLL);
              v130 = true;
            }
            if ( v130 )
            {
              if ( (*(_DWORD *)a2 & 6) != 6 )
              {
                a4 = 0;
                if ( (*(_DWORD *)a2 & 2) != 0 )
                  JUMPOUT(0x303D1EA7ALL);
                a3 = 0;
                a5 = 0;
                goto LABEL_379;
              }
              v220 = a4;
              if ( a2 == v6 )
                JUMPOUT(0x303D1EDCELL);
              if ( (*(_DWORD *)a2 & 1) != 0 )
              {
                a3 = a2 - *(_QWORD *)(a2 - 8);
                v219 = (unsigned __int64 *)((char *)v117 + v10);
              }
              else
              {
                v219 = (unsigned __int64 *)((char *)v117 + v10);
                a3 = a2 & 0xFFFFFFFFFFF80000LL;
              }
              a4 = *(unsigned int *)(a3 + 40);
              if ( (_DWORD)a4 == 0 )
                goto LABEL_592;
              if ( *(int *)(v6 + 8 * a4 + 48) < 16 )
              {
                v117 = v219;
                result = v225;
                v118 = v190;
                v116 = v191;
                v7 = v192;
                a2 = v193;
              }
              else
              {
                a2 = v193;
LABEL_333:
                if ( a2 == v6 )
                  JUMPOUT(0x303D1E8B0LL);
                if ( (*(_DWORD *)a2 & 1) != 0 )
                {
                  a4 = a2 - *(_QWORD *)(a2 - 8);
                  if ( a2 == v6 )
                    JUMPOUT(0x303D1E8D2LL);
                  a3 = a2;
                  v125 = ((unsigned __int64)v117 - a2) >> 9;
                  if ( *(_BYTE *)(a4 + v125 + 48) != 0 )
                    *(_BYTE *)(a4 + v125 + 48) = 0;
                  v117 = v219;
                  result = v225;
                  v118 = v190;
                  v116 = v191;
                  v7 = v192;
                }
                else
                {
                  a4 = a2 & 0xFFFFFFFFFFF80000LL;
                  a5 = (a2 & 0xFFFFFFFFFFF80000LL) + 2112;
                  a3 = (a2 - a5) >> 9;
                  if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + a3 + 0x38) != 0 )
                    *(_BYTE *)(a4 + a3 + 56) = 0;
                  v117 = v219;
                  result = v225;
                  v118 = v190;
                  v116 = v191;
                  v7 = v192;
                }
              }
            }
            else
            {
              v117 = (unsigned __int64 *)((char *)v117 + v10);
              result = v225;
            }
          }
        }
        else if ( *(_BYTE *)(v6 + 376654992) != 0 || (v119 & 2) == 0 )
        {
          if ( a5 == 4 )
          {
            v126 = *(unsigned int *)(a4 + 4);
            a3 = v6 + 8 * v126;
            *v117 = a3;
            if ( a2 == v6 )
            {
              v117 = (unsigned __int64 *)((char *)v117 + v10);
              result = v225;
            }
            else if ( (_DWORD)v126 != 0 )
            {
              if ( *(_BYTE *)(v6 + 376654992) != 0 )
              {
                if ( a2 == v6 )
                  JUMPOUT(0x303D1E960LL);
                a4 = a2;
                if ( v116 == v6 )
                  JUMPOUT(0x303D1E96ALL);
                if ( v116 <= a2 )
                {
                  if ( v118 == v6 )
                    JUMPOUT(0x303D1F174LL);
                  if ( a2 <= v118 )
                  {
                    v218 = (unsigned __int64 *)((char *)v117 + v10);
                    goto LABEL_350;
                  }
                }
                v218 = (unsigned __int64 *)((char *)v117 + v10);
                a4 = 0;
                if ( *(_QWORD *)(v6 + 376612552) <= a2 )
                  JUMPOUT(0x303D1E99DLL);
                a3 = 0;
LABEL_448:
                v117 = v218;
                result = v225;
                v118 = v190;
                v116 = v191;
                v7 = v192;
              }
              else
              {
                v220 = a4;
                if ( a3 == v6 )
                  JUMPOUT(0x303D1EE1DLL);
                if ( (*(_DWORD *)(v6 + 8 * v126) & 1) != 0 )
                {
                  v138 = a3 - *(_QWORD *)(a3 - 8);
                  v218 = (unsigned __int64 *)((char *)v117 + v10);
                }
                else
                {
                  v218 = (unsigned __int64 *)((char *)v117 + v10);
                  v138 = a3 & 0xFFFFFFFFFFF80000LL;
                }
                v139 = *(unsigned int *)(v138 + 40);
                v140 = *(_DWORD *)(v6 + 8 * v126);
                if ( (v140 & 6) == 6 )
                {
                  if ( (_DWORD)v139 == 0 )
                    goto LABEL_594;
                  a4 = *(_DWORD *)(v6 + 8 * v139 + 48) < 16;
                  a5 = (unsigned int)a4;
                }
                else
                {
                  a4 = 1;
                  if ( (v140 & 2) != 0 )
                    JUMPOUT(0x303D1EE6CLL);
                  a5 = 1;
                }
                if ( (_DWORD)a5 != 0 )
                {
                  if ( (*(_DWORD *)a2 & 6) != 6 )
                  {
                    a4 = 0;
                    if ( (*(_DWORD *)a2 & 2) != 0 )
                      JUMPOUT(0x303D1EE9ALL);
                    a3 = 0;
                    goto LABEL_448;
                  }
                  if ( a2 == v6 )
                    JUMPOUT(0x303D1F480LL);
                  a5 = a2;
                  if ( (*(_DWORD *)a2 & 1) != 0 )
                  {
                    v149 = a2 - *(_QWORD *)(a2 - 8);
                  }
                  else
                  {
                    a5 = a2 & 0xFFFFFFFFFFF80000LL;
                    v149 = a2 & 0xFFFFFFFFFFF80000LL;
                  }
                  a4 = *(unsigned int *)(v149 + 40);
                  if ( (_DWORD)a4 == 0 )
                    goto LABEL_602;
                  if ( *(int *)(v6 + 8 * a4 + 48) >= 16 )
                  {
LABEL_350:
                    if ( a2 == v6 )
                      JUMPOUT(0x303D1E9B4LL);
                    if ( (*(_DWORD *)a2 & 1) != 0 )
                    {
                      a3 = a2 - *(_QWORD *)(a2 - 8);
                      if ( a2 == v6 )
                        JUMPOUT(0x303D1E9CELL);
                      a5 = a2;
                      v127 = ((unsigned __int64)v117 - a2) >> 9;
                      if ( *(_BYTE *)(a3 + v127 + 48) != 0 )
                        *(_BYTE *)(a3 + v127 + 48) = 0;
                      v117 = v218;
                      result = v225;
                      v118 = v190;
                      v116 = v191;
                      v7 = v192;
                    }
                    else
                    {
                      a3 = a2 & 0xFFFFFFFFFFF80000LL;
                      a5 = (a2 - ((a2 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                      if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + a5 + 0x38) != 0 )
                        *(_BYTE *)(a3 + a5 + 56) = 0;
                      v117 = v218;
                      result = v225;
                      v118 = v190;
                      v116 = v191;
                      v7 = v192;
                    }
                  }
                  else
                  {
                    v117 = v218;
                    result = v225;
                    v118 = v190;
                    v116 = v191;
                    v7 = v192;
                  }
                }
                else
                {
                  v117 = v218;
                  result = v225;
                  v118 = v190;
                  v116 = v191;
                  v7 = v192;
                }
              }
            }
            else
            {
              v117 = (unsigned __int64 *)((char *)v117 + v10);
              result = v225;
            }
          }
          else
          {
            v120 = a4;
            v189 = (unsigned int *)a4;
            a3 = v119 & 1;
            if ( (v119 & 1) != 0 )
              v121 = a4 - *(_QWORD *)(a4 - 8);
            else
              v121 = a4 & 0xFFFFFFFFFFF80000LL;
            v213 = v121;
            a5 = *(unsigned int *)(v121 + 40);
            v188 = v6 + 8 * a5;
            v212 = a3 ^ 1;
            if ( (_DWORD)a5 == 0 )
              goto LABEL_584;
            if ( *(_BYTE *)(v6 + 8 * a5 + 52) != 0 )
            {
              v217 = (unsigned __int64 *)((char *)v117 + v10);
              v220 = a4;
            }
            else
            {
              v215 = a3;
              v187 = *(_DWORD *)a4 >> 3;
              v211 = *(_DWORD *)(v6 + 8LL * v187 + 32);
              v208 = (v211 >> 8) & 0xFFF;
              if ( *(_BYTE *)(v6 + 376654992) != 0 )
              {
                v131 = *(_DWORD *)(v6 + 8LL * v187 + 32);
                v217 = (unsigned __int64 *)a1;
                v220 = a4;
                v120 = v6;
                v132 = (unsigned int *)a4;
              }
              else
              {
                v133 = *(unsigned int *)(v6 + 376654972);
                if ( (_DWORD)v133 == 0 )
                  goto LABEL_588;
                v220 = a4;
                v134 = *(_DWORD *)(v6 + 8 * v133) >> 3;
                if ( (unsigned __int16)*(_DWORD *)(v6
                                                 + 8LL * *(unsigned int *)(v6 + 8 * v134 + 20)
                                                 + 4LL
                                                 * (*(_DWORD *)(v6 + 8 * v134 + 44)
                                                  & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v134 + 44))))
                                                 + 12) != 519 )
                  goto LABEL_589;
                v135 = *(unsigned int *)(v6 + 8 * a5 + 48);
                a4 = (unsigned int)(*(_DWORD *)(v6 + 8 * a5 + 48) + 1);
                a3 = (unsigned int)(*(_DWORD *)(v6 + 8 * v133 + 16) + 1);
                if ( (int)a3 > (int)a4 )
                {
                  v206 = *(_DWORD *)(v6 + 8 * a5 + 48);
                  if ( v215 != 0 )
                  {
                    v204 = *(_DWORD *)(v6 + 8 * a5 + 48) + 1;
                    v217 = (unsigned __int64 *)a1;
                    if ( (unsigned int)sub_181EA85C0(a1, a2, a3: v6 + 376652784, a4, a5: v121) != 0 )
                    {
                      if ( v206 >= 0xF )
                        goto LABEL_606;
                      v183 = v6 + 8LL * *(unsigned int *)(v6 + 4LL * v206 + 376654108);
                      sub_181E9D6C0(a1, a2, a3: v121, a4, a5: v188, a6: v183);
                      v120 = (unsigned __int64)v189;
                      v131 = v211;
                      v132 = v189;
                    }
                    else
                    {
                      v120 = v6;
                      v131 = v211;
                      v132 = v189;
                    }
                  }
                  else
                  {
                    v204 = *(_DWORD *)(v6 + 8 * a5 + 48) + 1;
                    v217 = (unsigned __int64 *)a1;
                    if ( (unsigned int)v135 >= 0xF )
                      goto LABEL_597;
                    if ( v211 < 0 )
                    {
                      a1 = (__int64)v189;
                      a3 = (v208 + ((unsigned __int64)v189[2] << v211) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    else
                    {
                      a3 = (unsigned int)v211;
                      a1 = (__int64)v189;
                    }
                    v145 = *(unsigned int *)(v6 + 4 * v135 + 376654108);
                    a4 = v6 + 8 * v145;
                    if ( (_DWORD)v145 == 0 )
                      goto LABEL_599;
                    v185 = v145;
                    v146 = *(char **)(v6 + 8 * v145 + 24);
                    if ( v146 != nullptr
                      && (v155 = *((_QWORD *)v146 + 4), a3 <= *(_QWORD *)v146 - v155)
                      && (v174 = &v146[v155], a5 = &v174[a3] - v146, *((_QWORD *)v146 + 4) = a5, v174 != nullptr) )
                    {
                      v183 = v6 + 8 * v145;
                      v201 = a3;
                      v147 = (__int64)v174;
                    }
                    else
                    {
                      v183 = v6 + 8 * v145;
                      v201 = a3;
                      v147 = sub_181E9D600(a1, a2, a3, a4, a5: v183);
                    }
                    if ( v147 != 0 )
                    {
                      v198 = v147;
                      MEMORY[0x1828393A0](a1, a2, a3: v189, a4, a5: v147, a6: v201);
                      v120 = v198;
                      a4 = v185;
                      if ( *(_DWORD *)(v6 + 8LL * v185 + 48) == 16 && *(_BYTE *)(v6 + 376654992) == 0 )
                      {
                        a5 = v198 & 0xFFFFFFFFFFF80000LL;
                        a3 = v198 - ((v198 & 0xFFFFFFFFFFF80000LL) + 2112);
                        v162 = a3 >> 9;
                        v163 = (a3 + v201 - 1) >> 9;
                        if ( v163 != a3 >> 9 || (a3 & 0x1FF) == 0 )
                        {
                          if ( (a3 & 0x1FF) != 0 )
                          {
                            v164 = v162 + 1;
                            *(_BYTE *)(a5 + v162 + 1081) = -(__int64)((((v162 + 1) << 9) - a3) >> 3);
                          }
                          else
                          {
                            *(_BYTE *)(a5 + v162 + 1080) = 0;
                            v164 = (v198 - ((v198 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                          }
                          if ( v164 + 63 < v163 )
                            JUMPOUT(0x303D1F736LL);
                          v165 = v164 + 1;
                          a3 = 1;
                          while ( v165 <= v163 )
                          {
                            *(_BYTE *)(a5 + v165 + 1080) = a3;
                            a3 = (unsigned int)(a3 + 1);
                            ++v165;
                          }
                          v175 = 6;
LABEL_558:
                          while ( v165 <= v163 )
                          {
                            a3 = (unsigned int)(v175 + 1);
                            v176 = v175 + 58;
                            a2 = (unsigned int)(1 << v175);
                            for ( k = 0; ; ++k )
                            {
                              if ( (int)a2 <= k )
                              {
                                v175 = a3;
                                goto LABEL_558;
                              }
                              *(_BYTE *)(a5 + v165++ + 1080) = v176;
                              if ( v165 > v163 )
                                break;
                            }
                            v175 = a3;
                          }
                        }
                        a4 = *(unsigned int *)v198 | 2LL;
                        *(_DWORD *)v198 = a4;
                      }
                    }
                    else
                    {
                      v120 = v6;
                    }
                    if ( v120 == v6 )
                    {
                      v131 = v211;
                      v132 = v189;
                    }
                    else
                    {
                      v131 = v211;
                      a4 = (v120 - v6) >> 3;
                      if ( v211 < 0 )
                      {
                        v132 = v189;
                        a4 = (unsigned __int8)v211;
                        v148 = (v208 + ((unsigned __int64)v189[2] << v211) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      }
                      else
                      {
                        v148 = (unsigned int)v211;
                        v132 = v189;
                      }
                      a3 = (unsigned __int64)(unsigned int)((v120 - v6) >> 3) << 32;
                      a5 = a3 | v148 | 4;
                      *(_QWORD *)v132 = a5;
                    }
                  }
                  if ( v120 == v6 )
                    *(_BYTE *)(v6 + 376652620) = 1;
                }
                else
                {
                  v120 = v6;
                  v131 = *(_DWORD *)(v6 + 8LL * v187 + 32);
                  v217 = (unsigned __int64 *)a1;
                  v132 = v189;
                }
              }
              if ( v120 == v6 )
              {
                a5 = (unsigned int)*(char *)(v6 + 376654992);
                v136 = *(_BYTE *)(v6 + 8LL * v187 + 68);
                v183 = v6 + 8LL * v187;
                v137 = ((unsigned __int64)v132 - v6) >> 3;
                if ( v215 != 0 )
                {
                  if ( *(_BYTE *)(v6 + 376654992) != 0 )
                  {
                    a3 = *v132 & 6LL;
                    if ( a3 == 6 )
                    {
                      v120 = (unsigned __int64)v132;
                    }
                    else
                    {
                      a3 = *v132 | 6LL;
                      *v132 = a3;
                      if ( v136 == 6 )
                      {
                        if ( v132[2] != 0 )
                        {
                          v171 = *(_QWORD *)(v6 + 376654880);
                          if ( v171 == 0 || (_DWORD)(v172 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                          {
                            v137 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                            *(_QWORD *)(v6 + 376654880) = v137;
                            *(_DWORD *)(v6 + 376654876) = 0;
                            v171 = v137;
                            v172 = 0;
                            LODWORD(v137) = ((unsigned __int64)v132 - v6) >> 3;
                          }
                          *(_DWORD *)(v6 + 376654876) = v172 + 1;
                          *(_DWORD *)(v171 + 4 * v172 + 8) = v137;
                          v173 = *(_QWORD *)(v6 + 376654880);
                          if ( v173 == 0 || (_DWORD)(a3 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                          {
                            v173 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                            *(_QWORD *)(v6 + 376654880) = v173;
                            *(_DWORD *)(v6 + 376654876) = 0;
                            a3 = 0;
                          }
                          a4 = (unsigned int)(a3 + 1);
                          *(_DWORD *)(v6 + 376654876) = a4;
                          *(_DWORD *)(v173 + 4 * a3 + 8) = 0;
                          v120 = (unsigned __int64)v189;
                        }
                        else
                        {
                          v120 = (unsigned __int64)v132;
                        }
                      }
                      else
                      {
                        a4 = *(_QWORD *)(v6 + 376654856);
                        if ( a4 == 0 || (_DWORD)(a3 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                        {
                          v137 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654856));
                          *(_QWORD *)(v6 + 376654856) = v137;
                          *(_DWORD *)(v6 + 376654852) = 0;
                          a4 = v137;
                          a3 = 0;
                          LODWORD(v137) = ((unsigned __int64)v132 - v6) >> 3;
                        }
                        *(_DWORD *)(v6 + 376654852) = a3 + 1;
                        *(_DWORD *)(a4 + 4 * a3 + 8) = v137;
                        v120 = (unsigned __int64)v189;
                      }
                    }
                  }
                  else
                  {
                    sub_181E9D6C0(a1, a2, a3: v121, a4, a5: v188, a6: v6 + 376653896);
                    v120 = (unsigned __int64)v189;
                  }
                }
                else if ( *(_BYTE *)(v6 + 376654992) != 0 )
                {
                  a4 = *v132;
                  a3 = *v132 & 6;
                  if ( a3 == 6 )
                  {
                    v120 = (unsigned __int64)v132;
                  }
                  else
                  {
                    a3 = *v132 | 6LL;
                    *v132 = a3;
                    if ( v136 == 6 )
                    {
                      if ( v132[2] != 0 )
                      {
                        v169 = *(_QWORD *)(v6 + 376654880);
                        if ( v169 == 0 || (_DWORD)(a5 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                        {
                          v137 = sub_181EA8720(a1, a2, a3: v169);
                          *(_QWORD *)(v6 + 376654880) = v137;
                          *(_DWORD *)(v6 + 376654876) = 0;
                          v169 = v137;
                          a5 = 0;
                          LODWORD(v137) = ((unsigned __int64)v132 - v6) >> 3;
                        }
                        *(_DWORD *)(v6 + 376654876) = a5 + 1;
                        *(_DWORD *)(v169 + 4 * a5 + 8) = v137;
                        v170 = *(_QWORD *)(v6 + 376654880);
                        if ( v170 == 0 || (_DWORD)(a3 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                        {
                          v170 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                          *(_QWORD *)(v6 + 376654880) = v170;
                          *(_DWORD *)(v6 + 376654876) = 0;
                          a3 = 0;
                        }
                        a4 = (unsigned int)(a3 + 1);
                        *(_DWORD *)(v6 + 376654876) = a4;
                        *(_DWORD *)(v170 + 4 * a3 + 8) = 0;
                        v120 = (unsigned __int64)v189;
                      }
                      else
                      {
                        v120 = (unsigned __int64)v132;
                      }
                    }
                    else
                    {
                      a3 = *(_QWORD *)(v6 + 376654856);
                      if ( a3 == 0 || (_DWORD)(a5 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                      {
                        v137 = sub_181EA8720(a1, a2, a3);
                        *(_QWORD *)(v6 + 376654856) = v137;
                        *(_DWORD *)(v6 + 376654852) = 0;
                        a3 = v137;
                        a5 = 0;
                        LODWORD(v137) = ((unsigned __int64)v132 - v6) >> 3;
                      }
                      a4 = (unsigned int)(a5 + 1);
                      *(_DWORD *)(v6 + 376654852) = a4;
                      *(_DWORD *)(a3 + 4 * a5 + 8) = v137;
                      v120 = (unsigned __int64)v189;
                    }
                  }
                }
                else
                {
                  if ( v131 < 0 )
                    a3 = (v208 + ((unsigned __int64)v189[2] << v211) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  else
                    a3 = (unsigned int)v211;
                  a4 = *(_QWORD *)(v6 + 376653920);
                  if ( a4 != 0
                    && (v153 = *(_QWORD *)(a4 + 32), a3 <= *(_QWORD *)a4 - v153)
                    && (v154 = a4 + v153, a5 = v154 + a3 - a4, *(_QWORD *)(a4 + 32) = a5, v154 != 0) )
                  {
                    v197 = a3;
                    v144 = v154;
                  }
                  else
                  {
                    v197 = a3;
                    v144 = sub_181E9D600(a1, a2, a3, a4, a5: v6 + 376653896);
                  }
                  if ( v144 != 0 )
                  {
                    v203 = v144;
                    MEMORY[0x1828393A0](a1, a2, a3: v189, a4: v189, a5: v144, a6: v197);
                    v120 = v203;
                    if ( *(_BYTE *)(v6 + 376654992) == 0 )
                    {
                      v156 = v203 & 0xFFFFFFFFFFF80000LL;
                      v157 = v203 - ((v203 & 0xFFFFFFFFFFF80000LL) + 2112);
                      v158 = v157 >> 9;
                      a3 = (v157 + v197 - 1) >> 9;
                      if ( a3 != v157 >> 9 || (v157 & 0x1FF) == 0 )
                      {
                        if ( (v157 & 0x1FF) != 0 )
                        {
                          v159 = v158 + 1;
                          a1 = -(__int64)((((v158 + 1) << 9) - v157) >> 3);
                          *(_BYTE *)(v156 + v158 + 1081) = a1;
                        }
                        else
                        {
                          *(_BYTE *)(v156 + v158 + 1080) = 0;
                          v159 = (v203 - ((v203 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                        }
                        if ( v159 + 63 < a3 )
                          JUMPOUT(0x303D1F685LL);
                        v160 = v159 + 1;
                        v161 = 1;
                        while ( v160 <= a3 )
                          *(_BYTE *)(v156 + v160++ + 1080) = v161++;
                        v166 = 6;
LABEL_523:
                        while ( v160 <= a3 )
                        {
                          v167 = v166 + 1;
                          a1 = (unsigned int)(v166 + 58);
                          a5 = (unsigned int)(1 << v166);
                          for ( m = 0; ; ++m )
                          {
                            if ( (int)a5 <= m )
                            {
                              v166 = v167;
                              goto LABEL_523;
                            }
                            *(_BYTE *)(v156 + v160++ + 1080) = a1;
                            if ( v160 > a3 )
                              break;
                          }
                          v166 = v167;
                        }
                      }
                      a4 = *(unsigned int *)v203 | 2LL;
                      *(_DWORD *)v203 = a4;
                    }
                  }
                  else
                  {
                    v120 = v6;
                  }
                  if ( v120 != v6 )
                  {
                    a4 = (unsigned int)v211;
                    if ( v211 < 0 )
                    {
                      v152 = (unsigned __int64 *)v189;
                      a4 = (v208 + ((unsigned __int64)v189[2] << v211) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      v151 = a4;
                    }
                    else
                    {
                      v151 = (unsigned int)v211;
                      v152 = (unsigned __int64 *)v189;
                    }
                    a3 = (v120 - v6) >> 3 << 32;
                    *v152 = a3 | v151 | 4;
                  }
                }
              }
            }
            if ( (unsigned int *)v120 != v189 )
              *(_QWORD *)v224 = v120;
            a2 = v193;
            if ( v193 == v6 || v120 == v6 )
              goto LABEL_454;
            if ( *(_BYTE *)(v6 + 376654992) != 0 )
            {
              v122 = v191;
              if ( v193 == v6 )
                JUMPOUT(0x303D1E775LL);
              if ( v191 == v6 )
                JUMPOUT(0x303D1E77FLL);
              if ( v191 > v193 )
              {
                a1 = v190;
              }
              else
              {
                a1 = v190;
                if ( v190 == v6 )
                  JUMPOUT(0x303D1E798LL);
                if ( v193 <= v190 )
                  goto LABEL_317;
              }
              if ( *(_QWORD *)(v6 + 376612552) <= v193 )
                JUMPOUT(0x303D1F0E7LL);
              a4 = 0;
LABEL_423:
              v117 = v217;
              result = v225;
              v10 = v226;
              v118 = a1;
              v116 = v122;
              v7 = v192;
            }
            else
            {
              a1 = v190;
              v122 = v191;
              if ( v120 == v6 )
                JUMPOUT(0x303D1EEB5LL);
              if ( (*(_DWORD *)v120 & 1) != 0 )
                v141 = v120 - *(_QWORD *)(v120 - 8);
              else
                v141 = v120 & 0xFFFFFFFFFFF80000LL;
              v142 = *(unsigned int *)(v141 + 40);
              v143 = *(unsigned int *)v120;
              a5 = *(_DWORD *)v120 & 6;
              if ( a5 == 6 )
              {
                if ( (_DWORD)v142 == 0 )
                  goto LABEL_595;
                a4 = *(_DWORD *)(v6 + 8 * v142 + 48) < 16;
                a3 = (unsigned int)a4;
              }
              else
              {
                a4 = 1;
                if ( (v143 & 2) != 0 )
                  JUMPOUT(0x303D1EEEBLL);
                a3 = 1;
              }
              if ( (_DWORD)a3 != 0 )
              {
                a4 = *(unsigned int *)v193;
                a3 = *(_DWORD *)v193 & 6;
                if ( a3 != 6 )
                {
                  if ( (a4 & 2) != 0 )
                    JUMPOUT(0x303D1EF1ALL);
                  a4 = 0;
                  goto LABEL_423;
                }
                if ( v193 == v6 )
                  JUMPOUT(0x303D1F4D6LL);
                a5 = v193;
                if ( (*(_DWORD *)v193 & 1) != 0 )
                {
                  v150 = v193 - *(_QWORD *)(v193 - 8);
                }
                else
                {
                  a5 = v193 & 0xFFFFFFFFFFF80000LL;
                  v150 = v193 & 0xFFFFFFFFFFF80000LL;
                }
                a3 = *(unsigned int *)(v150 + 40);
                if ( (_DWORD)a3 == 0 )
                  goto LABEL_603;
                if ( *(int *)(v6 + 8 * a3 + 48) >= 16 )
                {
LABEL_317:
                  if ( v193 == v6 )
                    JUMPOUT(0x303D1E7B5LL);
                  if ( (*(_DWORD *)v193 & 1) != 0 )
                  {
                    v123 = (char *)(v193 - *(_QWORD *)(v193 - 8));
                    if ( v193 == v6 )
                      JUMPOUT(0x303D1E7CFLL);
                    a4 = v193;
                    v124 = (unsigned __int64)&v224[-v193] >> 9;
                    if ( v123[v124 + 48] != 0 )
                      v123[v124 + 48] = 0;
                  }
                  else
                  {
                    a3 = (v193 & 0xFFFFFFFFFFF80000LL) + 2112;
                    a4 = (v193 - a3) >> 9;
                    if ( *(_BYTE *)((v193 & 0xFFFFFFFFFFF80000LL) + a4 + 0x38) != 0 )
                      *(_BYTE *)((v193 & 0xFFFFFFFFFFF80000LL) + ((v193 - a3) >> 9) + 0x38) = 0;
                  }
                  goto LABEL_423;
                }
              }
LABEL_454:
              v117 = v217;
              result = v225;
              v10 = v226;
              v118 = v190;
              v116 = v191;
              v7 = v192;
            }
          }
        }
        else
        {
          v117 = (unsigned __int64 *)((char *)v117 + v10);
        }
      }
      else
      {
        v117 = (unsigned __int64 *)((char *)v117 + v10);
      }
    }
    else
    {
      v117 = (unsigned __int64 *)((char *)v117 + v10);
    }
  }
  return result;
}
