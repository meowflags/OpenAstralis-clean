// sub_181590520
// rva 0x01590520  size 4006  section .text  group text
// window base 0x181590520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181590520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rdi
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r9
  unsigned int v44; // r12d
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  _DWORD *result; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  _DWORD *v70; // rsi
  __int64 v71; // rcx
  int v72; // edx
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdx
  unsigned __int64 v83; // rsi
  char v84; // cl
  unsigned int v85; // ebx
  __int64 v86; // rbp
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  _DWORD *v90; // rbx
  unsigned int v91; // r8d
  unsigned int v92; // ebp
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rdi
  __int64 v97; // r8
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rdx
  char v106; // cl
  unsigned int v107; // ebx
  _DWORD *v108; // rbp
  unsigned int v109; // edx
  unsigned int v110; // edx
  __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  __int64 v113; // rdx
  unsigned __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned int v116; // r12d
  unsigned __int64 v117; // rdx
  unsigned int v118; // r12d
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // r8
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rcx
  __int64 v130; // [rsp+0h] [rbp-98h] BYREF
  _DWORD *v131; // [rsp+8h] [rbp-90h]
  unsigned int v132; // [rsp+14h] [rbp-84h]
  _DWORD *v133; // [rsp+18h] [rbp-80h]
  __int64 v134; // [rsp+20h] [rbp-78h]
  __int64 v135; // [rsp+28h] [rbp-70h]
  _DWORD *v136; // [rsp+30h] [rbp-68h]
  __int64 v137; // [rsp+38h] [rbp-60h]
  __int64 v138; // [rsp+40h] [rbp-58h]
  unsigned int v139; // [rsp+48h] [rbp-50h]
  int v140; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v141; // [rsp+50h] [rbp-48h]
  unsigned int v142; // [rsp+54h] [rbp-44h]
  unsigned int v143; // [rsp+58h] [rbp-40h]
  unsigned int v144; // [rsp+5Ch] [rbp-3Ch]
  unsigned int v145; // [rsp+60h] [rbp-38h]
  unsigned int v146; // [rsp+64h] [rbp-34h]
  __int64 v147; // [rsp+68h] [rbp-30h]
  __int64 v148; // [rsp+70h] [rbp-28h]
  __int64 v149; // [rsp+78h] [rbp-20h]
  __int64 v150; // [rsp+80h] [rbp-18h]
  __int64 v151; // [rsp+88h] [rbp-10h]
  __int64 v152; // [rsp+90h] [rbp-8h]

  v138 = a3;
  if ( (unsigned __int64)&v130 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v10 )
  {
    v12 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v12 == 0 )
    {
LABEL_51:
      v13 = MEMORY[0x182771080]();
LABEL_52:
      v70 = (_DWORD *)(v10 + 57668888);
      if ( v13 == 0 )
      {
LABEL_78:
        v109 = *(unsigned __int8 *)(v10 + 57668901);
        v146 = 0;
        v145 = 0xEE1D664E;
        v137 = v10 + 376611960;
        v144 = v109;
LABEL_57:
        v78 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v78 + 40) > *(_QWORD *)(v11 + 32) )
        {
          v78 = MEMORY[0x181EAA920](a1: v16, a2: v70, a3: v149);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v78 + 40;
          *(_DWORD *)v78 = 34081944;
          *(_DWORD *)(v78 + 4) = 0;
          *(_QWORD *)(v78 + 8) = 0;
          *(_QWORD *)(v78 + 16) = 0;
          *(_QWORD *)(v78 + 24) = 0;
          *(_QWORD *)(v78 + 32) = 0;
        }
        v136 = (_DWORD *)v78;
        *(_DWORD *)(v78 + 20) = 46923644;
        *(_DWORD *)(v78 + 16) = *(_DWORD *)(v10 + 374343896);
        *(_DWORD *)(v78 + 12) = (unsigned __int64)(v78 - v10) >> 3;
        v79 = MEMORY[0x18503B9A0](a1: v16, a2: v70, a3: v78, a4: v78, a5: 0);
        v82 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v82 + 24) > *(_QWORD *)(v11 + 32) )
        {
          v135 = v79;
          v82 = MEMORY[0x181EAA920](a1: v80, a2: v81, a3: v150);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v82 + 24;
          *(_DWORD *)v82 = 34082680;
          *(_DWORD *)(v82 + 4) = 0;
          *(_QWORD *)(v82 + 8) = 0;
          *(_QWORD *)(v82 + 16) = 0;
        }
        v83 = (unsigned __int64)v136;
        v84 = v146;
        v85 = v145;
        v86 = v137;
        *(_BYTE *)(v82 + 13) = v144;
        *(_BYTE *)(v82 + 12) = v84;
        *(_DWORD *)(v82 + 8) = v85;
        *(_DWORD *)(v82 + 4) = (unsigned __int64)(v86 - v10) >> 3;
        *(_DWORD *)(v83 + 8) = (unsigned __int64)(v82 - v10) >> 3;
        if ( (*(_DWORD *)v83 & 2) != 0 )
        {
          v123 = (v83 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v83 & 0xFFFFFFFFFFF80000LL) + ((v83 - v123) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v83 & 0xFFFFFFFFFFF80000LL) + ((v83 - v123) >> 9) + 0x38) = 0;
          v87 = v83;
        }
        else
        {
          v87 = v83;
        }
        goto LABEL_63;
      }
      v71 = v7;
      v72 = (v8 + 21) << v7;
      if ( v72 < 0 )
      {
        v143 = (v8 + 21) << v7;
        v142 = v7;
        v111 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v111 + 40) > *(_QWORD *)(v11 + 32) )
        {
          v111 = MEMORY[0x181EAA920](a1: v16, a2: v70, a3: v147);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v111 + 40;
          *(_DWORD *)v111 = 34082880;
          *(_DWORD *)(v111 + 4) = 0;
          *(_QWORD *)(v111 + 8) = 0;
          *(_QWORD *)(v111 + 16) = 0;
          *(_QWORD *)(v111 + 24) = 0;
          *(_QWORD *)(v111 + 32) = 0;
        }
        *(_DWORD *)(v111 + 20) = 46923644;
        *(_DWORD *)(v111 + 16) = *(_DWORD *)(v10 + 374343896);
        *(_DWORD *)(v111 + 12) = (unsigned __int64)(v111 - v10) >> 3;
        v136 = (_DWORD *)v111;
        MEMORY[0x18503B9A0](a1: v16, a2: v70, a3: v111, a4: v71, a5: 0);
        v112 = (unsigned __int64)v136;
        v136[2] = 46004603;
        if ( (*(_DWORD *)v112 & 2) != 0 )
        {
          v125 = (v112 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v112 & 0xFFFFFFFFFFF80000LL) + ((v112 - v125) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v112 & 0xFFFFFFFFFFF80000LL) + ((v112 - v125) >> 9) + 0x38) = 0;
          v87 = v112;
        }
        else
        {
          v87 = v112;
        }
        goto LABEL_63;
      }
      v73 = *(_QWORD *)(v11 + 40);
      v74 = *(_QWORD *)(v11 + 32);
      v75 = ((unsigned int)v72 + 19LL) & 0x1FFFFFFF8LL;
      if ( v75 < 0x20000 )
      {
LABEL_98:
        v75 += v73;
        if ( v75 <= v74 )
        {
          v120 = v148;
          *(_QWORD *)(v11 + 40) = v75;
          *(_QWORD *)v73 = v120;
          *(_DWORD *)(v73 + 8) = v72;
          v143 = v72;
          goto LABEL_56;
        }
      }
      v143 = v72;
      v136 = v70;
      v142 = v7;
      v73 = MEMORY[0x181EAA840](a1: v75, a2: v70, a3: v148, a4: v71, a5: (unsigned int)v72, a6: v74);
      v70 = v136;
      v7 = v142;
LABEL_56:
      v142 = v7;
      v136 = (_DWORD *)v73;
      MEMORY[0x184FF2C40](a1: v7, a2: v70, a3: v70, a4: v73, a5: v73, a6: 0);
      MEMORY[0x184FF2C40](a1: v142, a2: v77, a3: v138, a4: v76, a5: v136, a6: 21);
      v151 = v9;
      v146 = v142;
      v145 = 0;
      v152 = v9;
      v137 = (__int64)v136;
      v144 = 0;
      goto LABEL_57;
    }
    v13 = *(_DWORD *)(v10 + 8 * v12 + 8);
    v7 = *(char *)(a3 + 12);
    v8 = v13 >> *(_BYTE *)(a3 + 12);
    v150 = 34082680;
    v14 = 34081944;
    v149 = 34081944;
    v15 = 34082368;
    v148 = 34082368;
    v16 = 34082880;
    v147 = 34082880;
    if ( v8 < 2 )
      goto LABEL_52;
    v17 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v11 + 32) )
    {
      v17 = MEMORY[0x181EAA920](a1: 34082880, a2: 34082368, a3: 34161576);
      v16 = v147;
      v15 = v148;
      v14 = v149;
      a3 = v138;
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v17 + 24;
      *(_DWORD *)v17 = 34161576;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
    }
    v137 = v17;
    *(_DWORD *)(v17 + 8) = 47045786;
    v144 = 0;
    v18 = 1;
    while ( 1 )
    {
      v145 = v18;
      if ( (unsigned int)MEMORY[0x184FEBC20](a1: v16, a2: v15, a3, a4: v14, a5: v18, a6: a3) == 41 )
        break;
      if ( (unsigned int)MEMORY[0x184FEBC20](a1: v20, a2: v21, a3: v138, a4: v19, a5: v145) == 91 )
      {
        v14 = v144 + 1;
        v29 = v10;
        v30 = v145;
      }
      else if ( (unsigned int)MEMORY[0x184FEBC20](a1: v16, a2: v15, a3: v138, a4: v22, a5: v145) == 76 )
      {
        v146 = MEMORY[0x184FF40A0](a1: v24, a2: v25, a3: v138, a4: v23, a5: 59, a6: v145 + 1);
        v59 = MEMORY[0x184FFD140](a1: v57, a2: v58, a3: v138, a4: v56, a5: v145, a6: v146 + 1);
        v63 = MEMORY[0x18657C2C0](a1: v61, a2: v62, a3: v59, a4: v60, a5: 1, a6: 0);
        v14 = v144;
        v29 = v63;
        v30 = v146;
      }
      else
      {
        v26 = MEMORY[0x184FEBC20](a1: v24, a2: v25, a3: v138, a4: v23, a5: v145);
        v29 = v10 + 8LL * *(unsigned int *)(MEMORY[0x18657AD80](a1: v27, a2: v28, a3: v26) + 16);
        v14 = v144;
        v30 = v145;
      }
      v18 = v30 + 1;
      v146 = v18;
      if ( v29 == v10 )
      {
        v144 = v14;
        a3 = v138;
      }
      else
      {
        v136 = (_DWORD *)v29;
        v7 = v10 + 57668864;
        v135 = v10 + 57668864;
        v31 = v148;
        v32 = v29;
        while ( (int)v14 >= 1 )
        {
          if ( v32 == v10 )
            v33 = v10 + 353301280;
          else
            v33 = v32;
          v134 = v33;
          v34 = *(unsigned int *)(v33 + 4);
          if ( (_DWORD)v34 == 0 )
          {
            v133 = (_DWORD *)v32;
            v142 = v14;
            MEMORY[0x182771080](a1: v34, a2: v31);
            goto LABEL_80;
          }
          v35 = *(unsigned int *)(v10 + 8 * v34 + 8);
          v36 = v14 - 1;
          if ( (_DWORD)v35 != 0 )
          {
            v142 = v14;
            v37 = *(char *)(v33 + 12);
            v132 = *(_DWORD *)(v10 + 374343896);
            v141 = (char)v37;
            v38 = (unsigned int)(char)v37;
            v39 = ((unsigned int)v35 >> v37) + 2;
            if ( (int)v39 < 0 )
            {
              v133 = (_DWORD *)v32;
              v115 = *(_QWORD *)(v11 + 40);
              if ( (unsigned __int64)(v115 + 40) > *(_QWORD *)(v11 + 32) )
              {
                v140 = v39;
                v115 = MEMORY[0x181EAA920](a1: v39, a2: v31, a3: v147);
              }
              else
              {
                *(_QWORD *)(v11 + 40) = v115 + 40;
                *(_DWORD *)v115 = 34082880;
                *(_DWORD *)(v115 + 4) = 0;
                *(_QWORD *)(v115 + 8) = 0;
                *(_QWORD *)(v115 + 16) = 0;
                *(_QWORD *)(v115 + 24) = 0;
                *(_QWORD *)(v115 + 32) = 0;
                v140 = v39;
              }
              v116 = v132;
              *(_DWORD *)(v115 + 20) = 46923644;
              *(_DWORD *)(v115 + 16) = v116;
              *(_DWORD *)(v115 + 12) = (unsigned __int64)(v115 - v10) >> 3;
              v131 = (_DWORD *)v115;
              MEMORY[0x18503B9A0](a1: v39, a2: v31, a3: v115, a4: v38, a5: 0);
              v117 = (unsigned __int64)v131;
              v131[2] = 46004603;
              if ( (*(_DWORD *)v117 & 2) != 0 )
              {
                v127 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v127) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v127) >> 9) + 0x38) = 0;
              }
LABEL_92:
              v87 = v117;
              while ( 1 )
              {
LABEL_63:
                MEMORY[0x182769900](a1: v80, a2: v83, a3: v87, a4: v87, a5: &a7);
LABEL_64:
                v88 = v148;
                v89 = *(unsigned int *)(v138 + 4);
                v90 = (_DWORD *)(v10 + 57668912);
                if ( (_DWORD)v89 == 0 )
                {
                  MEMORY[0x182771080](a1: v20, a2: v21, a3: v138, a4: v144);
                  JUMPOUT(0x1815914C6LL);
                }
                v91 = *(_DWORD *)(v10 + 8 * v89 + 8);
                if ( v91 != 0 )
                {
                  v92 = *(char *)(v138 + 12);
                  v93 = *(unsigned int *)(v10 + 374343896);
                  v94 = v92;
                  v95 = (v91 >> *(_BYTE *)(v138 + 12)) + 28;
                  if ( (int)v95 < 0 )
                  {
                    v139 = *(char *)(v138 + 12);
                    v113 = *(_QWORD *)(v11 + 40);
                    if ( (unsigned __int64)(v113 + 40) > *(_QWORD *)(v11 + 32) )
                    {
                      v140 = v95;
                      v132 = v93;
                      v113 = MEMORY[0x181EAA920](a1: v95, a2: v93, a3: v147);
                      v93 = v132;
                    }
                    else
                    {
                      *(_QWORD *)(v11 + 40) = v113 + 40;
                      *(_DWORD *)v113 = 34082880;
                      *(_DWORD *)(v113 + 4) = 0;
                      *(_QWORD *)(v113 + 8) = 0;
                      *(_QWORD *)(v113 + 16) = 0;
                      *(_QWORD *)(v113 + 24) = 0;
                      *(_QWORD *)(v113 + 32) = 0;
                      v140 = v95;
                    }
                    *(_DWORD *)(v113 + 20) = 46923644;
                    *(_DWORD *)(v113 + 16) = v93;
                    *(_DWORD *)(v113 + 12) = (unsigned __int64)(v113 - v10) >> 3;
                    v136 = (_DWORD *)v113;
                    MEMORY[0x18503B9A0](a1: v95, a2: v93, a3: v113, a4: v94, a5: 0);
                    v114 = (unsigned __int64)v136;
                    v136[2] = 46004603;
                    if ( (*(_DWORD *)v114 & 2) != 0 )
                    {
                      v126 = (v114 & 0xFFFFFFFFFFF80000LL) + 2112;
                      if ( *(_BYTE *)((v114 & 0xFFFFFFFFFFF80000LL) + ((v114 - v126) >> 9) + 0x38) != 0 )
                        *(_BYTE *)((v114 & 0xFFFFFFFFFFF80000LL) + ((v114 - v126) >> 9) + 0x38) = 0;
                      v87 = v114;
                    }
                    else
                    {
                      v87 = v114;
                    }
                    continue;
                  }
                  v96 = (unsigned int)((_DWORD)v95 << v92);
                  if ( (int)v96 < 0 )
                  {
                    v140 = v96;
                    v139 = v92;
                    v121 = *(_QWORD *)(v11 + 40);
                    if ( (unsigned __int64)(v121 + 40) > *(_QWORD *)(v11 + 32) )
                    {
                      v132 = v93;
                      v121 = MEMORY[0x181EAA920](a1: v147, a2: v93, a3: v147);
                      v93 = v132;
                    }
                    else
                    {
                      *(_QWORD *)(v11 + 40) = v121 + 40;
                      *(_DWORD *)v121 = 34082880;
                      *(_DWORD *)(v121 + 4) = 0;
                      *(_QWORD *)(v121 + 8) = 0;
                      *(_QWORD *)(v121 + 16) = 0;
                      *(_QWORD *)(v121 + 24) = 0;
                      *(_QWORD *)(v121 + 32) = 0;
                    }
                    *(_DWORD *)(v121 + 20) = 46923644;
                    *(_DWORD *)(v121 + 16) = v93;
                    *(_DWORD *)(v121 + 12) = (unsigned __int64)(v121 - v10) >> 3;
                    v136 = (_DWORD *)v121;
                    MEMORY[0x18503B9A0](a1: v96, a2: v93, a3: v121, a4: v94, a5: 0);
                    v122 = (unsigned __int64)v136;
                    v136[2] = 46004603;
                    if ( (*(_DWORD *)v122 & 2) != 0 )
                    {
                      v129 = (v122 & 0xFFFFFFFFFFF80000LL) + 2112;
                      if ( *(_BYTE *)((v122 & 0xFFFFFFFFFFF80000LL) + ((v122 - v129) >> 9) + 0x38) != 0 )
                        *(_BYTE *)((v122 & 0xFFFFFFFFFFF80000LL) + ((v122 - v129) >> 9) + 0x38) = 0;
                      v87 = v122;
                    }
                    else
                    {
                      v87 = v122;
                    }
                    continue;
                  }
                  v97 = *(_QWORD *)(v11 + 40);
                  v98 = *(_QWORD *)(v11 + 32);
                  v99 = ((unsigned int)v96 + 19LL) & 0x1FFFFFFF8LL;
                  if ( v99 >= 0x20000 || (v99 += v97, v99 > v98) )
                  {
                    v140 = v96;
                    v139 = v92;
                    v136 = (_DWORD *)(v10 + 57668912);
                    v97 = MEMORY[0x181EAA840](a1: v96, a2: v93, a3: v148, a4: v99, a5: (unsigned int)v96, a6: v98);
                    v92 = v139;
                    v90 = v136;
                  }
                  else
                  {
                    *(_QWORD *)(v11 + 40) = v99;
                    *(_QWORD *)v97 = v88;
                    *(_DWORD *)(v97 + 8) = v96;
                    v140 = v96;
                  }
                  v139 = v92;
                  v136 = (_DWORD *)v97;
                  MEMORY[0x184FF2C40](a1: v92, a2: v93, a3: v90, a4: v97, a5: v97, a6: 0);
                  MEMORY[0x184FF2C40](a1: v139, a2: v101, a3: v138, a4: v100, a5: v136, a6: 28);
                  v151 = v9;
                  v146 = v139;
                  v142 = 0;
                  v152 = v9;
                  v133 = v136;
                  v143 = 0;
                }
                else
                {
LABEL_80:
                  v110 = *(unsigned __int8 *)(v10 + 57668925);
                  v146 = 0;
                  v142 = 0xB59DB6B3;
                  v133 = (_DWORD *)(v10 + 376612000);
                  v143 = v110;
                }
                v102 = *(_QWORD *)(v11 + 40);
                if ( (unsigned __int64)(v102 + 40) > *(_QWORD *)(v11 + 32) )
                {
                  v102 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: v149);
                }
                else
                {
                  *(_QWORD *)(v11 + 40) = v102 + 40;
                  *(_DWORD *)v102 = 34081944;
                  *(_DWORD *)(v102 + 4) = 0;
                  *(_QWORD *)(v102 + 8) = 0;
                  *(_QWORD *)(v102 + 16) = 0;
                  *(_QWORD *)(v102 + 24) = 0;
                  *(_QWORD *)(v102 + 32) = 0;
                }
                v136 = (_DWORD *)v102;
                *(_DWORD *)(v102 + 20) = 46923644;
                *(_DWORD *)(v102 + 16) = *(_DWORD *)(v10 + 374343896);
                *(_DWORD *)(v102 + 12) = (unsigned __int64)(v102 - v10) >> 3;
                v103 = MEMORY[0x18503B9A0](a1: v20, a2: v21, a3: v102, a4: v102, a5: 0);
                v105 = *(_QWORD *)(v11 + 40);
                if ( (unsigned __int64)(v105 + 24) > *(_QWORD *)(v11 + 32) )
                {
                  v135 = v103;
                  v105 = MEMORY[0x181EAA920](a1: v80, a2: v104, a3: v150);
                }
                else
                {
                  *(_QWORD *)(v11 + 40) = v105 + 24;
                  *(_DWORD *)v105 = 34082680;
                  *(_DWORD *)(v105 + 4) = 0;
                  *(_QWORD *)(v105 + 8) = 0;
                  *(_QWORD *)(v105 + 16) = 0;
                }
                v83 = (unsigned __int64)v136;
                v106 = v146;
                v107 = v142;
                v108 = v133;
                *(_BYTE *)(v105 + 13) = v143;
                *(_BYTE *)(v105 + 12) = v106;
                *(_DWORD *)(v105 + 8) = v107;
                *(_DWORD *)(v105 + 4) = ((unsigned __int64)v108 - v10) >> 3;
                *(_DWORD *)(v83 + 8) = (unsigned __int64)(v105 - v10) >> 3;
                if ( (*(_DWORD *)v83 & 2) != 0 )
                {
                  v124 = (v83 & 0xFFFFFFFFFFF80000LL) + 2112;
                  if ( *(_BYTE *)((v83 & 0xFFFFFFFFFFF80000LL) + ((v83 - v124) >> 9) + 0x38) != 0 )
                    *(_BYTE *)((v83 & 0xFFFFFFFFFFF80000LL) + ((v83 - v124) >> 9) + 0x38) = 0;
                  v87 = v83;
                }
                else
                {
                  v87 = v83;
                }
              }
            }
            v40 = (unsigned int)((_DWORD)v39 << v37);
            if ( (int)v40 < 0 )
            {
              v140 = v40;
              v118 = v132;
              v133 = (_DWORD *)v32;
              v119 = *(_QWORD *)(v11 + 40);
              if ( (unsigned __int64)(v119 + 40) > *(_QWORD *)(v11 + 32) )
              {
                v119 = MEMORY[0x181EAA920](a1: v40, a2: v31, a3: v147);
                v118 = v132;
              }
              else
              {
                *(_QWORD *)(v11 + 40) = v119 + 40;
                *(_DWORD *)v119 = 34082880;
                *(_DWORD *)(v119 + 4) = 0;
                *(_QWORD *)(v119 + 8) = 0;
                *(_QWORD *)(v119 + 16) = 0;
                *(_QWORD *)(v119 + 24) = 0;
                *(_QWORD *)(v119 + 32) = 0;
              }
              *(_DWORD *)(v119 + 20) = 46923644;
              *(_DWORD *)(v119 + 16) = v118;
              *(_DWORD *)(v119 + 12) = (unsigned __int64)(v119 - v10) >> 3;
              v131 = (_DWORD *)v119;
              MEMORY[0x18503B9A0](a1: v40, a2: v31, a3: v119, a4: v38, a5: 0);
              v117 = (unsigned __int64)v131;
              v131[2] = 46004603;
              if ( (*(_DWORD *)v117 & 2) != 0 )
              {
                v128 = (v117 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v128) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v117 & 0xFFFFFFFFFFF80000LL) + ((v117 - v128) >> 9) + 0x38) = 0;
              }
              goto LABEL_92;
            }
            v139 = v37;
            v41 = *(_QWORD *)(v11 + 40);
            v42 = ((unsigned int)v40 + 19LL) & 0x1FFFFFFF8LL;
            if ( v42 >= 0x20000 || (v43 = v41 + v42) > *(_QWORD *)(v11 + 32) )
            {
              v140 = v40;
              v143 = v36;
              v133 = (_DWORD *)v32;
              v41 = MEMORY[0x181EAA840](a1: v40, a2: v31, a3: v148, a4: v41, a5: (unsigned int)v40);
              v44 = v141;
              v45 = v134;
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v43;
              *(_QWORD *)v41 = v31;
              *(_DWORD *)(v41 + 8) = v40;
              v140 = v40;
              v44 = v141;
              v143 = v36;
              v45 = v134;
              v133 = (_DWORD *)v32;
            }
            v131 = (_DWORD *)v41;
            MEMORY[0x184FF2C40](a1: v44, a2: v31, a3: v45, a4: v41, a5: v41, a6: 0);
            v49 = *(unsigned int *)(v134 + 4);
            if ( (_DWORD)v49 == 0 )
            {
              MEMORY[0x182771080](a1: v47, a2: v48, a3: v46, a4: v131);
              goto LABEL_98;
            }
            MEMORY[0x184FF2C40](
              a1: v141,
              a2: v48,
              a3: v135,
              a4: (unsigned int)*(char *)(v134 + 12),
              a5: v131,
              a6: (unsigned int)(*(_DWORD *)(v10 + 8 * v49 + 8) >> *(_BYTE *)(v134 + 12)));
            v52 = *(_QWORD *)(v11 + 40);
            if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v11 + 32) )
            {
              v52 = MEMORY[0x181EAA920](a1: v50, a2: v51, a3: v150);
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v52 + 24;
              *(_DWORD *)v52 = 34082680;
              *(_DWORD *)(v52 + 4) = 0;
              *(_QWORD *)(v52 + 8) = 0;
              *(_QWORD *)(v52 + 16) = 0;
            }
            v53 = v131;
            *(_BYTE *)(v52 + 12) = v139;
            *(_DWORD *)(v52 + 4) = ((unsigned __int64)v53 - v10) >> 3;
            v32 = v52;
            v14 = v143;
            v31 = v148;
          }
          else
          {
            v143 = v14 - 1;
            v133 = (_DWORD *)v32;
            v142 = v14;
            v54 = *(_QWORD *)(v11 + 40);
            if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v11 + 32) )
            {
              v54 = MEMORY[0x181EAA920](a1: v35, a2: v31, a3: v150);
            }
            else
            {
              *(_QWORD *)(v11 + 40) = v54 + 24;
              *(_DWORD *)v54 = 34082680;
              *(_DWORD *)(v54 + 4) = 0;
              *(_QWORD *)(v54 + 8) = 0;
              *(_QWORD *)(v54 + 16) = 0;
            }
            *(_BYTE *)(v54 + 13) = *(_BYTE *)(v10 + 57668877);
            *(_DWORD *)(v54 + 8) = 2914;
            *(_DWORD *)(v54 + 4) = 47076493;
            v32 = v54;
            v14 = v143;
            v31 = v148;
          }
        }
        v133 = (_DWORD *)v32;
        v142 = v14;
        v55 = v137;
        ++*(_DWORD *)(v137 + 4);
        MEMORY[0x1857881C0](
          a1: *(unsigned int *)(v55 + 12),
          a2: v31,
          a3: v55,
          a4: v14,
          a5: v133,
          a6: v10 + 8LL * *(unsigned int *)(v55 + 8));
        v151 = v9;
        v144 = v142;
        v18 = v146;
        a3 = v138;
      }
    }
    if ( (int)v144 >= 1 )
      goto LABEL_64;
    v64 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v64 + 16) > *(_QWORD *)(v11 + 32) )
    {
      v65 = MEMORY[0x181EAA840](a1: v20, a2: v21, a3: 34087104, a4: v19, a5: 0);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v64 + 16;
      *(_QWORD *)v64 = 34087104;
      *(_DWORD *)(v64 + 8) = 0;
      *(_DWORD *)(v64 + 12) = 0;
      v65 = v64;
    }
    result = (_DWORD *)MEMORY[0x18578E980](a1: v20, a2: v21, a3: v137, a4: v19, a5: v65);
    if ( result != (_DWORD *)v10 && *result >> 3 != 4260888 )
    {
      MEMORY[0x18276FC00](a1: v68, a2: v69, a3: result, a4: v67, a5: v10 + 34087104);
      goto LABEL_78;
    }
    if ( *(int *)(v11 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_51;
}
