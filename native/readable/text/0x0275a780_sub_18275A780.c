// sub_275A780
// rva 0x0275a780  size 4530  section .text  group text
// window base 0x18275a780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275A780(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rsi
  int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdx
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  int v64; // edx
  int v65; // ecx
  int v66; // edi
  int v67; // esi
  int v68; // r9d
  __int64 v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // r9d
  __int64 v72; // rsi
  unsigned __int64 v73; // rdi
  unsigned int v74; // r10d
  unsigned int v75; // r11d
  unsigned int v76; // r12d
  __int64 v77; // rcx
  int v78; // r9d
  __int64 v79; // rcx
  int v80; // r9d
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rbx
  unsigned __int64 v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rcx
  int v87; // edi
  __int64 v88; // rsi
  int v89; // r8d
  int v90; // r9d
  __int64 v91; // rdx
  int v92; // eax
  _DWORD *v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v97; // rcx
  char v98; // r11
  __int64 v99; // r9
  int v100; // r10d
  _DWORD *v101; // r12
  __int64 v102; // rcx
  int v103; // r10d
  __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // edi
  __int64 v108; // rsi
  int v109; // r9d
  int v110; // r8d
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rsi
  unsigned __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  char v125; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v126; // [rsp+10h] [rbp-98h]
  _DWORD *v127; // [rsp+18h] [rbp-90h]
  unsigned int v128; // [rsp+24h] [rbp-84h]
  _DWORD *v129; // [rsp+28h] [rbp-80h]
  __int64 v130; // [rsp+30h] [rbp-78h]
  _DWORD *v131; // [rsp+38h] [rbp-70h]
  unsigned int v132; // [rsp+44h] [rbp-64h]
  __int64 v133; // [rsp+48h] [rbp-60h]
  __int64 v134; // [rsp+50h] [rbp-58h]
  _DWORD *v135; // [rsp+58h] [rbp-50h]
  __int64 v136; // [rsp+60h] [rbp-48h]
  __int64 v137; // [rsp+68h] [rbp-40h]
  int v138; // [rsp+74h] [rbp-34h]
  int v139; // [rsp+78h] [rbp-30h]
  unsigned int v140; // [rsp+7Ch] [rbp-2Ch]
  unsigned int v141; // [rsp+80h] [rbp-28h]
  unsigned int v142; // [rsp+84h] [rbp-24h]
  __int64 v143; // [rsp+88h] [rbp-20h]
  unsigned int v144; // [rsp+94h] [rbp-14h]
  __int64 v145; // [rsp+98h] [rbp-10h]
  __int64 v146; // [rsp+A0h] [rbp-8h]

  v137 = a3;
  v136 = a5;
  if ( (unsigned __int64)&v125 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_80;
  }
  v11 = *(unsigned int *)(a3 + 4);
  v12 = v9 + 371550768;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_80:
    sub_2771080(a1, a2, a3, a4: v12, a5, a6: v11, a7: v125);
LABEL_81:
    sub_2771080(a1: v13, a2: v15, a3: v35, a4: v36, a5, a6: v14, a7: v125);
    goto LABEL_82;
  }
  v13 = *(_DWORD *)(v9 + 8 * v11 + 68) & 0x7FFFFFF;
  v14 = 34082680;
  v15 = 34082368;
  v146 = 34082368;
  if ( (v13 & 8) != 0 )
  {
    v16 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v16 + 32) > *(_QWORD *)(v10 + 32) )
    {
      v145 = 34082680;
      v144 = v13;
      v135 = (_DWORD *)(v9 + 373281248);
      v16 = sub_1EAA840(a1: v13, a2: 34082368, a3: v146, a4: v16, a5: 18);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v16 + 32;
      *(_QWORD *)v16 = 34082368;
      *(_DWORD *)(v16 + 8) = 18;
      *(_DWORD *)(v16 + 12) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      v145 = 34082680;
      v144 = v13;
      v135 = (_DWORD *)(v9 + 373281248);
    }
    v134 = v16;
    LODWORD(v7) = v9 + 376667488;
    sub_1EB4960(a1: 0, a2: 11, a3: v9 + 376667488, a4: v16, a5: 0, a6: v16);
    sub_1EB4960(a1: 11, a2: 7, a3: v9 + 376667512, a4: v17, a5: 0, a6: v134);
    v18 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v10 + 32) )
    {
      v19 = sub_1EAA920(a1: v13, a2: v15, a3: v145);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v18 + 24;
      *(_DWORD *)v18 = 34082680;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      v19 = v18;
    }
    *(_DWORD *)(v19 + 4) = (unsigned __int64)(v134 - v9) >> 3;
  }
  else
  {
    v145 = 34082680;
    v144 = v13;
    v135 = (_DWORD *)(v9 + 373281248);
    v19 = v9 + 371550768;
  }
  v134 = v19;
  v20 = 34082880;
  if ( (v144 & 0x10) != 0 )
  {
    v21 = *(unsigned int *)(v19 + 4);
    if ( (_DWORD)v21 == 0 )
      goto LABEL_89;
    a5 = *(unsigned int *)(v9 + 8 * v21 + 8);
    if ( (_DWORD)a5 != 0 )
    {
      v143 = 34082880;
      LODWORD(v7) = *(char *)(v19 + 12);
      LODWORD(v8) = *(_DWORD *)(v9 + 374343896);
      v22 = (unsigned int)v7;
      v23 = (unsigned int)v7;
      v24 = ((unsigned int)a5 >> *(_BYTE *)(v19 + 12)) + 6;
      if ( (int)v24 < 0 )
        goto LABEL_90;
      v25 = (unsigned int)((_DWORD)v24 << v7);
      if ( (int)v25 < 0 )
      {
        v142 = v25;
        v144 = v7;
        v119 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v119 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v132 = v8;
          v119 = sub_1EAA920(a1: v25, a2: (unsigned int)v7, a3: v143);
          LODWORD(v8) = v132;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v119 + 40;
          *(_DWORD *)v119 = 34082880;
          *(_DWORD *)(v119 + 4) = 0;
          *(_QWORD *)(v119 + 8) = 0;
          *(_QWORD *)(v119 + 16) = 0;
          *(_QWORD *)(v119 + 24) = 0;
          *(_QWORD *)(v119 + 32) = 0;
        }
        *(_DWORD *)(v119 + 20) = 46923644;
        *(_DWORD *)(v119 + 16) = v8;
        *(_DWORD *)(v119 + 12) = (unsigned __int64)(v119 - v9) >> 3;
        v131 = (_DWORD *)v119;
        sub_503B9A0(a1: v25, a2: v22, a3: v119, a4: v23, a5: 0);
        v117 = (unsigned __int64)v131;
        v131[2] = 46004603;
        if ( (*(_DWORD *)v117 & 2) != 0 )
        {
          v114 = v117 & 0xFFFFFFFFFFF80000LL;
          v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
        }
        goto LABEL_86;
      }
      v141 = *(char *)(v19 + 12);
      v26 = *(_QWORD *)(v10 + 40);
      v27 = *(_QWORD *)(v10 + 32);
      v28 = ((unsigned int)v25 + 19LL) & 0x1FFFFFFF8LL;
      if ( v28 >= 0x20000 || (v28 += v26, v28 > v27) )
      {
        v142 = v25;
        v144 = v7;
        v131 = (_DWORD *)(v9 + 58184312);
        v26 = sub_1EAA840(a1: v25, a2: (unsigned int)v7, a3: v146, a4: v28, a5: (unsigned int)v25, a6: v27);
        v22 = v144;
        v19 = v134;
      }
      else
      {
        v8 = v146;
        *(_QWORD *)(v10 + 40) = v28;
        *(_QWORD *)v26 = v8;
        *(_DWORD *)(v26 + 8) = v25;
        v142 = v25;
        v131 = (_DWORD *)(v9 + 58184312);
      }
      v130 = v26;
      v144 = v22;
      sub_4FF2C40(a1: (unsigned int)v22, a2: v22, a3: v19, a4: v28, a5: v26, a6: 0);
      v32 = *(unsigned int *)(v134 + 4);
      if ( (_DWORD)v32 == 0 )
      {
        sub_2771080(a1: v29, a2: v30, a3: v134, a4: 0, a5: v130, a6: v31, a7: v125);
        goto LABEL_99;
      }
      sub_4FF2C40(
        a1: v144,
        a2: v30,
        a3: v131,
        a4: (unsigned int)*(char *)(v134 + 12),
        a5: v130,
        a6: (unsigned int)(*(_DWORD *)(v9 + 8 * v32 + 8) >> *(_BYTE *)(v134 + 12)));
      v33 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v33 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v33 = sub_1EAA920(a1: v13, a2: v15, a3: v145);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v33 + 24;
        *(_DWORD *)v33 = 34082680;
        *(_DWORD *)(v33 + 4) = 0;
        *(_QWORD *)(v33 + 8) = 0;
        *(_QWORD *)(v33 + 16) = 0;
      }
      v34 = v130;
      LODWORD(v7) = v141;
      *(_BYTE *)(v33 + 12) = v141;
      a5 = (unsigned __int64)(v34 - v9) >> 3;
      *(_DWORD *)(v33 + 4) = a5;
      v133 = v33;
    }
    else
    {
      v143 = 34082880;
      v112 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v112 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v112 = sub_1EAA920(a1: v13, a2: v15, a3: v145, a4: 34082880);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v112 + 24;
        *(_DWORD *)v112 = 34082680;
        *(_DWORD *)(v112 + 4) = 0;
        *(_QWORD *)(v112 + 8) = 0;
        *(_QWORD *)(v112 + 16) = 0;
      }
      *(_BYTE *)(v112 + 13) = *(_BYTE *)(v9 + 58184325);
      *(_DWORD *)(v112 + 8) = 1013568854;
      *(_DWORD *)(v112 + 4) = 47083433;
      v133 = v112;
    }
  }
  else
  {
    v133 = v19;
    v143 = 34082880;
  }
  v35 = v137;
  v36 = *(unsigned int *)(v137 + 4);
  if ( (_DWORD)v36 == 0 )
    goto LABEL_81;
  v37 = *(unsigned int *)(v9 + 8 * v36 + 28);
  if ( (_DWORD)v37 == 0 )
  {
LABEL_82:
    sub_2771080(a1: v13, a2: v15, a3: v35, a4: v37, a5, a6: v14, a7: v125);
    goto LABEL_83;
  }
  v38 = *(unsigned int *)(v9 + 8 * v37 + 12);
  v130 = v9 + 8 * v38;
  v132 = v38;
  v39 = sub_275A420(a1: v13, a2: v15, a3: v137, a4: v38, a5, a6: v14, a7: v125);
  v134 = v39;
  if ( v132 != 0 )
    v42 = v130;
  else
    v42 = v9 + 353301280;
  v131 = (_DWORD *)v42;
  v141 = *(char *)(v39 + 12) | *(char *)(v42 + 12) | *(char *)(v133 + 12);
  v43 = sub_50132E0(a1: v40, a2: v41, a3: 12, a4: v133, a5: v133);
  v47 = sub_50132E0(a1: v45, a2: v46, a3: v43, a4: v44, a5: v131);
  v142 = sub_50132E0(a1: v49, a2: v50, a3: v47, a4: v48, a5: v134);
  LODWORD(v7) = v142 - 4;
  v144 = v142 - 4;
  v8 = v9 + 58184336;
  v52 = v141;
  v53 = v142 << v141;
  v140 = v53;
  if ( (int)v53 < 0 )
  {
LABEL_83:
    v113 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v113 = sub_1EAA920(a1: v51, a2: v53, a3: v143);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v113 + 40;
      *(_DWORD *)v113 = 34082880;
      *(_DWORD *)(v113 + 4) = 0;
      *(_QWORD *)(v113 + 8) = 0;
      *(_QWORD *)(v113 + 16) = 0;
      *(_QWORD *)(v113 + 24) = 0;
      *(_QWORD *)(v113 + 32) = 0;
    }
    *(_DWORD *)(v113 + 20) = 46923644;
    *(_DWORD *)(v113 + 16) = *(_DWORD *)(v9 + 374343896);
    *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - v9) >> 3;
    v129 = (_DWORD *)v113;
    sub_503B9A0(a1: v51, a2: v53, a3: v113, a4: v52, a5: 0);
    v117 = (unsigned __int64)v129;
    v129[2] = 46004603;
    if ( (*(_DWORD *)v117 & 2) == 0 )
      goto LABEL_86;
    goto LABEL_117;
  }
  v54 = *(_QWORD *)(v10 + 40);
  v55 = ((unsigned int)v53 + 19LL) & 0x1FFFFFFF8LL;
  if ( v55 >= 0x20000 || (v56 = v54 + v55) > *(_QWORD *)(v10 + 32) )
  {
    v129 = (_DWORD *)(v9 + 58184336);
    v54 = sub_1EAA840(a1: v51, a2: v53, a3: v146, a4: (unsigned int)v53, a5: (unsigned int)v53);
    v53 = v140;
    v8 = (__int64)v129;
    LODWORD(v7) = v144;
    v52 = v141;
  }
  else
  {
    v57 = v146;
    *(_QWORD *)(v10 + 40) = v56;
    *(_QWORD *)v54 = v57;
    *(_DWORD *)(v54 + 8) = v53;
  }
  v129 = (_DWORD *)v54;
  if ( (_DWORD)v52 != 0 )
    sub_4FF2C40(a1: 1, a2: v53, a3: v8, a4: v52, a5: v54, a6: (unsigned int)v7);
  else
    sub_1EB4960(a1: v144, a2: 4, a3: v9 + 376667536, a4: v52, a5: 0, a6: v129);
  v59 = sub_5011A80(a1: v134, a2: v9 + 58184360, a3: v144, a4: v58, a5: v141, a6: v129);
  v61 = sub_5011A80(a1: v131, a2: v9 + 58184384, a3: v59, a4: v60, a5: v141, a6: v129);
  v63 = sub_5011A80(a1: v133, a2: v135, a3: v61, a4: v62, a5: v141, a6: v129);
  LODWORD(v7) = (char)v141;
  v69 = v136;
  if ( v136 == v9 )
    goto LABEL_87;
  v70 = *(unsigned int *)(v136 + 4);
  if ( (_DWORD)v70 == 0 )
    goto LABEL_88;
  LODWORD(v8) = (_DWORD)v129;
  v139 = v63;
  v71 = *(_DWORD *)(v9 + 8 * v70 + 8);
  v72 = *(unsigned int *)(v9 + 374343896);
  v73 = ((unsigned __int64)v129 - v9) >> 3;
  v74 = v140 >> v141;
  if ( v71 == 0 )
  {
    v97 = v140;
    v98 = v141;
    v99 = v146;
    if ( v140 == 0 )
    {
      v93 = (_DWORD *)(v9 + 376667552);
      v75 = 0;
      v94 = *(unsigned __int8 *)(v9 + 58184421);
      v92 = 473754008;
      goto LABEL_44;
    }
    v100 = v74 + 10;
    v101 = (_DWORD *)(v9 + 58184408);
    if ( v100 >= 0 )
    {
      v102 = (unsigned int)(char)v141;
      v103 = v100 << v141;
      if ( v103 < 0 )
      {
        v138 = v103;
        v142 = (char)v141;
        v124 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v124 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v132 = v72;
          v124 = sub_1EAA920(a1: v73, a2: v72, a3: v143);
          v72 = v132;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v124 + 40;
          *(_DWORD *)v124 = 34082880;
          *(_DWORD *)(v124 + 4) = 0;
          *(_QWORD *)(v124 + 8) = 0;
          *(_QWORD *)(v124 + 16) = 0;
          *(_QWORD *)(v124 + 24) = 0;
          *(_QWORD *)(v124 + 32) = 0;
        }
        *(_DWORD *)(v124 + 20) = 46923644;
        *(_DWORD *)(v124 + 16) = v72;
        *(_DWORD *)(v124 + 12) = (unsigned __int64)(v124 - v9) >> 3;
        v135 = (_DWORD *)v124;
        sub_503B9A0(a1: v73, a2: v72, a3: v124, a4: v102, a5: 0, a6: v99);
        v117 = (unsigned __int64)v135;
        v135[2] = 46004603;
        if ( (*(_DWORD *)v117 & 2) != 0 )
        {
          v114 = v117 & 0xFFFFFFFFFFF80000LL;
          v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
        }
        goto LABEL_86;
      }
      v104 = *(_QWORD *)(v10 + 40);
      v105 = ((unsigned int)v103 + 19LL) & 0x1FFFFFFF8LL;
      if ( v105 >= 0x20000 || (v105 += v104, v105 > *(_QWORD *)(v10 + 32)) )
      {
        v138 = v103;
        v135 = (_DWORD *)(v9 + 58184408);
        v128 = ((unsigned __int64)v129 - v9) >> 3;
        v142 = (char)v141;
        v104 = sub_1EAA840(a1: v73, a2: v72, a3: v146, a4: v105, a5: (unsigned int)v103, a6: v146);
        v103 = v138;
        v101 = v135;
        v73 = v128;
        LODWORD(v7) = v142;
        LODWORD(v8) = (_DWORD)v129;
        v98 = v141;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v105;
        *(_QWORD *)v104 = v99;
        *(_DWORD *)(v104 + 8) = v103;
      }
      v106 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v106 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v127 = (_DWORD *)v104;
        v138 = v103;
        v135 = v101;
        v128 = v73;
        v142 = v7;
        v106 = sub_1EAA920(a1: v73, a2: v72, a3: v145);
        v104 = (__int64)v127;
        LODWORD(v73) = v128;
        LODWORD(v7) = v142;
        v98 = v141;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v106 + 24;
        *(_DWORD *)v106 = 34082680;
        *(_DWORD *)(v106 + 4) = 0;
        *(_QWORD *)(v106 + 8) = 0;
        *(_QWORD *)(v106 + 16) = 0;
        v138 = v103;
        v135 = v101;
      }
      v126 = v106;
      *(_BYTE *)(v106 + 12) = v98;
      *(_DWORD *)(v106 + 4) = v73;
      v142 = v7;
      v127 = (_DWORD *)v104;
      sub_4FF2C40(a1: (unsigned int)v7, a2: v72, a3: v106, a4: v105, a5: v104, a6: 0);
      v110 = v126;
      v111 = *(unsigned int *)(v126 + 4);
      if ( (_DWORD)v111 == 0 )
      {
LABEL_116:
        sub_2771080(a1: v107, a2: v108, a3: (_DWORD)v127, a4: v111, a5: v110, a6: v109, a7: v125);
LABEL_117:
        v114 = v117 & 0xFFFFFFFFFFF80000LL;
        v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
        goto LABEL_86;
      }
      sub_4FF2C40(
        a1: v142,
        a2: v108,
        a3: v135,
        a4: (unsigned int)*(char *)(v126 + 12),
        a5: v127,
        a6: (unsigned int)(*(_DWORD *)(v9 + 8 * v111 + 8) >> *(_BYTE *)(v126 + 12)));
      v75 = v142;
      v92 = 0;
      v93 = v127;
      v94 = 0;
      v69 = v136;
      goto LABEL_44;
    }
LABEL_99:
    v142 = v7;
    v120 = *(_QWORD *)(v10 + 40);
    v121 = v120 + 40;
    if ( (unsigned __int64)(v120 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v138 = v100;
      v132 = v72;
      v120 = sub_1EAA920(a1: v73, a2: v72, a3: v143, a4: v97, a5: v121, a6: v99);
      v72 = v132;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v121;
      *(_DWORD *)v120 = 34082880;
      *(_DWORD *)(v120 + 4) = 0;
      *(_QWORD *)(v120 + 8) = 0;
      *(_QWORD *)(v120 + 16) = 0;
      *(_QWORD *)(v120 + 24) = 0;
      *(_QWORD *)(v120 + 32) = 0;
      v138 = v100;
    }
    *(_DWORD *)(v120 + 20) = 46923644;
    *(_DWORD *)(v120 + 16) = v72;
    *(_DWORD *)(v120 + 12) = (unsigned __int64)(v120 - v9) >> 3;
    v135 = (_DWORD *)v120;
    sub_503B9A0(a1: v73, a2: v72, a3: v120, a4: v97, a5: 0, a6: v99);
    v117 = (unsigned __int64)v135;
    v135[2] = 46004603;
    if ( (*(_DWORD *)v117 & 2) != 0 )
    {
      v114 = v117 & 0xFFFFFFFFFFF80000LL;
      v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
    }
    goto LABEL_86;
  }
  v75 = *(char *)(v136 + 12);
  if ( v140 != 0 )
  {
    v76 = (char)(v75 | v141);
    v77 = v75;
    v78 = v74 + (v71 >> v75);
    if ( v78 < 0 )
    {
      v140 = (char)(v75 | v141);
      v142 = (char)v141;
      v122 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v122 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v138 = v78;
        v132 = v72;
        v122 = sub_1EAA920(a1: v73, a2: v72, a3: v143);
        v72 = v132;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v122 + 40;
        *(_DWORD *)v122 = 34082880;
        *(_DWORD *)(v122 + 4) = 0;
        *(_QWORD *)(v122 + 8) = 0;
        *(_QWORD *)(v122 + 16) = 0;
        *(_QWORD *)(v122 + 24) = 0;
        *(_QWORD *)(v122 + 32) = 0;
        v138 = v78;
      }
      *(_DWORD *)(v122 + 20) = 46923644;
      *(_DWORD *)(v122 + 16) = v72;
      *(_DWORD *)(v122 + 12) = (unsigned __int64)(v122 - v9) >> 3;
      v127 = (_DWORD *)v122;
      sub_503B9A0(a1: v73, a2: v72, a3: v122, a4: v77, a5: 0);
      v117 = (unsigned __int64)v127;
      v127[2] = 46004603;
      if ( (*(_DWORD *)v117 & 2) != 0 )
      {
        v114 = v117 & 0xFFFFFFFFFFF80000LL;
        v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
      }
    }
    else
    {
      v79 = v76;
      v80 = v78 << v76;
      if ( v80 >= 0 )
      {
        v81 = *(_QWORD *)(v10 + 40);
        v82 = *(_QWORD *)(v10 + 32);
        v83 = ((unsigned int)v80 + 19LL) & 0x1FFFFFFF8LL;
        if ( v83 >= 0x20000 || (v84 = v81 + v83) > v82 )
        {
          v138 = v80;
          v140 = (char)(v75 | v141);
          v128 = ((unsigned __int64)v129 - v9) >> 3;
          v81 = sub_1EAA840(a1: v73, a2: v146, a3: v146, a4: v82, a5: (unsigned int)v80);
          v80 = v138;
          v76 = v140;
          v73 = v128;
          LODWORD(v8) = (_DWORD)v129;
        }
        else
        {
          v85 = v146;
          *(_QWORD *)(v10 + 40) = v84;
          *(_QWORD *)v81 = v85;
          *(_DWORD *)(v81 + 8) = v80;
        }
        v86 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v86 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v127 = (_DWORD *)v81;
          v138 = v80;
          v140 = v76;
          v128 = v73;
          v86 = sub_1EAA920(a1: v73, a2: v85, a3: v145);
          v81 = (__int64)v127;
          v76 = v140;
          LODWORD(v73) = v128;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v86 + 24;
          *(_DWORD *)v86 = 34082680;
          *(_DWORD *)(v86 + 4) = 0;
          *(_QWORD *)(v86 + 8) = 0;
          *(_QWORD *)(v86 + 16) = 0;
          v138 = v80;
        }
        v134 = v86;
        *(_BYTE *)(v86 + 12) = v141;
        *(_DWORD *)(v86 + 4) = v73;
        v140 = v76;
        v127 = (_DWORD *)v81;
        sub_4FF2C40(a1: v76, a2: v85, a3: v86, a4: v86, a5: v81, a6: 0);
        v91 = *(unsigned int *)(v134 + 4);
        if ( (_DWORD)v91 != 0 )
        {
          sub_4FF2C40(
            a1: v140,
            a2: v88,
            a3: v136,
            a4: (unsigned int)*(char *)(v134 + 12),
            a5: v127,
            a6: (unsigned int)(*(_DWORD *)(v9 + 8 * v91 + 8) >> *(_BYTE *)(v134 + 12)));
          v75 = v140;
          v92 = 0;
          v93 = v127;
          v94 = 0;
          v69 = v136;
          goto LABEL_44;
        }
        sub_2771080(a1: v87, a2: v88, a3: (_DWORD)v127, a4: v134, a5: v89, a6: v90, a7: v125);
        goto LABEL_116;
      }
      v138 = v80;
      v140 = (char)(v75 | v141);
      v142 = (char)v141;
      v123 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v123 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v132 = v72;
        v123 = sub_1EAA920(a1: v73, a2: v72, a3: v143);
        v72 = v132;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v123 + 40;
        *(_DWORD *)v123 = 34082880;
        *(_DWORD *)(v123 + 4) = 0;
        *(_QWORD *)(v123 + 8) = 0;
        *(_QWORD *)(v123 + 16) = 0;
        *(_QWORD *)(v123 + 24) = 0;
        *(_QWORD *)(v123 + 32) = 0;
      }
      *(_DWORD *)(v123 + 20) = 46923644;
      *(_DWORD *)(v123 + 16) = v72;
      *(_DWORD *)(v123 + 12) = (unsigned __int64)(v123 - v9) >> 3;
      v127 = (_DWORD *)v123;
      sub_503B9A0(a1: v73, a2: v72, a3: v123, a4: v79, a5: 0);
      v117 = (unsigned __int64)v127;
      v127[2] = 46004603;
      if ( (*(_DWORD *)v117 & 2) != 0 )
      {
        v114 = v117 & 0xFFFFFFFFFFF80000LL;
        v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
      }
    }
    while ( 1 )
    {
LABEL_86:
      sub_2769900(a1: v115, a2: v116, a3: v117, a4: v114, a5: &a7);
LABEL_87:
      v142 = v7;
      sub_2771080(a1: v66, a2: v67, a3: v64, a4: v65, a5: v69, a6: v68, a7: v125);
LABEL_88:
      v142 = v7;
      sub_2771080(a1: v66, a2: v67, a3: v70, a4: v65, a5: v69, a6: v68, a7: v125);
LABEL_89:
      sub_2771080(a1: v13, a2: v15, a3: v19, a4: v20, a5: v21, a6: v14, a7: v125);
LABEL_90:
      v144 = v22;
      v118 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v118 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v142 = v24;
        v132 = v8;
        v118 = sub_1EAA920(a1: v24, a2: v22, a3: v143);
        LODWORD(v8) = v132;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v118 + 40;
        *(_DWORD *)v118 = 34082880;
        *(_DWORD *)(v118 + 4) = 0;
        *(_QWORD *)(v118 + 8) = 0;
        *(_QWORD *)(v118 + 16) = 0;
        *(_QWORD *)(v118 + 24) = 0;
        *(_QWORD *)(v118 + 32) = 0;
        v142 = v24;
      }
      *(_DWORD *)(v118 + 20) = 46923644;
      *(_DWORD *)(v118 + 16) = v8;
      *(_DWORD *)(v118 + 12) = (unsigned __int64)(v118 - v9) >> 3;
      v131 = (_DWORD *)v118;
      sub_503B9A0(a1: v24, a2: v22, a3: v118, a4: v23, a5: 0);
      v117 = (unsigned __int64)v131;
      v131[2] = 46004603;
      if ( (*(_DWORD *)v117 & 2) != 0 )
      {
        v114 = v117 & 0xFFFFFFFFFFF80000LL;
        v7 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v7) >> 9) + 0x38) = 0;
      }
    }
  }
  v92 = *(_DWORD *)(v136 + 8);
  v94 = *(unsigned __int8 *)(v136 + 13);
  v93 = (_DWORD *)(v9 + 8 * v70);
LABEL_44:
  v95 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v95 + 24) > *(_QWORD *)(v10 + 32) )
  {
    v140 = v75;
    v138 = v92;
    v127 = v93;
    v141 = v94;
    v95 = sub_1EAA920(a1: v73, a2: v72, a3: v145, a4: v94, a5: v69);
    LOBYTE(v75) = v140;
    v92 = v138;
    v93 = v127;
    LOBYTE(v94) = v141;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v95 + 24;
    *(_DWORD *)v95 = 34082680;
    *(_DWORD *)(v95 + 4) = 0;
    *(_QWORD *)(v95 + 8) = 0;
    *(_QWORD *)(v95 + 16) = 0;
  }
  *(_BYTE *)(v95 + 13) = v94;
  *(_BYTE *)(v95 + 12) = v75;
  *(_DWORD *)(v95 + 8) = v92;
  *(_DWORD *)(v95 + 4) = ((unsigned __int64)v93 - v9) >> 3;
  if ( *(int *)(v10 + 16) <= 0 )
    sub_277F280(a1: v73, a2: v72, a3: v93);
  return v95;
}
