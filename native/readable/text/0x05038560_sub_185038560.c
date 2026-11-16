// sub_5038560
// rva 0x05038560  size 3077  section .text  group text
// window base 0x185038560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5038560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
  char *v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r10
  char *v15; // r11
  unsigned int (__fastcall *v16)(__int64, __int64, char *, unsigned __int64, char *); // r10
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  int v23; // edx
  __int64 v24; // rdi
  char *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // r12
  __int64 v34; // r8
  __int64 v35; // rsi
  unsigned int v36; // r11d
  __int16 v37; // r10
  __int64 v38; // rdi
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // edx
  char *v43; // rax
  char *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdi
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rbx
  unsigned __int64 v54; // rdx
  __int64 result; // rax
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int v64; // eax
  BOOL v65; // edx
  char *v66; // r12
  __int64 v67; // rdx
  __int16 v68; // ax
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned int v71; // edx
  char *v72; // r8
  BOOL v73; // edx
  unsigned __int64 v74; // rax
  __int64 v75; // r9
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r8
  char *v87; // rdx
  unsigned __int64 v88; // rax
  char *v89; // rdx
  int v90; // ecx
  int j; // ebx
  int v92; // edx
  int v93; // r8d
  int i; // eax
  __int64 v95; // [rsp+0h] [rbp-98h] BYREF
  char *v96; // [rsp+8h] [rbp-90h]
  char *v97; // [rsp+10h] [rbp-88h]
  char *v98; // [rsp+18h] [rbp-80h]
  __int64 v99; // [rsp+20h] [rbp-78h]
  __int64 v100; // [rsp+28h] [rbp-70h]
  char *v101; // [rsp+30h] [rbp-68h]
  __int64 v102; // [rsp+38h] [rbp-60h]
  __int64 v103; // [rsp+40h] [rbp-58h]
  unsigned int v104; // [rsp+48h] [rbp-50h]
  unsigned int v105; // [rsp+4Ch] [rbp-4Ch]
  __int64 v106; // [rsp+50h] [rbp-48h]
  unsigned int v107; // [rsp+5Ch] [rbp-3Ch]
  unsigned int v108; // [rsp+60h] [rbp-38h]
  int v109; // [rsp+64h] [rbp-34h]
  __int64 v110; // [rsp+68h] [rbp-30h]
  int v111; // [rsp+70h] [rbp-28h]
  int v112; // [rsp+74h] [rbp-24h]
  int v113; // [rsp+78h] [rbp-20h]
  unsigned int v114; // [rsp+7Ch] [rbp-1Ch]
  int v115; // [rsp+80h] [rbp-18h]
  unsigned int v116; // [rsp+84h] [rbp-14h]
  int v117; // [rsp+88h] [rbp-10h]
  unsigned int v118; // [rsp+8Ch] [rbp-Ch]
  __int64 v119; // [rsp+90h] [rbp-8h]

  v103 = a5;
  v102 = a6;
  v118 = a1;
  if ( (unsigned __int64)&v95 <= *(_QWORD *)(v10 + 8) )
  {
    v100 = a3;
    sub_1EB84E0();
    goto LABEL_124;
  }
  v11 = *(unsigned int *)(a3 + 4);
  v6 = (unsigned __int64)&v9[8 * v11];
  v101 = (char *)v6;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_124:
    v100 = a3;
    LODWORD(v13) = sub_2771080();
    goto LABEL_125;
  }
  LODWORD(v7) = *(_DWORD *)&v9[8 * v11 + 8];
  v117 = v7;
  v12 = (unsigned int)(v7 - 1);
  v13 = (unsigned int)(a1 - 1);
  if ( (int)v13 < 0 )
    v13 = (unsigned int)v12;
  if ( (unsigned int)v7 <= (unsigned int)v13 )
  {
LABEL_125:
    v100 = a3;
    sub_2771220(a1, a2: v12, a3: (unsigned int)v13, a4: v11, a5: (unsigned int)v117);
LABEL_126:
    sub_2771220(a1: v24, a2: v12, a3: (unsigned int)v6, a4: v11, a5: (unsigned int)v117);
    goto LABEL_127;
  }
  v14 = *(unsigned int *)(v6 + 4 * v13 + 12);
  v15 = &v9[8 * v14];
  if ( (_DWORD)v14 == 0 )
  {
    v116 = a1;
    HIDWORD(v99) = v11;
    v100 = a3;
    goto LABEL_19;
  }
  v115 = v13;
  v114 = v7 - 1;
  HIDWORD(v99) = v11;
  v100 = a3;
  v16 = (unsigned int (__fastcall *)(__int64, __int64, char *, unsigned __int64, char *))(v8
                                                                                        + *(_QWORD *)&v9[8 * (*(_DWORD *)&v9[8 * v14] >> 3) + 176]);
  v98 = v15;
  if ( v16(a1, a2: v12, a3: v15, a4: v11, a5: v9) != 0 )
    v19 = v115;
  else
    v19 = v118;
  if ( v115 < 1 )
    v20 = v114;
  else
    v20 = (unsigned int)(v115 - 1);
  v115 = v19;
  LODWORD(v7) = v117;
  v6 = (unsigned __int64)v101;
  while ( 1 )
  {
    if ( (unsigned int)v7 <= (unsigned int)v20 )
    {
LABEL_129:
      v113 = v20;
      sub_2771220(a1: v18, a2: v12, a3: (unsigned int)v20, a4: v17, a5: (unsigned int)v117);
      goto LABEL_130;
    }
    v21 = *(unsigned int *)(v6 + 4 * v20 + 12);
    v11 = (unsigned __int64)&v9[8 * v21];
    if ( (_DWORD)v21 == 0 )
      break;
    v113 = v20;
    v22 = *(_QWORD *)&v9[8 * (*(_DWORD *)&v9[8 * v21] >> 3) + 176];
    v98 = &v9[8 * v21];
    if ( ((unsigned int (__fastcall *)(__int64, __int64, char *, unsigned __int64, char *))(v8 + v22))(
           a1: v18,
           a2: v22,
           a3: v98,
           a4: v11,
           a5: v9) != 0 )
      v23 = v113;
    else
      v23 = v115;
    v12 = v114;
    LODWORD(v7) = v117;
    v6 = (unsigned __int64)v101;
    if ( v113 - 1 < 0 )
    {
LABEL_130:
      v115 = v23;
      v20 = (unsigned int)v12;
    }
    else
    {
      v115 = v23;
      v20 = (unsigned int)(v113 - 1);
    }
  }
  while ( 1 )
  {
    v119 = v8;
    v116 = v115;
LABEL_19:
    v24 = v118 + 1;
    if ( (int)v7 <= (int)v24 )
      JUMPOUT(0x30A053702LL);
    v6 = (unsigned int)v24;
    if ( (unsigned int)v7 <= (unsigned int)v24 )
      goto LABEL_126;
    v25 = v101;
    v26 = *(unsigned int *)&v9[8 * (*(_DWORD *)&v9[8 * HIDWORD(v99)] >> 3) + 24];
    v27 = *(unsigned int *)&v9[8 * v26 + 36];
    v114 = *(_DWORD *)&v9[8 * v26 + 36];
    v112 = *(__int16 *)&v9[8 * v26 + 60];
    v111 = *(_DWORD *)&v9[8 * v26 + 40];
    v28 = *(unsigned int *)&v101[4 * v6 + 12];
    v110 = (__int16)v112;
    HIDWORD(v99) = (unsigned __int64)(v102 - (_QWORD)v9) >> 3;
    if ( (_DWORD)v28 == 0 )
      break;
    v107 = v6;
    v106 = v8 + *(_QWORD *)&v9[8 * (*(_DWORD *)&v9[8 * v28] >> 3) + 176];
    v97 = &v9[8 * v28];
    if ( ((unsigned int (__fastcall *)(__int64, char *, char *, __int64, __int64))v106)(
           a1: v27,
           a2: v101,
           a3: v97,
           a4: v106,
           a5: v103) == 0 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, char *, unsigned __int64, char *))v106)(
             a1: v31,
             a2: v32,
             a3: v97,
             a4: v30,
             a5: v9) != 0 )
      {
        v62 = v116;
        if ( v116 == v118 )
          v62 = v107;
      }
      else
      {
        v62 = v116;
      }
      LODWORD(v7) = v117;
      if ( v117 <= (int)(v107 + 1) )
        JUMPOUT(0x30A053A9ALL);
      v63 = v107 + 1;
      v105 = v62;
      while ( 1 )
      {
        v6 = (unsigned __int64)v101;
        if ( (unsigned int)v7 <= (unsigned int)v63 )
          break;
        v11 = *(unsigned int *)&v101[4 * v63 + 12];
        v25 = &v9[8 * v11];
        if ( (_DWORD)v11 == 0 )
        {
          v109 = v63;
          v119 = v8;
          v108 = v105;
          v98 = &v9[8 * v11];
          goto LABEL_34;
        }
        v104 = v63;
        v106 = v8 + *(_QWORD *)&v9[8 * (*(_DWORD *)&v9[8 * v11] >> 3) + 176];
        v96 = &v9[8 * v11];
        if ( ((unsigned int (__fastcall *)(__int64, char *, char *))v106)(a1: v27, a2: v25, a3: v25) != 0 )
        {
          v6 = v104;
          v119 = v8;
          v104 = v105;
          v33 = (unsigned __int64)v96;
          goto LABEL_24;
        }
        v64 = ((__int64 (__fastcall *)(__int64, __int64, char *, __int64, char *))v106)(
                a1: v31,
                a2: v32,
                a3: v96,
                a4: v106,
                a5: v9);
        LODWORD(v63) = v104 + 1;
        LODWORD(v7) = v117;
        if ( v117 <= (int)(v104 + 1) )
          JUMPOUT(0x30A053B26LL);
        if ( v64 != 0 )
        {
          if ( v105 == v118 )
          {
            v119 = v8;
            v105 = v104;
          }
          v63 = (unsigned int)v63;
        }
        else
        {
          v63 = (unsigned int)v63;
        }
      }
      sub_2771220(a1: v27, a2: v61, a3: v63, a4: (unsigned int)v63, a5: (unsigned int)v7);
LABEL_133:
      v107 = v6;
      LODWORD(v7) = v117;
      LODWORD(v6) = (_DWORD)v101;
      sub_2771080(a1: v31, a2: v32, a3: v29, a4: v30, a5: v34, a6: v104);
LABEL_134:
      v107 = v6;
      LODWORD(v6) = v7;
      sub_2771220(a1: v38, a2: v35, a3: v118, a4: v30, a5: v39, a6: v104);
LABEL_135:
      v107 = v6;
      LODWORD(v7) = v39;
      sub_2771220(a1: v38, a2: v35, a3: (unsigned int)v6, a4: v30, a5: v39, a6: v104);
      goto LABEL_31;
    }
    v6 = v107;
    v119 = v8;
    v104 = v116;
    v33 = (unsigned __int64)v97;
LABEL_24:
    v34 = HIDWORD(v99);
    if ( (char *)v33 == v9 )
      goto LABEL_133;
    *(_DWORD *)(v33 + 20) = HIDWORD(v99);
    if ( (*(_DWORD *)v33 & 2) != 0 )
    {
      v30 = v33 & 0xFFFFFFFFFFF80000LL;
      v86 = (v33 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v86) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v86) >> 9) + 0x38) = 0;
    }
    v35 = v110;
    v36 = v111;
    v37 = v112;
    v38 = v114;
    v39 = v117;
    v7 = (unsigned __int64)v101;
    v97 = (char *)v33;
    if ( v117 <= v118 )
      goto LABEL_134;
    if ( v117 <= (unsigned int)v6 )
      goto LABEL_135;
    v40 = *(unsigned int *)&v101[4 * v118 + 12];
    if ( (_DWORD)v40 == 0 )
    {
      v106 = v118;
LABEL_71:
      *(_DWORD *)(v7 + 4 * v6 + 12) = v40;
      if ( (*(_DWORD *)v7 & 2) != 0 )
      {
        if ( (*(_DWORD *)v7 & 1) != 0 )
        {
          v87 = (char *)(v7 - *(_QWORD *)(v7 - 8));
          v88 = (4 * v6 + 12) >> 9;
          if ( v87[v88 + 48] != 0 )
            v87[v88 + 48] = 0;
        }
        else if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - ((v7 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
        {
          *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - ((v7 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
        }
      }
      v66 = v97;
      v67 = *(_DWORD *)v97 >> 3;
      v68 = *(_WORD *)&v9[8 * v67 + 62];
      v69 = (__int64)&v9[8 * *(unsigned int *)&v9[8 * v67 + 16]];
      if ( v37 < 0 )
        goto LABEL_75;
      if ( v68 > v37 )
      {
        v73 = v38 == *(_DWORD *)(v69 + 4 * v110 + 12);
        goto LABEL_77;
      }
LABEL_74:
      while ( 1 )
      {
        v68 = sub_276F520(a1: v38, a2: v35, a3: v66, a4: v69);
LABEL_75:
        if ( v111 >= 0x10000 )
          break;
        v70 = *(unsigned int *)&v9[8 * v67 + 20];
        v71 = *(_DWORD *)&v9[8 * v67 + 44];
        v72 = &v9[8 * v70];
        v69 = HIBYTE(v71);
        v73 = v36 == (unsigned __int16)*(_DWORD *)&v72[4 * (v71 & (v36 >> SHIBYTE(v71))) + 12];
LABEL_77:
        if ( v73 )
        {
          v35 = v106;
          goto LABEL_79;
        }
      }
      v35 = v106;
      v107 = v6;
      v92 = 2 * *(__int16 *)&v9[8 * v67 + 64];
      v93 = v68;
      for ( i = 0; ; i += 2 )
      {
        if ( v92 <= i )
        {
          LODWORD(v6) = v107;
          goto LABEL_74;
        }
        if ( v36 == *(_DWORD *)(v69 + 4 * (v93 + i) + 12) )
          break;
      }
      LODWORD(v6) = v107;
LABEL_79:
      v74 = (unsigned __int64)v101;
      *(_DWORD *)&v101[4 * v35 + 12] = (unsigned __int64)(v66 - v9) >> 3;
      if ( (*(_DWORD *)v74 & 2) != 0 )
      {
        if ( (*(_DWORD *)v74 & 1) != 0 )
        {
          v89 = (char *)(v74 - *(_QWORD *)(v74 - 8));
          v69 = (unsigned __int64)(4 * v35 + 12) >> 9;
          if ( v89[v69 + 48] != 0 )
            v89[v69 + 48] = 0;
        }
        else
        {
          v69 = (v74 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v74 & 0xFFFFFFFFFFF80000LL) + ((v74 - v69) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v74 & 0xFFFFFFFFFFF80000LL) + ((v74 - v69) >> 9) + 0x38) = 0;
        }
      }
      v75 = v104;
      if ( v104 == v118 )
        v75 = (unsigned int)v6;
      v107 = v6;
      v114 = v75;
      v76 = sub_5037B00(
              a1: v38,
              a2: v35,
              a3: v100,
              a4: v69,
              a5: v75,
              a6: v75,
              a7: v95,
              a8: (int)v96,
              a9: (__int64)v97,
              a10: (int)v98,
              a11: v99,
              a12: v100,
              a13: (int)v101,
              a14: v102);
      result = sub_5037740(a1: v78, a2: v79, a3: v100, a4: v77, a5: v76, a6: v117);
      if ( *(int *)(v10 + 16) <= 0 )
        return sub_277F280(a1: v82, a2: v83, a3: v80, a4: v81, a5: v84, a6: v114);
      return result;
    }
    v106 = v118;
    v41 = *(_DWORD *)&v9[8 * v40] >> 3;
    LOWORD(v42) = *(_WORD *)&v9[8 * v41 + 62];
    v43 = &v9[8 * *(unsigned int *)&v9[8 * v41 + 16]];
    if ( (v112 & 0x8000u) != 0 )
    {
      if ( v111 >= 0x10000 )
      {
        v107 = v6;
        v35 = v106;
        v90 = 2 * *(__int16 *)&v9[8 * v41 + 64];
        v42 = (__int16)v42;
        for ( j = 0; ; j += 2 )
        {
          if ( v90 <= j )
          {
            LODWORD(v7) = (_DWORD)v101;
            goto LABEL_31;
          }
          if ( v111 == *(_DWORD *)&v43[4 * v42 + 12 + 4 * j] )
            break;
        }
        v6 = v107;
        v35 = v110;
        v7 = (unsigned __int64)v101;
        goto LABEL_71;
      }
      v65 = v111 == (unsigned __int16)*(_DWORD *)&v9[8 * *(unsigned int *)&v9[8 * v41 + 20]
                                                   + 4
                                                   * (*(_DWORD *)&v9[8 * v41 + 44]
                                                    & ((unsigned int)v111 >> HIBYTE(*(_DWORD *)&v9[8 * v41 + 44])))
                                                   + 12];
    }
    else
    {
      if ( (__int16)v42 <= (__int16)v112 )
        goto LABEL_31;
      v65 = v114 == *(_DWORD *)&v43[4 * v110 + 12];
    }
    if ( v65 )
      goto LABEL_71;
LABEL_31:
    sub_276F520(a1: v38, a2: v35, a3: &v9[8 * v40]);
  }
  v109 = v6;
  v119 = v8;
  v108 = v116;
  v98 = &v9[8 * v28];
LABEL_34:
  if ( (unsigned int)v7 <= v118 )
  {
LABEL_127:
    sub_2771220(a1: v27, a2: v25, a3: v118, a4: v11, a5: (unsigned int)v117);
LABEL_128:
    LODWORD(v20) = sub_2771080();
    goto LABEL_129;
  }
  v44 = v101;
  v45 = v118;
  v46 = *(unsigned int *)&v101[4 * v118 + 12];
  if ( (_DWORD)v46 == 0 )
    goto LABEL_128;
  v106 = v118;
  *(_DWORD *)&v9[8 * v46 + 20] = 0;
  v47 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v47 + 32) > *(_QWORD *)(v10 + 32) )
  {
    v47 = sub_1EAA920(a1: v27, a2: v45, a3: 43307320);
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v47 + 32;
    *(_DWORD *)v47 = 43307320;
    *(_DWORD *)(v47 + 4) = 0;
    *(_QWORD *)(v47 + 8) = 0;
    *(_QWORD *)(v47 + 16) = 0;
    *(_QWORD *)(v47 + 24) = 0;
  }
  v96 = (char *)v47;
  sub_53F1120(a1: v47, a2: v45, a3: v47, a4: v44, a5: v103, a6: v9);
  v49 = HIDWORD(v99);
  v50 = (unsigned __int64)v96;
  *((_DWORD *)v96 + 5) = HIDWORD(v99);
  if ( (*(_DWORD *)v50 & 2) != 0 )
  {
    v49 = v50 & 0xFFFFFFFFFFF80000LL;
    v85 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v85) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v85) >> 9) + 0x38) = 0;
  }
  if ( (v112 & 0x8000u) != 0 )
    goto LABEL_42;
  if ( (__int16)v112 < 4 )
  {
    v48 = v114;
    v51 = v114 == *(_DWORD *)&v9[4 * v110 + 60267876];
    goto LABEL_44;
  }
  while ( 1 )
  {
    sub_276F520();
LABEL_42:
    if ( v111 < 0x10000 )
    {
      v51 = v111 == 0;
LABEL_44:
      if ( (_DWORD)v51 != 0 )
        break;
    }
  }
  v52 = v106;
  v53 = (__int64)v101;
  *(_DWORD *)&v101[4 * v106 + 12] = (v50 - (unsigned __int64)v9) >> 3;
  v54 = *(unsigned int *)v53;
  if ( (v54 & 2) != 0 )
  {
    if ( (v54 & 1) != 0 )
    {
      v54 = v53 - *(_QWORD *)(v53 - 8);
      v51 = v53;
      v49 = (unsigned __int64)(4 * v52 + 12) >> 9;
      if ( *(_BYTE *)(v54 + v49 + 48) != 0 )
        *(_BYTE *)(v54 + v49 + 48) = 0;
    }
    else
    {
      v54 = v53 & 0xFFFFFFFFFFF80000LL;
      v49 = (v53 & 0xFFFFFFFFFFF80000LL) + 2112;
      v51 = (v53 - v49) >> 9;
      if ( *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + v51 + 0x38) != 0 )
        *(_BYTE *)(v54 + v51 + 56) = 0;
    }
  }
  result = v108;
  v56 = (unsigned int)v117;
  if ( v108 != v118 )
  {
    v57 = sub_5037B00(
            a1: v48,
            a2: v52,
            a3: v100,
            a4: v51,
            a5: v108,
            a6: (unsigned int)v117,
            a7: v95,
            a8: (int)v96,
            a9: (__int64)v97,
            a10: (int)v98,
            a11: v99,
            a12: v100,
            a13: (int)v101,
            a14: v102);
    result = sub_5037740(a1: v59, a2: v60, a3: v100, a4: v58, a5: v57, a6: v117);
  }
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280(a1: v48, a2: v52, a3: v54, a4: v51, a5: v49, a6: v56);
  return result;
}
