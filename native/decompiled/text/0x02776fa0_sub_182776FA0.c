// sub_182776FA0
// rva 0x02776fa0  size 2854  section .text  group text
// window base 0x182776fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182776FA0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // r9
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // ebp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r9
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm2
  __m128 v56; // xmm3
  __m128 v57; // xmm4
  __m128 v58; // xmm5
  __m128 v59; // xmm6
  __m128 v60; // xmm7
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v82; // rsi
  unsigned int v83; // ebp
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // r8
  int v103; // [rsp+0h] [rbp-B8h] BYREF
  int v104; // [rsp+8h] [rbp-B0h]
  __int64 v105; // [rsp+10h] [rbp-A8h]
  __int64 v106; // [rsp+18h] [rbp-A0h]
  int v107; // [rsp+20h] [rbp-98h]
  unsigned int v108; // [rsp+24h] [rbp-94h]
  __int64 v109; // [rsp+28h] [rbp-90h]
  __int64 v110; // [rsp+30h] [rbp-88h]
  __int64 v111; // [rsp+38h] [rbp-80h]
  __int64 v112; // [rsp+40h] [rbp-78h]
  unsigned int v113; // [rsp+4Ch] [rbp-6Ch]
  __int64 v114; // [rsp+50h] [rbp-68h]
  __int64 v115; // [rsp+58h] [rbp-60h]
  unsigned int v116; // [rsp+64h] [rbp-54h]
  unsigned int v117; // [rsp+68h] [rbp-50h]
  unsigned int v118; // [rsp+6Ch] [rbp-4Ch]
  __int64 v119; // [rsp+70h] [rbp-48h]
  unsigned int v120; // [rsp+78h] [rbp-40h]
  unsigned int v121; // [rsp+7Ch] [rbp-3Ch]
  unsigned int v122; // [rsp+80h] [rbp-38h]
  unsigned int v123; // [rsp+84h] [rbp-34h]
  __int64 v124; // [rsp+88h] [rbp-30h]
  __int64 v125; // [rsp+90h] [rbp-28h]
  unsigned int v126; // [rsp+9Ch] [rbp-1Ch]
  __int64 v127; // [rsp+A0h] [rbp-18h]
  unsigned int v128; // [rsp+ACh] [rbp-Ch]
  __int64 v129; // [rsp+B0h] [rbp-8h]

  v115 = a14;
  v114 = a1;
  if ( (unsigned __int64)&v103 <= *(_QWORD *)(v17 + 8) )
  {
    v112 = a13;
    v123 = a11;
    *(double *)a2.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_82;
  }
  v128 = *(_DWORD *)(a1 + 8);
  v18 = 34082368;
  v127 = 34082368;
  v19 = (unsigned __int64)(a13 - v16) >> 3;
  v113 = v19;
  v20 = MEMORY[0x112397BC] & a11;
  v126 = MEMORY[0x112397BC] & a11;
  if ( v128 != 0 )
  {
    v125 = 40540632;
    v124 = 34085680;
    v112 = a13;
    v123 = a11;
    v120 = MEMORY[0x112397BC] & a11;
    v21 = MEMORY[0x184FEBC20](a1, a2: v20, a3: a14, a4: 34082368, a5: 0);
    v32 = v114;
    v33 = *(unsigned int *)(v114 + 12);
    v14 = v16 + 8 * v33;
    v119 = 34084944;
    if ( v21 != 102 )
    {
      v111 = v16 + 8 * v33;
      v118 = v21;
      v34 = sub_182777E80(a1: v114, a2: v22, a3: v115, a4: v33, a5: 1);
      v38 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v38 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v110 = v34;
        v38 = MEMORY[0x181EAA920](a1: v36, a2: v37, a3: v125);
        v34 = v110;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v38 + 32;
        *(_DWORD *)v38 = 40540632;
        *(_DWORD *)(v38 + 4) = 0;
        *(_QWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 16) = 0;
        *(_QWORD *)(v38 + 24) = 0;
      }
      v39 = v126;
      v40 = v113;
      *(_BYTE *)(v38 + 20) = v126;
      *(_DWORD *)(v38 + 4) = v40;
      v41 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int64)(v41 + 24) > *(_QWORD *)(v17 + 32) )
      {
        v106 = v38;
        v110 = v34;
        v41 = MEMORY[0x181EAA920](a1: v36, a2: v39, a3: v124);
        v38 = v106;
        v34 = v110;
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v41 + 24;
        *(_DWORD *)v41 = 34085680;
        *(_DWORD *)(v41 + 4) = 0;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = 0;
      }
      v42 = *(_QWORD *)(v17 + 40);
      v43 = v42 + 32;
      if ( (unsigned __int64)(v42 + 32) > *(_QWORD *)(v17 + 32) )
      {
        v109 = v41;
        v106 = v38;
        v110 = v34;
        v42 = MEMORY[0x181EAA840](a1: v43, a2: v39, a3: v127, a4: v35, a5: 16);
        v41 = v109;
        v38 = v106;
        v34 = v110;
      }
      else
      {
        v44 = v127;
        *(_QWORD *)(v17 + 40) = v43;
        *(_QWORD *)v42 = v44;
        *(_DWORD *)(v42 + 8) = 16;
        *(_DWORD *)(v42 + 12) = 0;
        *(_QWORD *)(v42 + 16) = 0;
        *(_QWORD *)(v42 + 24) = 0;
      }
      *(_DWORD *)(v38 + 8) = (unsigned __int64)(v41 - v16) >> 3;
      if ( (*(_DWORD *)v38 & 2) != 0 )
      {
        v97 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v97) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v97) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v41 + 4) = (unsigned __int64)(v42 - v16) >> 3;
      if ( (*(_DWORD *)v41 & 2) != 0 )
      {
        v98 = v41 & 0xFFFFFFFFFFF80000LL;
        v99 = (v41 - ((v41 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(v98 + v99 + 56) != 0 )
          *(_BYTE *)(v98 + v99 + 56) = 0;
      }
      v14 = v38;
      v120 = *(_DWORD *)(v34 + 12);
      sub_182774880(
        a1: v34,
        a2: v39,
        a3: v38,
        a4: v120,
        a5: v111,
        a6: v118,
        a7: v103,
        a8: v104,
        a9: v105,
        a10: v38,
        a11: v107,
        a12: v109,
        a13: v34,
        a14: v111);
      v129 = v15;
      v105 = v106;
      v18 = v120;
      v46 = 1;
      goto LABEL_13;
    }
    v111 = v16 + 8 * v33;
    v82 = v126;
    v83 = v113;
    v84 = v127;
    if ( (_DWORD)v33 != 0 && *(_DWORD *)(v16 + 8 * v33) >> 3 != 4260335 )
      goto LABEL_84;
    if ( v128 < 2 )
    {
LABEL_83:
      sub_182771220(
        a1: v32,
        a2: v82,
        a3: 1,
        a4: v33,
        a5: 1,
        a6: v23,
        a7: v24,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v103);
LABEL_84:
      sub_18276FC00(
        a1: v32,
        a2: v82,
        a3: (_DWORD *)v14,
        a4: v33,
        a5: (_DWORD *)(v16 + 34082680),
        a6: v23,
        a7: v24,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31,
        a15: v103);
LABEL_85:
      v48 = sub_182771220(
              a1: v50,
              a2: v51,
              a3: v63,
              a4: v49,
              a5: v128,
              a6: v52,
              a7: v53,
              a8: v54,
              a9: v55,
              a10: v56,
              a11: v57,
              a12: v58,
              a13: v59,
              a14: v60,
              a15: v103);
LABEL_86:
      v64 = sub_182771220(
              a1: v50,
              a2: v51,
              a3: v120,
              a4: v48,
              a5: v128,
              a6: v52,
              a7: v53,
              a8: v54,
              a9: v55,
              a10: v56,
              a11: v57,
              a12: v58,
              a13: v59,
              a14: v60,
              a15: v103);
LABEL_87:
      v106 = v14;
      sub_182771220(
        a1: v65,
        a2: v51,
        a3: v126,
        a4: v67,
        a5: v64,
        a6: v52,
        a7: v53,
        a8: v54,
        a9: v55,
        a10: v56,
        a11: v57,
        a12: v58,
        a13: v59,
        a14: v60,
        a15: v103);
LABEL_88:
      sub_18276FC00(
        a1: v65,
        a2: v118,
        a3: (_DWORD *)v14,
        a4: v105,
        a5: (_DWORD *)(v16 + 34082680),
        a6: v115,
        a7: v53,
        a8: v54,
        a9: v55,
        a10: v56,
        a11: v57,
        a12: v58,
        a13: v59,
        a14: v60,
        a15: v103);
      JUMPOUT(0x182777AC6LL);
    }
    v85 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v85 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v85 = MEMORY[0x181EAA920](a1: v114, a2: v126, a3: v125);
      v82 = v126;
      v83 = v113;
      v84 = v127;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v85 + 32;
      *(_DWORD *)v85 = 40540632;
      *(_DWORD *)(v85 + 4) = 0;
      *(_QWORD *)(v85 + 8) = 0;
      *(_QWORD *)(v85 + 16) = 0;
      *(_QWORD *)(v85 + 24) = 0;
    }
    *(_BYTE *)(v85 + 20) = v82;
    *(_DWORD *)(v85 + 4) = v83;
    v86 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v86 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v110 = v85;
      v86 = MEMORY[0x181EAA920](a1: v32, a2: v82, a3: v124);
      v85 = v110;
      v84 = v127;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v86 + 24;
      *(_DWORD *)v86 = 34085680;
      *(_DWORD *)(v86 + 4) = 0;
      *(_QWORD *)(v86 + 8) = 0;
      *(_QWORD *)(v86 + 16) = 0;
    }
    v87 = *(_QWORD *)(v17 + 40);
    v88 = v87 + 32;
    if ( (unsigned __int64)(v87 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v109 = v86;
      v110 = v85;
      v87 = MEMORY[0x181EAA840](a1: v88, a2: v82, a3: v84, a4: v84, a5: 16);
      v86 = v109;
      v85 = v110;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v88;
      *(_QWORD *)v87 = v84;
      *(_DWORD *)(v87 + 8) = 16;
      *(_DWORD *)(v87 + 12) = 0;
      *(_QWORD *)(v87 + 16) = 0;
      *(_QWORD *)(v87 + 24) = 0;
    }
    *(_DWORD *)(v85 + 8) = (unsigned __int64)(v86 - v16) >> 3;
    if ( (*(_DWORD *)v85 & 2) != 0 )
    {
      v100 = (v85 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v85 & 0xFFFFFFFFFFF80000LL) + ((v85 - v100) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v85 & 0xFFFFFFFFFFF80000LL) + ((v85 - v100) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v86 + 4) = (unsigned __int64)(v87 - v16) >> 3;
    if ( (*(_DWORD *)v86 & 2) != 0 )
    {
      v101 = v86 & 0xFFFFFFFFFFF80000LL;
      v102 = (v86 - ((v86 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v101 + v102 + 56) != 0 )
        *(_BYTE *)(v101 + v102 + 56) = 0;
    }
    v108 = *(_DWORD *)(v114 + 16);
    v14 = v85;
    v109 = v16 + 8LL * v108;
    v110 = v85;
    v89 = sub_1827744E0(a1: v114, a2: v82, a3: v85);
    v93 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v93 + 16) > *(_QWORD *)(v17 + 32) )
    {
      v106 = v89;
      v93 = MEMORY[0x181EAA840](a1: v91, a2: v92, a3: v119, a4: v90, a5: 1);
      v89 = v106;
    }
    else
    {
      v94 = v119;
      *(_QWORD *)(v17 + 40) = v93 + 16;
      *(_QWORD *)v93 = v94;
      *(_DWORD *)(v93 + 8) = 1;
      *(_DWORD *)(v93 + 12) = 0;
    }
    *(_DWORD *)(v93 + 12) = v108;
    v95 = v16 + 8LL * *(unsigned int *)(v89 + 8);
    v106 = v89;
    v105 = v93;
    MEMORY[0x18584DE00](a1: v105, a2: v92, a3: v89, a4: v105, a5: v95, a6: v111);
    v129 = v15;
    v105 = v110;
    v18 = 1;
    v46 = 2;
LABEL_13:
    while ( 1 )
    {
      v47 = v115;
      if ( (int)v128 <= (int)v46 )
        break;
      v120 = v46;
      v118 = v18 + 1;
      v48 = MEMORY[0x184FEBC20](a1: v45, a2: (unsigned int)(v18 + 1), a3: v115, a4: v18, a5: (unsigned int)v18);
      if ( v48 == 102 )
      {
        v126 = v120 + 1;
        v63 = v120;
        v64 = v128;
        if ( v128 <= v120 )
          goto LABEL_85;
        v65 = v114;
        v66 = *(unsigned int *)(v114 + 4LL * v120 + 12);
        v14 = v16 + 8 * v66;
        if ( (_DWORD)v66 != 0 && *(_DWORD *)(v16 + 8 * v66) >> 3 != 4260335 )
          goto LABEL_88;
        v67 = v120 + 2;
        if ( v128 <= v126 )
          goto LABEL_87;
        v117 = v120 + 2;
        v106 = v14;
        v113 = *(_DWORD *)(v114 + 4LL * v126 + 12);
        v110 = v16 + 8LL * v113;
        v68 = sub_1827744E0(a1: v114, a2: v110, a3: v105);
        v72 = *(_QWORD *)(v17 + 40);
        if ( (unsigned __int64)(v72 + 16) > *(_QWORD *)(v17 + 32) )
        {
          v111 = v68;
          v72 = MEMORY[0x181EAA840](a1: v70, a2: v71, a3: v119, a4: v69, a5: 1);
          v68 = v111;
        }
        else
        {
          v73 = v119;
          *(_QWORD *)(v17 + 40) = v72 + 16;
          *(_QWORD *)v72 = v73;
          *(_DWORD *)(v72 + 8) = 1;
          *(_DWORD *)(v72 + 12) = 0;
        }
        *(_DWORD *)(v72 + 12) = v113;
        v74 = v16 + 8LL * *(unsigned int *)(v68 + 8);
        v111 = v68;
        v109 = v72;
        MEMORY[0x18584DE00](a1: v109, a2: v71, a3: v68, a4: v109, a5: v74, a6: v106);
        v46 = v117;
        v18 = v118;
      }
      else
      {
        if ( v128 <= v120 )
          goto LABEL_86;
        v126 = v120 + 1;
        v117 = v48;
        v106 = v16 + 8LL * *(unsigned int *)(v114 + 4LL * v120 + 12);
        v61 = sub_182777E80(a1: v114, a2: v51, a3: v115, a4: v128, a5: v118);
        v116 = *(_DWORD *)(v61 + 12);
        sub_182774880(
          a1: v61,
          a2: v62,
          a3: v105,
          a4: v116,
          a5: v106,
          a6: v117,
          a7: v103,
          a8: v104,
          a9: v105,
          a10: v106,
          a11: v107,
          a12: v109,
          a13: v61,
          a14: v111);
        v46 = v126;
        v18 = v116;
      }
    }
    v78 = v105;
    v122 = v18;
    v121 = v46;
  }
  else
  {
    v125 = 40540632;
    v124 = 34085680;
    v112 = a13;
    v123 = a11;
    v46 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v46 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v46 = MEMORY[0x181EAA920](a1, a2: v20, a3: v125);
      v20 = v126;
      LODWORD(v19) = v113;
      v18 = v127;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v46 + 32;
      *(_DWORD *)v46 = 40540632;
      *(_DWORD *)(v46 + 4) = 0;
      *(_QWORD *)(v46 + 8) = 0;
      *(_QWORD *)(v46 + 16) = 0;
      *(_QWORD *)(v46 + 24) = 0;
    }
    *(_BYTE *)(v46 + 20) = v20;
    *(_DWORD *)(v46 + 4) = v19;
    v75 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v75 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v111 = v46;
      v75 = MEMORY[0x181EAA920](a1, a2: v20, a3: v124);
      v46 = v111;
      v18 = v127;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v75 + 24;
      *(_DWORD *)v75 = 34085680;
      *(_DWORD *)(v75 + 4) = 0;
      *(_QWORD *)(v75 + 8) = 0;
      *(_QWORD *)(v75 + 16) = 0;
    }
    v76 = *(_QWORD *)(v17 + 40);
    v77 = v76 + 32;
    if ( (unsigned __int64)(v76 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v110 = v75;
      v111 = v46;
      v76 = MEMORY[0x181EAA840](a1: v77, a2: v20, a3: v127, a4: v18, a5: 16);
      v75 = v110;
      v46 = v111;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v77;
      *(_QWORD *)v76 = v18;
      *(_DWORD *)(v76 + 8) = 16;
      *(_DWORD *)(v76 + 12) = 0;
      *(_QWORD *)(v76 + 16) = 0;
      *(_QWORD *)(v76 + 24) = 0;
    }
    *(_DWORD *)(v46 + 8) = (unsigned __int64)(v75 - v16) >> 3;
    v45 = *(unsigned int *)v46;
    if ( (v45 & 2) != 0 )
    {
      v18 = (v46 & 0xFFFFFFFFFFF80000LL) + 2112;
      v45 = (unsigned __int64)(v46 - v18) >> 9;
      if ( *(_BYTE *)((v46 & 0xFFFFFFFFFFF80000LL) + v45 + 0x38) != 0 )
        *(_BYTE *)((v46 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v46 - v18) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v75 + 4) = (unsigned __int64)(v76 - v16) >> 3;
    v47 = *(unsigned int *)v75;
    if ( (v47 & 2) != 0 )
    {
      v47 = v75 & 0xFFFFFFFFFFF80000LL;
      v45 = (v75 & 0xFFFFFFFFFFF80000LL) + 2112;
      v96 = (unsigned __int64)(v75 - v45) >> 9;
      if ( *(_BYTE *)(v47 + v96 + 56) != 0 )
        *(_BYTE *)(v47 + v96 + 56) = 0;
    }
    v78 = v46;
    v122 = 0;
    v121 = 0;
  }
  v14 = *(unsigned int *)(v78 + 8);
  if ( (_DWORD)v14 == 0 )
  {
LABEL_82:
    sub_182771080(
      a1: v45,
      a2: v20,
      a3: v122,
      a4: v18,
      a5: v121,
      a6: v47,
      a7: a2,
      a8: a3,
      a9: a4,
      a10: a5,
      a11: a6,
      a12: a7,
      a13: a8,
      a14: a9,
      a15: v103);
    goto LABEL_83;
  }
  if ( *(_DWORD *)(v16 + 8 * v14 + 8) != 0 )
  {
    v79 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v79 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v113 = *(_DWORD *)(v78 + 8);
      v110 = v78;
      v79 = MEMORY[0x181EAA920](a1: v45, a2: v20, a3: 34082680);
      v14 = v113;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v79 + 24;
      *(_DWORD *)v79 = 34082680;
      *(_DWORD *)(v79 + 4) = 0;
      *(_QWORD *)(v79 + 8) = 0;
      *(_QWORD *)(v79 + 16) = 0;
      v110 = v78;
    }
    v106 = v79;
    v109 = v16 + 8 * v14;
    MEMORY[0x184FE9280](a1: v45, a2: v20, a3: v79, a4: v18, a5: v109, a6: v16);
    v80 = v106;
  }
  else
  {
    v110 = v78;
    v80 = v16 + 373281248;
  }
  if ( *(int *)(v17 + 16) <= 0 )
    sub_18277F280(a1: v45, a2: v20, a3: v46);
  return v80;
}
