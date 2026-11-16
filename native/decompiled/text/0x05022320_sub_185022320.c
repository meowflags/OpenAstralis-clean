// sub_185022320
// rva 0x05022320  size 1018  section .text  group text
// window base 0x185022320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185022320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 i; // rax
  int j; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  int k; // ebx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rsi
  unsigned int v41; // r10d
  unsigned int v42; // r11d
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r8
  unsigned int v51; // r11d
  unsigned int v52; // r12d
  __int64 v53; // rdi
  __int64 v54; // rdx
  unsigned int v55; // edx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r8
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v63; // r9
  unsigned __int64 n; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdi
  __int64 v68; // rsi
  int v69; // r11d
  int v70; // r12d
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r10
  __int64 v74; // rcx
  __int64 v75; // rsi
  unsigned int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rsi
  unsigned int v81; // r10d
  unsigned int v82; // r10d
  __int64 v83; // rsi
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rsi
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 v94; // r9
  unsigned __int64 v95; // rdi
  __int64 v96; // r8
  unsigned __int64 v97; // r10
  __int64 v98; // rcx
  __int64 v99; // r11
  __int64 v100; // r8
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // r10
  __int64 v103; // r8
  __int64 v104; // rcx
  void *v105; // rdi
  unsigned int v106; // edx
  __int64 m; // rax
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  char v114; // [rsp-10h] [rbp-E0h] BYREF
  _DWORD *v115; // [rsp+0h] [rbp-D0h]
  __int64 v116; // [rsp+8h] [rbp-C8h]
  __int64 v117; // [rsp+10h] [rbp-C0h]
  __int64 v118; // [rsp+18h] [rbp-B8h]
  __int64 v119; // [rsp+20h] [rbp-B0h]
  __int64 v120; // [rsp+28h] [rbp-A8h]
  __int64 v121; // [rsp+30h] [rbp-A0h]
  unsigned int v122; // [rsp+38h] [rbp-98h]
  int v123; // [rsp+3Ch] [rbp-94h]
  int v124; // [rsp+40h] [rbp-90h]
  unsigned int v125; // [rsp+44h] [rbp-8Ch]
  __int64 v126; // [rsp+48h] [rbp-88h]
  int v127; // [rsp+50h] [rbp-80h]
  unsigned int v128; // [rsp+54h] [rbp-7Ch]
  unsigned int v129; // [rsp+58h] [rbp-78h]
  unsigned int v130; // [rsp+5Ch] [rbp-74h]
  unsigned int v131; // [rsp+60h] [rbp-70h]
  unsigned int v132; // [rsp+64h] [rbp-6Ch]
  unsigned int v133; // [rsp+68h] [rbp-68h]
  signed int v134; // [rsp+6Ch] [rbp-64h]
  unsigned int v135; // [rsp+70h] [rbp-60h]
  unsigned int v136; // [rsp+74h] [rbp-5Ch]
  __int64 v137; // [rsp+78h] [rbp-58h]
  __int64 v138; // [rsp+80h] [rbp-50h]
  __int64 v139; // [rsp+88h] [rbp-48h] BYREF
  char v140[8]; // [rsp+90h] [rbp-40h] BYREF
  __int64 v141; // [rsp+98h] [rbp-38h]
  __int64 v142; // [rsp+A0h] [rbp-30h]
  __int64 v143; // [rsp+A8h] [rbp-28h]
  int v144; // [rsp+B4h] [rbp-1Ch]
  __int64 v145; // [rsp+B8h] [rbp-18h]
  int v146; // [rsp+C0h] [rbp-10h]
  int v147; // [rsp+C4h] [rbp-Ch]
  unsigned int v148; // [rsp+C8h] [rbp-8h]
  unsigned int v149; // [rsp+CCh] [rbp-4h]

  if ( (unsigned __int64)&v139 <= *(_QWORD *)(v10 + 8) )
  {
    v147 = a6;
    v146 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v9 )
  {
    v11 = *(_DWORD *)(a3 + 8);
    v12 = v11 >> 1;
    v149 = v11 >> 1;
    if ( (v11 & 0xFFFFFFFE) != 0 )
    {
      if ( *(unsigned __int16 *)(a3 + 12) == a5 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 0;
        do
          ++v13;
        while ( (int)v12 > v13 && *(unsigned __int16 *)(a3 + 2 * v13 + 12) != a5 );
      }
    }
    else
    {
      v13 = 0;
    }
    if ( (int)v12 > v13 )
    {
      v15 = *(_QWORD *)(v10 + 40);
      v16 = *(_QWORD *)(v10 + 32);
      v17 = (v11 + 19LL) & 0x1FFFFFFF8LL;
      if ( v17 >= 0x20000 || v15 + v17 > v16 )
      {
        v148 = v13;
        v147 = a6;
        v146 = a5;
        v143 = a3;
        v15 = MEMORY[0x181EAA840](a1: v17, a2: v16, a3: 34082368, a4: v12, a5: v11);
        v13 = v148;
        v12 = v149;
        a6 = v147;
        a5 = v146;
        a3 = v143;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v15 + v17;
        *(_QWORD *)v15 = 34082368;
        *(_DWORD *)(v15 + 8) = v11;
        *(_DWORD *)(v15 + 12) = 0;
        if ( v17 - 16 >= 0x800 )
        {
          v148 = v13;
          v147 = a6;
          v146 = a5;
          v143 = a3;
          memset((void *)(v15 + 16), 0, v17 - 16);
          v12 = v149;
        }
        else
        {
          for ( i = 16; v17 > i; i += 8LL )
            *(_QWORD *)(v15 + i) = 0;
        }
      }
      if ( v13 >= 1 )
      {
        *(_WORD *)(v15 + 12) = *(_WORD *)(a3 + 12);
        for ( j = 1; v13 > j; ++j )
          *(_WORD *)(v15 + 2 * j + 12) = *(_WORD *)(a3 + 2 * j + 12);
      }
      v20 = 2 * v13;
      v21 = *(unsigned __int16 *)(a3 + v20 + 12);
      if ( (_DWORD)v21 != a5 )
        JUMPOUT(0x30A03D48CLL);
      v22 = (unsigned int)a6;
      *(_WORD *)(v15 + v20 + 12) = a6;
      for ( k = v13 + 1; ; ++k )
      {
        v148 = v21;
        if ( (int)v12 <= k )
          break;
        v24 = 2 * k;
        v21 = *(unsigned __int16 *)(a3 + v24 + 12);
        if ( (_DWORD)v21 != a5 )
          JUMPOUT(0x30A03D4B5LL);
        v22 = (unsigned int)a6;
        *(_WORD *)(v15 + v24 + 12) = a6;
      }
      if ( a5 < 256 || a6 >= 256 )
      {
        v25 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v25 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v145 = 34082680;
          v144 = k;
          v142 = v15;
          v147 = a6;
          v146 = a5;
          v143 = a3;
          v25 = MEMORY[0x181EAA920](a1: v25, a2: v21, a3: 34082680);
          k = v144;
          v15 = v142;
          v12 = v149;
          a6 = v147;
          a5 = v146;
          a3 = v143;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v25 + 24;
          *(_DWORD *)v25 = 34082680;
          *(_DWORD *)(v25 + 4) = 0;
          *(_QWORD *)(v25 + 8) = 0;
          *(_QWORD *)(v25 + 16) = 0;
        }
        *(_BYTE *)(v25 + 12) = 1;
        *(_DWORD *)(v25 + 4) = (unsigned __int64)(v15 - v9) >> 3;
        if ( *(int *)(v10 + 16) <= 0 )
        {
          v144 = k;
          v142 = v15;
          v147 = a6;
          v146 = a5;
          v143 = a3;
          MEMORY[0x18277F280](a1: v25, a2: v21, a3, a4: v12);
        }
        return v25;
      }
      else
      {
        v145 = 34082680;
        v144 = k;
        v147 = a6;
        v146 = a5;
        v143 = a3;
        v142 = v15;
        v26 = sub_18501E2C0(a1: v22, a2: v21, a3: v15, a4: v12, a5: 0, a6: (unsigned int)v12);
        v29 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v29 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v141 = v26;
          v29 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: v145);
          v26 = v141;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v29 + 24;
          *(_DWORD *)v29 = 34082680;
          *(_DWORD *)(v29 + 4) = 0;
          *(_QWORD *)(v29 + 8) = 0;
          *(_QWORD *)(v29 + 16) = 0;
        }
        *(_BYTE *)(v29 + 12) = (int)(v149 - *(_DWORD *)(v26 + 8)) < 0;
        *(_DWORD *)(v29 + 4) = (unsigned __int64)(v26 - v9) >> 3;
        if ( *(int *)(v10 + 16) <= 0 )
          MEMORY[0x18277F280](a1: v27, a2: v148);
        return v29;
      }
    }
    else
    {
      if ( *(int *)(v10 + 16) <= 0 )
      {
        v147 = a6;
        v146 = a5;
        v143 = a3;
        MEMORY[0x18277F280]();
      }
      return v9;
    }
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  v120 = v30;
  v136 = v35;
  v135 = v34;
  v119 = v32;
  v134 = v33;
  v133 = v31;
  v118 = v141;
  if ( (unsigned __int64)&v114 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_202;
  }
  if ( v34 != 0 && (_DWORD)v31 == 0 )
  {
    if ( *(int *)(v10 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v9;
  }
  if ( v34 != 0 )
  {
    if ( v32 == v9 )
    {
      v59 = MEMORY[0x182771080]();
      goto LABEL_222;
    }
    v6 = *(unsigned int *)(v32 + 8);
    if ( (_DWORD)v6 != 0 )
    {
      if ( v30 == v9 )
        goto LABEL_223;
      v7 = *(unsigned int *)(v30 + 8);
      if ( (_DWORD)v7 != 0 )
      {
        if ( (unsigned int)v6 > (unsigned int)v7 )
        {
          v39 = -1;
        }
        else if ( (_DWORD)v6 == 1 )
        {
          v39 = MEMORY[0x182830F40](
                  a1: 0,
                  a2: *(unsigned __int8 *)(v32 + 12),
                  a3: v30,
                  a4: v31,
                  a5: 12,
                  a6: (unsigned int)v7);
        }
        else
        {
          v7 = (unsigned int)(v7 - v6 + 2);
          if ( (int)v7 < 1 )
          {
            v39 = -1;
          }
          else
          {
            v132 = *(_DWORD *)(v32 + 8);
            v131 = v7;
            v36 = *(unsigned __int8 *)(v32 + 12);
            v130 = v36;
            v37 = *(unsigned __int8 *)(v32 + 13);
            v129 = v37;
            v38 = 0;
            while ( 1 )
            {
              v39 = MEMORY[0x182832B40](a1: v38, a2: v36, a3: v30, a4: v37, a5: 12, a6: (unsigned int)v7);
              if ( v39 < 0 )
              {
                v39 = -1;
                goto LABEL_63;
              }
              if ( v132 == 2 )
                goto LABEL_63;
              v128 = v39;
              if ( (unsigned int)MEMORY[0x18282F960](
                                   a1: 12,
                                   a2: v132,
                                   a3: v120,
                                   a4: v31,
                                   a5: (unsigned int)v39 + 12LL,
                                   a6: v119) != 0 )
              {
                v39 = v128;
                goto LABEL_63;
              }
              v7 = v131;
              if ( (int)v131 <= (int)(v128 + 1) )
                break;
              v38 = v128 + 1;
              v37 = v129;
              v36 = v130;
              v30 = v120;
            }
            v39 = -1;
          }
        }
      }
      else
      {
        v39 = -1;
      }
    }
    else
    {
      v39 = 0;
    }
  }
  else if ( (_DWORD)v31 != 0 )
  {
    v39 = sub_185020380(a1: v32, a2: v33, a3: v30, a4: v31, a5: v119);
  }
  else
  {
    v39 = sub_18501FF80(a1: v32, a2: v33, a3: v30, a4: v31, a5: v119);
  }
LABEL_63:
  v128 = v39;
  if ( v39 < 0 )
  {
    if ( *(int *)(v10 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v9;
  }
  v40 = (unsigned int)(v39 + v134);
  v129 = v39 + v134;
  v6 = v136 - v134 + 2;
  v130 = v136 - v134 + 2;
  if ( v135 != 0 )
  {
    v7 = (unsigned int)v134;
    if ( v134 > (int)(v136 - v40) )
    {
      v44 = -1;
    }
    else if ( v134 == 1 )
    {
      v44 = MEMORY[0x182830F40](a1: v129, a2: *(unsigned __int8 *)(v119 + 12), a3: v120, a4: v31, a5: 12, a6: v136);
    }
    else if ( (int)v6 <= (int)v40 )
    {
      v44 = -1;
    }
    else
    {
      v41 = *(unsigned __int8 *)(v119 + 12);
      v131 = v41;
      v42 = *(unsigned __int8 *)(v119 + 13);
      v132 = v42;
      v43 = (unsigned int)v40;
      while ( 1 )
      {
        v44 = MEMORY[0x182832B40](a1: v43, a2: v41, a3: v120, a4: v42, a5: 12, a6: (unsigned int)v6);
        if ( v44 < 0 )
        {
          v44 = -1;
          goto LABEL_84;
        }
        if ( v134 == 2 )
          goto LABEL_84;
        v127 = v44;
        if ( (unsigned int)MEMORY[0x18282F960](
                             a1: 12,
                             a2: (unsigned int)v134,
                             a3: v120,
                             a4: v31,
                             a5: (unsigned int)v44 + 12LL,
                             a6: v119) != 0 )
        {
          v44 = v127;
          goto LABEL_84;
        }
        v6 = v130;
        if ( (int)v130 <= v127 + 1 )
          break;
        v43 = (unsigned int)(v127 + 1);
        v42 = v132;
        v41 = v131;
      }
      v44 = -1;
    }
  }
  else if ( v133 != 0 )
  {
    v44 = sub_185020540(a1: v134, a2: v40, a3: v120, a4: v133, a5: v136, a6: v119);
  }
  else
  {
    v44 = sub_185020120(a1: v134, a2: v40, a3: v120, a4: v133, a5: v136, a6: v119);
  }
LABEL_84:
  v45 = *(_QWORD *)(v10 + 40);
  v46 = 34089120;
  v126 = 34089120;
  if ( (unsigned __int64)(v45 + 80) > *(_QWORD *)(v10 + 32) )
  {
    v127 = v44;
    v45 = MEMORY[0x181EAA840](a1: v32, a2: v40, a3: v126, a4: v31, a5: 16);
    v46 = v126;
    v44 = v127;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v45 + 80;
    *(_QWORD *)v45 = 34089120;
    *(_DWORD *)(v45 + 8) = 16;
    *(_DWORD *)(v45 + 12) = 0;
    *(_QWORD *)(v45 + 16) = 0;
    *(_QWORD *)(v45 + 24) = 0;
    *(_QWORD *)(v45 + 32) = 0;
    *(_QWORD *)(v45 + 40) = 0;
    *(_QWORD *)(v45 + 48) = 0;
    *(_QWORD *)(v45 + 56) = 0;
    *(_QWORD *)(v45 + 64) = 0;
    *(_QWORD *)(v45 + 72) = 0;
  }
  if ( v44 < 1 )
  {
    v47 = v128;
    *(_DWORD *)(v45 + 12) = v128;
    v117 = v45;
    v55 = 0;
    goto LABEL_114;
  }
  v47 = v128;
  *(_DWORD *)(v45 + 16) = v44;
  *(_DWORD *)(v45 + 12) = v47;
  v7 = (unsigned int)(v134 + v44);
  v128 = 1;
  v116 = v45;
  v6 = v130;
  v48 = (unsigned int)v134;
  v49 = v119;
  v46 = v135;
  v50 = v136;
  while ( 1 )
  {
    v129 = v7;
    if ( (_DWORD)v46 != 0 )
    {
      if ( (int)v48 > (int)v50 - (int)v7 )
      {
        v44 = -1;
      }
      else if ( (_DWORD)v48 == 1 )
      {
        v44 = MEMORY[0x182830F40](a1: v129, a2: *(unsigned __int8 *)(v49 + 12), a3: v120, a4: v47, a5: 12, a6: v136);
      }
      else if ( (int)v6 <= (int)v7 )
      {
        v44 = -1;
      }
      else
      {
        v51 = *(unsigned __int8 *)(v49 + 12);
        v131 = v51;
        v52 = *(unsigned __int8 *)(v49 + 13);
        v125 = v52;
        v53 = (unsigned int)v7;
        while ( 1 )
        {
          v44 = MEMORY[0x182832B40](a1: v53, a2: v51, a3: v120, a4: v52, a5: 12, a6: (unsigned int)v6);
          if ( v44 < 0 )
          {
            v44 = -1;
            goto LABEL_99;
          }
          if ( v134 == 2 )
            goto LABEL_99;
          v124 = v44;
          if ( (unsigned int)MEMORY[0x18282F960](
                               a1: 12,
                               a2: (unsigned int)v134,
                               a3: v120,
                               a4: v47,
                               a5: (unsigned int)v44 + 12LL,
                               a6: v119) != 0 )
          {
            v44 = v124;
            goto LABEL_99;
          }
          v6 = v130;
          if ( (int)v130 <= v124 + 1 )
            break;
          v53 = (unsigned int)(v124 + 1);
          v52 = v125;
          v51 = v131;
        }
        v44 = -1;
      }
    }
    else
    {
      v44 = v133 != 0
          ? sub_185020540(a1: v134, a2: v129, a3: v120, a4: v133, a5: v50, a6: v119)
          : sub_185020120(a1: v134, a2: v129, a3: v120, a4: v133, a5: v50, a6: v119);
    }
LABEL_99:
    if ( v44 < 1 )
      break;
    v47 = v116;
    v124 = v44;
    v125 = *(_DWORD *)(v116 + 8);
    v7 = v128 + 1;
    v131 = v7;
    if ( v125 != (_DWORD)v7 )
      goto LABEL_101;
LABEL_202:
    v91 = (unsigned int)v7 >> 1;
    if ( (_DWORD)v91 == 0 )
      JUMPOUT(0x30A03E369LL);
    v92 = v7 + v91;
    if ( (unsigned int)(v7 + v91 - 1) >= 0x7FFFFFF7 )
    {
      v123 = v7 + v91;
      v122 = (unsigned int)v7 >> 1;
      v92 = MEMORY[0x1863202E0](a1: v49, a2: v91, a3: (unsigned int)v7, a4: v47, a5: 1);
      v7 = v131;
    }
    LODWORD(v6) = v125;
    v44 = v124;
    v93 = v116;
    v94 = v126;
    if ( (v92 & 0x80000000) != 0 )
    {
      MEMORY[0x18579AB60](a1: v49, a2: v91, a3: v116, a4: v116, a5: v92, a6: v126);
LABEL_234:
      MEMORY[0x182771220](a1: v49, a2: v129, a3: (unsigned int)v7, a4: v47, a5: (unsigned int)v6);
LABEL_235:
      for ( m = MEMORY[0x18276B3A0](); ; m = MEMORY[0x18276B3A0](a1: v57) )
      {
        v116 = m;
        v110 = *(_QWORD *)(v10 + 40);
        v111 = v110 + 40;
        if ( (unsigned __int64)(v110 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v110 = MEMORY[0x181EAA920](a1: v108, a2: v109, a3: 34082880);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v111;
          *(_DWORD *)v110 = 34082880;
          *(_DWORD *)(v110 + 4) = 0;
          *(_QWORD *)(v110 + 8) = 0;
          *(_QWORD *)(v110 + 16) = 0;
          *(_QWORD *)(v110 + 24) = 0;
          *(_QWORD *)(v110 + 32) = 0;
        }
        *(_DWORD *)(v110 + 20) = 46923644;
        *(_DWORD *)(v110 + 16) = *(_DWORD *)(v9 + 374343896);
        *(_DWORD *)(v110 + 12) = (unsigned __int64)(v110 - v9) >> 3;
        v115 = (_DWORD *)v110;
        sub_18503B9A0(a1: v108, a2: v109, a3: v110, a4: v111, a5: 0);
        v112 = (unsigned __int64)v115;
        v115[2] = 45952550;
        if ( (*(_DWORD *)v112 & 2) != 0 )
        {
          v113 = (v112 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v112 & 0xFFFFFFFFFFF80000LL) + ((v112 - v113) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v112 & 0xFFFFFFFFFFF80000LL) + ((v112 - v113) >> 9) + 0x38) = 0;
        }
        MEMORY[0x182769900](a1: v119, a2: v136, a3: v112, a4: v140, a5: v140, a6: v135);
LABEL_240:
        ;
      }
    }
    v48 = *(_QWORD *)(v10 + 40);
    v95 = *(_QWORD *)(v10 + 32);
    v96 = v92;
    v97 = (4LL * v92 + 19) & 0x7FFFFFFF8LL;
    if ( v97 >= 0x20000 || (v102 = v48 + v97) > v95 )
    {
      v121 = v92;
      v122 = v92;
      v48 = MEMORY[0x181EAA840](a1: v95, a2: v48, a3: v126, a4: v116, a5: v92);
      v96 = v121;
      v92 = v122;
      v7 = v131;
      LODWORD(v6) = v125;
      v44 = v124;
      v93 = v116;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v102;
      *(_QWORD *)v48 = v94;
      *(_DWORD *)(v48 + 8) = v92;
    }
    if ( v92 < (unsigned int)v6 )
      JUMPOUT(0x30A03E415LL);
    v49 = (unsigned int)v6;
    v6 = (unsigned int)v6;
    if ( v92 <= (unsigned int)v6 )
      JUMPOUT(0x30A03E420LL);
    if ( (_DWORD)v6 != 0 )
    {
      v98 = v93 + 12;
      v99 = 0;
      do
      {
        *(_DWORD *)(v48 + 12 + 4 * v99) = *(_DWORD *)(v98 + 4 * v99);
        ++v99;
      }
      while ( v99 <= (unsigned int)v6 - 1LL );
    }
    v100 = v96 - (unsigned int)v6;
    v101 = 4 * v100;
    if ( 4 * v100 < 2048 )
    {
      if ( v92 > (unsigned int)v6 )
      {
        v103 = v100 - 1;
        v104 = 0;
        do
          *(_DWORD *)(v48 + 4LL * (unsigned int)v6 + 12 + 4 * v104++) = 0;
        while ( v104 <= v103 );
      }
      goto LABEL_215;
    }
LABEL_231:
    v105 = (void *)(v48 + 4 * v6 + 12);
    memset(v105, 0, v101);
    v49 = (__int64)v105 + v101;
    v44 = v124;
LABEL_215:
    v47 = v48;
LABEL_101:
    LODWORD(v6) = *(_DWORD *)(v47 + 8);
    if ( (unsigned int)v6 <= (unsigned int)v7 )
      goto LABEL_234;
    *(_DWORD *)(v47 + 4 * v7 + 12) = v44;
    v54 = (unsigned int)(v134 + v44);
    if ( *(int *)(v10 + 16) <= 0 )
    {
      MEMORY[0x18277F280](a1: v49, a2: v48, a3: v54);
      v7 = v106;
      v138 = v8;
      v128 = v131;
      v116 = v47;
      v6 = v130;
      v48 = (unsigned int)v134;
      v49 = v119;
      v46 = v135;
      v50 = v136;
    }
    else
    {
      v128 = v7;
      v116 = v47;
      v6 = v130;
      v48 = (unsigned int)v134;
      v49 = v119;
      v46 = v135;
      v50 = v136;
      v7 = (unsigned int)v54;
    }
  }
  v137 = v8;
  v117 = v116;
  v55 = v128;
LABEL_114:
  v127 = v44;
  v138 = v8;
  v132 = v129;
  v56 = v55 + 1;
  v128 = v56;
  v57 = (unsigned int)(v56 * (v142 - v134));
  if ( !is_mul_ok(v56, v142 - v134) )
    goto LABEL_240;
  v58 = (unsigned int)v57 + v136;
  v130 = v57 + v136;
  if ( __OFADD__((_DWORD)v57, v136) )
    goto LABEL_235;
  if ( (_DWORD)v58 == 0 )
  {
    if ( *(int *)(v10 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v9 + 373281248;
  }
  v59 = sub_1850217A0(a1: v57, a2: v56, a3: v58, a4: v47, a5: v58, a6: v46, a7: v114);
  if ( (v59 & 0x80000000) != 0 )
  {
LABEL_222:
    MEMORY[0x182770E80](a1: v60, a2: v61, a3: v59);
LABEL_223:
    MEMORY[0x182771080]();
LABEL_224:
    MEMORY[0x182771220](a1: v67, a2: v68, a3: (unsigned int)v67, a4: v66, a5: (unsigned int)v66, a6: v72);
LABEL_225:
    MEMORY[0x182771080](a1: v67, a2: v80, a3: v62, a4: v79, a5: v71);
LABEL_226:
    MEMORY[0x182771080]();
LABEL_227:
    MEMORY[0x182771220](a1: v67, a2: v80, a3: (unsigned int)v6, a4: v79, a5: v81);
LABEL_228:
    MEMORY[0x182771080](a1: v67, a2: v68, a3: v62, a4: v74, a5: v71);
LABEL_229:
    MEMORY[0x182771220](a1: v67, a2: v68, a3: (unsigned int)v68, a4: v77, a5: (unsigned int)v77);
LABEL_230:
    MEMORY[0x182771220](a1: v67, a2: v75, a3: (unsigned int)v6, a4: v74, a5: (unsigned int)v75);
    goto LABEL_231;
  }
  v62 = *(_QWORD *)(v10 + 40);
  v63 = (v59 + 19LL) & 0x1FFFFFFF8LL;
  if ( v63 >= 0x20000 || v62 + v63 > *(_QWORD *)(v10 + 32) )
  {
    v131 = v59;
    v62 = MEMORY[0x181EAA840](a1: v60, a2: v61, a3: 34082368, a4: 34082368, a5: v59);
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v62 + v63;
    *(_QWORD *)v62 = 34082368;
    *(_DWORD *)(v62 + 8) = v59;
    *(_DWORD *)(v62 + 12) = 0;
    if ( v63 - 16 >= 0x800 )
    {
      memset((void *)(v62 + 16), 0, v63 - 16);
    }
    else
    {
      for ( n = 16; v63 > n; n += 8LL )
        *(_QWORD *)(v62 + n) = 0;
    }
  }
  v65 = v117;
  v116 = v62;
  v66 = *(unsigned int *)(v117 + 8);
  v131 = *(_DWORD *)(v117 + 8);
  v67 = 0;
  v7 = 0;
  v6 = 0;
  v68 = v128;
  v69 = v143;
  v70 = v142;
  v71 = v118;
  v72 = v135;
  while ( 1 )
  {
    v73 = v120;
    if ( (int)v68 <= (int)v67 )
      break;
    if ( (unsigned int)v66 <= (unsigned int)v67 )
      goto LABEL_224;
    v74 = *(unsigned int *)(v65 + 4 * v67 + 12);
    v124 = *(_DWORD *)(v65 + 4 * v67 + 12);
    if ( (_DWORD)v72 != 0 )
    {
      while ( (int)v74 > (int)v6 )
      {
        if ( v73 == v9 )
          goto LABEL_228;
        v75 = *(unsigned int *)(v73 + 8);
        if ( (unsigned int)v75 <= (unsigned int)v6 )
          goto LABEL_230;
        v68 = 2 * (int)v7;
        *(_WORD *)(v62 + v68 + 12) = *(unsigned __int8 *)(v73 + v6 + 12);
        v7 = (unsigned int)(v7 + 1);
        v6 = (unsigned int)(v6 + 1);
      }
    }
    else
    {
      while ( (int)v74 > (int)v6 )
      {
        v68 = 2 * (int)v7;
        *(_WORD *)(v62 + v68 + 12) = *(_WORD *)(v73 + 2 * (int)v6 + 12);
        v7 = (unsigned int)(v7 + 1);
        LODWORD(v6) = v6 + 1;
      }
    }
    v6 = (unsigned int)(v134 + v6);
    v76 = v67 + 1;
    if ( v69 != 0 )
    {
      v68 = 0;
      while ( v70 > (int)v68 )
      {
        if ( v71 == v9 )
          goto LABEL_226;
        v77 = *(unsigned int *)(v71 + 8);
        if ( (unsigned int)v77 <= (unsigned int)v68 )
          goto LABEL_229;
        v74 = 2 * (int)v7;
        *(_WORD *)(v62 + v74 + 12) = *(unsigned __int8 *)(v71 + v68 + 12);
        v68 = (unsigned int)(v68 + 1);
        v7 = (unsigned int)(v7 + 1);
      }
      if ( *(int *)(v10 + 16) > 0 )
      {
        v67 = v76;
        v66 = v131;
        v68 = v128;
        v65 = v117;
        continue;
      }
    }
    else
    {
      v74 = 0;
      while ( v70 > (int)v74 )
      {
        v68 = (unsigned int)*(__int16 *)(v71 + 2 * (int)v74 + 12);
        *(_WORD *)(v62 + 2 * (int)v7 + 12) = *(_WORD *)(v71 + 2 * (int)v74 + 12);
        v74 = (unsigned int)(v74 + 1);
        v7 = (unsigned int)(v7 + 1);
      }
      if ( *(int *)(v10 + 16) > 0 )
      {
        v67 = v76;
        v66 = v131;
        v68 = v128;
        v65 = v117;
        continue;
      }
    }
    v67 = (unsigned int)MEMORY[0x18277F280](a1: v67, a2: v68, a3: v62, a4: v74, a5: v71);
    v66 = v131;
    v68 = v128;
    v65 = v117;
  }
  if ( (_DWORD)v72 != 0 )
  {
    v78 = v136;
    v79 = v120;
    while ( v78 > (int)v6 )
    {
      v80 = (unsigned int)(v6 + 1);
      if ( v79 == v9 )
        goto LABEL_225;
      v81 = *(_DWORD *)(v79 + 8);
      if ( v81 <= (unsigned int)v6 )
        goto LABEL_227;
      v82 = *(unsigned __int8 *)(v79 + v6 + 12);
      *(_WORD *)(v62 + 2 * (int)v7 + 12) = v82;
      v7 = (unsigned int)(v7 + 1);
      v67 = v82;
      v6 = (unsigned int)v80;
    }
  }
  else
  {
    v86 = v136;
    v79 = v120;
    while ( v86 > (int)v6 )
    {
      *(_WORD *)(v62 + 2 * (int)v7 + 12) = *(_WORD *)(v79 + 2 * (int)v6 + 12);
      LODWORD(v7) = v7 + 1;
      LODWORD(v6) = v6 + 1;
    }
  }
  v131 = v67;
  v125 = v7;
  v122 = v6;
  v83 = 34082680;
  if ( v69 != 0 && v133 == 0 )
  {
    v126 = 34082680;
    v87 = sub_18501E2C0(a1: v67, a2: 0x2080F78u, a3: v62, a4: v79, a5: 0, a6: v130);
    v90 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v90 + 24) > *(_QWORD *)(v10 + 32) )
    {
      v115 = (_DWORD *)v87;
      v90 = MEMORY[0x181EAA920](a1: v88, a2: v126, a3: v126);
      v87 = (__int64)v115;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v90 + 24;
      *(_DWORD *)v90 = 34082680;
      *(_DWORD *)(v90 + 4) = 0;
      *(_QWORD *)(v90 + 8) = 0;
      *(_QWORD *)(v90 + 16) = 0;
    }
    *(_BYTE *)(v90 + 12) = (int)(v130 - *(_DWORD *)(v87 + 8)) < 0;
    *(_DWORD *)(v90 + 4) = (unsigned __int64)(v87 - v9) >> 3;
    if ( *(int *)(v10 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v88, a2: v89, a3: v90, a4: v125, a5: v131);
    return v90;
  }
  else
  {
    result = *(_QWORD *)(v10 + 40);
    v84 = result + 24;
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v10 + 32) )
    {
      v126 = 34082680;
      result = MEMORY[0x181EAA920](a1: v67, a2: 34082680, a3: 34082680, a4: v84, a5: v71);
      v62 = v116;
      v71 = v118;
      v72 = v135;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v84;
      *(_DWORD *)result = 34082680;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_BYTE *)(result + 12) = 1;
    v85 = (unsigned __int64)(v62 - v9) >> 3;
    *(_DWORD *)(result + 4) = v85;
    if ( *(int *)(v10 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v67, a2: v83, a3: v62, a4: v85, a5: v71, a6: v72);
  }
  return result;
}
