// sub_4F31A20
// rva 0x04f31a20  size 473  section .text  group text
// window base 0x184f31a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F31A20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16,
        int a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 (__fastcall *v53)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  _DWORD *v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rsi
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // r8
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rcx
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // rbx
  __int64 v140; // rcx
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // [rsp-8h] [rbp-138h] BYREF
  __int64 v144; // [rsp+0h] [rbp-130h]
  __int64 v145; // [rsp+8h] [rbp-128h]
  __int64 v146; // [rsp+10h] [rbp-120h]
  __int64 i; // [rsp+18h] [rbp-118h]
  __int64 v148; // [rsp+20h] [rbp-110h]
  __int64 v149; // [rsp+28h] [rbp-108h]
  __int64 v150; // [rsp+30h] [rbp-100h]
  _DWORD *v151; // [rsp+38h] [rbp-F8h]
  unsigned int v152; // [rsp+44h] [rbp-ECh]
  __int64 v153; // [rsp+48h] [rbp-E8h]
  unsigned int v154; // [rsp+54h] [rbp-DCh]
  __int64 v155; // [rsp+58h] [rbp-D8h]
  __int64 v156; // [rsp+60h] [rbp-D0h]
  __int64 v157; // [rsp+68h] [rbp-C8h]
  int v158; // [rsp+74h] [rbp-BCh]
  __int64 v159; // [rsp+78h] [rbp-B8h]
  __int64 v160; // [rsp+80h] [rbp-B0h] BYREF
  char v161[32]; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v162; // [rsp+A8h] [rbp-88h]
  __int64 v163; // [rsp+B0h] [rbp-80h]
  __int64 v164; // [rsp+B8h] [rbp-78h]
  char v165; // [rsp+C0h] [rbp-70h] BYREF
  void *v166; // [rsp+C8h] [rbp-68h]
  __int64 *v167; // [rsp+D0h] [rbp-60h]
  __int64 v168; // [rsp+D8h] [rbp-58h]
  int v169; // [rsp+ECh] [rbp-44h]
  __int64 v170; // [rsp+F0h] [rbp-40h]
  __int64 v171; // [rsp+F8h] [rbp-38h]
  unsigned int v172; // [rsp+104h] [rbp-2Ch]
  __int64 v173; // [rsp+108h] [rbp-28h] BYREF
  __int64 v174; // [rsp+110h] [rbp-20h]
  __int64 v175; // [rsp+118h] [rbp-18h]
  unsigned int v176; // [rsp+124h] [rbp-Ch]
  unsigned int v177; // [rsp+128h] [rbp-8h]
  unsigned int v178; // [rsp+12Ch] [rbp-4h]

  if ( (unsigned __int64)&v173 <= *(_QWORD *)(v23 + 8) )
  {
    v174 = a5;
    v175 = a3;
    v24 = sub_1EB84E0();
    goto LABEL_33;
  }
  v24 = *(unsigned __int16 *)(a3 + 4);
  if ( a5 == v22 )
  {
LABEL_33:
    v175 = a3;
    v24 = sub_2771080(a1, a2, a3: v24);
    goto LABEL_34;
  }
  v25 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v25 != 0 )
  {
    v178 = *(unsigned __int16 *)(a3 + 4);
    v26 = *(_DWORD *)(v22 + 8 * v25 + 8);
    v27 = (unsigned int)*(char *)(a5 + 12);
    v28 = v26 >> *(_BYTE *)(a5 + 12);
    if ( v28 != 0 )
    {
      v177 = v28;
      v175 = a3;
      v174 = a5;
      v176 = sub_4FEBC20(a1, a2, a3: a5, a4: v27, a5: 0);
      if ( v177 < 2 )
        v32 = 0;
      else
        v32 = (unsigned int)sub_4FEBC20(a1: v30, a2: v31, a3: v174, a4: v29, a5: 1);
      v33 = v178;
      if ( v178 == v176 )
      {
        if ( *(int *)(v23 + 16) <= 0 )
          v33 = sub_277F280(a1: v30, a2: v31, a3: v178, a4: v32);
        if ( v33 != (_DWORD)v32 )
          JUMPOUT(0x309E47B24LL);
        return 2;
      }
      else if ( (v176 - 97 < 0x1A || v176 >= 0x41 && v176 < 0x5B) && (_DWORD)v32 == 58 )
      {
        if ( v177 < 3 )
        {
          if ( *(int *)(v23 + 16) <= 0 )
            sub_277F280(a1: v30, a2: v31, a3: v178);
          return 2;
        }
        else
        {
          v35 = sub_4FEBC20(a1: v30, a2: v31, a3: v174, a4: v32, a5: 2);
          v38 = v178;
          if ( *(int *)(v23 + 16) <= 0 )
            v35 = sub_277F280(a1: v36, a2: v37, a3: v178);
          if ( v38 != v35 )
            JUMPOUT(0x309E47B6CLL);
          return 3;
        }
      }
      else
      {
        if ( *(int *)(v23 + 16) <= 0 )
          sub_277F280(a1: v30, a2: v31, a3: v178, a4: v32);
        return 0;
      }
    }
    else
    {
      v174 = a5;
      v175 = a3;
      if ( *(int *)(v23 + 16) <= 0 )
        sub_277F280();
      return 0;
    }
  }
LABEL_34:
  v175 = a3;
  sub_2771080(a1, a2, a3: v24);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  if ( (unsigned __int64)&v160 > *(_QWORD *)(v23 + 8) )
  {
    if ( *(_QWORD *)v23 == 0 )
    {
      v59 = *(_QWORD *)(v22 + 376351984);
      if ( v59 == 0 )
      {
        v59 = v22 + 373388464;
        *(_QWORD *)(v22 + 376351984) = v22 + 373388464;
      }
      *(_QWORD *)v23 = v59;
    }
    v164 = v43;
    v163 = v42;
    v162 = v39;
    v172 = sub_206D7A0(a1: v40, a2: v41, a3: 16);
    v171 = sub_206CE60(a1: v44, a2: v45, a3: v162);
    v170 = sub_206CE60(a1: v46, a2: v47, a3: v163);
    v50 = sub_206CE60(a1: v48, a2: v49, a3: v164);
    v51 = v170;
    v52 = v171;
    v166 = nullptr;
    v167 = nullptr;
    v168 = *(_QWORD *)(v23 + 56);
    *(_QWORD *)(v23 + 56) = &v165;
    v53 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))MEMORY[0xe6775b8]/* 0xe6775b8 */;
    v166 = &loc_184F31CA9;
    v167 = &v160;
    *(_DWORD *)(v23 + 20) = 3;
    v169 = v53(a1: v54, a2: v55, a3: v52, a4: v23, a5: v51, a6: v50);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v23 + 20), 3, 1) == 3 )
      *(_QWORD *)(v23 + 56) = *(_QWORD *)(*(_QWORD *)(v23 + 56) + 24LL);
    else
      sub_277F4A0(a1: v57, a2: v58, a3: 1, a4: v56, a5: 1);
    sub_206CDE0(a1: v57, a2: v58, a3: v172);
    sub_206CE20();
    if ( *(int *)(v23 + 16) <= 0 )
      sub_277F280();
    return (_BYTE)v169 != 0;
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v153 = v63;
  if ( (unsigned __int64)&v143 <= *(_QWORD *)(v23 + 8) )
  {
    v151 = v62;
    sub_1EB84E0();
  }
  else if ( v62 != (_DWORD *)v22 )
  {
    v64 = *(_QWORD *)(v22 + 8LL * (*v62 >> 3) + 256);
    v152 = *v62 >> 3;
    v151 = v62;
    v150 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v21 + v64))(a1: v60, a2: v61, a3: v62);
    v67 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v21 + *(_QWORD *)(v22 + 8LL * v152 + 264)))(
            a1: v65,
            a2: v66,
            a3: v151);
    v158 = v67;
    if ( v67 == 2 )
    {
      if ( v150 == v22 )
        goto LABEL_93;
      v119 = sub_4FEBC20(a1: v68, a2: v69, a3: v150, a4: v150, a5: 0);
      v72 = v153;
      if ( *(unsigned __int16 *)(v153 + 4) == v119 )
      {
        if ( *(int *)(v23 + 16) <= 0 )
          JUMPOUT(0x184F328F2LL);
        return v150;
      }
      v67 = v158;
    }
    else
    {
      v72 = v153;
    }
    v73 = 34082680;
    v157 = 34082368;
    v20 = 34085680;
    if ( v67 < 2 )
    {
      if ( v67 == 0 )
        return sub_184F32209(
                 a1: v68,
                 a2: v69,
                 a3: v72,
                 a4: 34082680,
                 a5: v70,
                 a6: v71,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20);
      if ( v67 == 1 )
        return sub_184F3208B(
                 a1: v68,
                 a2: v69,
                 a3: v72,
                 a4: 34082680,
                 a5: v70,
                 a6: v71,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20);
LABEL_80:
      v156 = v20;
      v155 = v73;
      v120 = *(_QWORD *)(v23 + 40);
      if ( (unsigned __int64)(v120 + 24) > *(_QWORD *)(v23 + 32) )
      {
        v120 = sub_1EAA920(a1: v68, a2: v69, a3: v20);
      }
      else
      {
        *(_QWORD *)(v23 + 40) = v120 + 24;
        *(_DWORD *)v120 = 34085680;
        *(_DWORD *)(v120 + 4) = 0;
        *(_QWORD *)(v120 + 8) = 0;
        *(_QWORD *)(v120 + 16) = 0;
      }
      v148 = v120;
      v121 = *(_QWORD *)(v23 + 40);
      v122 = v121 + 32;
      v123 = v157;
      if ( (unsigned __int64)(v121 + 32) > *(_QWORD *)(v23 + 32) )
      {
        v121 = sub_1EAA840(a1: v68, a2: v69, a3: v157, a4: v122, a5: 16);
        v120 = v148;
      }
      else
      {
        *(_QWORD *)(v23 + 40) = v122;
        *(_QWORD *)v121 = v123;
        *(_DWORD *)(v121 + 8) = 16;
        *(_DWORD *)(v121 + 12) = 0;
        *(_QWORD *)(v121 + 16) = 0;
        *(_QWORD *)(v121 + 24) = 0;
      }
      *(_DWORD *)(v120 + 4) = (unsigned __int64)(v121 - v22) >> 3;
      if ( (*(_DWORD *)v120 & 2) != 0 )
      {
        v139 = (v120 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((v120 - v139) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v120 & 0xFFFFFFFFFFF80000LL) + ((v120 - v139) >> 9) + 0x38) = 0;
      }
      sub_4F36F80(a1: v68, a2: v69, a3: v120, a4: v120, a5: v22 + 366342976);
      v127 = sub_4F36F80(a1: v125, a2: v126, a3: v148, a4: v124, a5: v150);
      v131 = v148;
      if ( *(_DWORD *)(v148 + 8) == 0 )
        goto LABEL_94;
      v132 = *(_QWORD *)(v23 + 40);
      if ( (unsigned __int64)(v132 + 24) > *(_QWORD *)(v23 + 32) )
      {
        v149 = v127;
        v132 = sub_1EAA920(a1: v129, a2: v130, a3: v155);
        v133 = v148;
      }
      else
      {
        *(_QWORD *)(v23 + 40) = v132 + 24;
        *(_DWORD *)v132 = 34082680;
        *(_DWORD *)(v132 + 4) = 0;
        *(_QWORD *)(v132 + 8) = 0;
        *(_QWORD *)(v132 + 16) = 0;
        v133 = v131;
      }
      v149 = v132;
      sub_4FE9280(a1: v129, a2: v130, a3: v132, a4: v128, a5: v133, a6: v22);
      v159 = v21;
      for ( i = v149; ; i = v22 + 373281248 )
      {
        v134 = *(_QWORD *)(v23 + 40);
        if ( (unsigned __int64)(v134 + 40) > *(_QWORD *)(v23 + 32) )
        {
LABEL_102:
          v134 = sub_1EAA920(a1: v129, a2: v130, a3: 34909680);
        }
        else
        {
          *(_QWORD *)(v23 + 40) = v134 + 40;
          *(_DWORD *)v134 = 34909680;
          *(_DWORD *)(v134 + 4) = 0;
          *(_QWORD *)(v134 + 8) = 0;
          *(_QWORD *)(v134 + 16) = 0;
          *(_QWORD *)(v134 + 24) = 0;
          *(_QWORD *)(v134 + 32) = 0;
        }
        *(_DWORD *)(v134 + 20) = 46923644;
        *(_DWORD *)(v134 + 16) = *(_DWORD *)(v22 + 374343896);
        *(_DWORD *)(v134 + 12) = (unsigned __int64)(v134 - v22) >> 3;
        v149 = v134;
        sub_503B9A0(a1: v129, a2: v130, a3: v134, a4: v128, a5: 0);
        v137 = v149;
        *(_DWORD *)(v149 + 8) = (unsigned __int64)(i - v22) >> 3;
        if ( (*(_DWORD *)v137 & 2) != 0 )
        {
LABEL_97:
          v138 = (v137 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v138) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v138) >> 9) + 0x38) = 0;
        }
        sub_2769900(a1: v135, a2: v136, a3: v137, a4: v137, a5: v161);
LABEL_93:
        sub_2771080();
LABEL_94:
        ;
      }
    }
    if ( v67 == 2 )
    {
      v156 = 34085680;
      v155 = 34082680;
      i = sub_1EF7500();
      v77 = sub_4F2FB00(a1: v75, a2: v76, a3: v153, a4: v74, a5: i);
      if ( v77 == v22 )
        JUMPOUT(0x184F323F1LL);
      if ( v150 != v22 )
      {
        v148 = v77;
        if ( (unsigned int)sub_4FFC820(a1: v78, a2: v79, a3: v150, a4: v150, a5: v77, a6: 0) != 0 )
          JUMPOUT(0x184F324FFLL);
        if ( v150 != v22 )
        {
          v154 = sub_4FEBC20(a1: v81, a2: v82, a3: v150, a4: v80, a5: 0);
          v86 = sub_4F2FBA0(a1: v84, a2: v85, a3: v153, a4: v83, a5: v154);
          v89 = *(_QWORD *)(v23 + 40);
          if ( (unsigned __int64)(v89 + 24) > *(_QWORD *)(v23 + 32) )
            JUMPOUT(0x184F32806LL);
          *(_QWORD *)(v23 + 40) = v89 + 24;
          *(_DWORD *)v89 = 34085680;
          *(_DWORD *)(v89 + 4) = 0;
          *(_QWORD *)(v89 + 8) = 0;
          *(_QWORD *)(v89 + 16) = 0;
          v149 = v89;
          v90 = *(_QWORD *)(v23 + 40);
          v91 = v90 + 32;
          if ( (unsigned __int64)(v90 + 32) > *(_QWORD *)(v23 + 32) )
            JUMPOUT(0x184F327DFLL);
          v92 = v157;
          *(_QWORD *)(v23 + 40) = v91;
          *(_QWORD *)v90 = v92;
          *(_DWORD *)(v90 + 8) = 16;
          *(_DWORD *)(v90 + 12) = 0;
          *(_QWORD *)(v90 + 16) = 0;
          *(_QWORD *)(v90 + 24) = 0;
          *(_DWORD *)(v89 + 4) = (unsigned __int64)(v90 - v22) >> 3;
          if ( (*(_DWORD *)v89 & 2) != 0 )
            JUMPOUT(0x184F326E7LL);
          if ( v86 == v22 )
            JUMPOUT(0x184F323FBLL);
          v146 = v86;
          sub_4F35F80(a1: v87, a2: v88, a3: v89, a4: v91, a5: v154);
          sub_4F35F80(a1: v94, a2: v95, a3: v149, a4: v93, a5: 58);
          sub_4F36F80(a1: v97, a2: v98, a3: v149, a4: v96, a5: v146);
          v101 = *(unsigned int *)(v150 + 4);
          if ( (_DWORD)v101 == 0 )
          {
            sub_2771080(a1: v99, a2: v100, a3: v149, a4: v101, a5: v154);
            sub_2771080(a1: v141, a2: v142, a3: v148, a4: v140, a5: i);
            goto LABEL_102;
          }
          v102 = sub_4FFD140(
                   a1: v99,
                   a2: v100,
                   a3: v150,
                   a4: (unsigned int)*(char *)(v150 + 12),
                   a5: 2,
                   a6: (unsigned int)(*(_DWORD *)(v22 + 8 * v101 + 8) >> *(_BYTE *)(v150 + 12)));
          v144 = sub_4F33780(a1: v104, a2: v105, a3: v153, a4: v103, a5: v102);
          sub_4F36F80(a1: v107, a2: v108, a3: v149, a4: v106, a5: v144);
          v112 = v149;
          if ( *(_DWORD *)(v149 + 8) == 0 )
            JUMPOUT(0x184F32659LL);
          v113 = *(_QWORD *)(v23 + 40);
          if ( (unsigned __int64)(v113 + 24) > *(_QWORD *)(v23 + 32) )
            JUMPOUT(0x184F328D2LL);
          *(_QWORD *)(v23 + 40) = v113 + 24;
          *(_DWORD *)v113 = 34082680;
          *(_DWORD *)(v113 + 4) = 0;
          *(_QWORD *)(v113 + 8) = 0;
          *(_QWORD *)(v113 + 16) = 0;
          v145 = v113;
          sub_4FE9280(a1: v110, a2: v111, a3: v113, a4: v109, a5: v112, a6: v22);
          v118 = v145;
          if ( *(int *)(v23 + 16) <= 0 )
            sub_277F280(a1: v116, a2: v117, a3: v114, a4: v115, a5: v145);
          return v118;
        }
        v77 = sub_2771080();
      }
      v148 = v77;
      sub_2771080();
      goto LABEL_97;
    }
    if ( v67 != 3 )
      goto LABEL_80;
    if ( *(int *)(v23 + 16) <= 0 )
      sub_277F280(a1: v68, a2: v69, a3: v72, a4: 34082680);
    return v150;
  }
  sub_2771080();
  goto LABEL_80;
}
