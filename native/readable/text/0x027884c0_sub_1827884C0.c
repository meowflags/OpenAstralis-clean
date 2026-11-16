// sub_27884C0
// rva 0x027884c0  size 249  section .text  group text
// window base 0x1827884c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27884C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rdx
  int v45; // ebx
  unsigned int v46; // ebp
  __int64 v47; // rsi
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  unsigned int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r9
  __int64 v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rbx
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // r9
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm2
  __m128 v79; // xmm3
  __m128 v80; // xmm4
  __m128 v81; // xmm5
  __m128 v82; // xmm6
  __m128 v83; // xmm7
  unsigned __int64 v84; // rdx
  _DWORD *v85; // rax
  double v86; // xmm0_8
  _DWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // rsi
  unsigned __int64 v91; // rbx
  __int64 v92; // [rsp-28h] [rbp-3E0h] BYREF
  _DWORD *v93; // [rsp+0h] [rbp-3B8h]
  _DWORD *v94; // [rsp+8h] [rbp-3B0h]
  unsigned __int64 v95; // [rsp+10h] [rbp-3A8h]
  _BYTE v96[16]; // [rsp+18h] [rbp-3A0h] BYREF
  _BYTE v97[16]; // [rsp+28h] [rbp-390h] BYREF
  __int64 v98[66]; // [rsp+38h] [rbp-380h] BYREF
  _DWORD v99[40]; // [rsp+248h] [rbp-170h] BYREF
  unsigned int v100; // [rsp+2E8h] [rbp-D0h]
  int v101; // [rsp+2ECh] [rbp-CCh]
  __int64 v102; // [rsp+2F0h] [rbp-C8h]
  int v103; // [rsp+2FCh] [rbp-BCh]
  _BYTE *v104; // [rsp+300h] [rbp-B8h]
  _BYTE *v105; // [rsp+308h] [rbp-B0h]
  __int64 v106; // [rsp+310h] [rbp-A8h]
  __int64 v107; // [rsp+318h] [rbp-A0h]
  unsigned __int64 v108; // [rsp+320h] [rbp-98h]
  unsigned int v109; // [rsp+32Ch] [rbp-8Ch]
  int v110; // [rsp+330h] [rbp-88h]
  int v111; // [rsp+334h] [rbp-84h]
  int v112; // [rsp+338h] [rbp-80h]
  int v113; // [rsp+33Ch] [rbp-7Ch]
  __int64 v114; // [rsp+340h] [rbp-78h]
  __int64 *v115; // [rsp+348h] [rbp-70h]
  int v116; // [rsp+354h] [rbp-64h]
  BOOL v117; // [rsp+358h] [rbp-60h]
  int v118; // [rsp+35Ch] [rbp-5Ch]
  unsigned int v119; // [rsp+360h] [rbp-58h]
  unsigned int v120; // [rsp+364h] [rbp-54h]
  int v121; // [rsp+368h] [rbp-50h]
  int v122; // [rsp+36Ch] [rbp-4Ch]
  char *v123; // [rsp+370h] [rbp-48h]
  __int64 v124; // [rsp+378h] [rbp-40h]
  __int64 v125; // [rsp+380h] [rbp-38h] BYREF
  char v126[8]; // [rsp+388h] [rbp-30h] BYREF
  __int64 v127; // [rsp+390h] [rbp-28h]
  __int64 v128; // [rsp+398h] [rbp-20h]
  int v129; // [rsp+3A4h] [rbp-14h]
  __int64 v130; // [rsp+3A8h] [rbp-10h]
  int v131; // [rsp+3B4h] [rbp-4h]

  if ( (unsigned __int64)&v125 > *(_QWORD *)(v7 + 8) )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 64) > *(_QWORD *)(v7 + 32) )
    {
      v131 = a5;
      v130 = a3;
      v8 = sub_1EAA920(a1, a2, a3: 34326440);
      a5 = v131;
      a3 = v130;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 64;
      *(_DWORD *)v8 = 34326440;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0;
      *(_QWORD *)(v8 + 56) = 0;
    }
    v131 = a5;
    v127 = v8;
    v129 = 2 * a5;
    v128 = 2 * a5;
    v130 = a3;
    sub_550CE80(a1, a2, a3: v8, a4: v128, a5: a3, a6: v128);
    v9 = v127;
    *(_BYTE *)(v127 + 41) = 0;
    *(_BYTE *)(v9 + 42) = 1;
    result = sub_550D380(a1: v10, a2: v11, a3: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v16, a3: v13, a4: v14);
    return result;
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v95 = v19;
  if ( (unsigned __int64)&v92 <= *(_QWORD *)(v7 + 8) )
  {
    v52 = sub_1EB84E0();
    goto LABEL_108;
  }
  v123 = (char *)v99;
  v99[0] = 156;
  sub_278AE40(a1: v17, a2: v18, a3: v99);
  v122 = sub_4FFC820(a1: v21, a2: v22, a3: v6 + 365179232, a4: v20, a5: v6 + 372450184, a6: 3);
  v23 = v123[154];
  v121 = *((_DWORD *)v123 + 4);
  v120 = *((_DWORD *)v123 + 1);
  v119 = *((_DWORD *)v123 + 2);
  v118 = *((_DWORD *)v123 + 3);
  v117 = (_BYTE)v23 == 1;
  v116 = v23;
  v115 = v98;
  v114 = sub_15A85E0(a1: v119, a2: v120, a3: v6 + 376669672, a4: v123, a5: 0);
  v113 = 259 - sub_278B180(a1: v24, a2: v25, a3: v114);
  v28 = sub_278AE20(a1: v26, a2: v27, a3: v115);
  if ( v28 != 0 )
  {
    if ( v28 > v113 )
    {
      v124 = v5;
      v112 = v118;
      v111 = v119;
      v47 = v120;
      v110 = v28;
    }
    else
    {
      v110 = v28;
      sub_278B1A0(a1: v30, a2: v31, a3: v115, a4: v29, a5: v114, a6: (unsigned int)(260 - v28));
      v35 = sub_278AFC0(a1: v33, a2: v34, a3: v115, a4: v32, a5: 0);
      v109 = v35;
      if ( v35 != 0 )
      {
        v108 = v35;
        v107 = v35;
        v37 = sub_278B120(a1: v30, a2: v36, a3: v35);
        v107 = v37;
        if ( v37 != 0 )
        {
          v108 = (unsigned __int64)MEMORY[0x10e45030]/* 0x10e45030 */;
          if ( (unsigned int)sub_278B000(a1: v37, a2: v38, a3: v115, a4: MEMORY[0x10e45030]/* 0x10e45030 */, a5: 0, a6: v109) != 0
            && (v106 = sub_15A85E0(a1: v41, a2: v42, a3: v6 + 376669712, a4: v40, a5: 0),
                v105 = v96,
                v104 = v97,
                (unsigned int)sub_278B040(a1: v97, a2: v43, a3: v107, a4: v96, a5: v106, a6: v96) != 0) )
          {
            v44 = *(_QWORD *)v105;
            v45 = *(int *)(*(_QWORD *)v105 + 16LL) >> 16;
            v46 = (__int16)*(_DWORD *)(*(_QWORD *)v105 + 16LL);
            v103 = *(int *)(*(_QWORD *)v105 + 20LL) >> 16;
            v102 = v44;
            v101 = v45;
            v100 = v46;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))v108)(a1: v41, a2: v42, a3: v44, a4: v107);
            v124 = v5;
            v112 = v103;
            v111 = v100;
            v47 = (unsigned int)v101;
          }
          else
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))v108)(a1: v41, a2: v42, a3: v39, a4: v107);
            v124 = v5;
            v112 = v118;
            v111 = v119;
            v47 = v120;
          }
        }
        else
        {
          v124 = v5;
          v112 = v118;
          v111 = v119;
          v47 = v120;
        }
      }
      else
      {
        v124 = v5;
        v112 = v118;
        v111 = v119;
        v47 = v120;
      }
    }
  }
  else
  {
    v124 = v5;
    v112 = v118;
    v111 = v119;
    v47 = v120;
    v110 = 0;
  }
  v101 = v47;
  v48 = sub_50130C0(a1: v30, a2: v47, a3: 1, a4: v29, a5: (unsigned int)v47);
  v52 = sub_50130C0(a1: v50, a2: v51, a3: v48, a4: v49, a5: (unsigned int)v111);
  v55 = v6 + 373281248;
  if ( (v52 & 0x80000000) != 0 )
  {
LABEL_108:
    v100 = v52;
    v71 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v71 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v71 = sub_1EAA920(a1: v53, a2: v54, a3: 34082880, a4: v55);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v71 + 40;
      *(_DWORD *)v71 = 34082880;
      *(_DWORD *)(v71 + 4) = 0;
      *(_QWORD *)(v71 + 8) = 0;
      *(_QWORD *)(v71 + 16) = 0;
      *(_QWORD *)(v71 + 24) = 0;
      *(_QWORD *)(v71 + 32) = 0;
    }
    *(_DWORD *)(v71 + 20) = 46923644;
    *(_DWORD *)(v71 + 16) = *(_DWORD *)(v6 + 374343896);
    *(_DWORD *)(v71 + 12) = (unsigned __int64)(v71 - v6) >> 3;
    v94 = (_DWORD *)v71;
    sub_503B9A0(a1: v53, a2: v54, a3: v71, a4: v71, a5: 0);
    v84 = (unsigned __int64)v94;
    v94[2] = 46004603;
    if ( (*(_DWORD *)v84 & 2) != 0 )
    {
      v72 = v84 & 0xFFFFFFFFFFF80000LL;
      v91 = (v84 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v84 & 0xFFFFFFFFFFF80000LL) + ((v84 - v91) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v84 & 0xFFFFFFFFFFF80000LL) + ((v84 - v91) >> 9) + 0x38) = 0;
      v85 = (_DWORD *)v84;
    }
    else
    {
      v85 = (_DWORD *)v84;
    }
    while ( 1 )
    {
      *(_QWORD *)&v86 = sub_2769900(
                          a1: v73,
                          a2: v74,
                          a3: v85,
                          a4: v72,
                          a5: (__int64)v126,
                          a6: v75,
                          a7: v76,
                          a8: v77,
                          a9: v78,
                          a10: v79,
                          a11: v80,
                          a12: v81,
                          a13: v82,
                          a14: v83).m128i_u64[0];
      v93 = v87;
      ((void (__fastcall *)(__int64, __int64, __int64, __int64, double))v108)(
        a1: v89,
        a2: v90,
        a3: v88,
        a4: v107,
        a5: v86);
      v85 = v93;
    }
  }
  v56 = *(_QWORD *)(v7 + 40);
  v57 = (v52 + 19LL) & 0x1FFFFFFF8LL;
  if ( v57 >= 0x20000 || (v58 = v56 + v57) > *(_QWORD *)(v7 + 32) )
  {
    v94 = (_DWORD *)(v6 + 373281248);
    v100 = v52;
    v56 = sub_1EAA840(a1: 34082368, a2: v54, a3: 34082368, a4: v55, a5: v52);
    v52 = v100;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v58;
    *(_QWORD *)v56 = 34082368;
    *(_DWORD *)(v56 + 8) = v52;
    v94 = (_DWORD *)(v6 + 373281248);
  }
  v93 = (_DWORD *)v56;
  v100 = v52;
  sub_1EB4960(a1: v52, a2: 0, a3: v6 + 376351544, a4: v55, a5: 0, a6: v56);
  v60 = sub_5011920(a1: (unsigned int)v111, a2: v6 + 58185048, a3: v100, a4: v59, a5: 0, a6: v93);
  v62 = sub_5011920(a1: (unsigned int)v101, a2: v94, a3: v60, a4: v61, a5: 0, a6: v93);
  v65 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v65 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v103 = v62;
    v66 = sub_1EAA920(a1: 34082680, a2: v64, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v65 + 24;
    *(_DWORD *)v65 = 34082680;
    *(_DWORD *)(v65 + 4) = 0;
    *(_QWORD *)(v65 + 8) = 0;
    *(_QWORD *)(v65 + 16) = 0;
    v66 = v65;
  }
  v67 = v95;
  *(_DWORD *)(v66 + 4) = ((unsigned __int64)v93 - v6) >> 3;
  *(_DWORD *)(v67 + 24) = (unsigned __int64)(v66 - v6) >> 3;
  if ( (*(_DWORD *)v67 & 2) != 0 )
  {
    v69 = (v67 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v69) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v69) >> 9) + 0x38) = 0;
  }
  if ( v121 == 1 )
  {
    if ( v101 == 4 )
    {
      if ( v111 != 0 )
      {
        if ( v111 == 10 )
        {
          v68 = v6 + 366002264;
          result = v67;
        }
        else
        {
          if ( v111 == 90 )
            v68 = v6 + 366002000;
          else
            v68 = v6 + 366002208;
          result = v67;
        }
      }
      else
      {
        v68 = v6 + 366002312;
        result = v67;
      }
    }
    else
    {
      v68 = v6 + 366002208;
      result = v67;
    }
    goto LABEL_26;
  }
  if ( v121 != 2 )
  {
    v68 = v6 + 366002696;
    result = v67;
    goto LABEL_26;
  }
  if ( v101 < 5 )
  {
    v68 = v6 + 366001952;
    result = v67;
    goto LABEL_26;
  }
  if ( v101 == 5 )
  {
    if ( v111 != 0 )
    {
      if ( v111 == 1 )
      {
        v68 = v6 + 366001384;
        result = v67;
      }
      else if ( v111 == 2 )
      {
        if ( (_BYTE)v116 == 1 )
        {
          if ( v122 != 0 )
          {
            v68 = v6 + 366001384;
            result = v67;
          }
          else
          {
            v68 = v6 + 366002504;
            result = v95;
          }
        }
        else
        {
          v68 = v6 + 366002504;
          result = v67;
        }
      }
      else
      {
        v68 = v6 + 366001896;
        result = v67;
      }
    }
    else
    {
      v68 = v6 + 366002552;
      result = v67;
    }
    goto LABEL_26;
  }
  if ( v101 != 6 )
  {
    if ( v101 == 10 )
    {
      if ( (_BYTE)v116 == 1 )
      {
        if ( v111 != 0 )
        {
          v68 = v6 + 366001896;
          result = v67;
        }
        else
        {
          if ( v112 < 22000 )
            v68 = v6 + 366002648;
          else
            v68 = v6 + 366002600;
          result = v95;
        }
      }
      else if ( v111 != 0 )
      {
        v68 = v6 + 366001896;
        result = v67;
      }
      else if ( v112 < 20348 )
      {
        if ( v112 < 17763 )
          v68 = v6 + 366001600;
        else
          v68 = v6 + 366001544;
        result = v95;
      }
      else
      {
        v68 = v6 + 366001488;
        result = v95;
      }
    }
    else
    {
      v68 = v6 + 366001896;
      result = v67;
    }
    goto LABEL_26;
  }
  if ( (_BYTE)v116 == 1 )
  {
    if ( v111 >= 2 )
    {
      if ( v111 == 2 )
      {
        v68 = v6 + 366002408;
        result = v95;
        goto LABEL_26;
      }
      if ( v111 == 3 )
      {
        v68 = v6 + 366002360;
        result = v95;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v111 == 0 )
      {
        v68 = v6 + 366001432;
        result = v95;
        goto LABEL_26;
      }
      if ( v111 == 1 )
      {
        v68 = v6 + 366002456;
        result = v95;
        goto LABEL_26;
      }
    }
    v68 = v6 + 366001896;
    result = v67;
    goto LABEL_26;
  }
  if ( v111 >= 2 )
  {
    if ( v111 == 2 )
    {
      v68 = v6 + 366001720;
      result = v95;
    }
    else
    {
      if ( v111 != 3 )
      {
LABEL_65:
        v68 = v6 + 366001896;
        result = v67;
        goto LABEL_26;
      }
      v68 = v6 + 366001656;
      result = v95;
    }
  }
  else if ( v111 != 0 )
  {
    if ( v111 != 1 )
      goto LABEL_65;
    v68 = v6 + 366001776;
    result = v95;
  }
  else
  {
    v68 = v6 + 366001840;
    result = v95;
  }
LABEL_26:
  *(_DWORD *)(result + 20) = (unsigned __int64)(v68 - v6) >> 3;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v67 = result & 0xFFFFFFFFFFF80000LL;
    v70 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v70) >> 9) + 0x38) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v70) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v63, a2: v64, a3: v68, a4: v67);
  return result;
}
