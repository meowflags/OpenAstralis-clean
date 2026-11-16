// sub_182775C60
// rva 0x02775c60  size 2310  section .text  group text
// window base 0x182775c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182775C60(
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
        char a15,
        int a16,
        int a17,
        int a18)
{
  __int64 v18; // r13
  _DWORD *v19; // r14
  __int64 v20; // r15
  BOOL v21; // ebx
  BOOL v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __m128 v39; // xmm6
  __m128 v40; // xmm7
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r9
  __int64 v45; // r9
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  _DWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 result; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm2
  __m128 v63; // xmm3
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  __m128 v66; // xmm6
  __m128 v67; // xmm7
  _DWORD *v68; // rcx
  _DWORD *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // r9
  __m128 v73; // xmm0
  __m128 v74; // xmm1
  __m128 v75; // xmm2
  __m128 v76; // xmm3
  __m128 v77; // xmm4
  __m128 v78; // xmm5
  __m128 v79; // xmm6
  __m128 v80; // xmm7
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // r8
  __m128 v87; // xmm0
  __m128 v88; // xmm1
  __m128 v89; // xmm2
  __m128 v90; // xmm3
  __m128 v91; // xmm4
  __m128 v92; // xmm5
  __m128 v93; // xmm6
  __m128 v94; // xmm7
  __int64 v95; // r9
  __int64 v96; // r8
  __int64 v97; // r9
  __m128 v98; // xmm0
  __m128 v99; // xmm1
  __m128 v100; // xmm2
  __m128 v101; // xmm3
  __m128 v102; // xmm4
  __m128 v103; // xmm5
  __m128 v104; // xmm6
  __m128 v105; // xmm7
  _DWORD *v106; // rcx
  __int64 v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rdi
  __int64 v110; // rsi
  __int64 (__fastcall *v111)(__int64, __int64, __int64, __int64, __int64); // r11
  __int64 v112; // r9
  __int64 v113; // rcx
  int i; // edx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  _DWORD *v118; // r9
  __m128 v119; // xmm0
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // r9
  __m128 v124; // xmm1
  __m128 v125; // xmm2
  __m128 v126; // xmm3
  __m128 v127; // xmm4
  __m128 v128; // xmm5
  __m128 v129; // xmm6
  __m128 v130; // xmm7
  int v131; // r10d
  __int64 v132; // rsi
  __int64 v133; // r8
  unsigned int v134; // edx
  __int64 v135; // rcx
  __int64 v136; // rdi
  __int64 (__fastcall *v137)(__int64, __int64, __int64, __int64, __int64); // r11
  __int64 v138; // rdx
  __int64 v139; // rcx
  unsigned __int64 v140; // r9
  __int64 v141; // rcx
  unsigned int v142; // eax
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // rcx
  char v147; // [rsp+0h] [rbp-78h] BYREF
  __int64 v148; // [rsp+8h] [rbp-70h]
  __int64 v149; // [rsp+10h] [rbp-68h]
  _DWORD *v150; // [rsp+18h] [rbp-60h]
  __int64 v151; // [rsp+20h] [rbp-58h]
  __int64 v152; // [rsp+28h] [rbp-50h]
  _DWORD *v153; // [rsp+30h] [rbp-48h]
  int v154; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v155; // [rsp+40h] [rbp-38h]
  unsigned int v156; // [rsp+44h] [rbp-34h]
  unsigned int v157; // [rsp+48h] [rbp-30h]
  unsigned int v158; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v159; // [rsp+50h] [rbp-28h]
  unsigned int v160; // [rsp+54h] [rbp-24h]
  __int64 v161; // [rsp+58h] [rbp-20h]
  unsigned int v162; // [rsp+60h] [rbp-18h]
  int v163; // [rsp+64h] [rbp-14h]
  BOOL v164; // [rsp+68h] [rbp-10h]
  BOOL v165; // [rsp+6Ch] [rbp-Ch]
  int v166; // [rsp+70h] [rbp-8h]
  unsigned int v167; // [rsp+74h] [rbp-4h]

  v153 = (_DWORD *)a6;
  v152 = a1;
  v167 = a4;
  if ( (unsigned __int64)&v147 <= *(_QWORD *)(v20 + 8) )
  {
    v163 = a2;
    v151 = a5;
    v162 = a3;
    *(double *)v73.m128_u64 = MEMORY[0x181EB84E0]();
LABEL_78:
    sub_182771080(
      a1: v70,
      a2: v71,
      a3: v26,
      a4: v25,
      a5: v27,
      a6: v72,
      a7: v73,
      a8: v74,
      a9: v75,
      a10: v76,
      a11: v77,
      a12: v78,
      a13: v79,
      a14: v80,
      a15: v147);
LABEL_79:
    sub_182771080(
      a1: v29,
      a2: v30,
      a3: v51,
      a4: (__int64)v50,
      a5: v31,
      a6: v32,
      a7: v33,
      a8: v34,
      a9: v35,
      a10: v36,
      a11: v37,
      a12: v38,
      a13: v39,
      a14: v40,
      a15: v147);
    goto LABEL_80;
  }
  v21 = a2 == 111;
  v22 = a2 == 88;
  if ( (_DWORD)a2 != 120 )
    JUMPOUT(0x304EBEC9FLL);
  if ( (_DWORD *)a1 != v19 )
  {
    v23 = *(_DWORD *)a1 >> 3;
    if ( SHIWORD(v19[2 * v23 + 15]) >= 3 && v19[2 * v19[2 * v23 + 4] + 5] == 70246 )
    {
      v111 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v18
                                                                                 + *(_QWORD *)&v19[2
                                                                                                 * (*(_DWORD *)a1 >> 3)
                                                                                                 + 142]);
      v166 = 1;
      v165 = false;
      v164 = false;
      v163 = 120;
      v151 = a5;
      v162 = a3;
      v69 = (_DWORD *)v111(a1, a2, a3: v152, a4, a5: 16);
      goto LABEL_12;
    }
  }
  v166 = 1;
  v165 = a2 == 88;
  v164 = a2 == 111;
  v163 = 120;
  v151 = a5;
  v162 = a3;
  if ( (_DWORD *)a1 != v19 )
  {
    a3 = *(_DWORD *)a1 >> 3;
    switch ( (_DWORD)a3 )
    {
      case 0x416FB5:
        v24 = *(char *)(a1 + 4);
        if ( v24 < 0 )
          v24 += 256;
        goto LABEL_54;
      case 0x416FCB:
        v24 = *(__int16 *)(a1 + 4);
        if ( v24 < 0 )
          v24 += 0x10000;
        goto LABEL_54;
      case 0x4103C8:
        v116 = *(int *)(a1 + 4);
        if ( v116 < 0 )
        {
          a4 = v116 + 0x100000000LL;
          v24 = v116 + 0x100000000LL;
        }
        else
        {
          v24 = *(int *)(a1 + 4);
        }
        goto LABEL_54;
      case 0x410264:
        v24 = *(_QWORD *)(a1 + 8);
LABEL_54:
        v161 = v24;
        v69 = (_DWORD *)MEMORY[0x184F949E0](a1, a2, a3: v24, a4, a5: 4);
        goto LABEL_12;
      default:
        break;
    }
  }
  if ( (_DWORD *)a1 == v19 )
    goto LABEL_96;
  v117 = *(_QWORD *)(v20 + 40);
  if ( (unsigned __int64)(v117 + 48) > *(_QWORD *)(v20 + 32) )
  {
    v117 = MEMORY[0x181EAA920](a1, a2, a3: 37748472);
    a1 = v152;
  }
  else
  {
    *(_QWORD *)(v20 + 40) = v117 + 48;
    *(_DWORD *)v117 = 37748472;
    *(_DWORD *)(v117 + 4) = 0;
    *(_QWORD *)(v117 + 8) = 0;
    *(_QWORD *)(v117 + 16) = 0;
    *(_QWORD *)(v117 + 24) = 0;
    *(_QWORD *)(v117 + 32) = 0;
    *(_QWORD *)(v117 + 40) = 0;
  }
  v118 = &v19[2 * (*(_DWORD *)a1 >> 3)];
  v150 = (_DWORD *)v117;
  *(double *)v119.m128_u64 = MEMORY[0x185899880](a1, a2, a3: v117, a4, a5: (unsigned int)v163, a6: v118);
  sub_182769900(
    a1: v121,
    a2: v122,
    a3: v150,
    a4: v120,
    a5: (__int64)&a15,
    a6: v123,
    a7: v119,
    a8: v124,
    a9: v125,
    a10: v126,
    a11: v127,
    a12: v128,
    a13: v129,
    a14: v130);
  v166 = v131;
  v165 = v22;
  v164 = v21;
  v163 = v132;
  v151 = v133;
  v162 = v134;
  v69 = (_DWORD *)v137(a1: v136, a2: v132, a3: v152, a4: v135, a5: 8);
LABEL_12:
  v150 = v69;
  if ( v163 == 88 )
  {
    v54 = sub_182778160(a1: v70, a2: v71, a3: v162, a4: v115, a5: v151);
    v68 = v150;
    if ( v150 == v19 )
    {
LABEL_80:
      v43 = sub_182771080(
              a1: v56,
              a2: v57,
              a3: v55,
              a4: (__int64)v68,
              a5: v58,
              a6: v59,
              a7: v60,
              a8: v61,
              a9: v62,
              a10: v63,
              a11: v64,
              a12: v65,
              a13: v66,
              a14: v67,
              a15: v147);
      goto LABEL_81;
    }
    v69 = (_DWORD *)MEMORY[0x184FFE180](a1: v56, a2: v57, a3: v150, a4: v150, a5: v54);
  }
  v25 = (__int64)v69;
  v150 = v69;
  if ( a16 != 0 )
  {
    switch ( v163 )
    {
      case 'o':
        v26 = (__int64)(v19 + 94109268);
        v27 = (__int64)(v19 + 93139048);
        break;
      case 'x':
        v26 = (__int64)(v19 + 94167082);
        v27 = (__int64)(v19 + 93137080);
        break;
      case 'X':
        v26 = (__int64)(v19 + 94167078);
        v27 = (__int64)(v19 + 93137186);
        break;
      default:
        v138 = *(_QWORD *)(v20 + 40);
        v159 = v163 >= 256;
        v139 = v163 >= 256;
        v140 = v138 + (((unsigned int)(30 << v139) + 19LL) & 0x1FFFFFFF8LL);
        if ( v140 > *(_QWORD *)(v20 + 32) )
        {
          v138 = MEMORY[0x181EAA840](a1: 34082368, a2: v71, a3: 34082368);
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v140;
          *(_QWORD *)v138 = 34082368;
          *(_DWORD *)(v138 + 8) = 30 << v139;
        }
        v148 = v138;
        if ( v163 >= 256 )
        {
          MEMORY[0x184FF2C40](a1: 1, a2: v71, a3: v19 + 93320312, a4: v138, a5: v138, a6: 30);
          goto LABEL_92;
        }
        goto LABEL_97;
    }
  }
  else
  {
    v26 = (__int64)(v19 + 94087886);
    v27 = (__int64)(v19 + 93320312);
  }
  v149 = v26;
  v148 = v27;
  if ( v69 == v19 )
    goto LABEL_78;
  v28 = MEMORY[0x184FEBC20](a1: v70, a2: v71, a3: v69, a4: v69, a5: 0);
  v41 = *(unsigned int *)(v149 + 8);
  v160 = *(_DWORD *)(v149 + 8);
  if ( v28 == 45 )
    v42 = a18 == 48 || (_DWORD)v41 != 0;
  else
    v42 = 0;
  v43 = v28 == 45;
  if ( (_DWORD)v42 != 0 )
  {
    v44 = (__int64)v153;
    if ( v153 == v19 )
    {
LABEL_81:
      v158 = v43;
      sub_182771080(
        a1: v29,
        a2: v30,
        a3: v42,
        a4: v41,
        a5: v31,
        a6: v44,
        a7: v33,
        a8: v34,
        a9: v35,
        a10: v36,
        a11: v37,
        a12: v38,
        a13: v39,
        a14: v40,
        a15: v147);
      goto LABEL_82;
    }
    v158 = v43;
    v157 = v42;
    MEMORY[0x184F35F80](a1: v29, a2: v30, a3: v153, a4: v41, a5: 45);
    v159 = 1;
    v41 = v160;
  }
  else
  {
    v159 = 0;
    v158 = v43;
    v157 = 0;
  }
  if ( (_DWORD)v41 != 0 )
  {
    v45 = (__int64)v153;
    if ( v153 == v19 )
    {
LABEL_82:
      sub_182771080(
        a1: v29,
        a2: v30,
        a3: v42,
        a4: v41,
        a5: v31,
        a6: v45,
        a7: v33,
        a8: v34,
        a9: v35,
        a10: v36,
        a11: v37,
        a12: v38,
        a13: v39,
        a14: v40,
        a15: v147);
      goto LABEL_83;
    }
    MEMORY[0x184F36F80](a1: v29, a2: v30, a3: v153, a4: v41, a5: v148);
  }
  if ( a17 >= 0 )
  {
    v46 = v150;
    v47 = (unsigned int)v150[1];
    if ( (_DWORD)v47 == 0 )
      goto LABEL_84;
    v31 = v160;
    v48 = (unsigned int)*((char *)v150 + 12);
    v49 = v160 + (v19[2 * v47 + 2] >> *((_BYTE *)v150 + 12));
    if ( a17 > (int)v49 )
    {
      v112 = (__int64)v153;
      if ( v153 == v19 )
        goto LABEL_86;
      v160 = v49;
      if ( a18 != 48 )
        JUMPOUT(0x304EBF103LL);
      v156 = v167;
      MEMORY[0x184F35F80](a1: v29, a2: v30, a3: v153, a4: v167, a5: v167);
      for ( i = v160 + 1; ; i = v160 + 1 )
      {
        v32 = (__int64)v153;
        if ( a17 <= i )
          break;
        v160 = i;
        MEMORY[0x184F35F80](a1: v29, a2: v30, a3: v153, a4: v113, a5: v156);
      }
    }
  }
  v50 = v150;
  v51 = (unsigned int)v150[1];
  if ( (_DWORD)v51 == 0 )
    goto LABEL_79;
  v52 = (unsigned int)(v19[2 * v51 + 2] >> *((_BYTE *)v150 + 12));
  if ( (unsigned int)v52 > v159 )
  {
    v81 = MEMORY[0x184FEBC20](a1: v29, a2: v30, a3: v150, a4: (unsigned int)*((char *)v150 + 12), a5: v159);
    if ( v81 < 0x30 || v81 >= 0x3A )
    {
      v95 = (__int64)v153;
      if ( v153 == v19 )
        goto LABEL_85;
      v156 = v81;
      MEMORY[0x184F35F80](a1: v84, a2: v85, a3: v153, a4: v83, a5: v81);
    }
    else
    {
      v156 = v81;
      if ( v153 == v19 )
      {
        while ( 1 )
        {
          sub_182771080(
            a1: v148,
            a2: v85,
            a3: v159,
            a4: v83,
            a5: v158,
            a6: v157,
            a7: v87,
            a8: v88,
            a9: v89,
            a10: v90,
            a11: v91,
            a12: v92,
            a13: v93,
            a14: v94,
            a15: v147);
LABEL_96:
          sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v147);
LABEL_97:
          MEMORY[0x181EB4960](a1: 30, a2: 0, a3: v19 + 94087886, a4: v139, a5: 0, a6: v148);
LABEL_92:
          v142 = MEMORY[0x1850117E0](a1: (unsigned int)v163, a2: v19 + 14546216, a3: 30, a4: v141, a5: v159, a6: v148);
          v145 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v145 + 24) > *(_QWORD *)(v20 + 32) )
          {
            v157 = v142;
            v145 = MEMORY[0x181EAA920](a1: v143, a2: v144, a3: 34082680);
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v145 + 24;
            *(_DWORD *)v145 = 34082680;
            *(_DWORD *)(v145 + 4) = 0;
            *(_QWORD *)(v145 + 8) = 0;
            *(_QWORD *)(v145 + 16) = 0;
          }
          v146 = v148;
          *(_BYTE *)(v145 + 12) = v159;
          *(_DWORD *)(v145 + 4) = (unsigned __int64)(v146 - (_QWORD)v19) >> 3;
          *(double *)v87.m128_u64 = MEMORY[0x1828C1C40]();
        }
      }
      v160 = (unsigned __int16)(v167 + v156 - 48);
      MEMORY[0x184F35F80](a1: v84, a2: v85, a3: v153, a4: v83, a5: (unsigned __int16)(v167 + v156 - 48));
    }
    result = v159 + 1;
    while ( 1 )
    {
      v106 = v150;
      v156 = result;
      v107 = (unsigned int)v150[1];
      if ( (_DWORD)v107 == 0 )
        break;
      v52 = (unsigned int)(v19[2 * v107 + 2] >> *((_BYTE *)v150 + 12));
      if ( (int)v52 <= (int)result )
        goto LABEL_33;
      v108 = MEMORY[0x184FEBC20](
               a1: v29,
               a2: v30,
               a3: v150,
               a4: (unsigned int)*((char *)v150 + 12),
               a5: (unsigned int)result);
      v160 = v108;
      v155 = v156 + 1;
      if ( v108 >= 0x30 && v108 < 0x3A )
      {
LABEL_87:
        v154 = (unsigned __int16)(v167 + v108 - 48);
        MEMORY[0x184F35F80](
          a1: (unsigned __int16)(v167 + v108 - 48),
          a2: v110,
          a3: v153,
          a4: v167,
          a5: (unsigned __int16)(v167 + v108 - 48));
        result = v155;
      }
      else
      {
        MEMORY[0x184F35F80](a1: v109, a2: v110, a3: v153, a4: v156 + 1, a5: v108);
        result = v155;
      }
    }
LABEL_83:
    sub_182771080(
      a1: v29,
      a2: v30,
      a3: v107,
      a4: (__int64)v106,
      a5: v96,
      a6: v97,
      a7: v98,
      a8: v99,
      a9: v100,
      a10: v101,
      a11: v102,
      a12: v103,
      a13: v104,
      a14: v105,
      a15: v147);
LABEL_84:
    v81 = sub_182771080(
            a1: v29,
            a2: v30,
            a3: v47,
            a4: (__int64)v46,
            a5: v31,
            a6: v32,
            a7: v33,
            a8: v34,
            a9: v35,
            a10: v36,
            a11: v37,
            a12: v38,
            a13: v39,
            a14: v40,
            a15: v147);
LABEL_85:
    v156 = v81;
    sub_182771080(
      a1: v84,
      a2: v85,
      a3: v82,
      a4: v83,
      a5: v86,
      a6: v95,
      a7: v87,
      a8: v88,
      a9: v89,
      a10: v90,
      a11: v91,
      a12: v92,
      a13: v93,
      a14: v94,
      a15: v147);
LABEL_86:
    LOWORD(v108) = sub_182771080(
                     a1: v29,
                     a2: v30,
                     a3: v49,
                     a4: v48,
                     a5: v31,
                     a6: v112,
                     a7: v33,
                     a8: v34,
                     a9: v35,
                     a10: v36,
                     a11: v37,
                     a12: v38,
                     a13: v39,
                     a14: v40,
                     a15: v147);
    goto LABEL_87;
  }
  result = v159;
LABEL_33:
  if ( *(int *)(v20 + 16) <= 0 )
    return sub_18277F280(a1: v29, a2: v30, a3: v52);
  return result;
}
