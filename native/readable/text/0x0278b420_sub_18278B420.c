// sub_278B420
// rva 0x0278b420  size 4756  section .text  group text
// window base 0x18278b420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278B420(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
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
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned int *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rcx
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rsi
  unsigned int *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  unsigned int *v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rsi
  unsigned __int64 v104; // rbx
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rbx
  unsigned __int64 v108; // rbp
  unsigned __int64 v109; // rbp
  unsigned __int64 v110; // rbp
  unsigned __int64 v111; // rbp
  unsigned __int64 v112; // rax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rcx
  __int64 v118; // rdx
  unsigned __int64 v119; // r9
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // r8
  __int64 v123; // rdx
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // rbx
  unsigned __int64 v126; // rbx
  char v127; // [rsp+0h] [rbp-58h] BYREF
  __int64 v128; // [rsp+8h] [rbp-50h]
  unsigned int v129; // [rsp+14h] [rbp-44h]
  __int64 v130; // [rsp+18h] [rbp-40h]
  unsigned int v131; // [rsp+24h] [rbp-34h]
  __int64 v132; // [rsp+28h] [rbp-30h]
  unsigned int *v133; // [rsp+30h] [rbp-28h]
  unsigned int v134; // [rsp+38h] [rbp-20h]
  int v135; // [rsp+3Ch] [rbp-1Ch]
  __int64 v136; // [rsp+40h] [rbp-18h]
  __int64 v137; // [rsp+48h] [rbp-10h]
  unsigned int v138; // [rsp+54h] [rbp-4h]

  v133 = a3;
  v132 = a5;
  if ( (unsigned __int64)&v127 <= *(_QWORD *)(v18 + 8) )
  {
    v138 = a6;
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_133;
  }
  v19 = a3[1];
  if ( (_DWORD)v19 == 0 )
  {
LABEL_133:
    v138 = a6;
    sub_2771080(a1, a2, (__int64)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
    goto LABEL_134;
  }
  v20 = v17[2 * v19 + 4];
  v21 = v17[93585974];
  v22 = a3[10];
  v15 = 40470128;
  v23 = (unsigned __int64)(a5 - (_QWORD)v17) >> 3;
  v131 = v23;
  v24 = 40544184;
  if ( (v20 & 1) == 0 )
    goto LABEL_4;
  if ( (unsigned int *)a5 == v17 )
  {
LABEL_134:
    v138 = a6;
    sub_2771080(a1: v24, a2: v23, (__int64)a3, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
    goto LABEL_135;
  }
  if ( v17 + 94164930 != (unsigned int *)a5 )
  {
LABEL_4:
    if ( (v20 & 4) == 0 )
      goto LABEL_5;
    if ( (unsigned int *)a5 != v17 )
    {
      if ( v17 + 94167452 != (unsigned int *)a5 )
      {
LABEL_5:
        if ( (v20 & 2) == 0 )
          goto LABEL_6;
        if ( (unsigned int *)a5 != v17 )
        {
          if ( v17 + 94167458 != (unsigned int *)a5 )
          {
LABEL_6:
            if ( (v20 & 8) != 0 )
            {
              if ( (unsigned int *)a5 == v17 )
                goto LABEL_143;
              if ( v17 + 94167464 == (unsigned int *)a5 )
              {
                v137 = 40544184;
                v138 = a6;
                v24 = (__int64)a3;
                v52 = a3[5];
                if ( (_DWORD)v52 == 0 )
                {
                  if ( (_DWORD)v22 != 0 )
                  {
                    v53 = v17[2 * v22 + 3];
                    if ( (_DWORD)v53 != 0 )
                    {
                      v54 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v53], a4: v21, a5: v138);
                      v58 = *(_QWORD *)(v18 + 40);
                      if ( (unsigned __int64)(v58 + 24) > *(_QWORD *)(v18 + 32) )
                      {
                        v130 = v54;
                        v58 = sub_1EAA920(a1: v56, a2: v57, a3: v137);
                        v54 = v130;
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v58 + 24;
                        *(_DWORD *)v58 = 40544184;
                        *(_DWORD *)(v58 + 4) = 0;
                        *(_QWORD *)(v58 + 8) = 0;
                        *(_QWORD *)(v58 + 16) = 0;
                      }
                      v59 = v131;
                      v60 = (__int64)v133;
                      *(_DWORD *)(v58 + 8) = (unsigned __int64)(v54 - (_QWORD)v17) >> 3;
                      *(_DWORD *)(v58 + 4) = v59;
                      *(_DWORD *)(v60 + 20) = (unsigned __int64)(v58 - (_QWORD)v17) >> 3;
                      if ( (*(_DWORD *)v60 & 2) != 0 )
                      {
                        v55 = v60 & 0xFFFFFFFFFFF80000LL;
                        v109 = (v60 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v109) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v109) >> 9) + 0x38) = 0;
                      }
                      if ( *(int *)(v18 + 16) <= 0 )
                        sub_277F280(a1: v60, a2: v59, a3: v58, a4: v55);
                      return v58;
                    }
                  }
                  else
                  {
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      a3: v52,
                      a4: v21,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                  }
                  sub_2771080(
                    a1: v24,
                    a2: v23,
                    a3: v53,
                    a4: v21,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    a12,
                    a13,
                    a14,
                    a15: v127);
                  goto LABEL_161;
                }
                goto LABEL_156;
              }
            }
            v137 = 40544184;
            v138 = a6;
            v24 = (__int64)a3;
            if ( (v20 & 0x20) == 0 )
            {
LABEL_8:
              if ( (v20 & 0x20) == 0 )
              {
LABEL_9:
                if ( (v20 & 0x40) != 0 )
                {
                  if ( (unsigned int *)a5 == v17 )
                  {
LABEL_161:
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      (__int64)a3,
                      a4: v21,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                    goto LABEL_162;
                  }
                  a3 = v17 + 94167482;
                  if ( v17 + 94167482 == (unsigned int *)a5 )
                  {
                    v79 = *(unsigned int *)(v24 + 32);
                    if ( (_DWORD)v79 == 0 )
                    {
                      if ( (_DWORD)v22 != 0 )
                      {
                        v80 = v17[2 * v22 + 3];
                        if ( (_DWORD)v80 != 0 )
                        {
                          v81 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v80], a4: v21, a5: v138);
                          v84 = *(_QWORD *)(v18 + 40);
                          if ( (unsigned __int64)(v84 + 24) > *(_QWORD *)(v18 + 32) )
                          {
                            v130 = v81;
                            v84 = sub_1EAA920(a1: v137, a2: v83, a3: v137);
                            v81 = v130;
                          }
                          else
                          {
                            *(_QWORD *)(v18 + 40) = v84 + 24;
                            *(_DWORD *)v84 = 40544184;
                            *(_DWORD *)(v84 + 4) = 0;
                            *(_QWORD *)(v84 + 8) = 0;
                            *(_QWORD *)(v84 + 16) = 0;
                          }
                          v85 = v131;
                          v86 = (unsigned __int64)v133;
                          *(_DWORD *)(v84 + 8) = (unsigned __int64)(v81 - (_QWORD)v17) >> 3;
                          *(_DWORD *)(v84 + 4) = v85;
                          *(_DWORD *)(v86 + 32) = (unsigned __int64)(v84 - (_QWORD)v17) >> 3;
                          if ( (*(_DWORD *)v86 & 2) != 0 )
                          {
                            v112 = v86 & 0xFFFFFFFFFFF80000LL;
                            v86 = (v86 - ((v86 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                            if ( *(_BYTE *)(v112 + v86 + 56) != 0 )
                              *(_BYTE *)(v112 + v86 + 56) = 0;
                          }
                          if ( *(int *)(v18 + 16) <= 0 )
                            sub_277F280(a1: v82, a2: v85, a3: v86, a4: v84);
                          return v84;
                        }
                      }
                      else
                      {
                        sub_2771080(
                          a1: v24,
                          a2: v23,
                          a3: v79,
                          a4: v21,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13,
                          a14,
                          a15: v127);
                      }
                      sub_2771080(
                        a1: v24,
                        a2: v23,
                        a3: v80,
                        a4: v21,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        a15: v127);
                      goto LABEL_178;
                    }
LABEL_173:
                    v136 = 40470128;
                    v113 = *(_QWORD *)(v18 + 40);
                    if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                    {
                      v129 = v21;
                      v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                      v21 = v129;
                    }
                    else
                    {
                      *(_QWORD *)(v18 + 40) = v113 + 40;
                      *(_DWORD *)v113 = 40470128;
                      *(_DWORD *)(v113 + 4) = 0;
                      *(_QWORD *)(v113 + 8) = 0;
                      *(_QWORD *)(v113 + 16) = 0;
                      *(_QWORD *)(v113 + 24) = 0;
                      *(_QWORD *)(v113 + 32) = 0;
                    }
                    *(_DWORD *)(v113 + 20) = 46923644;
                    *(_DWORD *)(v113 + 16) = v21;
                    *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                    *(_DWORD *)(v113 + 8) = 46385772;
                    goto LABEL_140;
                  }
                }
                if ( (v20 & 0x80u) == 0 )
                {
LABEL_11:
                  if ( *(int *)(v18 + 16) <= 0 )
                    sub_277F280(a1: v24, a2: v23, (__int64)a3, a4: v21);
                  return (__int64)v17;
                }
                if ( (unsigned int *)a5 != v17 )
                {
                  a3 = v17 + 94167488;
                  if ( v17 + 94167488 != (unsigned int *)a5 )
                    goto LABEL_11;
                  v87 = v24;
                  if ( (_DWORD)v22 == 0 )
                  {
LABEL_178:
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      a3: v87,
                      a4: v21,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                    goto LABEL_179;
                  }
                  v88 = v17[2 * v22 + 2];
                  if ( (_DWORD)v88 == 0 )
                  {
LABEL_179:
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      a3: v87,
                      a4: v21,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                    goto LABEL_180;
                  }
                  v89 = v17[2 * v88] >> 3;
                  v90 = v17[2 * v89 + 11];
                  v91 = (unsigned int)v90 & (0x23Fu >> HIBYTE(v17[2 * v89 + 11]));
                  v92 = (unsigned __int16)v17[2 * v17[2 * v89 + 5] + 3 + v91];
                  if ( (_DWORD)v92 != 575 )
                  {
LABEL_180:
                    sub_2770780(
                      a1: v91,
                      a2: v90,
                      a3: v87,
                      a4: v92,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                    goto LABEL_181;
                  }
                  v136 = 40470128;
                  v93 = v17[2 * v88] >> 3;
                  v94 = v17[2 * v93 + 11];
                  v95 = &v17[2 * v17[2 * v93 + 5]];
                  v96 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned int *))(v16
                                                                                         + *(_QWORD *)((char *)&v17[2 * v93] + HIWORD(v95[((unsigned int)v94 & (0x23Fu >> HIBYTE(v17[2 * v93 + 11]))) + 3]))))(
                          a1: v95,
                          a2: v94,
                          a3: &v17[2 * v88]);
                  if ( (unsigned int *)v96 == v17 )
                  {
LABEL_181:
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      a3: v97,
                      a4: v21,
                      a5: v98,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
LABEL_182:
                    v114 = sub_50130C0(a1: v24, a2: v23, a3: 61, a4: v21, a5: v138);
                    v135 = v114;
                    v117 = (unsigned int)(v114 - 5);
                    if ( v114 < 0 )
                    {
                      v134 = v114 - 5;
                      v123 = *(_QWORD *)(v18 + 40);
                      if ( (unsigned __int64)(v123 + 40) > *(_QWORD *)(v18 + 32) )
                      {
                        v123 = sub_1EAA920(a1: v115, a2: v116, a3: 34082880);
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v123 + 40;
                        *(_DWORD *)v123 = 34082880;
                        *(_DWORD *)(v123 + 4) = 0;
                        *(_QWORD *)(v123 + 8) = 0;
                        *(_QWORD *)(v123 + 16) = 0;
                        *(_QWORD *)(v123 + 24) = 0;
                        *(_QWORD *)(v123 + 32) = 0;
                      }
                      *(_DWORD *)(v123 + 20) = 46923644;
                      *(_DWORD *)(v123 + 16) = v17[93585974];
                      *(_DWORD *)(v123 + 12) = (unsigned __int64)(v123 - (_QWORD)v17) >> 3;
                      v130 = v123;
                      sub_503B9A0(a1: v115, a2: v116, a3: v123, a4: v123, a5: 0);
                      v113 = v130;
                      *(_DWORD *)(v130 + 8) = 46004603;
                      if ( (*(_DWORD *)v113 & 2) != 0 )
                      {
                        v21 = v113 & 0xFFFFFFFFFFF80000LL;
                        v126 = (v113 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v126) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v126) >> 9) + 0x38) = 0;
                      }
                    }
                    else
                    {
                      v118 = *(_QWORD *)(v18 + 40);
                      v119 = ((unsigned int)v114 + 19LL) & 0x1FFFFFFF8LL;
                      if ( v119 >= 0x20000 || (v124 = v118 + v119) > *(_QWORD *)(v18 + 32) )
                      {
                        v134 = v114 - 5;
                        v118 = sub_1EAA840(
                                 a1: 34082368,
                                 a2: v116,
                                 a3: 34082368,
                                 a4: v117,
                                 a5: (unsigned int)v114);
                        v117 = v134;
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v124;
                        *(_QWORD *)v118 = 34082368;
                        *(_DWORD *)(v118 + 8) = v114;
                      }
                      v130 = v118;
                      v134 = v117;
                      sub_1EB4960(a1: (unsigned int)v117, a2: 5, a3: v17 + 94167494, a4: v117, a5: 0, a6: v118);
                      v121 = sub_5011920(a1: v138, a2: v17 + 14546268, a3: v134, a4: v120, a5: 0, a6: v130);
                      v113 = *(_QWORD *)(v18 + 40);
                      if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                      {
                        v135 = v121;
                        v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                        v121 = v135;
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v113 + 40;
                        *(_DWORD *)v113 = 40470128;
                        *(_DWORD *)(v113 + 4) = 0;
                        *(_QWORD *)(v113 + 8) = 0;
                        *(_QWORD *)(v113 + 16) = 0;
                        *(_QWORD *)(v113 + 24) = 0;
                        *(_QWORD *)(v113 + 32) = 0;
                      }
                      *(_DWORD *)(v113 + 20) = 46923644;
                      *(_DWORD *)(v113 + 16) = v17[93585974];
                      *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                      v122 = *(_QWORD *)(v18 + 40);
                      v21 = v122 + 24;
                      if ( (unsigned __int64)(v122 + 24) > *(_QWORD *)(v18 + 32) )
                      {
                        v128 = v113;
                        v135 = v121;
                        v122 = sub_1EAA920(a1: v24, a2: v23, a3: 34082680);
                        v113 = v128;
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v21;
                        *(_DWORD *)v122 = 34082680;
                        *(_DWORD *)(v122 + 4) = 0;
                        *(_QWORD *)(v122 + 8) = 0;
                        *(_QWORD *)(v122 + 16) = 0;
                      }
                      *(_DWORD *)(v122 + 4) = (unsigned __int64)(v130 - (_QWORD)v17) >> 3;
                      *(_DWORD *)(v113 + 8) = (unsigned __int64)(v122 - (_QWORD)v17) >> 3;
                      if ( (*(_DWORD *)v113 & 2) != 0 )
                      {
                        v21 = v113 & 0xFFFFFFFFFFF80000LL;
                        v125 = (v113 & 0xFFFFFFFFFFF80000LL) + 2112;
                        if ( *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v125) >> 9) + 0x38) != 0 )
                          *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v125) >> 9) + 0x38) = 0;
                      }
                    }
                    while ( 1 )
                    {
LABEL_140:
                      a7.m128_i128 = (__int128)sub_2769900(
                                                 a1: v24,
                                                 a2: v23,
                                                 a3: (_DWORD *)v113,
                                                 a4: v21,
                                                 a5: (__int64)&a15,
                                                 a6,
                                                 a7,
                                                 a8,
                                                 a9,
                                                 a10,
                                                 a11,
                                                 a12,
                                                 a13,
                                                 a14);
LABEL_141:
                      v138 = a6;
                      sub_2771080(
                        a1: v24,
                        a2: v23,
                        (__int64)a3,
                        a4: v21,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        a15: v127);
LABEL_142:
                      v138 = a6;
                      sub_2771080(
                        a1: v24,
                        a2: v23,
                        (__int64)a3,
                        a4: v21,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        a15: v127);
LABEL_143:
                      v138 = a6;
                      sub_2771080(
                        a1: v24,
                        a2: v23,
                        (__int64)a3,
                        a4: v21,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        a15: v127);
LABEL_144:
                      v136 = v15;
                      v113 = *(_QWORD *)(v18 + 40);
                      if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                      {
                        v129 = v21;
                        v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                        v21 = v129;
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 40) = v113 + 40;
                        *(_DWORD *)v113 = 40470128;
                        *(_DWORD *)(v113 + 4) = 0;
                        *(_QWORD *)(v113 + 8) = 0;
                        *(_QWORD *)(v113 + 16) = 0;
                        *(_QWORD *)(v113 + 24) = 0;
                        *(_QWORD *)(v113 + 32) = 0;
                      }
                      *(_DWORD *)(v113 + 20) = 46923644;
                      *(_DWORD *)(v113 + 16) = v21;
                      *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                      *(_DWORD *)(v113 + 8) = 46385560;
                    }
                  }
                  if ( *(int *)(v96 + 4) < 9 )
                  {
                    v99 = v133;
                  }
                  else
                  {
                    v98 = v133[9];
                    if ( (_DWORD)v98 != 0 )
                      goto LABEL_192;
                    v99 = v133;
                  }
                  if ( v138 != 2 )
                    goto LABEL_182;
                  v100 = v99[10];
                  if ( (_DWORD)v100 != 0 )
                  {
                    result = sub_27B02E0(a1: v24, a2: v23, a3: &v17[2 * v100], a4: v21, a5: v132);
                    v104 = (unsigned __int64)v133;
                    v133[9] = (unsigned __int64)(result - (_QWORD)v17) >> 3;
                    v105 = *(unsigned int *)v104;
                    if ( (v105 & 2) != 0 )
                    {
                      v101 = v104 & 0xFFFFFFFFFFF80000LL;
                      v105 = (v104 - ((v104 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                      if ( *(_BYTE *)((v104 & 0xFFFFFFFFFFF80000LL) + v105 + 0x38) != 0 )
                        *(_BYTE *)(v101 + v105 + 56) = 0;
                    }
                    if ( *(int *)(v18 + 16) <= 0 )
                      return sub_277F280(a1: v102, a2: v103, a3: v105, a4: v101);
                    return result;
                  }
                  v96 = sub_2771080(
                          a1: v24,
                          a2: v23,
                          a3: v100,
                          a4: v21,
                          a5: v98,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13,
                          a14,
                          a15: v127);
LABEL_192:
                  v113 = *(_QWORD *)(v18 + 40);
                  if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                  {
                    v130 = v96;
                    v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                  }
                  else
                  {
                    *(_QWORD *)(v18 + 40) = v113 + 40;
                    *(_DWORD *)v113 = 40470128;
                    *(_DWORD *)(v113 + 4) = 0;
                    *(_QWORD *)(v113 + 8) = 0;
                    *(_QWORD *)(v113 + 16) = 0;
                    *(_QWORD *)(v113 + 24) = 0;
                    *(_QWORD *)(v113 + 32) = 0;
                  }
                  *(_DWORD *)(v113 + 20) = 46923644;
                  *(_DWORD *)(v113 + 16) = v17[93585974];
                  *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                  *(_DWORD *)(v113 + 8) = 46385772;
                  goto LABEL_140;
                }
                goto LABEL_167;
              }
              if ( (unsigned int *)a5 != v17 )
              {
                a3 = v17 + 94167476;
                if ( v17 + 94167476 == (unsigned int *)a5 )
                {
                  v70 = *(unsigned int *)(v24 + 28);
                  if ( (_DWORD)v70 == 0 )
                  {
                    if ( (_DWORD)v22 != 0 )
                    {
                      v71 = v17[2 * v22 + 3];
                      if ( (_DWORD)v71 != 0 )
                      {
                        v72 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v71], a4: v21, a5: v138);
                        v76 = *(_QWORD *)(v18 + 40);
                        if ( (unsigned __int64)(v76 + 24) > *(_QWORD *)(v18 + 32) )
                        {
                          v130 = v72;
                          v76 = sub_1EAA920(a1: v74, a2: v75, a3: v137);
                          v72 = v130;
                        }
                        else
                        {
                          *(_QWORD *)(v18 + 40) = v76 + 24;
                          *(_DWORD *)v76 = 40544184;
                          *(_DWORD *)(v76 + 4) = 0;
                          *(_QWORD *)(v76 + 8) = 0;
                          *(_QWORD *)(v76 + 16) = 0;
                        }
                        v77 = v131;
                        v78 = (__int64)v133;
                        *(_DWORD *)(v76 + 8) = (unsigned __int64)(v72 - (_QWORD)v17) >> 3;
                        *(_DWORD *)(v76 + 4) = v77;
                        *(_DWORD *)(v78 + 28) = (unsigned __int64)(v76 - (_QWORD)v17) >> 3;
                        if ( (*(_DWORD *)v78 & 2) != 0 )
                        {
                          v73 = v78 & 0xFFFFFFFFFFF80000LL;
                          v111 = (v78 & 0xFFFFFFFFFFF80000LL) + 2112;
                          if ( *(_BYTE *)((v78 & 0xFFFFFFFFFFF80000LL) + ((v78 - v111) >> 9) + 0x38) != 0 )
                            *(_BYTE *)((v78 & 0xFFFFFFFFFFF80000LL) + ((v78 - v111) >> 9) + 0x38) = 0;
                        }
                        if ( *(int *)(v18 + 16) <= 0 )
                          sub_277F280(a1: v78, a2: v77, a3: v76, a4: v73);
                        return v76;
                      }
                    }
                    else
                    {
                      sub_2771080(
                        a1: v24,
                        a2: v23,
                        a3: v70,
                        a4: v21,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        a15: v127);
                    }
                    sub_2771080(
                      a1: v24,
                      a2: v23,
                      a3: v71,
                      a4: v21,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15: v127);
                    goto LABEL_173;
                  }
LABEL_168:
                  v136 = 40470128;
                  v113 = *(_QWORD *)(v18 + 40);
                  if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                  {
                    v129 = v21;
                    v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                    v21 = v129;
                  }
                  else
                  {
                    *(_QWORD *)(v18 + 40) = v113 + 40;
                    *(_DWORD *)v113 = 40470128;
                    *(_DWORD *)(v113 + 4) = 0;
                    *(_QWORD *)(v113 + 8) = 0;
                    *(_QWORD *)(v113 + 16) = 0;
                    *(_QWORD *)(v113 + 24) = 0;
                    *(_QWORD *)(v113 + 32) = 0;
                  }
                  *(_DWORD *)(v113 + 20) = 46923644;
                  *(_DWORD *)(v113 + 16) = v21;
                  *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                  *(_DWORD *)(v113 + 8) = 46385571;
                  goto LABEL_140;
                }
                goto LABEL_9;
              }
LABEL_155:
              sub_2771080(
                a1: v24,
                a2: v23,
                (__int64)a3,
                a4: v21,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                a15: v127);
LABEL_156:
              v136 = 40470128;
              v113 = *(_QWORD *)(v18 + 40);
              if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
              {
                v129 = v21;
                v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                v21 = v129;
              }
              else
              {
                *(_QWORD *)(v18 + 40) = v113 + 40;
                *(_DWORD *)v113 = 40470128;
                *(_DWORD *)(v113 + 4) = 0;
                *(_QWORD *)(v113 + 8) = 0;
                *(_QWORD *)(v113 + 16) = 0;
                *(_QWORD *)(v113 + 24) = 0;
                *(_QWORD *)(v113 + 32) = 0;
              }
              *(_DWORD *)(v113 + 20) = 46923644;
              *(_DWORD *)(v113 + 16) = v21;
              *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
              *(_DWORD *)(v113 + 8) = 46385594;
              goto LABEL_140;
            }
            if ( (unsigned int *)a5 != v17 )
            {
              a3 = v17 + 94167470;
              if ( v17 + 94167470 == (unsigned int *)a5 )
              {
                v61 = *(unsigned int *)(v24 + 24);
                if ( (_DWORD)v61 != 0 )
                {
LABEL_162:
                  v136 = 40470128;
                  v113 = *(_QWORD *)(v18 + 40);
                  if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
                  {
                    v129 = v21;
                    v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
                    v21 = v129;
                  }
                  else
                  {
                    *(_QWORD *)(v18 + 40) = v113 + 40;
                    *(_DWORD *)v113 = 40470128;
                    *(_DWORD *)(v113 + 4) = 0;
                    *(_QWORD *)(v113 + 8) = 0;
                    *(_QWORD *)(v113 + 16) = 0;
                    *(_QWORD *)(v113 + 24) = 0;
                    *(_QWORD *)(v113 + 32) = 0;
                  }
                  *(_DWORD *)(v113 + 20) = 46923644;
                  *(_DWORD *)(v113 + 16) = v21;
                  *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
                  *(_DWORD *)(v113 + 8) = 46385571;
                  goto LABEL_140;
                }
                if ( (_DWORD)v22 != 0 )
                {
                  v62 = v17[2 * v22 + 3];
                  if ( (_DWORD)v62 != 0 )
                  {
                    v63 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v62], a4: v21, a5: v138);
                    v67 = *(_QWORD *)(v18 + 40);
                    if ( (unsigned __int64)(v67 + 24) > *(_QWORD *)(v18 + 32) )
                    {
                      v130 = v63;
                      v67 = sub_1EAA920(a1: v65, a2: v66, a3: v137);
                      v63 = v130;
                    }
                    else
                    {
                      *(_QWORD *)(v18 + 40) = v67 + 24;
                      *(_DWORD *)v67 = 40544184;
                      *(_DWORD *)(v67 + 4) = 0;
                      *(_QWORD *)(v67 + 8) = 0;
                      *(_QWORD *)(v67 + 16) = 0;
                    }
                    v68 = v131;
                    v69 = (__int64)v133;
                    *(_DWORD *)(v67 + 8) = (unsigned __int64)(v63 - (_QWORD)v17) >> 3;
                    *(_DWORD *)(v67 + 4) = v68;
                    *(_DWORD *)(v69 + 24) = (unsigned __int64)(v67 - (_QWORD)v17) >> 3;
                    if ( (*(_DWORD *)v69 & 2) != 0 )
                    {
                      v64 = v69 & 0xFFFFFFFFFFF80000LL;
                      v110 = (v69 & 0xFFFFFFFFFFF80000LL) + 2112;
                      if ( *(_BYTE *)((v69 & 0xFFFFFFFFFFF80000LL) + ((v69 - v110) >> 9) + 0x38) != 0 )
                        *(_BYTE *)((v69 & 0xFFFFFFFFFFF80000LL) + ((v69 - v110) >> 9) + 0x38) = 0;
                    }
                    if ( *(int *)(v18 + 16) <= 0 )
                      sub_277F280(a1: v69, a2: v68, a3: v67, a4: v64);
                    return v67;
                  }
                }
                else
                {
                  sub_2771080(
                    a1: v24,
                    a2: v23,
                    a3: v61,
                    a4: v21,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    a12,
                    a13,
                    a14,
                    a15: v127);
                }
                sub_2771080(
                  a1: v24,
                  a2: v23,
                  a3: v62,
                  a4: v21,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11,
                  a12,
                  a13,
                  a14,
                  a15: v127);
LABEL_167:
                sub_2771080(
                  a1: v24,
                  a2: v23,
                  (__int64)a3,
                  a4: v21,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11,
                  a12,
                  a13,
                  a14,
                  a15: v127);
                goto LABEL_168;
              }
              goto LABEL_8;
            }
            goto LABEL_149;
          }
          v137 = 40544184;
          v138 = a6;
          v24 = (__int64)a3;
          v43 = a3[3];
          if ( (_DWORD)v43 != 0 )
          {
LABEL_150:
            v136 = 40470128;
            v113 = *(_QWORD *)(v18 + 40);
            if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
            {
              v129 = v21;
              v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
              v21 = v129;
            }
            else
            {
              *(_QWORD *)(v18 + 40) = v113 + 40;
              *(_DWORD *)v113 = 40470128;
              *(_DWORD *)(v113 + 4) = 0;
              *(_QWORD *)(v113 + 8) = 0;
              *(_QWORD *)(v113 + 16) = 0;
              *(_QWORD *)(v113 + 24) = 0;
              *(_QWORD *)(v113 + 32) = 0;
            }
            *(_DWORD *)(v113 + 20) = 46923644;
            *(_DWORD *)(v113 + 16) = v21;
            *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
            *(_DWORD *)(v113 + 8) = 46385560;
            goto LABEL_140;
          }
          if ( (_DWORD)v22 != 0 )
          {
            v44 = v17[2 * v22 + 3];
            if ( (_DWORD)v44 != 0 )
            {
              v45 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v44], a4: v21, a5: v138);
              v49 = *(_QWORD *)(v18 + 40);
              if ( (unsigned __int64)(v49 + 24) > *(_QWORD *)(v18 + 32) )
              {
                v130 = v45;
                v49 = sub_1EAA920(a1: v47, a2: v48, a3: v137);
                v45 = v130;
              }
              else
              {
                *(_QWORD *)(v18 + 40) = v49 + 24;
                *(_DWORD *)v49 = 40544184;
                *(_DWORD *)(v49 + 4) = 0;
                *(_QWORD *)(v49 + 8) = 0;
                *(_QWORD *)(v49 + 16) = 0;
              }
              v50 = v131;
              v51 = (__int64)v133;
              *(_DWORD *)(v49 + 8) = (unsigned __int64)(v45 - (_QWORD)v17) >> 3;
              *(_DWORD *)(v49 + 4) = v50;
              *(_DWORD *)(v51 + 12) = (unsigned __int64)(v49 - (_QWORD)v17) >> 3;
              if ( (*(_DWORD *)v51 & 2) != 0 )
              {
                v46 = v51 & 0xFFFFFFFFFFF80000LL;
                v108 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v108) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v108) >> 9) + 0x38) = 0;
              }
              if ( *(int *)(v18 + 16) <= 0 )
                sub_277F280(a1: v51, a2: v50, a3: v49, a4: v46);
              return v49;
            }
          }
          else
          {
            sub_2771080(a1: v24, a2: v23, a3: v43, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
          }
          sub_2771080(a1: v24, a2: v23, a3: v44, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
          goto LABEL_155;
        }
        goto LABEL_136;
      }
      v137 = 40544184;
      v138 = a6;
      v24 = (__int64)a3;
      v34 = a3[4];
      if ( (_DWORD)v34 != 0 )
        goto LABEL_144;
      if ( (_DWORD)v22 != 0 )
      {
        v35 = v17[2 * v22 + 3];
        if ( (_DWORD)v35 != 0 )
        {
          v36 = sub_27B6300(a1: v24, a2: v23, a3: &v17[2 * v35], a4: v21, a5: v138);
          v40 = *(_QWORD *)(v18 + 40);
          if ( (unsigned __int64)(v40 + 24) > *(_QWORD *)(v18 + 32) )
          {
            v130 = v36;
            v40 = sub_1EAA920(a1: v38, a2: v39, a3: v137);
            v36 = v130;
          }
          else
          {
            *(_QWORD *)(v18 + 40) = v40 + 24;
            *(_DWORD *)v40 = 40544184;
            *(_DWORD *)(v40 + 4) = 0;
            *(_QWORD *)(v40 + 8) = 0;
            *(_QWORD *)(v40 + 16) = 0;
          }
          v41 = v131;
          v42 = (__int64)v133;
          *(_DWORD *)(v40 + 8) = (unsigned __int64)(v36 - (_QWORD)v17) >> 3;
          *(_DWORD *)(v40 + 4) = v41;
          *(_DWORD *)(v42 + 16) = (unsigned __int64)(v40 - (_QWORD)v17) >> 3;
          if ( (*(_DWORD *)v42 & 2) != 0 )
          {
            v37 = v42 & 0xFFFFFFFFFFF80000LL;
            v107 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v107) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v107) >> 9) + 0x38) = 0;
          }
          if ( *(int *)(v18 + 16) <= 0 )
            sub_277F280(a1: v42, a2: v41, a3: v40, a4: v37);
          return v40;
        }
      }
      else
      {
        sub_2771080(a1: v24, a2: v23, a3: v34, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
      }
      sub_2771080(a1: v24, a2: v23, a3: v35, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
LABEL_149:
      sub_2771080(a1: v24, a2: v23, (__int64)a3, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
      goto LABEL_150;
    }
LABEL_135:
    v138 = a6;
    sub_2771080(a1: v24, a2: v23, (__int64)a3, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
LABEL_136:
    v138 = a6;
    sub_2771080(a1: v24, a2: v23, (__int64)a3, a4: v21, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v127);
  }
  else if ( a3[2] == 0 )
  {
    if ( (_DWORD)v22 == 0 )
      goto LABEL_141;
    v26 = v17[2 * v22 + 3];
    if ( (_DWORD)v26 == 0 )
      goto LABEL_142;
    v137 = 40544184;
    v138 = a6;
    v27 = sub_27B6300(a1: 40544184, a2: v23, a3: &v17[2 * v26], a4: v21, a5: (unsigned int)a6);
    v31 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v31 + 24) > *(_QWORD *)(v18 + 32) )
    {
      v130 = v27;
      v31 = sub_1EAA920(a1: v29, a2: v30, a3: v137);
      v27 = v130;
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v31 + 24;
      *(_DWORD *)v31 = 40544184;
      *(_DWORD *)(v31 + 4) = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
    }
    v32 = v131;
    v33 = (__int64)v133;
    *(_DWORD *)(v31 + 8) = (unsigned __int64)(v27 - (_QWORD)v17) >> 3;
    *(_DWORD *)(v31 + 4) = v32;
    *(_DWORD *)(v33 + 8) = (unsigned __int64)(v31 - (_QWORD)v17) >> 3;
    if ( (*(_DWORD *)v33 & 2) != 0 )
    {
      v28 = v33 & 0xFFFFFFFFFFF80000LL;
      v106 = (v33 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v106) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v106) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v18 + 16) <= 0 )
      sub_277F280(a1: v33, a2: v32, a3: v31, a4: v28);
    return v31;
  }
  v136 = v15;
  v138 = a6;
  v113 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v18 + 32) )
  {
    v129 = v21;
    v113 = sub_1EAA920(a1: v24, a2: v23, a3: v136);
    v21 = v129;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v113 + 40;
    *(_DWORD *)v113 = 40470128;
    *(_DWORD *)(v113 + 4) = 0;
    *(_QWORD *)(v113 + 8) = 0;
    *(_QWORD *)(v113 + 16) = 0;
    *(_QWORD *)(v113 + 24) = 0;
    *(_QWORD *)(v113 + 32) = 0;
  }
  *(_DWORD *)(v113 + 20) = 46923644;
  *(_DWORD *)(v113 + 16) = v21;
  *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - (_QWORD)v17) >> 3;
  *(_DWORD *)(v113 + 8) = 46385583;
  goto LABEL_140;
}
