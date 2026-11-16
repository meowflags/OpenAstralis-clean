// sub_18276EAE0
// rva 0x0276eae0  size 255  section .text  group text
// window base 0x18276eae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18276EAE0(
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
  _DWORD *v21; // r14
  __m128i v22; // xmm8
  __m128i v23; // xmm9
  __m128i v24; // xmm10
  __m128i v25; // xmm11
  __m128i v26; // xmm12
  __m128i v27; // xmm13
  __m128i v28; // xmm14
  __m128i v29; // xmm15
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r11
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __m128i v42; // xmm7
  __m128i v43; // xmm6
  __m128i v44; // xmm5
  __m128i v45; // xmm4
  __m128i v46; // xmm3
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __m128i v62; // xmm7
  __m128i v63; // xmm6
  __m128i v64; // xmm5
  __m128i v65; // xmm4
  __m128i v66; // xmm3
  __m128i v67; // xmm2
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r11
  __int64 v75; // r10
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __m128i v82; // xmm7
  __m128i v83; // xmm6
  __m128i v84; // xmm5
  __m128i v85; // xmm4
  __m128i v86; // xmm3
  __m128i v87; // xmm2
  __m128i v88; // xmm1
  __m128i v89; // xmm0
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rsi
  int v98; // edx
  int v99; // ecx
  int v100; // edi
  int v101; // esi
  int v102; // r8d
  int v103; // r9d
  __m128i v105[16]; // [rsp+168h] [rbp-598h] BYREF
  __int64 v106; // [rsp+268h] [rbp-498h]
  __int64 v107; // [rsp+270h] [rbp-490h]
  __int64 v108; // [rsp+278h] [rbp-488h]
  __int64 v109; // [rsp+280h] [rbp-480h]
  __int64 v110; // [rsp+288h] [rbp-478h]
  __int64 v111; // [rsp+290h] [rbp-470h]
  __int64 v112; // [rsp+298h] [rbp-468h]
  __int64 v113; // [rsp+2A0h] [rbp-460h]
  __int64 v114; // [rsp+2A8h] [rbp-458h]
  __int64 v115; // [rsp+2B0h] [rbp-450h]
  __int64 v116; // [rsp+2B8h] [rbp-448h]
  __int64 v117; // [rsp+2C0h] [rbp-440h]
  __m128i v118[16]; // [rsp+2D0h] [rbp-430h] BYREF
  __int64 v119; // [rsp+3D0h] [rbp-330h]
  __int64 v120; // [rsp+3D8h] [rbp-328h]
  __int64 v121; // [rsp+3E0h] [rbp-320h]
  __int64 v122; // [rsp+3E8h] [rbp-318h]
  __int64 v123; // [rsp+3F0h] [rbp-310h]
  __int64 v124; // [rsp+3F8h] [rbp-308h]
  __int64 v125; // [rsp+400h] [rbp-300h]
  __int64 v126; // [rsp+408h] [rbp-2F8h]
  __int64 v127; // [rsp+410h] [rbp-2F0h]
  __int64 v128; // [rsp+418h] [rbp-2E8h]
  __int64 v129; // [rsp+420h] [rbp-2E0h]
  __int64 v130; // [rsp+428h] [rbp-2D8h]
  __m128i v131[16]; // [rsp+438h] [rbp-2C8h] BYREF
  __int64 v132; // [rsp+538h] [rbp-1C8h]
  __int64 v133; // [rsp+540h] [rbp-1C0h]
  __int64 v134; // [rsp+548h] [rbp-1B8h]
  __int64 v135; // [rsp+550h] [rbp-1B0h]
  __int64 v136; // [rsp+558h] [rbp-1A8h]
  __int64 v137; // [rsp+560h] [rbp-1A0h]
  __int64 v138; // [rsp+568h] [rbp-198h]
  __int64 v139; // [rsp+570h] [rbp-190h]
  __int64 v140; // [rsp+578h] [rbp-188h]
  __int64 v141; // [rsp+580h] [rbp-180h]
  __int64 v142; // [rsp+588h] [rbp-178h]
  __int64 v143; // [rsp+590h] [rbp-170h]
  __m128i v144[16]; // [rsp+5A0h] [rbp-160h] BYREF
  __int64 v145; // [rsp+6A0h] [rbp-60h]
  __int64 v146; // [rsp+6A8h] [rbp-58h]
  __int64 v147; // [rsp+6B0h] [rbp-50h]
  __int64 v148; // [rsp+6B8h] [rbp-48h]
  __int64 v149; // [rsp+6C0h] [rbp-40h]
  __int64 v150; // [rsp+6C8h] [rbp-38h]
  __int64 v151; // [rsp+6D0h] [rbp-30h]
  __int64 v152; // [rsp+6D8h] [rbp-28h]
  __int64 v153; // [rsp+6E0h] [rbp-20h]
  __int64 v154; // [rsp+6E8h] [rbp-18h]
  __int64 v155; // [rsp+6F0h] [rbp-10h]

  v145 = v20;
  v146 = v19;
  v147 = v18;
  v148 = a6;
  v149 = a5;
  v150 = a1;
  v151 = a2;
  v152 = v16;
  v153 = a3;
  v154 = a4;
  v155 = v15;
  v144[0] = v29;
  v144[1] = v28;
  v144[2] = v27;
  v144[3] = v26;
  v144[4] = v25;
  v144[5] = v24;
  v144[6] = v23;
  v144[7] = v22;
  v144[8] = (__m128i)a14.m128_i128;
  v144[9] = (__m128i)a13.m128_i128;
  v144[10] = (__m128i)a12.m128_i128;
  v144[11] = (__m128i)a11.m128_i128;
  v144[12] = (__m128i)a10.m128_i128;
  v144[13] = (__m128i)a9.m128_i128;
  v144[14] = (__m128i)a8.m128_i128;
  v144[15] = (__m128i)a7.m128_i128;
  sub_182771FC0(a1, a2, a3: 1);
  v33 = sub_1827697E0(a1: v31, a2: v32, a3: v21 + 94166988, a4: v30, a5: (__int64)&a15);
  __builtin_debugtrap();
  v143 = v17;
  v132 = v20;
  v133 = v34;
  v134 = v35;
  v135 = v36;
  v136 = v37;
  v137 = v38;
  v138 = v39;
  v139 = v16;
  v140 = v40;
  v141 = v41;
  v142 = v33;
  v131[0] = v29;
  v131[1] = v28;
  v131[2] = v27;
  v131[3] = v26;
  v131[4] = v25;
  v131[5] = v24;
  v131[6] = v23;
  v131[7] = v22;
  v131[8] = v42;
  v131[9] = v43;
  v131[10] = v44;
  v131[11] = v45;
  v131[12] = v46;
  v131[13] = v47;
  v131[14] = v48;
  v131[15] = v49;
  sub_182771FC0(a1: v38, a2: v39, a3: 1);
  v53 = sub_1827697E0(a1: v51, a2: v52, a3: v21 + 94166634, a4: v50, a5: (__int64)v144);
  __builtin_debugtrap();
  v130 = v17;
  v119 = v20;
  v120 = v54;
  v121 = v55;
  v122 = v56;
  v123 = v57;
  v124 = v58;
  v125 = v59;
  v126 = v16;
  v127 = v60;
  v128 = v61;
  v129 = v53;
  v118[0] = v29;
  v118[1] = v28;
  v118[2] = v27;
  v118[3] = v26;
  v118[4] = v25;
  v118[5] = v24;
  v118[6] = v23;
  v118[7] = v22;
  v118[8] = v62;
  v118[9] = v63;
  v118[10] = v64;
  v118[11] = v65;
  v118[12] = v66;
  v118[13] = v67;
  v118[14] = v68;
  v118[15] = v69;
  sub_182771FC0(a1: v58, a2: v59, a3: 1);
  v73 = sub_1827697E0(a1: v71, a2: v72, a3: v21 + 94166998, a4: v70, a5: (__int64)v131);
  __builtin_debugtrap();
  v117 = v17;
  v106 = v20;
  v107 = v74;
  v108 = v75;
  v109 = v76;
  v110 = v77;
  v111 = v78;
  v112 = v79;
  v113 = v16;
  v114 = v80;
  v115 = v81;
  v116 = v73;
  v105[0] = v29;
  v105[1] = v28;
  v105[2] = v27;
  v105[3] = v26;
  v105[4] = v25;
  v105[5] = v24;
  v105[6] = v23;
  v105[7] = v22;
  v105[8] = v82;
  v105[9] = v83;
  v105[10] = v84;
  v105[11] = v85;
  v105[12] = v86;
  v105[13] = v87;
  v105[14] = v88;
  v105[15] = v89;
  sub_182771FC0(a1: v78, a2: v79, a3: 1);
  sub_1827697E0(a1: v91, a2: v92, a3: v21 + 94167008, a4: v90, a5: (__int64)v118);
  __builtin_debugtrap();
  sub_182771FC0(a1: v93, a2: v94, a3: 1);
  sub_1827697E0(a1: v96, a2: v97, a3: v21 + 94167018, a4: v95, a5: (__int64)v105);
  __builtin_debugtrap();
  return sub_18276EFE0(a1: v100, a2: v101, a3: v98, a4: v99, a5: v102, a6: v103);
}
