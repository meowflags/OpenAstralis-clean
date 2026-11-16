// sub_1E91B80
// rva 0x01e91b80  size 124  section .text  group text
// window base 0x181e91b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E91B80(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  _DWORD *v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // ebx
  char v20; // r10
  __int64 v21; // r11
  _DWORD *v22; // r11
  int v23; // edx
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  BOOL v33; // eax
  int v34; // eax
  int v35; // ebx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbp
  char *v38; // rcx
  char *v39; // rsi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // r8
  char v47; // r9
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ecx
  BOOL v57; // edx
  int v58; // eax
  unsigned __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  BOOL v62; // edx
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rcx
  char *v68; // rdx
  char *v69; // rsi
  unsigned __int64 v70; // rax
  char *v71; // rax
  char *v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rbp
  unsigned __int64 v75; // rbp
  unsigned __int64 v76; // rdx
  char *v77; // rax
  __int64 v78; // rax
  char *v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  char *v83; // rbp
  __int64 v84; // rax
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned __int64 v89; // rbx
  __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 *v92; // r11
  __int64 v93; // rcx
  __int64 v94; // r9
  unsigned __int64 v95; // rbp
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // rsi
  int v101; // ebx
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // r9
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rbx
  int v108; // edx
  int v109; // ecx
  int v110; // ebx
  int v111; // r8d
  int i; // ecx
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rax
  __int64 v122; // rdx
  char *v123; // r9
  int v124; // ecx
  int v125; // edx
  char v126; // bp
  int j; // ecx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned int v134; // [rsp+8h] [rbp-E8h]
  unsigned int v135; // [rsp+Ch] [rbp-E4h]
  int v136; // [rsp+Ch] [rbp-E4h]
  unsigned __int64 v137; // [rsp+10h] [rbp-E0h]
  unsigned __int64 v138; // [rsp+18h] [rbp-D8h]
  __int64 v139; // [rsp+20h] [rbp-D0h]
  unsigned __int64 *v140; // [rsp+28h] [rbp-C8h]
  _DWORD *v141; // [rsp+30h] [rbp-C0h]
  __int64 v142; // [rsp+38h] [rbp-B8h]
  unsigned int v143; // [rsp+44h] [rbp-ACh]
  unsigned __int64 v144; // [rsp+48h] [rbp-A8h]
  __int64 v145; // [rsp+48h] [rbp-A8h]
  unsigned __int64 v146; // [rsp+50h] [rbp-A0h]
  __int64 v147; // [rsp+58h] [rbp-98h]
  int v148; // [rsp+60h] [rbp-90h]
  __int64 v149; // [rsp+68h] [rbp-88h]
  char v150; // [rsp+74h] [rbp-7Ch]
  unsigned __int64 v151; // [rsp+78h] [rbp-78h]
  int v152; // [rsp+80h] [rbp-70h]
  unsigned __int64 v153; // [rsp+88h] [rbp-68h]
  unsigned int v154; // [rsp+94h] [rbp-5Ch]
  _DWORD *v155; // [rsp+A8h] [rbp-48h]
  unsigned int v156; // [rsp+B4h] [rbp-3Ch]

  if ( a1 != 0 )
  {
    if ( *a6 != 0 )
      v7 = v6 + 8LL * (unsigned int)*a6;
    else
      v7 = 0;
  }
  else
  {
    v7 = *(_QWORD *)a6;
  }
  if ( *(_DWORD *)(a3 + 8) != 0 )
    return sub_1E88140(
             a1: *(_QWORD *)(v6 + 376656568),
             a2: v7,
             a3: a6,
             a4: *(_QWORD *)(v6 + 376656560),
             a5: a1,
             a6: *(_QWORD *)(v6 + 376656560));
  sub_276EFE0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v142 = v9;
  if ( *(_DWORD *)(v9 + 8) == 0 )
  {
    sub_276EFE0();
LABEL_308:
    sub_276EFE0();
LABEL_309:
    sub_276EFE0();
    goto LABEL_310;
  }
  if ( v13 != 0 )
  {
    if ( *v12 != 0 )
      v14 = v6 + 8LL * (unsigned int)*v12;
    else
      v14 = 0;
  }
  else
  {
    v14 = *(_QWORD *)v12;
  }
  *(_QWORD *)(v6 + 376656560) = v14;
  if ( *(_DWORD *)(v9 + 4) == 0 )
    goto LABEL_308;
  if ( v13 != 0 )
    v15 = v6 + 8LL * (unsigned int)*v12;
  else
    v15 = *(_QWORD *)v12;
  v16 = v15 - v6;
  if ( v16 != 0 )
    v16 += v6;
  if ( v16 == 0 )
    goto LABEL_33;
  v17 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
  if ( v17 == v6 )
    JUMPOUT(0x303D1BC89LL);
  v18 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
  if ( v17 <= v16 )
  {
    if ( v18 == v6 )
      JUMPOUT(0x303D1BDF6LL);
    if ( v16 <= v18 )
      goto LABEL_33;
  }
  v155 = v12;
  v141 = (_DWORD *)v11;
  v19 = *(_DWORD *)v16;
  v20 = *(_BYTE *)(v6 + 376654992);
  v21 = *(_DWORD *)v16 & 6;
  if ( v21 == 6 )
  {
    if ( v11 == v6 )
      goto LABEL_33;
    if ( v20 != 0 )
    {
      if ( v11 == v6 )
        JUMPOUT(0x303D1BE24LL);
      v28 = 8LL * *(unsigned int *)(v6 + 58177844);
      if ( v28 != 0 )
        v28 += v6;
      if ( v28 > v11 )
        goto LABEL_51;
      v37 = 8LL * *(unsigned int *)(v6 + 58177848);
      if ( v37 != 0 )
        v37 += v6;
      if ( v11 > v37 )
      {
LABEL_51:
        if ( *(_QWORD *)(v6 + 376612552) <= v11 )
          JUMPOUT(0x303D1BE57LL);
        goto LABEL_33;
      }
    }
    else
    {
      if ( (*(_DWORD *)v16 & 1) != 0 )
        v31 = v16 - *(_QWORD *)(v16 - 8);
      else
        v31 = v16 & 0xFFFFFFFFFFF80000LL;
      v32 = *(unsigned int *)(v31 + 40);
      if ( (*(_DWORD *)v16 & 6) == 6 )
      {
        if ( (_DWORD)v32 == 0 )
        {
LABEL_310:
          sub_276EFE0();
          goto LABEL_311;
        }
        v33 = *(_DWORD *)(v6 + 8 * v32 + 48) < 16;
      }
      else
      {
        if ( (*(_DWORD *)v16 & 2) != 0 )
          JUMPOUT(0x303D1BEEALL);
        v33 = true;
      }
      if ( !v33 )
        goto LABEL_33;
      v34 = *(_DWORD *)v11;
      if ( (*(_DWORD *)v11 & 6) != 6 )
      {
        if ( (v34 & 2) != 0 )
          JUMPOUT(0x303D1BF1ALL);
        goto LABEL_33;
      }
      if ( v11 == v6 )
        JUMPOUT(0x303D1C2C0LL);
      if ( (v34 & 1) != 0 )
      {
        v52 = v11 - *(_QWORD *)(v11 - 8);
        v156 = v10;
        v154 = v13;
      }
      else
      {
        v156 = v10;
        v154 = v13;
        v52 = v11 & 0xFFFFFFFFFFF80000LL;
      }
      v53 = *(unsigned int *)(v52 + 40);
      if ( (_DWORD)v53 == 0 )
        goto LABEL_313;
      if ( *(int *)(v6 + 8 * v53 + 48) < 16 )
        goto LABEL_33;
    }
    if ( v11 == v6 )
      JUMPOUT(0x303D1C07FLL);
    if ( (*(_DWORD *)v11 & 1) != 0 )
    {
      v38 = (char *)(v11 - *(_QWORD *)(v11 - 8));
      v39 = (char *)(v11 - v6);
      if ( v39 != nullptr )
        v39 += v6;
      v40 = (unsigned __int64)((char *)v12 - v39) >> 9;
      if ( v38[v40 + 48] != 0 )
        v38[v40 + 48] = 0;
    }
    else if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - (v11 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
    {
      *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - (v11 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
    }
    goto LABEL_33;
  }
  if ( v20 != 0 || (v19 & 2) == 0 )
  {
    if ( v21 == 4 )
    {
      v29 = *(unsigned int *)(v16 + 4);
      v30 = v6 + 8 * v29;
      if ( v13 != 0 )
        *v12 = v29;
      else
        *(_QWORD *)v12 = v30;
      if ( v11 == v6 || (_DWORD)v29 == 0 )
        goto LABEL_33;
      if ( *(_BYTE *)(v6 + 376654992) != 0 )
      {
        if ( v11 == v6 )
          JUMPOUT(0x303D1C108LL);
        v41 = v17 - v6;
        if ( v41 != 0 )
          v41 += v6;
        if ( v41 > v11 )
          goto LABEL_103;
        v74 = v18 - v6;
        if ( v74 != 0 )
          v74 += v6;
        if ( v11 > v74 )
        {
LABEL_103:
          if ( *(_QWORD *)(v6 + 376612552) <= v11 )
            JUMPOUT(0x303D1C143LL);
          goto LABEL_33;
        }
      }
      else
      {
        if ( v30 == v6 )
          JUMPOUT(0x303D1C309LL);
        if ( (*(_DWORD *)(v6 + 8 * v29) & 1) != 0 )
        {
          v54 = v30 - *(_QWORD *)(v30 - 8);
          v156 = v10;
          v154 = v13;
        }
        else
        {
          v156 = v10;
          v154 = v13;
          v54 = v30 & 0xFFFFFFFFFFF80000LL;
        }
        v55 = *(unsigned int *)(v54 + 40);
        v56 = *(_DWORD *)(v6 + 8 * v29);
        if ( (v56 & 6) == 6 )
        {
          if ( (_DWORD)v55 == 0 )
          {
LABEL_314:
            sub_276EFE0();
LABEL_315:
            sub_276EFE0(a1: v10, a2: v27, a3: v61, a4: v6 + 8 * v60);
            goto LABEL_316;
          }
          v57 = *(_DWORD *)(v6 + 8 * v55 + 48) < 16;
        }
        else
        {
          if ( (v56 & 2) != 0 )
            JUMPOUT(0x303D1C35ALL);
          v57 = true;
        }
        if ( !v57 )
          goto LABEL_33;
        v58 = *(_DWORD *)v11;
        if ( (*(_DWORD *)v11 & 6) != 6 )
        {
          if ( (v58 & 2) != 0 )
            JUMPOUT(0x303D1C38BLL);
          goto LABEL_33;
        }
        if ( v11 == v6 )
          JUMPOUT(0x303D1C8A9LL);
        v86 = v11;
        if ( (v58 & 1) != 0 )
        {
          v87 = v11 - *(_QWORD *)(v11 - 8);
        }
        else
        {
          v86 = v11 & 0xFFFFFFFFFFF80000LL;
          v87 = v11 & 0xFFFFFFFFFFF80000LL;
        }
        v88 = *(unsigned int *)(v87 + 40);
        if ( (_DWORD)v88 == 0 )
          goto LABEL_318;
        if ( *(int *)(v6 + 8 * v88 + 48) < 16 )
          goto LABEL_33;
      }
      if ( v11 == v6 )
        JUMPOUT(0x303D1C549LL);
      if ( (*(_DWORD *)v11 & 1) != 0 )
      {
        v68 = (char *)(v11 - *(_QWORD *)(v11 - 8));
        v69 = (char *)(v11 - v6);
        if ( v69 != nullptr )
          v69 += v6;
        v70 = (unsigned __int64)((char *)v12 - v69) >> 9;
        if ( v68[v70 + 48] != 0 )
          v68[v70 + 48] = 0;
      }
      else if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - (v11 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - (v11 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
      }
      goto LABEL_33;
    }
    v22 = (_DWORD *)v16;
    v140 = (unsigned __int64 *)v16;
    v23 = *(_DWORD *)v16 & 1;
    if ( (v19 & 1) != 0 )
      v24 = v16 - *(_QWORD *)(v16 - 8);
    else
      v24 = v16 & 0xFFFFFFFFFFF80000LL;
    v153 = v24;
    v25 = *(unsigned int *)(v24 + 40);
    v139 = v6 + 8 * v25;
    if ( (_DWORD)v25 != 0 )
    {
      v138 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
      v137 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
      if ( *(_BYTE *)(v6 + 8 * v25 + 52) != 0 )
      {
        v156 = v10;
        v154 = v13;
        v26 = v16;
LABEL_28:
        if ( (unsigned __int64 *)v26 == v140 )
        {
          v27 = (unsigned __int64)v141;
          v13 = v154;
          v12 = v155;
        }
        else
        {
          v13 = v154;
          v12 = v155;
          if ( v154 != 0 )
            *v155 = (v26 - v6) >> 3;
          else
            *(_QWORD *)v155 = v26;
          v27 = (unsigned __int64)v141;
        }
        if ( v27 == v6 || v26 == v6 )
          goto LABEL_33;
        if ( *(_BYTE *)(v6 + 376654992) != 0 )
        {
          if ( v27 == v6 )
            JUMPOUT(0x303D1BFEELL);
          v36 = v138 - v6;
          if ( v138 != v6 )
            v36 = v138;
          if ( v36 <= v27 )
          {
            v75 = v137 - v6;
            if ( v137 != v6 )
              v75 = v137;
            if ( v27 <= v75 )
              goto LABEL_161;
          }
          if ( *(_QWORD *)(v6 + 376612552) <= v27 )
            JUMPOUT(0x303D1C021LL);
          goto LABEL_33;
        }
        if ( v26 == v6 )
          JUMPOUT(0x303D1C39CLL);
        if ( (*(_DWORD *)v26 & 1) != 0 )
          v59 = v26 - *(_QWORD *)(v26 - 8);
        else
          v59 = v26 & 0xFFFFFFFFFFF80000LL;
        v60 = *(unsigned int *)(v59 + 40);
        v61 = *(unsigned int *)v26;
        if ( (*(_DWORD *)v26 & 6) != 6 )
        {
          if ( (v61 & 2) != 0 )
            JUMPOUT(0x303D1C3DALL);
          v62 = true;
LABEL_139:
          if ( !v62 )
            goto LABEL_33;
          v63 = *(_DWORD *)v27;
          if ( (*(_DWORD *)v27 & 6) != 6 )
          {
            if ( (v63 & 2) != 0 )
              JUMPOUT(0x303D1C40BLL);
            goto LABEL_33;
          }
          if ( v27 == v6 )
            JUMPOUT(0x303D1C8E3LL);
          if ( (v63 & 1) != 0 )
            v89 = v27 - *(_QWORD *)(v27 - 8);
          else
            v89 = v27 & 0xFFFFFFFFFFF80000LL;
          v90 = *(unsigned int *)(v89 + 40);
          if ( (_DWORD)v90 != 0 )
          {
            if ( *(int *)(v6 + 8 * v90 + 48) < 16 )
              goto LABEL_33;
LABEL_161:
            if ( v27 == v6 )
              JUMPOUT(0x303D1C591LL);
            if ( (*(_DWORD *)v27 & 1) != 0 )
            {
              v71 = (char *)(v27 - *(_QWORD *)(v27 - 8));
              v72 = (char *)(v27 - v6);
              if ( v72 != nullptr )
                v72 += v6;
              v73 = (unsigned __int64)((char *)v12 - v72) >> 9;
              if ( v71[v73 + 48] != 0 )
                v71[v73 + 48] = 0;
            }
            else if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - (v27 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
            {
              *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - (v27 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
            }
            goto LABEL_33;
          }
          goto LABEL_319;
        }
        if ( (_DWORD)v60 != 0 )
        {
          v62 = *(_DWORD *)(v6 + 8 * v60 + 48) < 16;
          goto LABEL_139;
        }
        goto LABEL_315;
      }
      v135 = *(_DWORD *)v16 >> 3;
      v35 = *(_DWORD *)(v6 + 8LL * v135 + 32);
      v152 = v35;
      v151 = (unsigned int)v35;
      v150 = v35;
      v149 = (v35 >> 8) & 0xFFF;
      if ( v20 != 0 )
      {
        v148 = *(_DWORD *)v16 & 1;
        v156 = v10;
        v154 = v13;
        v26 = v6;
LABEL_73:
        if ( v26 == v6 )
        {
          v46 = *(_BYTE *)(v6 + 376654992);
          v47 = *(_BYTE *)(v6 + 8LL * v135 + 68);
          v48 = ((unsigned __int64)v22 - v6) >> 3;
          v136 = v48;
          if ( v148 != 0 )
          {
            if ( v46 != 0 )
            {
              if ( (*v22 & 6) == 6 )
              {
                v26 = (unsigned __int64)v22;
              }
              else
              {
                *v22 |= 6u;
                if ( v47 == 6 )
                {
                  if ( v22[2] != 0 )
                  {
                    v118 = *(_QWORD *)(v6 + 376654880);
                    if ( v118 == 0 || (_DWORD)(v120 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                    {
                      v119 = sub_1EA8720(a1: v10, a2: v11, a3: v118);
                      *(_QWORD *)(v6 + 376654880) = v119;
                      *(_DWORD *)(v6 + 376654876) = 0;
                      v120 = 0;
                      LODWORD(v48) = v136;
                    }
                    else
                    {
                      v119 = *(_QWORD *)(v6 + 376654880);
                    }
                    *(_DWORD *)(v6 + 376654876) = v120 + 1;
                    *(_DWORD *)(v119 + 4 * v120 + 8) = v48;
                    v121 = *(_QWORD *)(v6 + 376654880);
                    if ( v121 == 0 || (_DWORD)(v122 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                    {
                      v121 = sub_1EA8720(a1: v10, a2: v11, a3: *(_QWORD *)(v6 + 376654880));
                      *(_QWORD *)(v6 + 376654880) = v121;
                      *(_DWORD *)(v6 + 376654876) = 0;
                      v122 = 0;
                    }
                    *(_DWORD *)(v6 + 376654876) = v122 + 1;
                    *(_DWORD *)(v121 + 4 * v122 + 8) = 0;
                    v26 = (unsigned __int64)v140;
                  }
                  else
                  {
                    v26 = (unsigned __int64)v22;
                  }
                }
                else
                {
                  v49 = *(_QWORD *)(v6 + 376654856);
                  if ( v49 == 0 || (_DWORD)(v51 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                  {
                    v50 = sub_1EA8720(a1: v10, a2: v11, a3: v49);
                    *(_QWORD *)(v6 + 376654856) = v50;
                    *(_DWORD *)(v6 + 376654852) = 0;
                    v51 = 0;
                    LODWORD(v48) = v136;
                  }
                  else
                  {
                    v50 = *(_QWORD *)(v6 + 376654856);
                  }
                  *(_DWORD *)(v6 + 376654852) = v51 + 1;
                  *(_DWORD *)(v50 + 4 * v51 + 8) = v48;
                  v26 = (unsigned __int64)v140;
                }
              }
            }
            else
            {
              sub_1E9D6C0(a1: v10, a2: v11, a3: v153, a4: v48, a5: v139, a6: v6 + 376653896);
              v26 = (unsigned __int64)v140;
            }
          }
          else if ( v46 != 0 )
          {
            if ( (*v22 & 6) == 6 )
            {
              v26 = (unsigned __int64)v22;
            }
            else
            {
              *v22 |= 6u;
              if ( v47 == 6 )
              {
                if ( v22[2] != 0 )
                {
                  v113 = *(_QWORD *)(v6 + 376654880);
                  if ( v113 == 0 || (_DWORD)(v115 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                  {
                    v114 = sub_1EA8720(a1: v10, a2: v11, a3: v113);
                    *(_QWORD *)(v6 + 376654880) = v114;
                    *(_DWORD *)(v6 + 376654876) = 0;
                    v115 = 0;
                    LODWORD(v48) = v136;
                  }
                  else
                  {
                    v114 = *(_QWORD *)(v6 + 376654880);
                  }
                  *(_DWORD *)(v6 + 376654876) = v115 + 1;
                  *(_DWORD *)(v114 + 4 * v115 + 8) = v48;
                  v116 = *(_QWORD *)(v6 + 376654880);
                  if ( v116 == 0 || (_DWORD)(v117 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                  {
                    v116 = sub_1EA8720(a1: v10, a2: v11, a3: *(_QWORD *)(v6 + 376654880));
                    *(_QWORD *)(v6 + 376654880) = v116;
                    *(_DWORD *)(v6 + 376654876) = 0;
                    v117 = 0;
                  }
                  *(_DWORD *)(v6 + 376654876) = v117 + 1;
                  *(_DWORD *)(v116 + 4 * v117 + 8) = 0;
                  v26 = (unsigned __int64)v140;
                }
                else
                {
                  v26 = (unsigned __int64)v22;
                }
              }
              else
              {
                v64 = *(_QWORD *)(v6 + 376654856);
                if ( v64 == 0 || (_DWORD)(v66 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                {
                  v65 = sub_1EA8720(a1: v10, a2: v11, a3: v64);
                  *(_QWORD *)(v6 + 376654856) = v65;
                  *(_DWORD *)(v6 + 376654852) = 0;
                  v66 = 0;
                  LODWORD(v48) = v136;
                }
                else
                {
                  v65 = *(_QWORD *)(v6 + 376654856);
                }
                *(_DWORD *)(v6 + 376654852) = v66 + 1;
                *(_DWORD *)(v65 + 4 * v66 + 8) = v48;
                v26 = (unsigned __int64)v140;
              }
            }
          }
          else
          {
            if ( v35 < 0 )
              v76 = (v149 + ((unsigned __int64)*((unsigned int *)v140 + 2) << v150) + 7) & 0xFFFFFFFFFFFFFFF8LL;
            else
              v76 = v151;
            v77 = *(char **)(v6 + 376653920);
            if ( v77 != nullptr
              && (v93 = *((_QWORD *)v77 + 4), v76 <= *(_QWORD *)v77 - v93)
              && (v79 = &v77[v93], *((_QWORD *)v77 + 4) = &v79[v76] - v77, v79 != nullptr) )
            {
              v78 = (__int64)v79;
              v144 = v76;
            }
            else
            {
              v144 = v76;
              v78 = sub_1E9D600(a1: v10, a2: v11, a3: v76, a4: v76, a5: v6 + 376653896);
            }
            if ( v78 != 0 )
            {
              v147 = v78;
              sub_28393A0(a1: v10, a2: v11, a3: v140, a4: v79, a5: v78, a6: v144);
              v26 = v147;
              if ( *(_BYTE *)(v6 + 376654992) == 0 )
              {
                v95 = v147 & 0xFFFFFFFFFFF80000LL;
                v96 = v147 - (v147 & 0xFFFFFFFFFFF80000LL) - 2112;
                v97 = v96 >> 9;
                v98 = (v96 + v144 - 1) >> 9;
                if ( v98 != v96 >> 9 || (v96 & 0x1FF) == 0 )
                {
                  if ( (v96 & 0x1FF) != 0 )
                  {
                    v99 = v97 + 1;
                    v10 = -(__int64)((((v97 + 1) << 9) - v96) >> 3);
                    *(_BYTE *)(v95 + v97 + 1081) = v10;
                  }
                  else
                  {
                    *(_BYTE *)(v95 + v97 + 1080) = 0;
                    v99 = (v147 - (v147 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9;
                  }
                  if ( v99 + 63 < v98 )
                    JUMPOUT(0x303D1CA76LL);
                  v100 = v99 + 1;
                  v101 = 1;
                  while ( v100 <= v98 )
                    *(_BYTE *)(v95 + v100++ + 1080) = v101++;
                  v109 = 6;
LABEL_248:
                  while ( v100 <= v98 )
                  {
                    v110 = v109 + 1;
                    v10 = (unsigned int)(v109 + 58);
                    v111 = 1 << v109;
                    for ( i = 0; ; ++i )
                    {
                      if ( v111 <= i )
                      {
                        v109 = v110;
                        goto LABEL_248;
                      }
                      *(_BYTE *)(v95 + v100++ + 1080) = v10;
                      if ( v100 > v98 )
                        break;
                    }
                    v109 = v110;
                  }
                }
                *(_DWORD *)v147 |= 2u;
              }
            }
            else
            {
              v26 = v6;
            }
            if ( v26 != v6 )
            {
              if ( v152 < 0 )
              {
                v92 = v140;
                v91 = (v149 + ((unsigned __int64)*((unsigned int *)v140 + 2) << v150) + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v91 = v151;
                v92 = v140;
              }
              *v92 = ((unsigned __int64)(unsigned int)((v26 - v6) >> 3) << 32) | v91 | 4;
            }
          }
        }
        goto LABEL_28;
      }
      v42 = *(unsigned int *)(v6 + 376654972);
      if ( (_DWORD)v42 != 0 )
      {
        v43 = *(_DWORD *)(v6 + 8 * v42) >> 3;
        if ( (unsigned __int16)*(_DWORD *)(v6
                                         + 8LL * *(unsigned int *)(v6 + 8 * v43 + 20)
                                         + 4LL
                                         * (*(_DWORD *)(v6 + 8 * v43 + 44)
                                          & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v43 + 44))))
                                         + 12) == 519 )
        {
          v44 = *(unsigned int *)(v6 + 8 * v25 + 48);
          v45 = (unsigned int)(*(_DWORD *)(v6 + 8 * v25 + 48) + 1);
          if ( *(_DWORD *)(v6 + 8 * v42 + 16) + 1 > (int)v45 )
          {
            if ( v23 != 0 )
            {
              v143 = *(_DWORD *)(v6 + 8 * v25 + 48);
              v148 = v23;
              v156 = v10;
              v154 = v13;
              if ( (unsigned int)sub_1EA85C0(a1: v10, a2: v11, a3: v6 + 376652784, a4: v45, a5: v153) != 0 )
              {
                if ( v143 >= 0xF )
                {
LABEL_320:
                  sub_276F0E0(a1: v156, a2: v141, a3: v142, a4: v153, a5: v155, a6: v154);
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  __builtin_debugtrap();
                  return sub_1E93040(a1: v130, a2: v131, a3: v128, a4: v129, a5: v132, a6: v133);
                }
                sub_1E9D6C0(
                  a1: v10,
                  a2: v11,
                  a3: v153,
                  a4: v67,
                  a5: v139,
                  a6: v6 + 8LL * *(unsigned int *)(v6 + 4LL * v143 + 376654108));
                v26 = (unsigned __int64)v140;
                v22 = v140;
              }
              else
              {
                v26 = v6;
                v22 = v140;
              }
            }
            else
            {
              v148 = 0;
              v156 = v10;
              v154 = v13;
              if ( (unsigned int)v44 >= 0xF )
              {
LABEL_316:
                sub_276F0E0();
LABEL_317:
                sub_276EFE0(a1: v10, a2: v11, a3: v80, a4: v82);
LABEL_318:
                sub_276EFE0(a1: v10, a2: v11, a3: v86, a4: v6 + 8 * v88);
LABEL_319:
                sub_276EFE0(a1: v10, a2: v27, a3: v6 + 8 * v90);
                goto LABEL_320;
              }
              if ( v35 < 0 )
                v80 = (v149 + ((unsigned __int64)(unsigned int)v22[2] << v35) + 7) & 0xFFFFFFFFFFFFFFF8LL;
              else
                v80 = (unsigned int)v35;
              v81 = *(unsigned int *)(v6 + 4 * v44 + 376654108);
              v82 = v6 + 8 * v81;
              if ( (_DWORD)v81 == 0 )
                goto LABEL_317;
              v134 = v81;
              v83 = *(char **)(v6 + 8 * v81 + 24);
              if ( v83 != nullptr
                && (v94 = *((_QWORD *)v83 + 4), v80 <= *(_QWORD *)v83 - v94)
                && (v123 = &v83[v94], v10 = &v123[v80] - v83, *((_QWORD *)v83 + 4) = v10, v123 != nullptr) )
              {
                v146 = v80;
                v84 = (__int64)v123;
              }
              else
              {
                v146 = v80;
                v84 = sub_1E9D600(a1: v80, a2: v11, a3: v80, a4: v82, a5: v6 + 8 * v81);
              }
              if ( v84 != 0 )
              {
                v145 = v84;
                sub_28393A0(a1: v10, a2: v11, a3: v140, a4: v82, a5: v84, a6: v146);
                v26 = v145;
                if ( *(_DWORD *)(v6 + 8LL * v134 + 48) == 16 && *(_BYTE *)(v6 + 376654992) == 0 )
                {
                  v102 = v145 & 0xFFFFFFFFFFF80000LL;
                  v103 = v145 - (v145 & 0xFFFFFFFFFFF80000LL) - 2112;
                  v104 = v103 >> 9;
                  v105 = (v103 + v146 - 1) >> 9;
                  if ( v105 != v103 >> 9 || (v103 & 0x1FF) == 0 )
                  {
                    if ( (v103 & 0x1FF) != 0 )
                    {
                      v106 = v104 + 1;
                      *(_BYTE *)(v102 + v104 + 1081) = -(__int64)((((v104 + 1) << 9) - v103) >> 3);
                    }
                    else
                    {
                      *(_BYTE *)(v102 + v104 + 1080) = 0;
                      v106 = (v145 - (v145 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9;
                    }
                    if ( v106 + 63 < v105 )
                      JUMPOUT(0x303D1CB36LL);
                    v107 = v106 + 1;
                    v108 = 1;
                    while ( v107 <= v105 )
                      *(_BYTE *)(v102 + v107++ + 1080) = v108++;
                    v124 = 6;
LABEL_280:
                    while ( v107 <= v105 )
                    {
                      v125 = v124 + 1;
                      v126 = v124 + 58;
                      v11 = (unsigned int)(1 << v124);
                      for ( j = 0; ; ++j )
                      {
                        if ( (int)v11 <= j )
                        {
                          v124 = v125;
                          goto LABEL_280;
                        }
                        *(_BYTE *)(v102 + v107++ + 1080) = v126;
                        if ( v107 > v105 )
                          break;
                      }
                      v124 = v125;
                    }
                  }
                  *(_DWORD *)v145 |= 2u;
                }
              }
              else
              {
                v26 = v6;
              }
              if ( v26 == v6 )
              {
                v35 = v152;
                v22 = v140;
              }
              else
              {
                v35 = v152;
                if ( v152 < 0 )
                {
                  v22 = v140;
                  v85 = (v149 + ((unsigned __int64)*((unsigned int *)v140 + 2) << v150) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v85 = v151;
                  v22 = v140;
                }
                *(_QWORD *)v22 = ((unsigned __int64)(unsigned int)((v26 - v6) >> 3) << 32) | v85 | 4;
              }
            }
            if ( v26 == v6 )
              *(_BYTE *)(v6 + 376652620) = 1;
          }
          else
          {
            v26 = v6;
            v148 = v23;
            v156 = v10;
            v154 = v13;
          }
          goto LABEL_73;
        }
        goto LABEL_312;
      }
LABEL_311:
      sub_276EFE0();
LABEL_312:
      v156 = v10;
      sub_276EDE0();
LABEL_313:
      sub_276EFE0(a1: v10, a2: v11, a3: v52, a4: v6 + 8 * v53);
      goto LABEL_314;
    }
    goto LABEL_309;
  }
LABEL_33:
  if ( v13 != 0 )
  {
    if ( *v12 != 0 )
      result = v6 + 8LL * (unsigned int)*v12;
    else
      result = 0;
  }
  else
  {
    result = *(_QWORD *)v12;
  }
  *(_QWORD *)(v6 + 376656568) = result;
  return result;
}
