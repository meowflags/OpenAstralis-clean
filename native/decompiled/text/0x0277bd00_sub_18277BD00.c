// sub_18277BD00
// rva 0x0277bd00  size 1161  section .text  group text
// window base 0x18277bd00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277BD00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  __m128 v57; // xmm0
  __m128 v58; // xmm1
  __m128 v59; // xmm2
  __m128 v60; // xmm3
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  __m128 v63; // xmm6
  __m128 v64; // xmm7
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r8
  __int64 v74; // r9
  __m128 v75; // xmm0
  __m128 v76; // xmm1
  __m128 v77; // xmm2
  __m128 v78; // xmm3
  __m128 v79; // xmm4
  __m128 v80; // xmm5
  __m128 v81; // xmm6
  __m128 v82; // xmm7
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // r8
  __int64 v90; // r9
  __m128 v91; // xmm0
  __m128 v92; // xmm1
  __m128 v93; // xmm2
  __m128 v94; // xmm3
  __m128 v95; // xmm4
  __m128 v96; // xmm5
  __m128 v97; // xmm6
  __m128 v98; // xmm7
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // r8
  __int64 v105; // r9
  __m128 v106; // xmm0
  __m128 v107; // xmm1
  __m128 v108; // xmm2
  __m128 v109; // xmm3
  __m128 v110; // xmm4
  __m128 v111; // xmm5
  __m128 v112; // xmm6
  __m128 v113; // xmm7
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // r9
  __m128 v124; // xmm0
  __m128 v125; // xmm1
  __m128 v126; // xmm2
  __m128 v127; // xmm3
  __m128 v128; // xmm4
  __m128 v129; // xmm5
  __m128 v130; // xmm6
  __m128 v131; // xmm7
  __int64 i; // rax
  __int64 v133; // rdx
  __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // rdi
  __int64 v141; // rsi
  __int64 result; // rax
  __int64 v143; // rdi
  __int64 v144; // rsi
  int v145; // edx
  int v146; // ecx
  int v147; // edi
  int v148; // esi
  int v149; // r8d
  int v150; // r9d
  char v151; // [rsp+0h] [rbp-58h] BYREF
  __int64 v152; // [rsp+8h] [rbp-50h]
  unsigned int v153; // [rsp+14h] [rbp-44h]
  __int64 v154; // [rsp+18h] [rbp-40h]
  unsigned int v155; // [rsp+24h] [rbp-34h]
  __int64 v156; // [rsp+28h] [rbp-30h]
  __int64 v157; // [rsp+30h] [rbp-28h]
  __int64 v158; // [rsp+38h] [rbp-20h]
  int v159; // [rsp+40h] [rbp-18h]
  unsigned int v160; // [rsp+44h] [rbp-14h]
  unsigned int v161; // [rsp+48h] [rbp-10h]
  unsigned int v162; // [rsp+4Ch] [rbp-Ch]
  _DWORD *v163; // [rsp+50h] [rbp-8h]

  v163 = a5;
  if ( (unsigned __int64)&v151 <= *(_QWORD *)(v9 + 8) )
  {
    *(double *)v91.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_50;
  }
  v158 = v8 + 376612880;
  v10 = MEMORY[0x1820841E0](a1, a2, a3: v8 + 376612880);
  v14 = MEMORY[0x182084BC0](a1: v12, a2: v13, a3: v10, a4: v11, a5: v163);
  v18 = MEMORY[0x1820846E0](a1: v16, a2: v17, a3: v14, a4: v15, a5: 1);
  v22 = v163[5];
  if ( v22 >= 3 )
  {
    if ( v22 == 3 )
    {
      v23 = v8 + 367455056;
    }
    else
    {
      if ( v22 != 4 )
      {
LABEL_9:
        v23 = v8 + 367455224;
        goto LABEL_10;
      }
      v23 = v8 + 367454952;
    }
  }
  else if ( v22 >= 2 )
  {
    v23 = v8 + 367455000;
  }
  else if ( v22 != 0 )
  {
    if ( v22 != 1 )
      goto LABEL_9;
    v23 = v8 + 367455112;
  }
  else
  {
    v23 = v8 + 367455168;
  }
LABEL_10:
  MEMORY[0x182084840](a1: v20, a2: v21, a3: v18, a4: v19, a5: v23);
  v162 = v163[81];
  v157 = v8 + 372990000;
  v26 = MEMORY[0x182084840](a1: v24, a2: v25, a3: v158, a4: v8 + 372990000, a5: v8 + 372990000);
  if ( v162 != 0 )
  {
    if ( v162 == 1 )
    {
      v29 = v8 + 367995344;
    }
    else if ( v162 == 2 )
    {
      v29 = v8 + 366873376;
    }
    else
    {
      v29 = v8 + 369809168;
    }
  }
  else
  {
    v29 = v8 + 372361016;
  }
  v30 = MEMORY[0x182084840](a1: v27, a2: v28, a3: v26, a4: v162, a5: v29);
  v156 = v8 + 372674176;
  MEMORY[0x182084840](a1: v31, a2: v32, a3: v30, a4: v8 + 372674176, a5: v8 + 372674176);
  v155 = v163[18];
  v35 = v8 + 8LL * v155;
  v154 = v35;
  if ( v155 == 0 )
  {
    MEMORY[0x182084840](a1: v33, a2: v34, a3: v158, a4: v35, a5: v8 + 372901808);
    goto LABEL_22;
  }
  v36 = MEMORY[0x182084840](a1: v33, a2: v34, a3: v158, a4: v35, a5: v8 + 373045416);
  v39 = MEMORY[0x182084840](a1: v37, a2: v38, a3: v36, a4: v155, a5: v8 + 8LL * *(unsigned int *)(v8 + 8LL * v155 + 4));
  v43 = MEMORY[0x182084840](a1: v41, a2: v42, a3: v39, a4: v40, a5: v8 + 372880464);
  if ( v154 == v8 )
    JUMPOUT(0x304EC4E78LL);
  MEMORY[0x182084BC0](a1: v44, a2: v45, a3: v43, a4: v154, a5: v154);
  v153 = *(_DWORD *)(v8 + 8LL * v155) >> 3;
  v152 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v153 + 208)))(
           a1: v46,
           a2: v47,
           a3: v154);
  v51 = MEMORY[0x182084840](a1: v49, a2: v50, a3: v158, a4: v48, a5: v157);
  v65 = v152;
  if ( v152 == v8 )
    goto LABEL_52;
  v66 = MEMORY[0x182084840](a1: v53, a2: v54, a3: v51, a4: v152, a5: v8 + 8LL * *(unsigned int *)(v152 + 4));
  MEMORY[0x182084840](a1: v68, a2: v69, a3: v66, a4: v67, a5: v156);
  if ( *(__int16 *)(v8 + 8LL * v153 + 62) >= 3
    && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8LL * v153 + 16) + 20) == 70129 )
  {
LABEL_37:
    MEMORY[0x182084840](a1: v71, a2: v72, a3: v158, a4: v70, a5: v8 + 372635704);
    v83 = v155;
LABEL_20:
    if ( *(_BYTE *)(v8 + 8 * v83 + 100) != 0 )
      MEMORY[0x182084840](a1: v71, a2: v72, a3: v158, a4: v70, a5: v8 + 372627496);
LABEL_22:
    MEMORY[0x182084180](a1: v71, a2: v72, a3: v158, a4: v70, a5: 1);
    if ( v155 != 0 )
    {
      v99 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                               + *(_QWORD *)(v8
                                                                           + 8LL * (*(_DWORD *)(v8 + 8LL * v155) >> 3)
                                                                           + 200)))(
              a1: v87,
              a2: v88,
              a3: v154);
      if ( v99 != v8 )
      {
        v152 = v99;
        v114 = *(unsigned int *)(v99 + 8);
        v161 = v114;
        if ( (_DWORD)v114 == 0 )
        {
          v160 = 0;
LABEL_34:
          result = MEMORY[0x182084500](a1: v102, a2: v103, a3: v158, a4: v114, a5: 0);
          if ( *(int *)(v9 + 16) <= 0 )
            return sub_18277F280(a1: v143, a2: v144, a3: v160);
          return result;
        }
        v115 = *(unsigned int *)(v99 + 12);
        if ( (_DWORD)v115 != 0 )
        {
          v156 = v8 + 8 * v115;
          v116 = MEMORY[0x184FCEC60](a1: v102, a2: v103, a3: v156);
          v120 = MEMORY[0x182084840](a1: v118, a2: v119, a3: v158, a4: v117, a5: v116);
          MEMORY[0x1820841E0](a1: v121, a2: v122, a3: v120);
          for ( i = 1; ; i = (unsigned int)(v159 + 1) )
          {
            v114 = v161;
            if ( (int)v161 <= (int)i )
              break;
            if ( v161 <= (unsigned int)i )
              goto LABEL_55;
            v133 = *(unsigned int *)(v152 + 4 * i + 12);
            v134 = v8 + 8 * v133;
            if ( (_DWORD)v133 == 0 )
              goto LABEL_56;
            v159 = i;
            v156 = v8 + 8 * v133;
            v135 = MEMORY[0x184FCEC60](a1: v102, a2: v134, a3: v156);
            v139 = MEMORY[0x182084840](a1: v137, a2: v138, a3: v158, a4: v136, a5: v135);
            MEMORY[0x1820841E0](a1: v140, a2: v141, a3: v139);
          }
          v160 = i;
          goto LABEL_34;
        }
        goto LABEL_53;
      }
      goto LABEL_51;
    }
LABEL_50:
    sub_182771080(
      a1: v87,
      a2: v88,
      a3: v85,
      a4: v86,
      a5: v89,
      a6: v90,
      a7: v91,
      a8: v92,
      a9: v93,
      a10: v94,
      a11: v95,
      a12: v96,
      a13: v97,
      a14: v98,
      a15: v151);
LABEL_51:
    sub_182771080(
      a1: v102,
      a2: v103,
      a3: v100,
      a4: v101,
      a5: v104,
      a6: v105,
      a7: v106,
      a8: v107,
      a9: v108,
      a10: v109,
      a11: v110,
      a12: v111,
      a13: v112,
      a14: v113,
      a15: v151);
LABEL_52:
    sub_182771080(
      a1: v53,
      a2: v54,
      a3: v52,
      a4: v65,
      a5: v55,
      a6: v56,
      a7: v57,
      a8: v58,
      a9: v59,
      a10: v60,
      a11: v61,
      a12: v62,
      a13: v63,
      a14: v64,
      a15: v151);
LABEL_53:
    sub_182771080(
      a1: v102,
      a2: v103,
      a3: v115,
      a4: v114,
      a5: v104,
      a6: v105,
      a7: v106,
      a8: v107,
      a9: v108,
      a10: v109,
      a11: v110,
      a12: v111,
      a13: v112,
      a14: v113,
      a15: v151);
    goto LABEL_54;
  }
  v83 = v155;
  v84 = *(unsigned int *)(v8 + 8LL * v155 + 12);
  if ( (_DWORD)v84 != 0 )
  {
    if ( *(_BYTE *)(v8 + 8 * v84 + 32) == 0 )
      goto LABEL_20;
    goto LABEL_37;
  }
LABEL_54:
  LODWORD(i) = sub_182771080(
                 a1: v71,
                 a2: v72,
                 a3: v84,
                 a4: v70,
                 a5: v73,
                 a6: v74,
                 a7: v75,
                 a8: v76,
                 a9: v77,
                 a10: v78,
                 a11: v79,
                 a12: v80,
                 a13: v81,
                 a14: v82,
                 a15: v151);
LABEL_55:
  v159 = i;
  LODWORD(i) = sub_182771220(
                 a1: v102,
                 a2: v103,
                 a3: (unsigned int)i,
                 a4: v114,
                 a5: v161,
                 a6: v123,
                 a7: v124,
                 a8: v125,
                 a9: v126,
                 a10: v127,
                 a11: v128,
                 a12: v129,
                 a13: v130,
                 a14: v131,
                 a15: v151);
LABEL_56:
  sub_182771080(
    a1: v102,
    a2: v134,
    a3: (unsigned int)i,
    a4: v114,
    a5: (__int64)v163,
    a6: v123,
    a7: v124,
    a8: v125,
    a9: v126,
    a10: v127,
    a11: v128,
    a12: v129,
    a13: v130,
    a14: v131,
    a15: v151);
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18277C1A0(a1: v147, a2: v148, a3: v145, a4: v146, a5: v149, a6: v150, a7);
}
