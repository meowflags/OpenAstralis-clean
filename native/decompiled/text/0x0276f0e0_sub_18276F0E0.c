// sub_18276F0E0
// rva 0x0276f0e0  size 255  section .text  group text
// window base 0x18276f0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18276F0E0(
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
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r12
  __int64 v21; // r14
  _QWORD *v22; // r15
  __m128i v23; // xmm8
  __m128i v24; // xmm9
  __m128i v25; // xmm10
  __m128i v26; // xmm11
  __m128i v27; // xmm12
  __m128i v28; // xmm13
  __m128i v29; // xmm14
  __m128i v30; // xmm15
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r11
  __int64 v38; // r10
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __m128i v43; // xmm7
  __m128i v44; // xmm6
  __m128i v45; // xmm5
  __m128i v46; // xmm4
  __m128i v47; // xmm3
  __m128i v48; // xmm2
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // r11
  __int64 v62; // r10
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __m128i v67; // xmm7
  __m128i v68; // xmm6
  __m128i v69; // xmm5
  __m128i v70; // xmm4
  __m128i v71; // xmm3
  __m128i v72; // xmm2
  __m128i v73; // xmm1
  __m128i v74; // xmm0
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 v81; // rsi
  int v82; // edx
  int v83; // ecx
  int v84; // edi
  int v85; // esi
  int v86; // r8d
  int v87; // r9d
  __int64 v89; // [rsp-10h] [rbp-458h] BYREF
  _DWORD *v90; // [rsp+0h] [rbp-448h]
  __m128i v91; // [rsp+8h] [rbp-440h]
  __m128i v92; // [rsp+18h] [rbp-430h]
  __m128i v93; // [rsp+28h] [rbp-420h]
  __m128i v94; // [rsp+38h] [rbp-410h]
  __m128i v95; // [rsp+48h] [rbp-400h]
  __m128i v96; // [rsp+58h] [rbp-3F0h]
  __m128i v97; // [rsp+68h] [rbp-3E0h]
  __m128i v98; // [rsp+78h] [rbp-3D0h]
  __m128i v99; // [rsp+88h] [rbp-3C0h]
  __m128i v100; // [rsp+98h] [rbp-3B0h]
  __m128i v101; // [rsp+A8h] [rbp-3A0h]
  __m128i v102; // [rsp+B8h] [rbp-390h]
  __m128i v103; // [rsp+C8h] [rbp-380h]
  __m128i v104; // [rsp+D8h] [rbp-370h]
  __m128i v105; // [rsp+E8h] [rbp-360h]
  __m128i v106; // [rsp+F8h] [rbp-350h]
  __int64 v107; // [rsp+108h] [rbp-340h]
  __int64 v108; // [rsp+110h] [rbp-338h]
  __int64 v109; // [rsp+118h] [rbp-330h]
  __int64 v110; // [rsp+120h] [rbp-328h]
  __int64 v111; // [rsp+128h] [rbp-320h]
  __int64 v112; // [rsp+130h] [rbp-318h]
  __int64 v113; // [rsp+138h] [rbp-310h]
  __int64 v114; // [rsp+140h] [rbp-308h]
  __int64 v115; // [rsp+148h] [rbp-300h]
  __int64 v116; // [rsp+150h] [rbp-2F8h]
  __int64 v117; // [rsp+158h] [rbp-2F0h]
  __int64 v118; // [rsp+160h] [rbp-2E8h]
  __int64 v119; // [rsp+168h] [rbp-2E0h] BYREF
  _BYTE v120[8]; // [rsp+170h] [rbp-2D8h] BYREF
  _DWORD *v121; // [rsp+178h] [rbp-2D0h]
  __m128i v122; // [rsp+180h] [rbp-2C8h]
  __m128i v123; // [rsp+190h] [rbp-2B8h]
  __m128i v124; // [rsp+1A0h] [rbp-2A8h]
  __m128i v125; // [rsp+1B0h] [rbp-298h]
  __m128i v126; // [rsp+1C0h] [rbp-288h]
  __m128i v127; // [rsp+1D0h] [rbp-278h]
  __m128i v128; // [rsp+1E0h] [rbp-268h]
  __m128i v129; // [rsp+1F0h] [rbp-258h]
  __m128i v130; // [rsp+200h] [rbp-248h]
  __m128i v131; // [rsp+210h] [rbp-238h]
  __m128i v132; // [rsp+220h] [rbp-228h]
  __m128i v133; // [rsp+230h] [rbp-218h]
  __m128i v134; // [rsp+240h] [rbp-208h]
  __m128i v135; // [rsp+250h] [rbp-1F8h]
  __m128i v136; // [rsp+260h] [rbp-1E8h]
  __m128i v137; // [rsp+270h] [rbp-1D8h]
  __int64 v138; // [rsp+280h] [rbp-1C8h]
  __int64 v139; // [rsp+288h] [rbp-1C0h]
  __int64 v140; // [rsp+290h] [rbp-1B8h]
  __int64 v141; // [rsp+298h] [rbp-1B0h]
  __int64 v142; // [rsp+2A0h] [rbp-1A8h]
  __int64 v143; // [rsp+2A8h] [rbp-1A0h]
  __int64 v144; // [rsp+2B0h] [rbp-198h]
  __int64 v145; // [rsp+2B8h] [rbp-190h]
  __int64 v146; // [rsp+2C0h] [rbp-188h]
  __int64 v147; // [rsp+2C8h] [rbp-180h]
  __int64 v148; // [rsp+2D0h] [rbp-178h]
  __int64 v149; // [rsp+2D8h] [rbp-170h]
  __m128i v150[16]; // [rsp+2E8h] [rbp-160h] BYREF
  __int64 v151; // [rsp+3E8h] [rbp-60h]
  __int64 v152; // [rsp+3F0h] [rbp-58h]
  __int64 v153; // [rsp+3F8h] [rbp-50h]
  __int64 v154; // [rsp+400h] [rbp-48h]
  __int64 v155; // [rsp+408h] [rbp-40h]
  __int64 v156; // [rsp+410h] [rbp-38h]
  __int64 v157; // [rsp+418h] [rbp-30h]
  __int64 v158; // [rsp+420h] [rbp-28h]
  __int64 v159; // [rsp+428h] [rbp-20h]
  __int64 v160; // [rsp+430h] [rbp-18h]
  __int64 v161; // [rsp+438h] [rbp-10h]

  v151 = v20;
  v152 = v19;
  v153 = v18;
  v154 = a6;
  v155 = a5;
  v156 = a1;
  v157 = a2;
  v158 = v16;
  v159 = a3;
  v160 = a4;
  v161 = v15;
  v150[0] = v30;
  v150[1] = v29;
  v150[2] = v28;
  v150[3] = v27;
  v150[4] = v26;
  v150[5] = v25;
  v150[6] = v24;
  v150[7] = v23;
  v150[8] = (__m128i)a14.m128_i128;
  v150[9] = (__m128i)a13.m128_i128;
  v150[10] = (__m128i)a12.m128_i128;
  v150[11] = (__m128i)a11.m128_i128;
  v150[12] = (__m128i)a10.m128_i128;
  v150[13] = (__m128i)a9.m128_i128;
  v150[14] = (__m128i)a8.m128_i128;
  v150[15] = (__m128i)a7.m128_i128;
  sub_182771FC0(a1, a2, a3: 1);
  v34 = sub_1827697E0(a1: v32, a2: v33, a3: (_DWORD *)(v21 + 376668160), a4: v31, a5: (__int64)&a15);
  __builtin_debugtrap();
  v149 = v17;
  v138 = v20;
  v139 = v37;
  v140 = v38;
  v141 = v39;
  v142 = v40;
  v143 = v35;
  v144 = v36;
  v145 = v16;
  v146 = v41;
  v147 = v42;
  v148 = v34;
  v122 = v30;
  v123 = v29;
  v124 = v28;
  v125 = v27;
  v126 = v26;
  v127 = v25;
  v128 = v24;
  v129 = v23;
  v130 = v43;
  v131 = v44;
  v132 = v45;
  v133 = v46;
  v134 = v47;
  v135 = v48;
  v136 = v49;
  v137 = v50;
  if ( (unsigned __int64)&v119 > v22[1] )
  {
    sub_182771FC0(a1: v35, a2: v36, a3: 0);
    v54 = v22[5];
    if ( (unsigned __int64)(v54 + 40) > v22[4] )
      goto LABEL_5;
    v22[5] = v54 + 40;
    *(_DWORD *)v54 = 34171952;
    *(_DWORD *)(v54 + 4) = 0;
    *(_QWORD *)(v54 + 8) = 0;
    *(_QWORD *)(v54 + 16) = 0;
    *(_QWORD *)(v54 + 24) = 0;
    *(_QWORD *)(v54 + 32) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v54 + 20) = 46923644;
      *(_DWORD *)(v54 + 16) = *(_DWORD *)(v21 + 374343896);
      *(_DWORD *)(v54 + 12) = (unsigned __int64)(v54 - v21) >> 3;
      v121 = (_DWORD *)v54;
      MEMORY[0x18503B9A0](a1: v52, a2: v53, a3: v54, a4: v51, a5: 0);
      sub_1827697E0(a1: v56, a2: v57, a3: v121, a4: v55, a5: (__int64)v150);
LABEL_5:
      v54 = MEMORY[0x181EAA920](a1: v52, a2: v53, a3: 34171952);
    }
  }
  v58 = MEMORY[0x181EB84E0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v118 = v17;
  v107 = v20;
  v108 = v61;
  v109 = v62;
  v110 = v63;
  v111 = v64;
  v112 = v59;
  v113 = v60;
  v114 = v16;
  v115 = v65;
  v116 = v66;
  v117 = v58;
  v91 = v30;
  v92 = v29;
  v93 = v28;
  v94 = v27;
  v95 = v26;
  v96 = v25;
  v97 = v24;
  v98 = v23;
  v99 = v67;
  v100 = v68;
  v101 = v69;
  v102 = v70;
  v103 = v71;
  v104 = v72;
  v105 = v73;
  v106 = v74;
  if ( (unsigned __int64)&v89 > v22[1] )
  {
    sub_182771FC0(a1: v59, a2: v60, a3: 0);
    v78 = v22[5];
    if ( (unsigned __int64)(v78 + 40) > v22[4] )
      goto LABEL_10;
    v22[5] = v78 + 40;
    *(_DWORD *)v78 = 35966824;
    *(_DWORD *)(v78 + 4) = 0;
    *(_QWORD *)(v78 + 8) = 0;
    *(_QWORD *)(v78 + 16) = 0;
    *(_QWORD *)(v78 + 24) = 0;
    *(_QWORD *)(v78 + 32) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v78 + 20) = 46923644;
      *(_DWORD *)(v78 + 16) = *(_DWORD *)(v21 + 374343896);
      *(_DWORD *)(v78 + 12) = (unsigned __int64)(v78 - v21) >> 3;
      v90 = (_DWORD *)v78;
      MEMORY[0x18503B9A0](a1: v76, a2: v77, a3: v78, a4: v75, a5: 0);
      sub_1827697E0(a1: v80, a2: v81, a3: v90, a4: v79, a5: (__int64)v120);
LABEL_10:
      v78 = MEMORY[0x181EAA920](a1: v76, a2: v77, a3: 35966824);
    }
  }
  MEMORY[0x181EB84E0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18276F520(a1: v84, a2: v85, a3: v82, a4: v83, a5: v86, a6: v87, a7: a15);
}
