// sub_181EB90A0
// rva 0x01eb90a0  size 4469  section .text  group text
// window base 0x181eb90a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__m128i __fastcall sub_181EB90A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r15
  __m128i v21; // xmm8
  __m128i v22; // xmm9
  __m128i v23; // xmm10
  __m128i v24; // xmm11
  __m128i v25; // xmm12
  __m128i v26; // xmm13
  __m128i v27; // xmm14
  __m128i v28; // xmm15
  int v29; // esi
  _DWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rbx
  unsigned int v37; // edx
  unsigned int v38; // ebp
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rsi
  char v54; // cl
  int v55; // ebx
  _DWORD *v56; // rbp
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rdx
  _DWORD *v66; // rbx
  unsigned int v67; // edx
  unsigned int v68; // ebp
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdx
  unsigned __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdx
  char v82; // cl
  int v83; // ebx
  __int64 v84; // rbp
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  unsigned int v89; // edx
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  int v100; // eax
  __int64 v101; // rdi
  unsigned int v102; // ebx
  _DWORD *v103; // rbp
  __int64 v104; // rcx
  __int64 v105; // rsi
  _DWORD *v106; // rdx
  unsigned __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // rcx
  unsigned int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // rdi
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rdx
  _DWORD *v118; // rax
  __int64 v119; // rdx
  unsigned __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  unsigned __int64 v125; // r9
  char *v126; // r9
  unsigned __int64 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // rdx
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // rbx
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rbx
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // rbx
  unsigned __int64 v136; // rbx
  unsigned __int64 v137; // rbx
  unsigned __int64 v138; // rbx
  char v139; // [rsp+0h] [rbp-1E8h] BYREF
  _DWORD *v140; // [rsp+10h] [rbp-1D8h]
  unsigned int v141; // [rsp+1Ch] [rbp-1CCh]
  _DWORD *v142; // [rsp+20h] [rbp-1C8h]
  __int64 v143; // [rsp+28h] [rbp-1C0h]
  _DWORD *v144; // [rsp+30h] [rbp-1B8h]
  __int64 v145; // [rsp+38h] [rbp-1B0h]
  int v146; // [rsp+44h] [rbp-1A4h]
  unsigned int v147; // [rsp+48h] [rbp-1A0h]
  unsigned int v148; // [rsp+4Ch] [rbp-19Ch]
  int v149; // [rsp+50h] [rbp-198h]
  unsigned int v150; // [rsp+54h] [rbp-194h]
  __int64 v151; // [rsp+58h] [rbp-190h]
  __int64 v152; // [rsp+60h] [rbp-188h]
  __int64 v153; // [rsp+68h] [rbp-180h]
  __int64 v154; // [rsp+70h] [rbp-178h]
  __int64 v155; // [rsp+78h] [rbp-170h]
  __int64 v156; // [rsp+80h] [rbp-168h]
  __m128i v157; // [rsp+88h] [rbp-160h]
  __m128i v158; // [rsp+98h] [rbp-150h]
  __m128i v159; // [rsp+A8h] [rbp-140h]
  __m128i v160; // [rsp+B8h] [rbp-130h]
  __m128i v161; // [rsp+C8h] [rbp-120h]
  __m128i v162; // [rsp+D8h] [rbp-110h]
  __m128i v163; // [rsp+E8h] [rbp-100h]
  __m128i v164; // [rsp+F8h] [rbp-F0h]
  __m128i m128_i128; // [rsp+108h] [rbp-E0h]
  __m128i v166; // [rsp+118h] [rbp-D0h]
  __m128i v167; // [rsp+128h] [rbp-C0h]
  __m128i v168; // [rsp+138h] [rbp-B0h]
  __m128i v169; // [rsp+148h] [rbp-A0h]
  __m128i v170; // [rsp+158h] [rbp-90h]
  __m128i v171; // [rsp+168h] [rbp-80h]
  __m128i v172; // [rsp+178h] [rbp-70h]
  __int64 v173; // [rsp+190h] [rbp-58h]
  __int64 v174; // [rsp+198h] [rbp-50h]
  __int64 v175; // [rsp+1A0h] [rbp-48h]
  __int64 v176; // [rsp+1A8h] [rbp-40h]
  __int64 v177; // [rsp+1B0h] [rbp-38h]
  __int64 v178; // [rsp+1B8h] [rbp-30h]
  __int64 v179; // [rsp+1C8h] [rbp-20h]
  __int64 v180; // [rsp+1D0h] [rbp-18h]
  __int64 v181; // [rsp+1D8h] [rbp-10h]

  v173 = v17;
  v174 = v16;
  v175 = a6;
  v176 = a5;
  v177 = a1;
  v178 = a2;
  v179 = a3;
  v180 = a4;
  v181 = v15;
  v157 = v28;
  v158 = v27;
  v159 = v26;
  v160 = v25;
  v161 = v24;
  v162 = v23;
  v163 = v22;
  v164 = v21;
  m128_i128 = (__m128i)a14.m128_i128;
  v166 = (__m128i)a13.m128_i128;
  v167 = (__m128i)a12.m128_i128;
  v168 = (__m128i)a11.m128_i128;
  v169 = (__m128i)a10.m128_i128;
  v170 = (__m128i)a9.m128_i128;
  v171 = (__m128i)a8.m128_i128;
  v172 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v139 <= *(_QWORD *)(v20 + 8) )
    goto LABEL_26;
  if ( a3 == v19 )
    goto LABEL_27;
  v154 = 34082368;
  if ( *(char *)(a3 + 68) >= 4 || (unsigned int)(v29 = *(_DWORD *)(a3 + 32)) < 4 )
  {
    v153 = 34082880;
    v152 = 37784040;
    v151 = 34082680;
    v145 = a3;
    v31 = (_DWORD *)MEMORY[0x184F68C80]();
    if ( v31 == (_DWORD *)v19 )
      v34 = (_DWORD *)(v19 + 353301280);
    else
      v34 = v31;
    v35 = (unsigned int)v34[1];
    v36 = v19 + 58178312;
    if ( (_DWORD)v35 != 0 )
    {
      v37 = *(_DWORD *)(v19 + 8 * v35 + 8);
      if ( v37 != 0 )
      {
        v38 = *((char *)v34 + 12);
        v39 = *(unsigned int *)(v19 + 374343896);
        v140 = v34;
        v40 = v38;
        v41 = (v37 >> v38) + 57;
        if ( (int)v41 < 0 )
        {
          v147 = v38;
          v142 = v31;
          v87 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v87 + 40) > *(_QWORD *)(v20 + 32) )
          {
            v146 = v41;
            v141 = v39;
            v87 = sub_181EAA920(a1: v41, a2: v39, a3: v153);
            v39 = v141;
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v87 + 40;
            *(_DWORD *)v87 = 34082880;
            *(_DWORD *)(v87 + 4) = 0;
            *(_QWORD *)(v87 + 8) = 0;
            *(_QWORD *)(v87 + 16) = 0;
            *(_QWORD *)(v87 + 24) = 0;
            *(_QWORD *)(v87 + 32) = 0;
            v146 = v41;
          }
          *(_DWORD *)(v87 + 20) = 46923644;
          *(_DWORD *)(v87 + 16) = v39;
          *(_DWORD *)(v87 + 12) = (unsigned __int64)(v87 - v19) >> 3;
          v143 = v87;
          MEMORY[0x18503B9A0](a1: v41, a2: v39, a3: v87, a4: v40, a5: 0);
          v88 = v143;
          *(_DWORD *)(v143 + 8) = 46004603;
          if ( (*(_DWORD *)v88 & 2) != 0 )
          {
            v133 = (v88 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v88 & 0xFFFFFFFFFFF80000LL) + ((v88 - v133) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v88 & 0xFFFFFFFFFFF80000LL) + ((v88 - v133) >> 9) + 0x38) = 0;
            v57 = v88;
          }
          else
          {
            v57 = v88;
          }
          goto LABEL_25;
        }
        v42 = (unsigned int)((_DWORD)v41 << v38);
        if ( (int)v42 < 0 )
        {
          v146 = v42;
          v147 = v38;
          v142 = v31;
          v119 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v119 + 40) > *(_QWORD *)(v20 + 32) )
          {
            v141 = v39;
            v119 = sub_181EAA920(a1: v42, a2: v39, a3: v153);
            v39 = v141;
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v119 + 40;
            *(_DWORD *)v119 = 34082880;
            *(_DWORD *)(v119 + 4) = 0;
            *(_QWORD *)(v119 + 8) = 0;
            *(_QWORD *)(v119 + 16) = 0;
            *(_QWORD *)(v119 + 24) = 0;
            *(_QWORD *)(v119 + 32) = 0;
          }
          *(_DWORD *)(v119 + 20) = 46923644;
          *(_DWORD *)(v119 + 16) = v39;
          *(_DWORD *)(v119 + 12) = (unsigned __int64)(v119 - v19) >> 3;
          v143 = v119;
          MEMORY[0x18503B9A0](a1: v42, a2: v39, a3: v119, a4: v40, a5: 0);
          v120 = v143;
          *(_DWORD *)(v143 + 8) = 46004603;
          if ( (*(_DWORD *)v120 & 2) != 0 )
          {
            v134 = (v120 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((v120 - v134) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((v120 - v134) >> 9) + 0x38) = 0;
            v57 = v120;
          }
          else
          {
            v57 = v120;
          }
          goto LABEL_25;
        }
        v43 = *(_QWORD *)(v20 + 40);
        v44 = ((unsigned int)v42 + 19LL) & 0x1FFFFFFF8LL;
        if ( v44 >= 0x20000 || (v125 = v43 + v44) > *(_QWORD *)(v20 + 32) )
        {
          v146 = v42;
          v147 = v38;
          v143 = v19 + 58178312;
          v142 = v31;
          v43 = sub_181EAA840(a1: v42, a2: v39, a3: v154, a4: v154, a5: v42);
          v38 = v147;
          v36 = v143;
        }
        else
        {
          v45 = v154;
          *(_QWORD *)(v20 + 40) = v125;
          *(_QWORD *)v43 = v45;
          *(_DWORD *)(v43 + 8) = v42;
          v146 = v42;
          v142 = v31;
        }
        v147 = v38;
        v143 = v43;
        MEMORY[0x184FF2C40](a1: v38, a2: v143, a3: v36, a4: v45, a5: v143, a6: 0);
        MEMORY[0x184FF2C40](a1: v147, a2: v47, a3: v140, a4: v46, a5: v143, a6: 57);
        v155 = v18;
        v148 = v147;
        v149 = 0;
        v156 = v18;
        v144 = (_DWORD *)v143;
        v150 = 0;
      }
      else
      {
        v142 = v31;
        v60 = *(unsigned __int8 *)(v19 + 58178325);
        v148 = 0;
        v149 = 830974912;
        v144 = (_DWORD *)(v19 + 376658568);
        v150 = v60;
      }
      v48 = *(_QWORD *)(v20 + 40);
      if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v20 + 32) )
      {
        v48 = sub_181EAA920(a1: v32, a2: v33, a3: v152);
      }
      else
      {
        *(_QWORD *)(v20 + 40) = v48 + 40;
        *(_DWORD *)v48 = 37784040;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        *(_QWORD *)(v48 + 24) = 0;
        *(_QWORD *)(v48 + 32) = 0;
      }
      v142 = (_DWORD *)v48;
      *(_DWORD *)(v48 + 20) = 46923644;
      *(_DWORD *)(v48 + 16) = *(_DWORD *)(v19 + 374343896);
      *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v19) >> 3;
      v49 = MEMORY[0x18503B9A0](a1: v32, a2: v33, a3: v48, a4: v48, a5: 0);
      v52 = *(_QWORD *)(v20 + 40);
      if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v20 + 32) )
      {
        v143 = v49;
        v52 = sub_181EAA920(a1: v50, a2: v51, a3: v151);
      }
      else
      {
        *(_QWORD *)(v20 + 40) = v52 + 24;
        *(_DWORD *)v52 = 34082680;
        *(_DWORD *)(v52 + 4) = 0;
        *(_QWORD *)(v52 + 8) = 0;
        *(_QWORD *)(v52 + 16) = 0;
      }
      v53 = (__int64)v142;
      v54 = v148;
      v55 = v149;
      v56 = v144;
      *(_BYTE *)(v52 + 13) = v150;
      *(_BYTE *)(v52 + 12) = v54;
      *(_DWORD *)(v52 + 8) = v55;
      *(_DWORD *)(v52 + 4) = ((unsigned __int64)v56 - v19) >> 3;
      *(_DWORD *)(v53 + 8) = (unsigned __int64)(v52 - v19) >> 3;
      if ( (*(_DWORD *)v53 & 2) != 0 )
      {
        v127 = (v53 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v127) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v127) >> 9) + 0x38) = 0;
        v57 = v53;
      }
      else
      {
        v57 = v53;
      }
      goto LABEL_25;
    }
    MEMORY[0x182771080]();
LABEL_140:
    MEMORY[0x182771080](a1: v62, a2: v63, a3: v145);
    JUMPOUT(0x181EBA215LL);
  }
  if ( (v29 & 0xA0000000) == 0x80000000 )
  {
    v153 = 34082880;
    v152 = 37784040;
    v151 = 34082680;
    v145 = a3;
    v61 = MEMORY[0x184F68C80]();
    if ( v61 == v19 )
      v64 = v19 + 353301280;
    else
      v64 = v61;
    v65 = *(unsigned int *)(v64 + 4);
    v66 = (_DWORD *)(v19 + 58178336);
    if ( (_DWORD)v65 != 0 )
    {
      v67 = *(_DWORD *)(v19 + 8 * v65 + 8);
      if ( v67 == 0 )
      {
        v144 = (_DWORD *)v61;
        v89 = *(unsigned __int8 *)(v19 + 58178349);
        v150 = 0;
        v149 = -994847527;
        v143 = v19 + 376658640;
        v148 = v89;
        goto LABEL_42;
      }
      v68 = *(char *)(v64 + 12);
      v69 = *(unsigned int *)(v19 + 374343896);
      v142 = (_DWORD *)v64;
      v70 = v68;
      v71 = (v67 >> v68) + 49;
      if ( (int)v71 < 0 )
      {
        v147 = v68;
        v144 = (_DWORD *)v61;
        v121 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v121 + 40) > *(_QWORD *)(v20 + 32) )
        {
          v146 = v71;
          v141 = v69;
          v121 = sub_181EAA920(a1: v71, a2: v69, a3: v153);
          v69 = v141;
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v121 + 40;
          *(_DWORD *)v121 = 34082880;
          *(_DWORD *)(v121 + 4) = 0;
          *(_QWORD *)(v121 + 8) = 0;
          *(_QWORD *)(v121 + 16) = 0;
          *(_QWORD *)(v121 + 24) = 0;
          *(_QWORD *)(v121 + 32) = 0;
          v146 = v71;
        }
        *(_DWORD *)(v121 + 20) = 46923644;
        *(_DWORD *)(v121 + 16) = v69;
        *(_DWORD *)(v121 + 12) = (unsigned __int64)(v121 - v19) >> 3;
        v140 = (_DWORD *)v121;
        MEMORY[0x18503B9A0](a1: v71, a2: v69, a3: v121, a4: v70, a5: 0);
        v122 = (__int64)v140;
        v140[2] = 46004603;
        if ( (*(_DWORD *)v122 & 2) != 0 )
        {
          v135 = (v122 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v122 & 0xFFFFFFFFFFF80000LL) + ((v122 - v135) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v122 & 0xFFFFFFFFFFF80000LL) + ((v122 - v135) >> 9) + 0x38) = 0;
          v57 = v122;
        }
        else
        {
          v57 = v122;
        }
      }
      else
      {
        v72 = (unsigned int)((_DWORD)v71 << v68);
        if ( (int)v72 >= 0 )
        {
          v73 = *(_QWORD *)(v20 + 40);
          v74 = ((unsigned int)v72 + 19LL) & 0x1FFFFFFF8LL;
          if ( v74 >= 0x20000 || (v130 = v73 + v74) > *(_QWORD *)(v20 + 32) )
          {
            v146 = v72;
            v147 = v68;
            v140 = (_DWORD *)(v19 + 58178336);
            v144 = (_DWORD *)v61;
            v73 = sub_181EAA840(a1: v72, a2: v69, a3: v154, a4: v154, a5: v72);
            v68 = v147;
            v66 = v140;
          }
          else
          {
            v75 = v154;
            *(_QWORD *)(v20 + 40) = v130;
            *(_QWORD *)v73 = v75;
            *(_DWORD *)(v73 + 8) = v72;
            v146 = v72;
            v144 = (_DWORD *)v61;
          }
          v147 = v68;
          v140 = (_DWORD *)v73;
          MEMORY[0x184FF2C40](a1: v68, a2: v140, a3: v66, a4: v75, a5: v140, a6: 0);
          MEMORY[0x184FF2C40](a1: v147, a2: v77, a3: v142, a4: v76, a5: v140, a6: 49);
          v155 = v18;
          v150 = v147;
          v149 = 0;
          v156 = v18;
          v143 = (__int64)v140;
          v148 = 0;
LABEL_42:
          v78 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v78 + 40) > *(_QWORD *)(v20 + 32) )
          {
            v78 = sub_181EAA920(a1: v62, a2: v63, a3: v152);
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v78 + 40;
            *(_DWORD *)v78 = 37784040;
            *(_DWORD *)(v78 + 4) = 0;
            *(_QWORD *)(v78 + 8) = 0;
            *(_QWORD *)(v78 + 16) = 0;
            *(_QWORD *)(v78 + 24) = 0;
            *(_QWORD *)(v78 + 32) = 0;
          }
          v144 = (_DWORD *)v78;
          *(_DWORD *)(v78 + 20) = 46923644;
          *(_DWORD *)(v78 + 16) = *(_DWORD *)(v19 + 374343896);
          *(_DWORD *)(v78 + 12) = (unsigned __int64)(v78 - v19) >> 3;
          v79 = MEMORY[0x18503B9A0](a1: v62, a2: v63, a3: v78, a4: v78, a5: 0);
          v81 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v81 + 24) > *(_QWORD *)(v20 + 32) )
          {
            v140 = (_DWORD *)v79;
            v81 = sub_181EAA920(a1: v50, a2: v80, a3: v151);
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v81 + 24;
            *(_DWORD *)v81 = 34082680;
            *(_DWORD *)(v81 + 4) = 0;
            *(_QWORD *)(v81 + 8) = 0;
            *(_QWORD *)(v81 + 16) = 0;
          }
          v53 = (__int64)v144;
          v82 = v150;
          v83 = v149;
          v84 = v143;
          *(_BYTE *)(v81 + 13) = v148;
          *(_BYTE *)(v81 + 12) = v82;
          *(_DWORD *)(v81 + 8) = v83;
          *(_DWORD *)(v81 + 4) = (unsigned __int64)(v84 - v19) >> 3;
          *(_DWORD *)(v53 + 8) = (unsigned __int64)(v81 - v19) >> 3;
          if ( (*(_DWORD *)v53 & 2) != 0 )
          {
            v132 = (v53 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v132) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v132) >> 9) + 0x38) = 0;
            v57 = v53;
          }
          else
          {
            v57 = v53;
          }
          goto LABEL_25;
        }
        v146 = v72;
        v147 = v68;
        v144 = (_DWORD *)v61;
        v128 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v128 + 40) > *(_QWORD *)(v20 + 32) )
        {
          v141 = v69;
          v128 = sub_181EAA920(a1: v72, a2: v69, a3: v153);
          v69 = v141;
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v128 + 40;
          *(_DWORD *)v128 = 34082880;
          *(_DWORD *)(v128 + 4) = 0;
          *(_QWORD *)(v128 + 8) = 0;
          *(_QWORD *)(v128 + 16) = 0;
          *(_QWORD *)(v128 + 24) = 0;
          *(_QWORD *)(v128 + 32) = 0;
        }
        *(_DWORD *)(v128 + 20) = 46923644;
        *(_DWORD *)(v128 + 16) = v69;
        *(_DWORD *)(v128 + 12) = (unsigned __int64)(v128 - v19) >> 3;
        v140 = (_DWORD *)v128;
        MEMORY[0x18503B9A0](a1: v72, a2: v69, a3: v128, a4: v70, a5: 0);
        v129 = (__int64)v140;
        v140[2] = 46004603;
        if ( (*(_DWORD *)v129 & 2) != 0 )
        {
          v138 = (v129 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v129 & 0xFFFFFFFFFFF80000LL) + ((v129 - v138) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v129 & 0xFFFFFFFFFFF80000LL) + ((v129 - v138) >> 9) + 0x38) = 0;
          v57 = v129;
        }
        else
        {
          v57 = v129;
        }
      }
      while ( 1 )
      {
LABEL_25:
        MEMORY[0x1827697E0](a1: v50, a2: v53, a3: v57, a4: v57, a5: &a15);
LABEL_26:
        v145 = a3;
        sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v139);
LABEL_27:
        v145 = a3;
        v58 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v58 + 48) > *(_QWORD *)(v20 + 32) )
        {
          v58 = sub_181EAA920(a1, a2, a3: 34101256);
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v58 + 48;
          *(_DWORD *)v58 = 34101256;
          *(_DWORD *)(v58 + 4) = 0;
          *(_QWORD *)(v58 + 8) = 0;
          *(_QWORD *)(v58 + 16) = 0;
          *(_QWORD *)(v58 + 24) = 0;
          *(_QWORD *)(v58 + 32) = 0;
          *(_QWORD *)(v58 + 40) = 0;
        }
        *(_DWORD *)(v58 + 20) = 46923644;
        *(_DWORD *)(v58 + 16) = *(_DWORD *)(v19 + 374343896);
        *(_DWORD *)(v58 + 12) = (unsigned __int64)(v58 - v19) >> 3;
        v144 = (_DWORD *)v58;
        MEMORY[0x18503B9A0](a1, a2, a3: v58, a4, a5: 0);
        v59 = (__int64)v144;
        v144[2] = 46527773;
        if ( (*(_DWORD *)v59 & 2) != 0 )
        {
          v131 = (v59 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v131) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v131) >> 9) + 0x38) = 0;
          v57 = v59;
        }
        else
        {
          v57 = v59;
        }
      }
    }
    goto LABEL_140;
  }
  v153 = 34082880;
  v151 = 34082680;
  v145 = a3;
  if ( (unsigned int)MEMORY[0x184F5E660]() == 0 )
  {
    if ( (unsigned int)MEMORY[0x181591620]() != 0 )
    {
      v57 = MEMORY[0x182091A00](a1: v85, a2: v86, a3: v145);
    }
    else
    {
      v143 = MEMORY[0x184F68C80](a1: v85, a2: v86, a3: v145);
      v92 = MEMORY[0x181582360](a1: v90, a2: v91, a3: v19 + 376658704);
      if ( v143 == v19 )
        v95 = v19 + 353301280;
      else
        v95 = v143;
      v148 = *(char *)(v92 + 12) | *(char *)(v95 + 12);
      v144 = (_DWORD *)v95;
      v140 = (_DWORD *)v92;
      v96 = MEMORY[0x1850132E0](a1: v93, a2: v94, a3: 124, a4: v143, a5: v95);
      v100 = MEMORY[0x1850132E0](a1: v98, a2: v99, a3: v96, a4: v97, a5: v140);
      v149 = v100;
      v102 = v100 - 1;
      v103 = (_DWORD *)(v19 + 58178360);
      v104 = v148;
      v105 = (unsigned int)(v100 << v148);
      if ( (int)v105 < 0 )
      {
        v150 = v100 - 1;
        v123 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v123 + 40) > *(_QWORD *)(v20 + 32) )
        {
          v147 = v100 << v148;
          v123 = sub_181EAA920(a1: v101, a2: v105, a3: v153);
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v123 + 40;
          *(_DWORD *)v123 = 34082880;
          *(_DWORD *)(v123 + 4) = 0;
          *(_QWORD *)(v123 + 8) = 0;
          *(_QWORD *)(v123 + 16) = 0;
          *(_QWORD *)(v123 + 24) = 0;
          *(_QWORD *)(v123 + 32) = 0;
          v147 = v105;
        }
        *(_DWORD *)(v123 + 20) = 46923644;
        *(_DWORD *)(v123 + 16) = *(_DWORD *)(v19 + 374343896);
        *(_DWORD *)(v123 + 12) = (unsigned __int64)(v123 - v19) >> 3;
        v142 = (_DWORD *)v123;
        MEMORY[0x18503B9A0](a1: v101, a2: v105, a3: v123, a4: v104, a5: 0);
        v124 = (__int64)v142;
        v142[2] = 46004603;
        if ( (*(_DWORD *)v124 & 2) != 0 )
        {
          v136 = (v124 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v124 & 0xFFFFFFFFFFF80000LL) + ((v124 - v136) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v124 & 0xFFFFFFFFFFF80000LL) + ((v124 - v136) >> 9) + 0x38) = 0;
          v57 = v124;
        }
        else
        {
          v57 = v124;
        }
      }
      else
      {
        v106 = *(_DWORD **)(v20 + 40);
        v107 = ((unsigned int)v105 + 19LL) & 0x1FFFFFFF8LL;
        if ( v107 >= 0x20000 || (unsigned __int64)(v126 = (char *)v106 + v107) > *(_QWORD *)(v20 + 32) )
        {
          v142 = (_DWORD *)(v19 + 58178360);
          v150 = v100 - 1;
          v106 = (_DWORD *)sub_181EAA840(a1: v101, a2: v105, a3: v154, a4: v154, a5: v105);
          v103 = v142;
          v102 = v150;
        }
        else
        {
          v108 = v154;
          *(_QWORD *)(v20 + 40) = v126;
          *(_QWORD *)v106 = v108;
          v106[2] = v105;
        }
        v142 = v106;
        v150 = v102;
        if ( v148 != 0 )
          MEMORY[0x184FF2C40](a1: 1, a2: v105, a3: v103, a4: v108, a5: v106, a6: v102);
        else
          sub_181EB4960(a1: v102, a2: 1, a3: (_DWORD *)(v19 + 376658736), a4: v108, a5: 0, a6: v142, a7: v139);
        v110 = MEMORY[0x185011A80](a1: v140, a2: v19 + 58178384, a3: v150, a4: v109, a5: v148, a6: v142);
        v112 = MEMORY[0x185011A80](a1: v144, a2: v19 + 58178408, a3: v110, a4: v111, a5: v148, a6: v142);
        v115 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v115 + 40) > *(_QWORD *)(v20 + 32) )
        {
          v149 = v112;
          v115 = sub_181EAA920(a1: v113, a2: v114, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v115 + 40;
          *(_DWORD *)v115 = 34081944;
          *(_DWORD *)(v115 + 4) = 0;
          *(_QWORD *)(v115 + 8) = 0;
          *(_QWORD *)(v115 + 16) = 0;
          *(_QWORD *)(v115 + 24) = 0;
          *(_QWORD *)(v115 + 32) = 0;
        }
        v144 = (_DWORD *)v115;
        *(_DWORD *)(v115 + 20) = 46923644;
        *(_DWORD *)(v115 + 16) = *(_DWORD *)(v19 + 374343896);
        *(_DWORD *)(v115 + 12) = (unsigned __int64)(v115 - v19) >> 3;
        v149 = (char)v148;
        v116 = MEMORY[0x18503B9A0](a1: v113, a2: v114, a3: v115, a4: v115, a5: 0);
        v117 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(v117 + 24) > *(_QWORD *)(v20 + 32) )
        {
          v140 = (_DWORD *)v116;
          v117 = sub_181EAA920(a1: v50, a2: v53, a3: v151);
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v117 + 24;
          *(_DWORD *)v117 = 34082680;
          *(_DWORD *)(v117 + 4) = 0;
          *(_QWORD *)(v117 + 8) = 0;
          *(_QWORD *)(v117 + 16) = 0;
        }
        v57 = (__int64)v144;
        v118 = v142;
        *(_BYTE *)(v117 + 12) = v148;
        *(_DWORD *)(v117 + 4) = ((unsigned __int64)v118 - v19) >> 3;
        *(_DWORD *)(v57 + 8) = (unsigned __int64)(v117 - v19) >> 3;
        if ( (*(_DWORD *)v57 & 2) != 0 )
        {
          v137 = (v57 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v137) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v137) >> 9) + 0x38) = 0;
        }
      }
    }
    goto LABEL_25;
  }
  if ( *(int *)(v20 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v172;
}
