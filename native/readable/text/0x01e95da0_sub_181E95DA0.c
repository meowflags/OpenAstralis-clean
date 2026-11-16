// sub_1E95DA0
// rva 0x01e95da0  size 9425  section .text  group text
// window base 0x181e95da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E95DA0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  unsigned int *v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r11
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // r9
  int v36; // r11d
  unsigned __int64 v37; // rbx
  __int64 v38; // r10
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rbp
  __int64 v51; // rbx
  BOOL v52; // ebp
  __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // r10
  int v58; // ebp
  __int64 v59; // rdi
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r9
  __int64 v62; // r9
  int v63; // r9d
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rbx
  __int64 v67; // r9
  _DWORD *v68; // rcx
  __int64 v69; // rbx
  int v70; // r9d
  BOOL v71; // ebx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdi
  BOOL v79; // ebp
  __int64 v80; // rcx
  __int64 v81; // rcx
  char v82; // dl
  char v83; // r8
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // r8
  _DWORD *v89; // rcx
  unsigned __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdi
  unsigned __int64 v97; // rbp
  __int64 v98; // rbp
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
  unsigned __int64 v111; // rbx
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
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // r8
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
  unsigned int v144; // [rsp+1Ch] [rbp-17Ch]
  unsigned __int64 v145; // [rsp+20h] [rbp-178h]
  unsigned int v146; // [rsp+2Ch] [rbp-16Ch]
  unsigned int v147; // [rsp+2Ch] [rbp-16Ch]
  int v148; // [rsp+2Ch] [rbp-16Ch]
  unsigned __int64 v149; // [rsp+30h] [rbp-168h]
  unsigned __int64 v150; // [rsp+38h] [rbp-160h]
  unsigned __int64 v151; // [rsp+50h] [rbp-148h]
  unsigned __int64 v152; // [rsp+58h] [rbp-140h]
  unsigned int v153; // [rsp+60h] [rbp-138h]
  int v154; // [rsp+64h] [rbp-134h]
  unsigned __int64 v155; // [rsp+68h] [rbp-130h]
  unsigned __int64 v156; // [rsp+70h] [rbp-128h]
  int v157; // [rsp+ECh] [rbp-ACh]
  unsigned __int64 v158; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v159; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v160; // [rsp+F8h] [rbp-A0h]
  unsigned __int64 v161; // [rsp+100h] [rbp-98h]
  unsigned int v162; // [rsp+108h] [rbp-90h]
  unsigned int v163; // [rsp+10Ch] [rbp-8Ch]
  __int64 v164; // [rsp+110h] [rbp-88h]
  unsigned int v165; // [rsp+11Ch] [rbp-7Ch]
  unsigned int v166; // [rsp+11Ch] [rbp-7Ch]
  unsigned __int64 v167; // [rsp+120h] [rbp-78h]
  int v168; // [rsp+12Ch] [rbp-6Ch]
  unsigned int v169; // [rsp+130h] [rbp-68h]
  unsigned int v170; // [rsp+134h] [rbp-64h]
  unsigned __int64 v171; // [rsp+138h] [rbp-60h]
  unsigned __int64 v172; // [rsp+148h] [rbp-50h]
  _DWORD *v173; // [rsp+158h] [rbp-40h]
  unsigned int *v174; // [rsp+160h] [rbp-38h]
  unsigned __int64 v175; // [rsp+168h] [rbp-30h]
  __int64 v176; // [rsp+170h] [rbp-28h]
  unsigned __int64 v177; // [rsp+178h] [rbp-20h]
  unsigned __int64 v178; // [rsp+188h] [rbp-10h]
  __int64 v179; // [rsp+188h] [rbp-10h]
  unsigned int v180; // [rsp+194h] [rbp-4h]

  v156 = a5;
  v8 = *(unsigned int *)(a3 + 4);
  LOBYTE(v9) = v7 + 8 * v8;
  v155 = v7 + 8 * v8;
  if ( a5 != v7 )
  {
    v154 = *(_DWORD *)(a3 + 4);
    v153 = *(_DWORD *)a5 >> 3;
    v10 = v153;
    v5 = (unsigned int)*(char *)(v7 + 8LL * v153 + 68);
    v180 = v5;
    v11 = v7 + 8LL * *(unsigned int *)(v7 + 58177844);
    v152 = v11;
    v12 = v7 + 8LL * *(unsigned int *)(v7 + 58177848);
    v151 = v12;
    if ( (_DWORD)v5 != 1 )
      goto LABEL_3;
    if ( *(__int16 *)(v7 + 8LL * v153 + 62) >= 2 )
      goto LABEL_15;
    do
    {
      sub_276EAE0();
LABEL_15:
      ;
    }
    while ( *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v10 + 16) + 16) != 5732 );
    v17 = 8LL * *(unsigned int *)(a5 + 8);
    if ( v17 != 0 )
      v17 += v7;
    if ( v17 != 0 )
    {
      LOBYTE(v9) = v155;
      goto LABEL_3;
    }
    v18 = 8LL * *(unsigned int *)(a5 + 4);
    if ( v18 != 0 )
      v18 += v7;
    v179 = v18;
    if ( v18 == 0 )
    {
      LOBYTE(v9) = v155;
      goto LABEL_3;
    }
    if ( (unsigned int)sub_1E9EBA0(a1: v12, a2: v11, a3: v18, a4: v18) != 0 )
    {
      v12 = v151;
      v11 = v152;
      v5 = 1;
      v10 = v153;
      LOBYTE(v9) = v155;
      a5 = v156;
      goto LABEL_3;
    }
    if ( (*(_DWORD *)v179 & 6LL) == 4 )
    {
      v12 = v151;
      v11 = v152;
      a5 = v156;
      *(_DWORD *)(v156 + 4) = *(_DWORD *)(v179 + 4);
      if ( (*(_DWORD *)v156 & 2) != 0 )
      {
        if ( v156 == v7 )
          JUMPOUT(0x303D2076FLL);
        a4 = (v156 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((v156 - a4) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((v156 - a4) >> 9) + 0x38) = 0;
        v5 = 1;
        v10 = v153;
        LOBYTE(v9) = v155;
      }
      else
      {
        v5 = 1;
        v10 = v153;
        LOBYTE(v9) = v155;
      }
      goto LABEL_3;
    }
    if ( (unsigned int)sub_1E9F320(a1: v19, a2: v20, a3: v179) == 0 )
    {
      v22 = v179;
      v12 = v151;
      v11 = v152;
      a5 = v156;
      if ( *(_BYTE *)(v7 + 376654993) == 0 )
      {
        v29 = *(_DWORD *)v156 >> 3;
        if ( *(__int16 *)(v7 + 8 * v29 + 62) >= 3
          && *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v29 + 16) + 20) == 27487 )
        {
          v30 = *(_QWORD *)(v156 + 24);
          if ( v30 == 0 )
            v30 = *(_QWORD *)(v7 + 376191424);
          if ( (unsigned __int64)(*(_QWORD *)(v7 + 376181240) - v30) < *(_QWORD *)(v7 + 376178864) )
          {
            v176 = *(_QWORD *)(v7 + 376181240) - v30;
            if ( v156 == v7 )
              JUMPOUT(0x303D20814LL);
            v31 = v156;
            if ( v154 != 0 )
            {
              v6 = v156 + 8;
              v174 = (unsigned int *)(v156 + 8);
              v150 = v7 + 376652784;
              a4 = v156 + 4;
              goto LABEL_83;
            }
            goto LABEL_388;
          }
        }
      }
      v23 = *(unsigned int *)(v7 + 374499012);
      if ( (_DWORD)v23 != 0 )
        v24 = v7 + 8 * v23;
      else
        v24 = v156;
      *(_DWORD *)(v156 + 8) = (v24 - v7) >> 3;
      if ( (*(_DWORD *)v156 & 2) != 0 )
      {
        if ( v156 == v7 )
          JUMPOUT(0x303D20BA6LL);
        a4 = (v156 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((v156 - a4) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((v156 - a4) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v7 + 374499012) = (v156 - v7) >> 3;
      v25 = *(_DWORD *)(v7 + 374343744);
      if ( (v25 & 2) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v49 = v7 + 374343744 - *(_QWORD *)(v7 + 374343736);
          a4 = 303;
          if ( *(_BYTE *)(v49 + 351) != 0 )
            *(_BYTE *)(v49 + 351) = 0;
          v5 = 1;
          v10 = v153;
          LOBYTE(v9) = v155;
        }
        else
        {
          v48 = (v7 + 374343744) & 0xFFFFFFFFFFF80000LL;
          a4 = (v7 + 374343744 - (v48 + 2112)) >> 9;
          if ( *(_BYTE *)(v48 + a4 + 56) != 0 )
            *(_BYTE *)(v48 + a4 + 56) = 0;
          v5 = 1;
          v10 = v153;
          LOBYTE(v9) = v155;
        }
      }
      else
      {
        v5 = 1;
        v10 = v153;
        LOBYTE(v9) = v155;
      }
      goto LABEL_3;
    }
    a5 = v156;
    if ( v156 == v7 )
      JUMPOUT(0x303D203F7LL);
    if ( *(_BYTE *)(v7 + 376654992) != 0 )
    {
      v11 = v152;
      if ( v156 == v7 )
        JUMPOUT(0x303D20418LL);
      if ( v152 == v7 )
        JUMPOUT(0x303D20422LL);
      if ( v152 > v156 )
      {
        v12 = v151;
      }
      else
      {
        v12 = v151;
        if ( v151 == v7 )
          JUMPOUT(0x303D2043ALL);
        if ( v156 <= v151 )
        {
LABEL_35:
          if ( v156 == v7 )
            JUMPOUT(0x303D2045BLL);
          if ( (*(_DWORD *)v156 & 1) != 0 )
          {
            v21 = (char *)(v156 - *(_QWORD *)(v156 - 8));
            if ( v156 == v7 )
              JUMPOUT(0x303D2047ALL);
            a4 = v156;
            if ( v21[48] != 0 )
              v21[48] = 0;
            v5 = 1;
            v10 = v153;
            LOBYTE(v9) = v155;
          }
          else
          {
            a4 = v156 - (v156 & 0xFFFFFFFFFFF80000LL);
            if ( *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((a4 - 2112) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v156 & 0xFFFFFFFFFFF80000LL) + ((a4 - 2112) >> 9) + 0x38) = 0;
            v5 = 1;
            v10 = v153;
            LOBYTE(v9) = v155;
          }
          goto LABEL_3;
        }
      }
      if ( *(_QWORD *)(v7 + 376612552) <= v156 )
        JUMPOUT(0x303D20699LL);
      a4 = 0;
LABEL_68:
      v5 = 1;
      v10 = v153;
      LOBYTE(v9) = v155;
      goto LABEL_3;
    }
    v12 = v151;
    v11 = v152;
    if ( (*(_DWORD *)v179 & 1) != 0 )
      v26 = v179 - *(_QWORD *)(v179 - 8);
    else
      v26 = v179 & 0xFFFFFFFFFFF80000LL;
    v27 = *(unsigned int *)(v26 + 40);
    if ( (*(_DWORD *)v179 & 6) == 6 )
    {
      if ( (_DWORD)v27 == 0 )
      {
        sub_276EFE0(a1: v151, a2: v152, a3: v179, a4: v7 + 8 * v27);
LABEL_387:
        sub_276EFE0(a1: v12, a2: v11, a3: v7 + 8 * v47);
LABEL_388:
        sub_276EFE0(a1: v12, a2: v11, a3: v22, a4: v31, a5);
        goto LABEL_389;
      }
      a4 = *(_DWORD *)(v7 + 8 * v27 + 48) < 16;
      v28 = a4;
    }
    else
    {
      a4 = 1;
      if ( (*(_DWORD *)v179 & 2) != 0 )
        JUMPOUT(0x303D205FBLL);
      v28 = 1;
    }
    if ( v28 == 0 )
    {
      v5 = 1;
      v10 = v153;
      LOBYTE(v9) = v155;
      goto LABEL_3;
    }
    a4 = *(unsigned int *)v156;
    if ( (*(_DWORD *)v156 & 6) != 6 )
    {
      if ( (a4 & 2) != 0 )
        JUMPOUT(0x303D2062CLL);
      a4 = 0;
      goto LABEL_68;
    }
    if ( v156 == v7 )
      JUMPOUT(0x303D20AF2LL);
    if ( (a4 & 1) != 0 )
      v46 = v156 - *(_QWORD *)(v156 - 8);
    else
      v46 = v156 & 0xFFFFFFFFFFF80000LL;
    v47 = *(unsigned int *)(v46 + 40);
    if ( (_DWORD)v47 != 0 )
    {
      if ( *(int *)(v7 + 8 * v47 + 48) < 16 )
      {
        v5 = 1;
        v10 = v153;
        LOBYTE(v9) = v155;
        goto LABEL_3;
      }
      goto LABEL_35;
    }
    goto LABEL_387;
  }
  sub_276EFE0();
LABEL_151:
  v32 = sub_28C1C40(a1: v12, a2: v11, a3: v7 + 368272040, a4, a5);
LABEL_152:
  if ( ((unsigned __int8)v9 & 2) != 0 )
  {
    a4 = v33;
    goto LABEL_83;
  }
  while ( v34 == 4 )
  {
    v53 = *(unsigned int *)(v32 + 4);
    *(_DWORD *)a4 = v53;
    if ( (_DWORD)v53 == 0 )
    {
      a4 = v33;
      goto LABEL_83;
    }
    if ( *(_BYTE *)(v7 + 376654992) != 0 )
    {
      if ( a5 == v7 )
        JUMPOUT(0x303D20E23LL);
      if ( v11 == v7 )
        JUMPOUT(0x303D20E2DLL);
      if ( v11 > a5 )
        goto LABEL_234;
      if ( v12 == v7 )
        JUMPOUT(0x303D20E40LL);
      if ( a5 > v12 )
      {
LABEL_234:
        if ( *(_QWORD *)(v7 + 376612552) <= v156 )
          JUMPOUT(0x303D213E3LL);
LABEL_242:
        a4 = v172;
        v12 = v151;
        v11 = v152;
        a5 = v156;
        goto LABEL_83;
      }
    }
    else
    {
      v63 = *(_DWORD *)(v7 + 8 * v53);
      v64 = v7 + 8 * v53;
      v147 = v53;
      if ( v64 == v7 )
        JUMPOUT(0x303D210E2LL);
      v65 = v7 + 8 * v53;
      if ( (v63 & 1) != 0 )
      {
        v66 = v64 - *(_QWORD *)(v64 - 8);
        v149 = v64;
        v67 = v147;
        v68 = v173;
        a5 = v156;
      }
      else
      {
        v149 = v64;
        v67 = v147;
        v68 = v173;
        a5 = v156;
        v66 = v65 & 0xFFFFFFFFFFF80000LL;
      }
      v69 = *(unsigned int *)(v66 + 40);
      v70 = *(_DWORD *)(v7 + 8 * v67);
      if ( (v70 & 6) == 6 )
      {
        if ( (_DWORD)v69 == 0 )
          goto LABEL_394;
        v71 = *(_DWORD *)(v7 + 8 * v69 + 48) < 16;
      }
      else
      {
        if ( (v70 & 2) != 0 )
          JUMPOUT(0x303D2113BLL);
        v71 = true;
      }
      if ( !v71 )
      {
        a4 = v33;
        v12 = v151;
        v11 = v152;
        goto LABEL_83;
      }
      if ( (*(_DWORD *)a5 & 6) != 6 )
      {
        if ( (*(_DWORD *)a5 & 2) != 0 )
          JUMPOUT(0x303D2116CLL);
        goto LABEL_242;
      }
      if ( a5 == v7 )
        JUMPOUT(0x303D216FDLL);
      if ( (*(_DWORD *)a5 & 1) != 0 )
        v94 = a5 - *(_QWORD *)(a5 - 8);
      else
        v94 = a5 & 0xFFFFFFFFFFF80000LL;
      v95 = *(unsigned int *)(v94 + 40);
      if ( (_DWORD)v95 == 0 )
        goto LABEL_396;
      if ( *(int *)(v7 + 8 * v95 + 48) < 16 )
      {
        a4 = v172;
        v12 = v151;
        v11 = v152;
        goto LABEL_83;
      }
    }
    if ( a5 == v7 )
      JUMPOUT(0x303D20E56LL);
    if ( (*(_DWORD *)a5 & 1) != 0 )
    {
      v54 = a5 - *(_QWORD *)(a5 - 8);
      if ( a5 == v7 )
        JUMPOUT(0x303D20E78LL);
      v55 = ((unsigned __int64)v173 - a5) >> 9;
      if ( *(_BYTE *)(v54 + v55 + 48) != 0 )
        *(_BYTE *)(v54 + v55 + 48) = 0;
      a4 = v172;
      v12 = v151;
      v11 = v152;
    }
    else
    {
      if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      a4 = v172;
      v12 = v151;
      v11 = v152;
    }
LABEL_83:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( v6 <= a4 )
          {
            v5 = v180;
            v10 = v153;
            LOBYTE(v9) = v155;
LABEL_3:
            if ( (int)v5 >= 4 )
              goto LABEL_4;
            if ( a5 == v7 )
              JUMPOUT(0x303D1FE62LL);
            v178 = a5;
            a4 = *(int *)(v7 + 8 * v10 + 56);
            v6 = *(unsigned int *)(v7 + 4 * a4);
            if ( (_DWORD)v6 == 0 )
              goto LABEL_4;
            v170 = *(_DWORD *)(v7 + 4 * a4);
            a4 = v7 + 4 * a4;
            v175 = a4;
            v9 = (unsigned int *)(a4 + 4);
            v176 = 8LL * (int)v6;
            v13 = v176 + a4 + 4;
            v177 = v13;
            v14 = v154;
            v15 = a5;
            while ( 1 )
            {
              if ( v13 <= (unsigned __int64)v9 )
              {
                v5 = v180;
LABEL_4:
                if ( (unsigned int)v5 <= 6 )
                  __asm { jmp     r8; switch jump }
                goto LABEL_151;
              }
              v16 = *v9;
              v165 = v9[1];
              v9 += 2;
              v174 = v9;
              if ( v14 == 0 )
                break;
              sub_1E93040(a1: 4, a2: a5, a3: v155, a4: v165, a5: v15 + (int)v16, a6: 1u);
              v13 = v177;
              v15 = v178;
              v14 = v154;
              a5 = v156;
            }
            v6 = (unsigned int)v6;
            sub_276EFE0(a1: v16, a2: v175, a3: v15, a4: v165);
LABEL_195:
            v149 = v43;
            if ( a5 == v7 )
              JUMPOUT(0x303D21078LL);
            if ( (*(_DWORD *)a5 & 1) != 0 )
            {
              v61 = a5 - *(_QWORD *)(a5 - 8);
              a4 = (unsigned __int64)v173;
            }
            else
            {
              a4 = (unsigned __int64)v173;
              v61 = a5 & 0xFFFFFFFFFFF80000LL;
            }
            v62 = *(unsigned int *)(v61 + 40);
            if ( (_DWORD)v62 == 0 )
              goto LABEL_391;
            if ( *(int *)(v7 + 8 * v62 + 48) < 16 )
            {
              a4 = v33;
              v12 = v151;
              v11 = v152;
              continue;
            }
LABEL_121:
            if ( a5 == v7 )
              JUMPOUT(0x303D20A99LL);
            if ( (*(_DWORD *)a5 & 1) != 0 )
            {
              v44 = a5 - *(_QWORD *)(a5 - 8);
              if ( a5 == v7 )
                JUMPOUT(0x303D20ABALL);
              v45 = (a4 - a5) >> 9;
              if ( *(_BYTE *)(v44 + v45 + 48) != 0 )
                *(_BYTE *)(v44 + v45 + 48) = 0;
              a4 = v33;
              v12 = v151;
              v11 = v152;
            }
            else
            {
              if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
                *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              a4 = v33;
              v12 = v151;
              v11 = v152;
            }
          }
          v32 = 8LL * *(unsigned int *)a4;
          if ( v32 != 0 )
            v32 += v7;
          v33 = a4 + 4;
          if ( v32 == 0 )
          {
            a4 += 4LL;
            continue;
          }
          break;
        }
        if ( v11 == v7 )
          JUMPOUT(0x303D2087FLL);
        if ( v11 <= v32 )
        {
          if ( v12 == v7 )
            JUMPOUT(0x303D2088FLL);
          if ( v32 <= v12 )
          {
            a4 += 4LL;
            continue;
          }
        }
        break;
      }
      v173 = (_DWORD *)a4;
      v172 = a4 + 4;
      LODWORD(v9) = *(_DWORD *)v32;
      LOBYTE(v5) = *(_BYTE *)(v7 + 376654992);
      v34 = *(_DWORD *)v32 & 6;
      if ( v34 == 6 )
      {
        v43 = v32;
        if ( (_BYTE)v5 != 0 )
        {
          if ( a5 == v7 )
            JUMPOUT(0x303D20A66LL);
          if ( v11 == v7 )
            JUMPOUT(0x303D20A70LL);
          if ( v11 <= a5 )
          {
            if ( v12 == v7 )
              JUMPOUT(0x303D20A83LL);
            if ( a5 <= v12 )
              goto LABEL_121;
          }
          if ( *(_QWORD *)(v7 + 376612552) <= a5 )
            JUMPOUT(0x303D20ECDLL);
LABEL_181:
          a4 += 4LL;
          continue;
        }
        if ( (*(_DWORD *)v32 & 1) != 0 )
          v50 = v32 - *(_QWORD *)(v32 - 8);
        else
          v50 = v32 & 0xFFFFFFFFFFF80000LL;
        v51 = *(unsigned int *)(v50 + 40);
        if ( (*(_DWORD *)v32 & 6) != 6 )
        {
          if ( (*(_DWORD *)v32 & 2) != 0 )
            JUMPOUT(0x303D20DADLL);
          v52 = true;
          goto LABEL_159;
        }
        if ( (_DWORD)v51 != 0 )
        {
          v52 = *(_DWORD *)(v7 + 8 * v51 + 48) < 16;
LABEL_159:
          if ( !v52 )
          {
            a4 += 4LL;
            continue;
          }
          if ( (*(_DWORD *)a5 & 6) == 6 )
            goto LABEL_195;
          if ( (*(_DWORD *)a5 & 2) != 0 )
            JUMPOUT(0x303D20DDALL);
          goto LABEL_181;
        }
LABEL_390:
        v149 = v43;
        sub_276EFE0(a1: v12, a2: v11, a3: a4);
LABEL_391:
        sub_276EFE0(a1: v12, a2: v11, a3: a4, a4, a5, a6: v7 + 8 * v62);
LABEL_392:
        sub_276EFE0(a1: v12, a2: v11, a3: v173, a4, a5: v156);
LABEL_393:
        sub_276EDE0(a1: v12, a2: v11, a3: v173, a4: v75, a5: v156);
LABEL_394:
        sub_276EFE0(a1: v12, a2: v11, a3: v68);
LABEL_395:
        sub_276EFE0(a1: v78, a2: v11, a3: v39, a4: v7 + 8 * v77, a5);
LABEL_396:
        sub_276EFE0(a1: v12, a2: v11, a3: v173, a4: v7 + 8 * v95);
LABEL_397:
        sub_276EFE0(a1: v96, a2: v11, a3: v39, a4: v80, a5);
LABEL_398:
        sub_276F0E0(a1: v12, a2: v11, a3: v173, a4: v89, a5: v90);
LABEL_399:
        sub_276EFE0(a1: v12, a2: v11, a3: v173, a4: v104, a5: v90);
LABEL_400:
        sub_276F0E0(a1: v163, a2: v170, a3: v173, a4: v176, a5: v156, a6: v149);
        __halt();
      }
      break;
    }
    if ( (_BYTE)v5 == 0 )
      goto LABEL_152;
  }
  v35 = v32;
  v149 = v32;
  v36 = (unsigned __int8)v9 & 1;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    v37 = v32 - *(_QWORD *)(v32 - 8);
  else
    v37 = v32 & 0xFFFFFFFFFFF80000LL;
  v171 = v37;
  v38 = *(unsigned int *)(v37 + 40);
  v145 = v7 + 8 * v38;
  v170 = v36 ^ 1;
  if ( (_DWORD)v38 == 0 )
  {
LABEL_389:
    sub_276EFE0(a1: v12, a2: v11, a3: a4);
    goto LABEL_390;
  }
  v169 = v36;
  if ( *(_BYTE *)(v7 + 8 * v38 + 52) == 0 )
  {
    v146 = *(_DWORD *)v32 >> 3;
    v56 = *(_DWORD *)(v7 + 8LL * v146 + 32);
    v168 = v56;
    v167 = (unsigned int)v56;
    v166 = (unsigned __int8)v56;
    v164 = (v56 >> 8) & 0xFFF;
    if ( (_BYTE)v5 != 0 )
    {
      v57 = (v56 >> 8) & 0xFFF;
      v58 = *(_DWORD *)(v7 + 8LL * v146 + 32);
      v32 = v7;
      v59 = v166;
      v60 = v167;
    }
    else
    {
      v72 = *(unsigned int *)(v7 + 376654972);
      if ( (_DWORD)v72 == 0 )
        goto LABEL_392;
      v73 = *(_DWORD *)(v7 + 8 * v72) >> 3;
      v74 = *(unsigned int *)(v7 + 8 * v73 + 20);
      LODWORD(v73) = *(_DWORD *)(v7 + 8 * v73 + 44);
      v75 = BYTE3(v73);
      if ( (unsigned __int16)*(_DWORD *)(v7 + 8 * v74 + 4LL * ((unsigned int)v73 & (0x207u >> SBYTE3(v73))) + 12) != 519 )
        goto LABEL_393;
      if ( *(_DWORD *)(v7 + 8 * v72 + 16) + 1 > *(_DWORD *)(v7 + 8 * v38 + 48) + 1 )
      {
        v163 = *(_DWORD *)(v7 + 8 * v38 + 48) + 1;
        v162 = *(_DWORD *)(v7 + 8 * v38 + 48);
        v89 = v173;
        v90 = v156;
        if ( v36 != 0 )
        {
          if ( (unsigned int)sub_1EA85C0(a1: v12, a2: v11, a3: v150, a4: v173, a5: v171) != 0 )
          {
            if ( v162 >= 0xF )
              goto LABEL_400;
            sub_1E9D6C0(
              a1: v92,
              a2: v93,
              a3: v171,
              a4: v91,
              a5: v145,
              a6: v7 + 8LL * *(unsigned int *)(v7 + 4LL * v162 + 376654108));
            v32 = v149;
            v57 = v164;
            v59 = v166;
            v60 = v167;
            v58 = v168;
            v35 = v149;
          }
          else
          {
            v32 = v7;
            v57 = v164;
            v59 = v166;
            v60 = v167;
            v58 = v168;
            v35 = v149;
          }
        }
        else
        {
          if ( v162 >= 0xF )
            goto LABEL_398;
          if ( v168 < 0 )
            v102 = (v164 + ((unsigned __int64)*(unsigned int *)(v35 + 8) << v166) + 7) & 0xFFFFFFFFFFFFFFF8LL;
          else
            v102 = v167;
          v103 = *(unsigned int *)(v7 + 4LL * v162 + 376654108);
          v104 = v7 + 8 * v103;
          if ( (_DWORD)v103 == 0 )
            goto LABEL_399;
          v144 = *(_DWORD *)(v7 + 4LL * v162 + 376654108);
          v105 = *(char **)(v7 + 8 * v103 + 24);
          if ( v105 != nullptr
            && (v106 = *((_QWORD *)v105 + 4), v102 <= *(_QWORD *)v105 - v106)
            && (v107 = &v105[v106], v108 = &v107[v102] - v105, *((_QWORD *)v105 + 4) = v108, v107 != nullptr) )
          {
            v160 = v102;
            v109 = (__int64)v107;
          }
          else
          {
            v160 = v102;
            v109 = sub_1E9D600(a1: v102, a2: v105, a3: v102, a4: v104, a5: v7 + 8 * v103);
          }
          if ( v109 != 0 )
          {
            v159 = v109;
            sub_28393A0(a1: v108, a2: v105, a3: v149, a4: v104, a5: v109, a6: v160);
            v32 = v159;
            if ( *(_DWORD *)(v7 + 8LL * v144 + 48) == 16 )
            {
              if ( *(_BYTE *)(v7 + 376654992) != 0 )
              {
                v57 = v164;
                v59 = v166;
                v60 = v167;
                v58 = v168;
                v35 = v149;
              }
              else
              {
                v133 = v159 & 0xFFFFFFFFFFF80000LL;
                v134 = v159 - ((v159 & 0xFFFFFFFFFFF80000LL) + 2112);
                v135 = v134 >> 9;
                v136 = (v134 + v160 - 1) >> 9;
                if ( v136 == v134 >> 9 && (v134 & 0x1FF) != 0 )
                {
                  v57 = v164;
                  v59 = v166;
                  v60 = v167;
                  v58 = v168;
                  v35 = v149;
                }
                else
                {
                  v57 = v164;
                  v59 = v166;
                  v60 = v167;
                  v58 = v168;
                  v35 = v149;
                  if ( (v134 & 0x1FF) != 0 )
                  {
                    v137 = v135 + 1;
                    *(_BYTE *)(v133 + v135 + 1081) = -(__int64)((((v135 + 1) << 9) - v134) >> 3);
                  }
                  else
                  {
                    *(_BYTE *)(v133 + v135 + 1080) = 0;
                    v137 = (v159 - ((v159 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                  }
                  if ( v137 + 63 < v136 )
                    JUMPOUT(0x303D21EB7LL);
                  v138 = v137 + 1;
                  v139 = 1;
                  while ( v138 <= v136 )
                    *(_BYTE *)(v133 + v138++ + 1080) = v139++;
                  v140 = 6;
LABEL_366:
                  while ( v138 <= v136 )
                  {
                    v141 = v140 + 58;
                    v157 = v140 + 1;
                    v142 = 1 << v140;
                    for ( i = 0; ; ++i )
                    {
                      if ( v142 <= i )
                      {
                        v140 = v157;
                        goto LABEL_366;
                      }
                      *(_BYTE *)(v133 + v138++ + 1080) = v141;
                      if ( v138 > v136 )
                        break;
                    }
                    v140 = v157;
                  }
                }
                *(_DWORD *)v159 |= 2u;
              }
            }
            else
            {
              v57 = v164;
              v59 = v166;
              v60 = v167;
              v58 = v168;
              v35 = v149;
            }
          }
          else
          {
            v32 = v7;
            v57 = v164;
            v59 = v166;
            v60 = v167;
            v58 = v168;
            v35 = v149;
          }
          if ( v32 != v7 )
          {
            if ( v58 < 0 )
              v110 = (v57 + ((unsigned __int64)*(unsigned int *)(v35 + 8) << v59) + 7) & 0xFFFFFFFFFFFFFFF8LL;
            else
              v110 = v60;
            *(_QWORD *)v35 = ((unsigned __int64)(unsigned int)((v32 - v7) >> 3) << 32) | v110 | 4;
          }
        }
        if ( v32 == v7 )
          *(_BYTE *)(v7 + 376652620) = 1;
      }
      else
      {
        v32 = v7;
        v57 = v164;
        v58 = v168;
        v59 = v166;
        v60 = v167;
      }
    }
    if ( v32 == v7 )
    {
      v81 = v169;
      v82 = *(_BYTE *)(v7 + 376654992);
      v83 = *(_BYTE *)(v7 + 8LL * v146 + 68);
      v84 = (v35 - v7) >> 3;
      v148 = v84;
      if ( v169 != 0 )
      {
        if ( v82 != 0 )
        {
          if ( (*(_DWORD *)v35 & 6LL) == 6 )
          {
            v32 = v35;
          }
          else
          {
            *(_DWORD *)v35 |= 6u;
            if ( v83 == 6 )
            {
              if ( *(_DWORD *)(v35 + 8) != 0 )
              {
                v125 = *(_QWORD *)(v7 + 376654880);
                if ( v125 == 0 || (_DWORD)(v126 = *(unsigned int *)(v7 + 376654876)) == 16366 )
                {
                  v84 = sub_1EA8720(a1: v59, a2: v60, a3: *(_QWORD *)(v7 + 376654880));
                  *(_QWORD *)(v7 + 376654880) = v84;
                  *(_DWORD *)(v7 + 376654876) = 0;
                  v125 = v84;
                  v126 = 0;
                  LODWORD(v84) = v148;
                }
                *(_DWORD *)(v7 + 376654876) = v126 + 1;
                *(_DWORD *)(v125 + 4 * v126 + 8) = v84;
                v127 = *(_QWORD *)(v7 + 376654880);
                if ( v127 == 0 || (_DWORD)(v128 = *(unsigned int *)(v7 + 376654876)) == 16366 )
                {
                  v127 = sub_1EA8720(a1: v59, a2: v60, a3: *(_QWORD *)(v7 + 376654880));
                  *(_QWORD *)(v7 + 376654880) = v127;
                  *(_DWORD *)(v7 + 376654876) = 0;
                  v128 = 0;
                }
                *(_DWORD *)(v7 + 376654876) = v128 + 1;
                *(_DWORD *)(v127 + 4 * v128 + 8) = 0;
                v32 = v149;
              }
              else
              {
                v32 = v35;
              }
            }
            else
            {
              v85 = *(_QWORD *)(v7 + 376654856);
              if ( v85 == 0 || (_DWORD)(v86 = *(unsigned int *)(v7 + 376654852)) == 16366 )
              {
                v84 = sub_1EA8720(a1: v59, a2: v60, a3: *(_QWORD *)(v7 + 376654856));
                *(_QWORD *)(v7 + 376654856) = v84;
                *(_DWORD *)(v7 + 376654852) = 0;
                v85 = v84;
                v86 = 0;
                LODWORD(v84) = v148;
              }
              *(_DWORD *)(v7 + 376654852) = v86 + 1;
              *(_DWORD *)(v85 + 4 * v86 + 8) = v84;
              v32 = v149;
            }
          }
        }
        else
        {
          sub_1E9D6C0(a1: v59, a2: v60, a3: v171, a4: v169, a5: v145, a6: v7 + 376653896);
          v32 = v149;
        }
      }
      else if ( v82 != 0 )
      {
        if ( (*(_DWORD *)v35 & 6) == 6 )
        {
          v32 = v35;
        }
        else
        {
          *(_DWORD *)v35 |= 6u;
          if ( v83 == 6 )
          {
            if ( *(_DWORD *)(v35 + 8) != 0 )
            {
              v129 = *(_QWORD *)(v7 + 376654880);
              if ( v129 == 0 || (_DWORD)(v130 = *(unsigned int *)(v7 + 376654876)) == 16366 )
              {
                v84 = sub_1EA8720(a1: v59, a2: v60, a3: v129);
                *(_QWORD *)(v7 + 376654880) = v84;
                *(_DWORD *)(v7 + 376654876) = 0;
                v129 = v84;
                v130 = 0;
                LODWORD(v84) = v148;
              }
              *(_DWORD *)(v7 + 376654876) = v130 + 1;
              *(_DWORD *)(v129 + 4 * v130 + 8) = v84;
              v131 = *(_QWORD *)(v7 + 376654880);
              if ( v131 == 0 || (_DWORD)(v132 = *(unsigned int *)(v7 + 376654876)) == 16366 )
              {
                v131 = sub_1EA8720(a1: v59, a2: v60, a3: *(_QWORD *)(v7 + 376654880));
                *(_QWORD *)(v7 + 376654880) = v131;
                *(_DWORD *)(v7 + 376654876) = 0;
                v132 = 0;
              }
              *(_DWORD *)(v7 + 376654876) = v132 + 1;
              *(_DWORD *)(v131 + 4 * v132 + 8) = 0;
              v32 = v149;
            }
            else
            {
              v32 = v35;
            }
          }
          else
          {
            v87 = *(_QWORD *)(v7 + 376654856);
            if ( v87 == 0 || (_DWORD)(v88 = *(unsigned int *)(v7 + 376654852)) == 16366 )
            {
              v84 = sub_1EA8720(a1: v59, a2: v60, a3: v87);
              *(_QWORD *)(v7 + 376654856) = v84;
              *(_DWORD *)(v7 + 376654852) = 0;
              v87 = v84;
              v88 = 0;
              LODWORD(v84) = v148;
            }
            *(_DWORD *)(v7 + 376654852) = v88 + 1;
            *(_DWORD *)(v87 + 4 * v88 + 8) = v84;
            v32 = v149;
          }
        }
      }
      else
      {
        if ( v58 < 0 )
        {
          v81 = (unsigned int)v59;
          v99 = (v57 + ((unsigned __int64)*(unsigned int *)(v149 + 8) << v59) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v99 = v60;
        }
        v100 = *(_QWORD **)(v7 + 376653920);
        if ( v100 != nullptr
          && (v81 = v100[4], v99 <= *v100 - v81)
          && (v81 += (__int64)v100, v100[4] = v81 + v99 - (_QWORD)v100, v81 != 0) )
        {
          v101 = v81;
          v158 = v99;
        }
        else
        {
          v158 = v99;
          v101 = sub_1E9D600(a1: v99, a2: v60, a3: v99, a4: v81, a5: v7 + 376653896);
        }
        if ( v101 != 0 )
        {
          v161 = v101;
          sub_28393A0(a1: v59, a2: v60, a3: v149, a4: v81, a5: v101, a6: v158);
          v32 = v161;
          if ( *(_BYTE *)(v7 + 376654992) == 0 )
          {
            v113 = v161 & 0xFFFFFFFFFFF80000LL;
            v114 = v161 - ((v161 & 0xFFFFFFFFFFF80000LL) + 2112);
            v115 = v114 >> 9;
            v116 = (v114 + v158 - 1) >> 9;
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
                v117 = (v161 - ((v161 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
              }
              if ( v117 + 63 < v116 )
                JUMPOUT(0x303D21BD6LL);
              v118 = v117 + 1;
              v119 = 1;
              while ( v118 <= v116 )
                *(_BYTE *)(v113 + v118++ + 1080) = v119++;
              v120 = 6;
LABEL_332:
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
                    goto LABEL_332;
                  }
                  *(_BYTE *)(v113 + v118++ + 1080) = v122;
                  if ( v118 > v116 )
                    break;
                }
                v120 = v121;
              }
            }
            *(_DWORD *)v161 |= 2u;
          }
        }
        else
        {
          v32 = v7;
        }
        if ( v32 != v7 )
        {
          if ( v168 < 0 )
          {
            v112 = (unsigned __int64 *)v149;
            v111 = (v164 + ((unsigned __int64)*(unsigned int *)(v149 + 8) << v166) + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v111 = v167;
            v112 = (unsigned __int64 *)v149;
          }
          *v112 = ((unsigned __int64)(unsigned int)((v32 - v7) >> 3) << 32) | v111 | 4;
        }
      }
    }
  }
  v39 = v173;
  if ( v32 != v149 )
    *v173 = (v32 - v7) >> 3;
  if ( v32 == v7 )
  {
    a4 = v172;
    v6 = (unsigned __int64)v174;
    v12 = v151;
    v11 = v152;
    a5 = v156;
    goto LABEL_83;
  }
  if ( *(_BYTE *)(v7 + 376654992) != 0 )
  {
    v11 = v152;
    a5 = v156;
    if ( v156 == v7 )
      JUMPOUT(0x303D209AFLL);
    if ( v152 == v7 )
      JUMPOUT(0x303D209B9LL);
    if ( v152 > v156 )
    {
      v40 = v151;
    }
    else
    {
      v40 = v151;
      if ( v151 == v7 )
        JUMPOUT(0x303D209D8LL);
      if ( v156 <= v151 )
        goto LABEL_109;
    }
    if ( *(_QWORD *)(v7 + 376612552) <= v156 )
      JUMPOUT(0x303D2140ALL);
  }
  else
  {
    v40 = v151;
    v11 = v152;
    a5 = v156;
    if ( v32 == v7 )
      JUMPOUT(0x303D2122ALL);
    if ( (*(_DWORD *)v32 & 1) != 0 )
      v76 = v32 - *(_QWORD *)(v32 - 8);
    else
      v76 = v32 & 0xFFFFFFFFFFF80000LL;
    v77 = *(unsigned int *)(v76 + 40);
    v78 = *(_DWORD *)v32 & 6;
    if ( v78 == 6 )
    {
      if ( (_DWORD)v77 == 0 )
        goto LABEL_395;
      v79 = *(_DWORD *)(v7 + 8 * v77 + 48) < 16;
    }
    else
    {
      if ( (*(_DWORD *)v32 & 2) != 0 )
        JUMPOUT(0x303D21261LL);
      v79 = true;
    }
    if ( !v79 )
    {
      a4 = v172;
      v6 = (unsigned __int64)v174;
      v12 = v151;
      goto LABEL_83;
    }
    v80 = *(unsigned int *)v156;
    if ( (*(_DWORD *)v156 & 6) == 6 )
    {
      if ( v156 == v7 )
        JUMPOUT(0x303D21752LL);
      v96 = v156;
      if ( (*(_DWORD *)v156 & 1) != 0 )
      {
        v97 = v156 - *(_QWORD *)(v156 - 8);
      }
      else
      {
        v96 = v156 & 0xFFFFFFFFFFF80000LL;
        v97 = v156 & 0xFFFFFFFFFFF80000LL;
      }
      v98 = *(unsigned int *)(v97 + 40);
      if ( (_DWORD)v98 == 0 )
        goto LABEL_397;
      if ( *(int *)(v7 + 8 * v98 + 48) < 16 )
      {
        a4 = v172;
        v6 = (unsigned __int64)v174;
        v12 = v151;
        goto LABEL_83;
      }
LABEL_109:
      if ( a5 == v7 )
        JUMPOUT(0x303D209F6LL);
      if ( (*(_DWORD *)a5 & 1) != 0 )
      {
        v41 = a5 - *(_QWORD *)(a5 - 8);
        if ( a5 == v7 )
          JUMPOUT(0x303D20A10LL);
        v42 = ((unsigned __int64)v173 - a5) >> 9;
        if ( *(_BYTE *)(v41 + v42 + 48) != 0 )
          *(_BYTE *)(v41 + v42 + 48) = 0;
        a4 = v172;
        v6 = (unsigned __int64)v174;
        v12 = v40;
      }
      else
      {
        if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
        a4 = v172;
        v6 = (unsigned __int64)v174;
        v12 = v40;
      }
      goto LABEL_83;
    }
    if ( (v80 & 2) != 0 )
      JUMPOUT(0x303D2128DLL);
  }
  a4 = v172;
  v6 = (unsigned __int64)v174;
  v12 = v40;
  goto LABEL_83;
}
