// sub_1E8EB00
// rva 0x01e8eb00  size 9529  section .text  group text
// window base 0x181e8eb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1E8EB00(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  int v12; // r12d
  int *v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char *v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // r11
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rbx
  char v34; // bp
  __int64 v35; // r9
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rbx
  __int64 v38; // r10
  char *v39; // rsi
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbp
  char *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r9
  char *v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rbp
  __int64 v52; // rbx
  BOOL v53; // ebp
  __int64 v54; // rbx
  char *v55; // rax
  unsigned __int64 v56; // rcx
  char v57; // bp
  int v58; // ebx
  __int64 v59; // r10
  int v60; // ebp
  __int64 v61; // rdi
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rbp
  __int64 v64; // rbp
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // r9
  __int64 v67; // r9
  int v68; // ebx
  BOOL v69; // ebp
  __int64 v70; // rbp
  __int64 v71; // r12
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rdi
  BOOL v78; // edx
  char v79; // r8
  char v80; // al
  __int64 v81; // rcx
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  char *v88; // rcx
  unsigned __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // rdi
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  unsigned __int64 v104; // rcx
  char *v105; // rsi
  __int64 v106; // r10
  char *v107; // r10
  unsigned __int64 v108; // rdi
  __int64 v109; // rax
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // rcx
  unsigned __int64 *v112; // r9
  unsigned __int64 v113; // rbp
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rsi
  unsigned __int64 v118; // rsi
  int v119; // ebx
  int v120; // ecx
  int v121; // ebx
  char v122; // di
  int v123; // r8d
  int j; // ecx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  unsigned __int64 v133; // rbx
  unsigned __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // r8
  unsigned __int64 v137; // r12
  unsigned __int64 v138; // r12
  int v139; // edx
  int v140; // ecx
  char v141; // r11
  int v142; // edx
  int i; // ecx
  unsigned int v144; // [rsp+18h] [rbp-170h]
  unsigned int v145; // [rsp+1Ch] [rbp-16Ch]
  unsigned __int64 v146; // [rsp+20h] [rbp-168h]
  unsigned __int64 v147; // [rsp+28h] [rbp-160h]
  unsigned __int64 v148; // [rsp+30h] [rbp-158h]
  unsigned __int64 v149; // [rsp+48h] [rbp-140h]
  unsigned __int64 v150; // [rsp+50h] [rbp-138h]
  unsigned int v151; // [rsp+5Ch] [rbp-12Ch]
  unsigned __int64 v152; // [rsp+60h] [rbp-128h]
  int v153; // [rsp+DCh] [rbp-ACh]
  unsigned __int64 v154; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v155; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v156; // [rsp+E8h] [rbp-A0h]
  unsigned __int64 v157; // [rsp+F0h] [rbp-98h]
  unsigned int v158; // [rsp+F8h] [rbp-90h]
  __int64 v159; // [rsp+100h] [rbp-88h]
  unsigned int v160; // [rsp+10Ch] [rbp-7Ch]
  unsigned __int64 v161; // [rsp+110h] [rbp-78h]
  int v162; // [rsp+118h] [rbp-70h]
  unsigned __int64 v163; // [rsp+120h] [rbp-68h]
  unsigned __int64 v164; // [rsp+128h] [rbp-60h]
  char *v165; // [rsp+130h] [rbp-58h]
  char v166; // [rsp+13Ch] [rbp-4Ch]
  int v167; // [rsp+13Ch] [rbp-4Ch]
  __int64 v168; // [rsp+140h] [rbp-48h]
  unsigned __int64 v169; // [rsp+148h] [rbp-40h]
  unsigned int *v170; // [rsp+150h] [rbp-38h]
  unsigned __int64 v171; // [rsp+158h] [rbp-30h]
  int *v172; // [rsp+168h] [rbp-20h]
  unsigned __int64 v173; // [rsp+178h] [rbp-10h]
  __int64 v174; // [rsp+178h] [rbp-10h]
  unsigned int v175; // [rsp+180h] [rbp-8h]

  if ( a5 == v5 )
    JUMPOUT(0x303D18B11LL);
  v6 = *(unsigned int *)((a5 & 0xFFFFFFFFFFF80000LL) + 0x28);
  result = v5 + 8 * v6;
  if ( *(_BYTE *)(v5 + 376654992) == 0 && (_DWORD)v6 == 0 )
  {
    sub_276EFE0();
    goto LABEL_152;
  }
  if ( (*(_DWORD *)a5 & 6LL) == 6 )
  {
    if ( a5 != v5 )
    {
      v152 = a5;
      v151 = *(_DWORD *)a5 >> 3;
      v8 = v151;
      v9 = (unsigned int)*(char *)(v5 + 8LL * v151 + 68);
      v175 = v9;
      v10 = v5 + 8LL * *(unsigned int *)(v5 + 58177844);
      v150 = v10;
      v11 = v5 + 8LL * *(unsigned int *)(v5 + 58177848);
      v149 = v11;
      if ( (_DWORD)v9 != 1 )
        goto LABEL_9;
      if ( *(__int16 *)(v5 + 8LL * v151 + 62) >= 2 )
        goto LABEL_20;
      do
      {
        sub_276EAE0();
LABEL_20:
        ;
      }
      while ( *(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v8 + 16) + 16) != 5732 );
      v17 = 8LL * *(unsigned int *)(a5 + 8);
      if ( v17 != 0 )
        v17 += v5;
      if ( v17 != 0 )
        goto LABEL_9;
      v18 = 8LL * *(unsigned int *)(a5 + 4);
      if ( v18 != 0 )
        v18 += v5;
      v174 = v18;
      if ( v18 == 0 )
        goto LABEL_9;
      if ( (unsigned int)sub_1E9EBA0() != 0 )
      {
        v11 = v149;
        v10 = v150;
        v9 = 1;
        v8 = v151;
        a5 = v152;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)v174 & 6LL) == 4 )
      {
        v11 = v149;
        v10 = v150;
        a5 = v152;
        *(_DWORD *)(v152 + 4) = *(_DWORD *)(v174 + 4);
        if ( (*(_DWORD *)v152 & 2) != 0 )
        {
          if ( v152 == v5 )
            JUMPOUT(0x303D19472LL);
          a4 = (v152 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - a4) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - a4) >> 9) + 0x38) = 0;
          v9 = 1;
          v8 = v151;
        }
        else
        {
          v9 = 1;
          v8 = v151;
        }
        goto LABEL_9;
      }
      if ( (unsigned int)sub_1E9F320(a1: v19, a2: v20, a3: v174) != 0 )
      {
        a5 = v152;
        if ( v152 == v5 )
          JUMPOUT(0x303D19137LL);
        if ( *(_BYTE *)(v5 + 376654992) != 0 )
        {
          v10 = v150;
          if ( v152 == v5 )
            JUMPOUT(0x303D19158LL);
          if ( v150 == v5 )
            JUMPOUT(0x303D19162LL);
          if ( v150 > v152 )
          {
            v11 = v149;
          }
          else
          {
            v11 = v149;
            if ( v149 == v5 )
              JUMPOUT(0x303D1917ALL);
            if ( v152 <= v149 )
            {
LABEL_38:
              if ( v152 == v5 )
                JUMPOUT(0x303D19196LL);
              if ( (*(_DWORD *)v152 & 1) != 0 )
              {
                v21 = (char *)(v152 - *(_QWORD *)(v152 - 8));
                if ( v152 == v5 )
                  JUMPOUT(0x303D191B0LL);
                a4 = v152;
                if ( v21[48] != 0 )
                  v21[48] = 0;
                v9 = 1;
                v8 = v151;
              }
              else
              {
                a4 = v152 - (v152 & 0xFFFFFFFFFFF80000LL);
                if ( *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((a4 - 2112) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((a4 - 2112) >> 9) + 0x38) = 0;
                v9 = 1;
                v8 = v151;
              }
              goto LABEL_9;
            }
          }
          if ( *(_QWORD *)(v5 + 376612552) <= v152 )
            JUMPOUT(0x303D193A9LL);
          a4 = 0;
LABEL_71:
          v9 = 1;
          v8 = v151;
          goto LABEL_9;
        }
        v11 = v149;
        v10 = v150;
        if ( (*(_DWORD *)v174 & 1) != 0 )
          v25 = v174 - *(_QWORD *)(v174 - 8);
        else
          v25 = v174 & 0xFFFFFFFFFFF80000LL;
        v26 = *(unsigned int *)(v25 + 40);
        if ( (*(_DWORD *)v174 & 6) == 6 )
        {
          if ( (_DWORD)v26 == 0 )
          {
            sub_276EFE0(a1: v149, a2: v150, a3: v174, a4: v5 + 8 * v26);
            goto LABEL_385;
          }
          a4 = *(_DWORD *)(v5 + 8 * v26 + 48) < 16;
          v27 = a4;
        }
        else
        {
          a4 = 1;
          if ( (*(_DWORD *)v174 & 2) != 0 )
            JUMPOUT(0x303D19307LL);
          v27 = 1;
        }
        if ( v27 == 0 )
        {
          v9 = 1;
          v8 = v151;
          goto LABEL_9;
        }
        a4 = *(unsigned int *)v152;
        if ( (*(_DWORD *)v152 & 6) != 6 )
        {
          if ( (a4 & 2) != 0 )
            JUMPOUT(0x303D1933ALL);
          a4 = 0;
          goto LABEL_71;
        }
        if ( v152 == v5 )
          JUMPOUT(0x303D1974FLL);
        if ( (a4 & 1) != 0 )
          v44 = v152 - *(_QWORD *)(v152 - 8);
        else
          v44 = v152 & 0xFFFFFFFFFFF80000LL;
        v45 = *(unsigned int *)(v44 + 40);
        if ( (_DWORD)v45 != 0 )
        {
          if ( *(int *)(v5 + 8 * v45 + 48) < 16 )
          {
            v9 = 1;
            v8 = v151;
            goto LABEL_9;
          }
          goto LABEL_38;
        }
LABEL_385:
        sub_276EFE0(a1: v11, a2: v10, a3: v5 + 8 * v45);
LABEL_386:
        sub_276EFE0(a1: v11, a2: a4, a3: v32);
LABEL_387:
        sub_276EFE0(a1: v11, a2: a4, a3: v32);
LABEL_388:
        sub_276EFE0(a1: v11, a2: a4, a3: v32);
LABEL_389:
        sub_276EFE0(a1: v11, a2: a4, a3: v32);
LABEL_390:
        sub_276EDE0(a1: v11, a2: v165, a3: v72, a4: v73, a5: v152);
LABEL_391:
        sub_276EFE0(a1: v11, a2: a4, a3: v32, a4, a5, a6: v5 + 8 * v67);
LABEL_392:
        sub_276EFE0(a1: v77, a2: v39, a3: v76, a4: v5 + 8 * v75, a5);
LABEL_393:
        sub_276EFE0(a1: v11, a2: v165, a3: v93, a4: v94, a5, a6: v67);
LABEL_394:
        sub_276EFE0(a1: v96, a2: v39, a3: v5 + 8 * v98);
LABEL_395:
        sub_276F0E0(a1: v11, a2: v165, a3: v87, a4: v88, a5: v89);
LABEL_396:
        sub_276EFE0(a1: v11, a2: v165, a3: v102, a4: v104, a5: v89);
LABEL_397:
        sub_276F0E0(a1: v146, a2: v165, a3: v168, a4: v169, a5: v152, a6: v147);
        __halt();
      }
      v11 = v149;
      v10 = v150;
      a5 = v152;
      if ( *(_BYTE *)(v5 + 376654993) == 0 )
      {
        v28 = *(_DWORD *)v152 >> 3;
        if ( *(__int16 *)(v5 + 8 * v28 + 62) >= 3
          && *(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v28 + 16) + 20) == 27487 )
        {
          v29 = *(_QWORD *)(v152 + 24);
          if ( v29 == 0 )
            v29 = *(_QWORD *)(v5 + 376191424);
          if ( (unsigned __int64)(*(_QWORD *)(v5 + 376181240) - v29) < *(_QWORD *)(v5 + 376178864) )
          {
            if ( v152 == v5 )
              JUMPOUT(0x303D1950FLL);
            v30 = (unsigned int *)(v152 + 8);
            v170 = (unsigned int *)(v152 + 8);
            v148 = v5 + 376652784;
            a4 = v152 + 4;
            while ( (unsigned __int64)v30 > a4 )
            {
              v31 = 8LL * *(unsigned int *)a4;
              if ( v31 != 0 )
                v31 += v5;
              v32 = a4 + 4;
              if ( v31 != 0 )
              {
                if ( v10 == v5 )
                  JUMPOUT(0x303D1956FLL);
                if ( v10 > v31 )
                  goto LABEL_95;
                if ( v11 == v5 )
                  JUMPOUT(0x303D1957ELL);
                if ( v31 > v11 )
                {
LABEL_95:
                  v169 = v31;
                  v33 = *(unsigned int *)v31;
                  v168 = v33;
                  v34 = *(_BYTE *)(v5 + 376654992);
                  v35 = v33 & 6;
                  if ( v35 == 6 )
                  {
                    v48 = v31;
                    if ( v34 != 0 )
                    {
                      if ( a5 == v5 )
                        JUMPOUT(0x303D1993BLL);
                      if ( v10 == v5 )
                        JUMPOUT(0x303D19945LL);
                      if ( v10 <= a5 )
                      {
                        if ( v11 == v5 )
                          JUMPOUT(0x303D19958LL);
                        if ( a5 <= v11 )
                          goto LABEL_146;
                      }
                      if ( *(_QWORD *)(v5 + 376612552) <= a5 )
                        JUMPOUT(0x303D19B08LL);
LABEL_182:
                      a4 = v32;
                    }
                    else
                    {
LABEL_154:
                      if ( (*(_DWORD *)v48 & 1) != 0 )
                        v51 = v48 - *(_QWORD *)(v48 - 8);
                      else
                        v51 = v48 & 0xFFFFFFFFFFF80000LL;
                      v52 = *(unsigned int *)(v51 + 40);
                      if ( (*(_DWORD *)v48 & 6) == 6 )
                      {
                        if ( (_DWORD)v52 == 0 )
                          goto LABEL_387;
                        v53 = *(_DWORD *)(v5 + 8 * v52 + 48) < 16;
                      }
                      else
                      {
                        if ( (*(_DWORD *)v48 & 2) != 0 )
                          JUMPOUT(0x303D19A6BLL);
                        v53 = true;
                      }
                      if ( v53 )
                      {
                        if ( (*(_DWORD *)a5 & 6) != 6 )
                        {
                          if ( (*(_DWORD *)a5 & 2) != 0 )
                            JUMPOUT(0x303D19A9ALL);
                          goto LABEL_182;
                        }
                        if ( a5 == v5 )
                          JUMPOUT(0x303D19DA9LL);
                        if ( (*(_DWORD *)a5 & 1) != 0 )
                          v63 = a5 - *(_QWORD *)(a5 - 8);
                        else
                          v63 = a5 & 0xFFFFFFFFFFF80000LL;
                        v64 = *(unsigned int *)(v63 + 40);
                        if ( (_DWORD)v64 == 0 )
                          goto LABEL_388;
                        if ( *(int *)(v5 + 8 * v64 + 48) >= 16 )
                        {
LABEL_146:
                          if ( a5 == v5 )
                            JUMPOUT(0x303D19976LL);
                          if ( (*(_DWORD *)a5 & 1) != 0 )
                          {
                            v49 = (char *)(a5 - *(_QWORD *)(a5 - 8));
                            if ( a5 == v5 )
                              JUMPOUT(0x303D19990LL);
                            v50 = (a4 - a5) >> 9;
                            if ( v49[v50 + 48] != 0 )
                              v49[v50 + 48] = 0;
                          }
                          else if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                             + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                             + 0x38) != 0 )
                          {
                            *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                     + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                     + 0x38) = 0;
                          }
                        }
                        a4 = v32;
                        v11 = v149;
                        v10 = v150;
                      }
                      else
                      {
                        a4 = v32;
                      }
                    }
                  }
                  else if ( v34 != 0 )
                  {
                    v166 = *(_BYTE *)(v5 + 376654992);
LABEL_98:
                    v165 = (char *)a4;
                    v164 = a4 + 4;
                    if ( v35 == 4 )
                    {
                      v54 = *(unsigned int *)(v31 + 4);
                      *(_DWORD *)a4 = v54;
                      if ( (_DWORD)v54 != 0 )
                      {
                        if ( *(_BYTE *)(v5 + 376654992) != 0 )
                        {
                          if ( a5 == v5 )
                            JUMPOUT(0x303D19B40LL);
                          if ( v10 == v5 )
                            JUMPOUT(0x303D19B4ALL);
                          if ( v10 <= a5 )
                          {
                            if ( v11 == v5 )
                              JUMPOUT(0x303D19B5DLL);
                            if ( a5 <= v11 )
                              goto LABEL_174;
                          }
                          if ( *(_QWORD *)(v5 + 376612552) <= v152 )
                            JUMPOUT(0x303D1A144LL);
LABEL_241:
                          a4 += 4LL;
                          v11 = v149;
                          v10 = v150;
                          a5 = v152;
                        }
                        else
                        {
                          v65 = v5 + 8 * v54;
                          if ( v65 == v5 )
                            JUMPOUT(0x303D19E17LL);
                          if ( (*(_DWORD *)(v5 + 8 * v54) & 1) != 0 )
                          {
                            v66 = v65 - *(_QWORD *)(v65 - 8);
                            v147 = v5 + 8 * v54;
                          }
                          else
                          {
                            v147 = v5 + 8 * v54;
                            v66 = v65 & 0xFFFFFFFFFFF80000LL;
                          }
                          v67 = *(unsigned int *)(v66 + 40);
                          v68 = *(_DWORD *)(v5 + 8 * v54);
                          if ( (v68 & 6) == 6 )
                          {
                            if ( (_DWORD)v67 == 0 )
                              goto LABEL_391;
                            v69 = *(_DWORD *)(v5 + 8 * v67 + 48) < 16;
                          }
                          else
                          {
                            if ( (v68 & 2) != 0 )
                              JUMPOUT(0x303D19E66LL);
                            v69 = true;
                          }
                          if ( v69 )
                          {
                            if ( (*(_DWORD *)a5 & 6) != 6 )
                            {
                              if ( (*(_DWORD *)a5 & 2) != 0 )
                                JUMPOUT(0x303D19E9ALL);
                              goto LABEL_241;
                            }
                            if ( a5 == v5 )
                              JUMPOUT(0x303D1A499LL);
                            v93 = a5;
                            if ( (*(_DWORD *)a5 & 1) != 0 )
                            {
                              v94 = a5 - *(_QWORD *)(a5 - 8);
                            }
                            else
                            {
                              v93 = a5 & 0xFFFFFFFFFFF80000LL;
                              v94 = a5 & 0xFFFFFFFFFFF80000LL;
                            }
                            v95 = *(unsigned int *)(v94 + 40);
                            if ( (_DWORD)v95 == 0 )
                              goto LABEL_393;
                            if ( *(int *)(v5 + 8 * v95 + 48) >= 16 )
                            {
LABEL_174:
                              if ( a5 == v5 )
                                JUMPOUT(0x303D19B76LL);
                              if ( (*(_DWORD *)a5 & 1) != 0 )
                              {
                                v55 = (char *)(a5 - *(_QWORD *)(a5 - 8));
                                if ( a5 == v5 )
                                  JUMPOUT(0x303D19B98LL);
                                v56 = (unsigned __int64)&v165[-a5] >> 9;
                                if ( v55[v56 + 48] != 0 )
                                  v55[v56 + 48] = 0;
                              }
                              else if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                                 + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                                 + 0x38) != 0 )
                              {
                                *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                         + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                         + 0x38) = 0;
                              }
                            }
                            a4 = v164;
                            v11 = v149;
                            v10 = v150;
                          }
                          else
                          {
                            a4 += 4LL;
                            v11 = v149;
                            v10 = v150;
                          }
                        }
                      }
                      else
                      {
                        a4 += 4LL;
                      }
                    }
                    else
                    {
                      v36 = v31;
                      v147 = v31;
                      if ( (v33 & 1) != 0 )
                        v37 = v31 - *(_QWORD *)(v31 - 8);
                      else
                        v37 = v31 & 0xFFFFFFFFFFF80000LL;
                      v163 = v37;
                      v38 = *(unsigned int *)(v37 + 40);
                      v146 = v5 + 8 * v38;
                      if ( (_DWORD)v38 == 0 )
                        goto LABEL_386;
                      v162 = *(_DWORD *)v31 & 1;
                      if ( *(_BYTE *)(v5 + 8 * v38 + 52) == 0 )
                      {
                        v57 = v166;
                        v145 = *(_DWORD *)v31 >> 3;
                        v58 = *(_DWORD *)(v5 + 8LL * v145 + 32);
                        v167 = v58;
                        v161 = (unsigned int)v58;
                        v160 = (unsigned __int8)v58;
                        v159 = (v58 >> 8) & 0xFFF;
                        if ( v57 != 0 )
                        {
                          v59 = (v58 >> 8) & 0xFFF;
                          v60 = *(_DWORD *)(v5 + 8LL * v145 + 32);
                          v31 = v5;
                          v61 = (unsigned __int8)v58;
                          v62 = (unsigned int)v58;
                        }
                        else
                        {
                          v70 = *(unsigned int *)(v5 + 376654972);
                          if ( (_DWORD)v70 == 0 )
                            goto LABEL_389;
                          v71 = *(_DWORD *)(v5 + 8 * v70) >> 3;
                          v72 = v5 + 8LL * *(unsigned int *)(v5 + 8 * v71 + 20);
                          v73 = (unsigned __int16)*(_DWORD *)(v72
                                                            + 4LL
                                                            * (*(_DWORD *)(v5 + 8 * v71 + 44)
                                                             & (0x207u >> HIBYTE(*(_DWORD *)(v5 + 8 * v71 + 44))))
                                                            + 12);
                          if ( (_DWORD)v73 != 519 )
                            goto LABEL_390;
                          if ( *(_DWORD *)(v5 + 8 * v70 + 16) + 1 > *(_DWORD *)(v5 + 8 * v38 + 48) + 1 )
                          {
                            v158 = *(_DWORD *)(v5 + 8 * v38 + 48);
                            v87 = v164;
                            v88 = v165;
                            v89 = v152;
                            if ( v162 != 0 )
                            {
                              if ( (unsigned int)sub_1EA85C0(a1: v11, a2: v10, a3: v148, a4: v165, a5: v163) != 0 )
                              {
                                if ( v158 >= 0xF )
                                  goto LABEL_397;
                                sub_1E9D6C0(
                                  a1: v91,
                                  a2: v92,
                                  a3: v163,
                                  a4: v90,
                                  a5: v146,
                                  a6: v5 + 8LL * *(unsigned int *)(v5 + 4LL * v158 + 376654108));
                                v31 = v147;
                                v59 = (v58 >> 8) & 0xFFF;
                                v61 = (unsigned __int8)v58;
                                v62 = (unsigned int)v58;
                                v60 = v58;
                                v36 = v147;
                              }
                              else
                              {
                                v31 = v5;
                                v59 = (v58 >> 8) & 0xFFF;
                                v61 = (unsigned __int8)v58;
                                v62 = (unsigned int)v58;
                                v60 = v58;
                                v36 = v147;
                              }
                            }
                            else
                            {
                              if ( v158 >= 0xF )
                                goto LABEL_395;
                              if ( v58 < 0 )
                                v102 = (v159 + ((unsigned __int64)*(unsigned int *)(v31 + 8) << v58) + 7)
                                     & 0xFFFFFFFFFFFFFFF8LL;
                              else
                                v102 = (unsigned int)v58;
                              v103 = *(unsigned int *)(v5 + 4LL * v158 + 376654108);
                              v104 = v5 + 8 * v103;
                              if ( (_DWORD)v103 == 0 )
                                goto LABEL_396;
                              v144 = *(_DWORD *)(v5 + 4LL * v158 + 376654108);
                              v105 = *(char **)(v5 + 8 * v103 + 24);
                              if ( v105 != nullptr
                                && (v106 = *((_QWORD *)v105 + 4), v102 <= *(_QWORD *)v105 - v106)
                                && (v107 = &v105[v106],
                                    v108 = &v107[v102] - v105,
                                    *((_QWORD *)v105 + 4) = v108,
                                    v107 != nullptr) )
                              {
                                v156 = v102;
                                v109 = (__int64)v107;
                              }
                              else
                              {
                                v156 = v102;
                                v109 = sub_1E9D600(a1: v102, a2: v105, a3: v102, a4: v104, a5: v5 + 8 * v103);
                              }
                              if ( v109 != 0 )
                              {
                                v155 = v109;
                                sub_28393A0(a1: v108, a2: v105, a3: v147, a4: v104, a5: v109, a6: v156);
                                v31 = v155;
                                if ( *(_DWORD *)(v5 + 8LL * v144 + 48) == 16 )
                                {
                                  if ( *(_BYTE *)(v5 + 376654992) != 0 )
                                  {
                                    v59 = (v58 >> 8) & 0xFFF;
                                    v61 = (unsigned __int8)v58;
                                    v62 = (unsigned int)v58;
                                    v60 = v58;
                                    v36 = v147;
                                  }
                                  else
                                  {
                                    v133 = v155 & 0xFFFFFFFFFFF80000LL;
                                    v134 = v155 - ((v155 & 0xFFFFFFFFFFF80000LL) + 2112);
                                    v135 = v134 >> 9;
                                    v136 = (v134 + v156 - 1) >> 9;
                                    if ( v136 == v134 >> 9 && (v134 & 0x1FF) != 0 )
                                    {
                                      v59 = v159;
                                      v61 = v160;
                                      v62 = v161;
                                      v60 = v167;
                                      v36 = v147;
                                    }
                                    else
                                    {
                                      v59 = v159;
                                      v61 = v160;
                                      v62 = v161;
                                      v60 = v167;
                                      v36 = v147;
                                      if ( (v134 & 0x1FF) != 0 )
                                      {
                                        v137 = v135 + 1;
                                        *(_BYTE *)(v133 + v135 + 1081) = -(__int64)((((v135 + 1) << 9) - v134) >> 3);
                                      }
                                      else
                                      {
                                        *(_BYTE *)(v133 + v135 + 1080) = 0;
                                        v137 = (v155 - ((v155 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                                      }
                                      if ( v137 + 63 < v136 )
                                        JUMPOUT(0x303D1AC97LL);
                                      v138 = v137 + 1;
                                      v139 = 1;
                                      while ( v138 <= v136 )
                                        *(_BYTE *)(v133 + v138++ + 1080) = v139++;
                                      v140 = 6;
LABEL_364:
                                      while ( v138 <= v136 )
                                      {
                                        v141 = v140 + 58;
                                        v153 = v140 + 1;
                                        v142 = 1 << v140;
                                        for ( i = 0; ; ++i )
                                        {
                                          if ( v142 <= i )
                                          {
                                            v140 = v153;
                                            goto LABEL_364;
                                          }
                                          *(_BYTE *)(v133 + v138++ + 1080) = v141;
                                          if ( v138 > v136 )
                                            break;
                                        }
                                        v140 = v153;
                                      }
                                    }
                                    *(_DWORD *)v155 |= 2u;
                                  }
                                }
                                else
                                {
                                  v59 = (v58 >> 8) & 0xFFF;
                                  v61 = (unsigned __int8)v58;
                                  v62 = (unsigned int)v58;
                                  v60 = v58;
                                  v36 = v147;
                                }
                              }
                              else
                              {
                                v31 = v5;
                                v59 = (v58 >> 8) & 0xFFF;
                                v61 = (unsigned __int8)v58;
                                v62 = (unsigned int)v58;
                                v60 = v58;
                                v36 = v147;
                              }
                              if ( v31 != v5 )
                              {
                                if ( v60 < 0 )
                                  v110 = (v59 + ((unsigned __int64)*(unsigned int *)(v36 + 8) << v61) + 7)
                                       & 0xFFFFFFFFFFFFFFF8LL;
                                else
                                  v110 = v62;
                                *(_QWORD *)v36 = ((unsigned __int64)(unsigned int)((v31 - v5) >> 3) << 32) | v110 | 4;
                              }
                            }
                            if ( v31 == v5 )
                              *(_BYTE *)(v5 + 376652620) = 1;
                          }
                          else
                          {
                            v59 = (v58 >> 8) & 0xFFF;
                            v60 = *(_DWORD *)(v5 + 8LL * v145 + 32);
                            v31 = v5;
                            v61 = (unsigned __int8)v58;
                            v62 = (unsigned int)v58;
                          }
                        }
                        if ( v31 == v5 )
                        {
                          v79 = *(_BYTE *)(v5 + 376654992);
                          v80 = *(_BYTE *)(v5 + 8LL * v145 + 68);
                          v81 = v5 + 8LL * v145;
                          v82 = (v36 - v5) >> 3;
                          if ( v162 != 0 )
                          {
                            if ( v79 != 0 )
                            {
                              if ( (*(_DWORD *)v36 & 6LL) == 6 )
                              {
                                v31 = v36;
                              }
                              else
                              {
                                *(_DWORD *)v36 |= 6u;
                                if ( v80 == 6 )
                                {
                                  if ( *(_DWORD *)(v36 + 8) != 0 )
                                  {
                                    v125 = *(_QWORD *)(v5 + 376654880);
                                    if ( v125 == 0 || (_DWORD)(v126 = *(unsigned int *)(v5 + 376654876)) == 16366 )
                                    {
                                      v125 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654880));
                                      *(_QWORD *)(v5 + 376654880) = v125;
                                      *(_DWORD *)(v5 + 376654876) = 0;
                                      v126 = 0;
                                    }
                                    *(_DWORD *)(v5 + 376654876) = v126 + 1;
                                    *(_DWORD *)(v125 + 4 * v126 + 8) = v82;
                                    v127 = *(_QWORD *)(v5 + 376654880);
                                    if ( v127 == 0 || (_DWORD)(v128 = *(unsigned int *)(v5 + 376654876)) == 16366 )
                                    {
                                      v127 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654880));
                                      *(_QWORD *)(v5 + 376654880) = v127;
                                      *(_DWORD *)(v5 + 376654876) = 0;
                                      v128 = 0;
                                    }
                                    *(_DWORD *)(v5 + 376654876) = v128 + 1;
                                    *(_DWORD *)(v127 + 4 * v128 + 8) = 0;
                                    v31 = v147;
                                  }
                                  else
                                  {
                                    v31 = v36;
                                  }
                                }
                                else
                                {
                                  v83 = *(_QWORD *)(v5 + 376654856);
                                  if ( v83 == 0 || (_DWORD)(v84 = *(unsigned int *)(v5 + 376654852)) == 16366 )
                                  {
                                    v83 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654856));
                                    *(_QWORD *)(v5 + 376654856) = v83;
                                    *(_DWORD *)(v5 + 376654852) = 0;
                                    v84 = 0;
                                  }
                                  *(_DWORD *)(v5 + 376654852) = v84 + 1;
                                  *(_DWORD *)(v83 + 4 * v84 + 8) = v82;
                                  v31 = v147;
                                }
                              }
                            }
                            else
                            {
                              sub_1E9D6C0(a1: v61, a2: v62, a3: v163, a4: v81, a5: v146, a6: v5 + 376653896);
                              v31 = v147;
                            }
                          }
                          else if ( v79 != 0 )
                          {
                            if ( (*(_DWORD *)v36 & 6) == 6 )
                            {
                              v31 = v36;
                            }
                            else
                            {
                              *(_DWORD *)v36 |= 6u;
                              if ( v80 == 6 )
                              {
                                if ( *(_DWORD *)(v36 + 8) != 0 )
                                {
                                  v129 = *(_QWORD *)(v5 + 376654880);
                                  if ( v129 == 0 || (_DWORD)(v130 = *(unsigned int *)(v5 + 376654876)) == 16366 )
                                  {
                                    v129 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654880));
                                    *(_QWORD *)(v5 + 376654880) = v129;
                                    *(_DWORD *)(v5 + 376654876) = 0;
                                    v130 = 0;
                                  }
                                  *(_DWORD *)(v5 + 376654876) = v130 + 1;
                                  *(_DWORD *)(v129 + 4 * v130 + 8) = v82;
                                  v131 = *(_QWORD *)(v5 + 376654880);
                                  if ( v131 == 0 || (_DWORD)(v132 = *(unsigned int *)(v5 + 376654876)) == 16366 )
                                  {
                                    v131 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654880));
                                    *(_QWORD *)(v5 + 376654880) = v131;
                                    *(_DWORD *)(v5 + 376654876) = 0;
                                    v132 = 0;
                                  }
                                  *(_DWORD *)(v5 + 376654876) = v132 + 1;
                                  *(_DWORD *)(v131 + 4 * v132 + 8) = 0;
                                  v31 = v147;
                                }
                                else
                                {
                                  v31 = v36;
                                }
                              }
                              else
                              {
                                v85 = *(_QWORD *)(v5 + 376654856);
                                if ( v85 == 0 || (_DWORD)(v86 = *(unsigned int *)(v5 + 376654852)) == 16366 )
                                {
                                  v85 = sub_1EA8720(a1: v61, a2: v62, a3: *(_QWORD *)(v5 + 376654856));
                                  *(_QWORD *)(v5 + 376654856) = v85;
                                  *(_DWORD *)(v5 + 376654852) = 0;
                                  v86 = 0;
                                }
                                *(_DWORD *)(v5 + 376654852) = v86 + 1;
                                *(_DWORD *)(v85 + 4 * v86 + 8) = v82;
                                v31 = v147;
                              }
                            }
                          }
                          else
                          {
                            if ( v60 < 0 )
                            {
                              v81 = (unsigned int)v61;
                              v99 = (v59 + ((unsigned __int64)*(unsigned int *)(v147 + 8) << v61) + 7)
                                  & 0xFFFFFFFFFFFFFFF8LL;
                            }
                            else
                            {
                              v99 = v62;
                            }
                            v100 = *(_QWORD **)(v5 + 376653920);
                            if ( v100 != nullptr
                              && (v81 = v100[4], v99 <= *v100 - v81)
                              && (v81 += (__int64)v100, v100[4] = v81 + v99 - (_QWORD)v100, v81 != 0) )
                            {
                              v101 = v81;
                              v154 = v99;
                            }
                            else
                            {
                              v154 = v99;
                              v101 = sub_1E9D600(a1: v99, a2: v62, a3: v99, a4: v81, a5: v5 + 376653896);
                            }
                            if ( v101 != 0 )
                            {
                              v157 = v101;
                              sub_28393A0(a1: v61, a2: v62, a3: v147, a4: v81, a5: v101, a6: v154);
                              v31 = v157;
                              if ( *(_BYTE *)(v5 + 376654992) == 0 )
                              {
                                v113 = v157 & 0xFFFFFFFFFFF80000LL;
                                v114 = v157 - ((v157 & 0xFFFFFFFFFFF80000LL) + 2112);
                                v115 = v114 >> 9;
                                v116 = (v114 + v154 - 1) >> 9;
                                if ( v116 != v114 >> 9 || (v114 & 0x1FF) == 0 )
                                {
                                  if ( (v114 & 0x1FF) != 0 )
                                  {
                                    v117 = v115 + 1;
                                    *(_BYTE *)(v113 + v115 + 1081) = -(__int64)((((v115 + 1) << 9) - v114) >> 3);
                                  }
                                  else
                                  {
                                    *(_BYTE *)(v113 + v115 + 1080) = 0;
                                    v117 = (v157 - ((v157 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                                  }
                                  if ( v117 + 63 < v116 )
                                    JUMPOUT(0x303D1A9C0LL);
                                  v118 = v117 + 1;
                                  v119 = 1;
                                  while ( v118 <= v116 )
                                    *(_BYTE *)(v113 + v118++ + 1080) = v119++;
                                  v120 = 6;
LABEL_330:
                                  while ( v118 <= v116 )
                                  {
                                    v121 = v120 + 1;
                                    v122 = v120 + 58;
                                    v123 = 1 << v120;
                                    for ( j = 0; ; ++j )
                                    {
                                      if ( v123 <= j )
                                      {
                                        v120 = v121;
                                        goto LABEL_330;
                                      }
                                      *(_BYTE *)(v113 + v118++ + 1080) = v122;
                                      if ( v118 > v116 )
                                        break;
                                    }
                                    v120 = v121;
                                  }
                                }
                                *(_DWORD *)v157 |= 2u;
                              }
                            }
                            else
                            {
                              v31 = v5;
                            }
                            if ( v31 != v5 )
                            {
                              if ( v167 < 0 )
                              {
                                v112 = (unsigned __int64 *)v147;
                                v111 = (v159 + ((unsigned __int64)*(unsigned int *)(v147 + 8) << v160) + 7)
                                     & 0xFFFFFFFFFFFFFFF8LL;
                              }
                              else
                              {
                                v111 = v161;
                                v112 = (unsigned __int64 *)v147;
                              }
                              *v112 = ((unsigned __int64)(unsigned int)((v31 - v5) >> 3) << 32) | v111 | 4;
                            }
                          }
                        }
                      }
                      v39 = v165;
                      if ( v31 != v147 )
                        *(_DWORD *)v165 = (v31 - v5) >> 3;
                      if ( v31 == v5 )
                      {
                        a4 = v164;
                        v30 = v170;
                        v11 = v149;
                        v10 = v150;
                        a5 = v152;
                      }
                      else if ( *(_BYTE *)(v5 + 376654992) != 0 )
                      {
                        v40 = v150;
                        a5 = v152;
                        if ( v152 == v5 )
                          JUMPOUT(0x303D1969ELL);
                        if ( v150 == v5 )
                          JUMPOUT(0x303D196A8LL);
                        if ( v150 > v152 )
                        {
                          v41 = v149;
                        }
                        else
                        {
                          v41 = v149;
                          if ( v149 == v5 )
                            JUMPOUT(0x303D196C0LL);
                          if ( v152 <= v149 )
                            goto LABEL_112;
                        }
                        if ( *(_QWORD *)(v5 + 376612552) <= v152 )
                          JUMPOUT(0x303D1A16BLL);
LABEL_264:
                        a4 = v164;
                        v30 = v170;
                        v11 = v41;
                        v10 = v40;
                      }
                      else
                      {
                        v41 = v149;
                        v40 = v150;
                        a5 = v152;
                        if ( v31 == v5 )
                          JUMPOUT(0x303D19F61LL);
                        if ( (*(_DWORD *)v31 & 1) != 0 )
                          v74 = v31 - *(_QWORD *)(v31 - 8);
                        else
                          v74 = v31 & 0xFFFFFFFFFFF80000LL;
                        v75 = *(unsigned int *)(v74 + 40);
                        v76 = *(unsigned int *)v31;
                        v77 = *(_DWORD *)v31 & 6;
                        if ( v77 == 6 )
                        {
                          if ( (_DWORD)v75 == 0 )
                            goto LABEL_392;
                          v78 = *(_DWORD *)(v5 + 8 * v75 + 48) < 16;
                        }
                        else
                        {
                          if ( (v76 & 2) != 0 )
                            JUMPOUT(0x303D19F9ALL);
                          v78 = true;
                        }
                        if ( v78 )
                        {
                          if ( (*(_DWORD *)v152 & 6) != 6 )
                          {
                            if ( (*(_DWORD *)v152 & 2) != 0 )
                              JUMPOUT(0x303D19FCCLL);
                            goto LABEL_264;
                          }
                          if ( v152 == v5 )
                            JUMPOUT(0x303D1A500LL);
                          v96 = v152;
                          if ( (*(_DWORD *)v152 & 1) != 0 )
                          {
                            v97 = v152 - *(_QWORD *)(v152 - 8);
                          }
                          else
                          {
                            v96 = v152 & 0xFFFFFFFFFFF80000LL;
                            v97 = v152 & 0xFFFFFFFFFFF80000LL;
                          }
                          v98 = *(unsigned int *)(v97 + 40);
                          if ( (_DWORD)v98 == 0 )
                            goto LABEL_394;
                          if ( *(int *)(v5 + 8 * v98 + 48) >= 16 )
                          {
LABEL_112:
                            if ( a5 == v5 )
                              JUMPOUT(0x303D196D6LL);
                            if ( (*(_DWORD *)a5 & 1) != 0 )
                            {
                              v42 = (char *)(a5 - *(_QWORD *)(a5 - 8));
                              if ( a5 == v5 )
                                JUMPOUT(0x303D196F0LL);
                              v43 = (unsigned __int64)&v165[-a5] >> 9;
                              if ( v42[v43 + 48] != 0 )
                                v42[v43 + 48] = 0;
                            }
                            else if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                               + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                               + 0x38) != 0 )
                            {
                              *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL)
                                       + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                       + 0x38) = 0;
                            }
                            goto LABEL_264;
                          }
                        }
                        a4 = v164;
                        v30 = v170;
                        v11 = v149;
                        v10 = v150;
                      }
                    }
                  }
                  else
                  {
                    v166 = 0;
                    if ( (v33 & 2) == 0 )
                      goto LABEL_98;
                    a4 += 4LL;
                  }
                }
                else
                {
                  a4 += 4LL;
                }
              }
              else
              {
                a4 += 4LL;
              }
            }
            v9 = v175;
            v8 = v151;
LABEL_9:
            if ( (int)v9 < 4 )
            {
              if ( a5 == v5 )
                JUMPOUT(0x303D18C7FLL);
              v173 = a5;
              a4 = *(int *)(v5 + 8 * v8 + 56);
              v12 = *(_DWORD *)(v5 + 4 * a4);
              if ( v12 != 0 )
              {
                a4 = v5 + 4 * a4;
                v13 = (int *)(a4 + 4);
                v14 = 8LL * v12 + a4 + 4;
                v171 = v14;
                v15 = a5;
                v16 = v5 + 376654896;
                while ( v14 > (unsigned __int64)v13 )
                {
                  v170 = (unsigned int *)(v15 + *v13);
                  v172 = v13 + 2;
                  sub_1E93040(a1: 4, a2: a5, a3: v16, a4: (unsigned int)v13[1], a5: v170, a6: 1);
                  v13 = v172;
                  v16 = v5 + 376654896;
                  v14 = v171;
                  v15 = v173;
                  a5 = v152;
                }
                v9 = v175;
              }
            }
            if ( (unsigned int)v9 <= 6 )
              __asm { jmp     r8; switch jump }
LABEL_153:
            sub_28C1C40(a1: v11, a2: v10, a3: v5 + 368272040, a4, a5);
            goto LABEL_154;
          }
        }
      }
      v22 = *(unsigned int *)(v5 + 374499012);
      if ( (_DWORD)v22 != 0 )
        v23 = v5 + 8 * v22;
      else
        v23 = v152;
      *(_DWORD *)(v152 + 8) = (v23 - v5) >> 3;
      if ( (*(_DWORD *)v152 & 2) != 0 )
      {
        if ( v152 == v5 )
          JUMPOUT(0x303D197F0LL);
        a4 = (v152 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - a4) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v152 & 0xFFFFFFFFFFF80000LL) + ((v152 - a4) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v5 + 374499012) = (v152 - v5) >> 3;
      v24 = *(_DWORD *)(v5 + 374343744);
      if ( (v24 & 2) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v47 = v5 + 374343744 - *(_QWORD *)(v5 + 374343736);
          a4 = 303;
          if ( *(_BYTE *)(v47 + 351) != 0 )
            *(_BYTE *)(v47 + 351) = 0;
          v9 = 1;
          v8 = v151;
        }
        else
        {
          v46 = (v5 + 374343744) & 0xFFFFFFFFFFF80000LL;
          a4 = (v5 + 374343744 - (v46 + 2112)) >> 9;
          if ( *(_BYTE *)(v46 + a4 + 56) != 0 )
            *(_BYTE *)(v46 + a4 + 56) = 0;
          v9 = 1;
          v8 = v151;
        }
      }
      else
      {
        v9 = 1;
        v8 = v151;
      }
      goto LABEL_9;
    }
LABEL_152:
    sub_276EFE0();
    goto LABEL_153;
  }
  return result;
}
