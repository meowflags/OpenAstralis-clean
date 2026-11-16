// sub_4F28680
// rva 0x04f28680  size 5969  section .text  group text
// window base 0x184f28680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F28680(int a1, int a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  int v13; // ebp
  int v14; // esi
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // ecx
  double v30; // xmm0_8
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned __int64 v33; // rbx
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // r9
  int v38; // r10d
  __int64 v39; // r8
  unsigned int v40; // r11d
  __int64 v41; // r12
  unsigned __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rcx
  int v49; // eax
  double v50; // xmm2_8
  unsigned __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rcx
  int v62; // ebx
  __int64 v63; // rdi
  int v64; // r8d
  int v65; // r9d
  unsigned int *v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rcx
  unsigned int v69; // ebp
  __int64 v70; // rsi
  __int64 v71; // rdi
  unsigned __int64 v72; // r10
  __int64 v73; // r10
  __int64 v74; // r11
  unsigned int v75; // eax
  unsigned int v76; // ebp
  __int64 v77; // rax
  int v78; // edi
  int v79; // esi
  int v80; // r8d
  int v81; // r9d
  int v82; // ecx
  int v83; // eax
  int v84; // esi
  int v85; // eax
  int v86; // esi
  int v87; // eax
  unsigned __int64 v88; // rdx
  double v89; // xmm1_8
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdi
  __int64 v95; // rsi
  unsigned __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rsi
  int v101; // r8d
  int v102; // r9d
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rdx
  unsigned int v107; // ecx
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rdx
  int v113; // eax
  unsigned __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rdx
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rbx
  unsigned __int64 v119; // rbx
  unsigned __int64 v120; // rdx
  char v121; // [rsp+0h] [rbp-78h] BYREF
  __int64 v122; // [rsp+8h] [rbp-70h]
  __int64 v123; // [rsp+10h] [rbp-68h]
  __int64 v124; // [rsp+18h] [rbp-60h]
  unsigned int v125; // [rsp+24h] [rbp-54h]
  unsigned __int64 v126; // [rsp+28h] [rbp-50h]
  int v127; // [rsp+34h] [rbp-44h]
  int v128; // [rsp+38h] [rbp-40h]
  int v129; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v130; // [rsp+40h] [rbp-38h]
  int v131; // [rsp+44h] [rbp-34h]
  unsigned int v132; // [rsp+48h] [rbp-30h]
  unsigned int v133; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v134; // [rsp+50h] [rbp-28h]
  __int64 v135; // [rsp+58h] [rbp-20h]
  __int64 v136; // [rsp+60h] [rbp-18h]
  unsigned int v137; // [rsp+68h] [rbp-10h]
  unsigned int v138; // [rsp+6Ch] [rbp-Ch]
  __int64 v139; // [rsp+70h] [rbp-8h]

  v126 = a3;
  if ( (unsigned __int64)&v121 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_226;
  }
  if ( *(_BYTE *)(a3 + 44) != 0 )
  {
    *(_BYTE *)(a3 + 44) = 0;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      sub_277F280();
      a3 = v126;
    }
    return *(unsigned int *)(a3 + 40);
  }
  *(_DWORD *)(a3 + 20) = 0;
  v10 = *(unsigned int *)(a3 + 16);
  v125 = *(_DWORD *)(a3 + 16);
  if ( *(int *)(a3 + 32) >= 0 )
    JUMPOUT(0x309E3E6CBLL);
  v11 = v7 + 8 * v10;
  v124 = v7 + 8 * v10;
  v27 = sub_4F2A0E0(a1, a2, a3: v126, a4: 0x7FFFFFFF, a5, a6, a7: v121);
  if ( v27 < 0 )
  {
    *(_DWORD *)(v126 + 40) = -1;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 0xFFFFFFFFLL;
  }
  v22 = (unsigned int)v27;
  v12 = v126;
  *(_DWORD *)(v126 + 40) = v27;
  *(_DWORD *)(v12 + 32) = 0x7FFFFFFF;
  if ( v27 >= 256 )
  {
    v13 = 4;
    v11 = v124;
    goto LABEL_10;
  }
  if ( v125 == 0 )
  {
    sub_2771080();
    goto LABEL_231;
  }
  v11 = *(_DWORD *)(v7 + 8LL * v125 + 8);
  if ( v11 <= v27 )
  {
LABEL_231:
    sub_2771220(a1: v18, a2: v19, a3: (unsigned int)v22, a4: v22, a5: v11);
LABEL_232:
    v132 = v37;
    v44 = sub_2771080(a1: v18, a2: v19, a3: v35, a4: v28);
LABEL_233:
    v132 = v45;
    sub_2771220(a1: v18, a2: v19, a3: (unsigned int)v37, a4: v133, a5: v44);
LABEL_234:
    v131 = v11;
    sub_579A6E0(a1: v63, a2: v70, a3: v61, a4: v61, a5: (unsigned int)v70);
LABEL_235:
    LODWORD(v16) = sub_2771080();
LABEL_236:
    LODWORD(v46) = sub_2771220(a1: v18, a2: v19, a3: (unsigned int)v16, a4: v24, a5: v11);
LABEL_237:
    v130 = v46;
    LODWORD(v46) = sub_2771080();
LABEL_238:
    v11 = v129;
    sub_2771220(a1: v18, a2: v19, a3: (unsigned int)v46, a4: v48, a5: (unsigned int)v48);
    goto LABEL_239;
  }
  v11 = v124;
  v13 = *(char *)(v124 + (unsigned int)v27 + 12);
LABEL_10:
  while ( (v13 & 1) != 0 )
  {
    v14 = *(char *)(v12 + 46);
    v15 = *(_DWORD *)(v12 + 36) + 1;
    if ( (_DWORD)v22 == 13 )
    {
      *(_DWORD *)(v12 + 36) = v15;
      if ( (_BYTE)v14 != 0 )
      {
        v138 = v13;
        *(_DWORD *)(v12 + 32) = 2147483646;
        *(_DWORD *)(v12 + 40) = 10;
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280();
        return 10;
      }
      v138 = v13;
      v16 = sub_4F2A0E0(a1: v15, a2: v14, a3: v12, a4: v12, a5: v20, a6: v21, a7: v121);
      if ( (_DWORD)v16 == 10 )
        v16 = sub_4F2A0E0(a1: v18, a2: v19, a3: v126, a4: v23, a5: v20, a6: v21, a7: v121);
    }
    else
    {
      if ( (_DWORD)v22 == 10 )
      {
        v138 = v13;
        v137 = 10;
        *(_DWORD *)(v12 + 36) = v15;
        if ( (_BYTE)v14 != 0 )
        {
          *(_DWORD *)(v12 + 40) = 10;
          if ( *(int *)(v8 + 16) <= 0 )
            sub_277F280();
          return 10;
        }
      }
      else
      {
        v138 = v13;
        v137 = v22;
      }
      v16 = sub_4F2A0E0(a1: v15, a2: v14, a3: v12, a4: v22, a5: v20, a6: v21, a7: v121);
    }
    if ( (int)v16 < 0 )
    {
      *(_DWORD *)(v126 + 40) = -1;
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return 0xFFFFFFFFLL;
    }
    if ( (int)v16 < 256 )
    {
      v24 = v125;
      if ( v125 == 0 )
        goto LABEL_235;
      v11 = *(_DWORD *)(v7 + 8LL * v125 + 8);
      if ( v11 <= (unsigned int)v16 )
        goto LABEL_236;
      v11 = v124;
      v25 = (unsigned int)*(char *)(v124 + v16 + 12);
      if ( *(int *)(v8 + 16) <= 0 )
        LODWORD(v16) = sub_277F280(a1: v18, a2: v19, a3: v25);
      v13 = v25;
      v12 = v126;
      LODWORD(v22) = v16;
    }
    else if ( *(int *)(v8 + 16) <= 0 )
    {
      v11 = v124;
      v26 = sub_277F280(a1: v18, a2: v19, a3: v17, a4: v125);
      v13 = 4;
      v12 = v126;
      LODWORD(v22) = v26;
    }
    else
    {
      v13 = 4;
      LODWORD(v22) = v16;
      v12 = v126;
    }
  }
  v138 = v13;
  v137 = v22;
  v11 = v124;
  v28 = v125;
  if ( (v13 & 2) != 0 )
  {
    if ( v137 == 45 )
    {
      v87 = sub_4F2A0E0(a1: v18, a2: v19, a3: v126, a4: v125, a5: v20, a6: v21, a7: v121);
      if ( v87 == 46 )
      {
        v129 = 1;
        v29 = 46;
      }
      else
      {
        if ( (unsigned int)(v87 - 48) >= 0xA )
        {
          v88 = v126;
          *(_DWORD *)(v126 + 32) = v87;
          *(_DWORD *)(v88 + 40) = 45;
          if ( *(int *)(v8 + 16) <= 0 )
            sub_277F280();
          return 45;
        }
        v129 = 1;
        v29 = v87;
      }
    }
    else
    {
      v129 = 0;
      v29 = v137;
    }
    v30 = 0.0;
    v31 = 0;
    v32 = 0;
    v33 = v126;
    while ( 1 )
    {
      if ( v29 != 46 || (_DWORD)v31 != 0 )
      {
        if ( v29 < 48 || v29 >= 58 )
        {
          *(_DWORD *)(v33 + 32) = v29;
          if ( v32 != 0 )
          {
            v49 = v32 - 1;
            v50 = MEMORY[0xea8bc38]/* 0xea8bc38 */;
            while ( v49 >= 1 )
            {
              v50 = v50 * MEMORY[0xea8bc38]/* 0xea8bc38 */;
              --v49;
            }
            v30 = v30 / v50;
          }
          if ( v129 != 0 )
            *(_QWORD *)&v89 = *(_QWORD *)&v30 ^ MEMORY[0xea9f7e0]/* 0xea9f7e0 */;
          else
            v89 = v30;
          *(double *)(v33 + 24) = v89;
          *(_DWORD *)(v33 + 40) = -2;
          if ( *(int *)(v8 + 16) <= 0 )
            sub_277F280(a1: v18, a2: v19, a3: v31);
          return 4294967294LL;
        }
        LODWORD(v19) = v29 - 48;
        v30 = v30 * MEMORY[0xea8bc38]/* 0xea8bc38 */ + (double)(v29 - 48);
        v32 += v31;
        v137 = v31;
      }
      else
      {
        v137 = 1;
      }
      v132 = v32;
      *(double *)&v136 = v30;
      v133 = v29;
      v34 = sub_4F2A0E0(a1: v18, a2: v19, a3: v33, a4: v29, a5: v20, a6: v21, a7: v121);
      v31 = v137;
      v30 = *(double *)&v136;
      v29 = v34;
      v33 = v126;
      v32 = v132;
    }
  }
  v35 = v126;
  v136 = 34082680;
  v36 = 34089376;
  v135 = 34089376;
  if ( (v138 & 4) != 0 )
  {
    v37 = 0;
    v139 = v6;
    v129 = v138;
    v133 = v137;
    while ( 1 )
    {
      v47 = *(unsigned int *)(v35 + 12);
      if ( (_DWORD)v47 == 0 )
        goto LABEL_232;
      v38 = *(_DWORD *)(v7 + 8 * v47 + 8);
      v39 = v7 + 8 * v47;
      if ( v38 <= (int)v37 )
        break;
      v44 = *(_DWORD *)(v39 + 8);
      v45 = v37 + 1;
      if ( v44 <= (unsigned int)v37 )
        goto LABEL_233;
      v132 = v37 + 1;
      *(_WORD *)(v39 + 2 * v37 + 12) = v133;
      v46 = sub_4F2A0E0(a1: v18, a2: v19, a3: v35, a4: v45, a5: v35, a6: v37, a7: v121);
      if ( (int)v46 < 0 )
      {
        v28 = 1;
        v11 = v124;
      }
      else if ( (int)v46 < 256 )
      {
        if ( v125 == 0 )
          goto LABEL_237;
        v48 = *(unsigned int *)(v7 + 8LL * v125 + 8);
        if ( (unsigned int)v48 <= (unsigned int)v46 )
          goto LABEL_238;
        v11 = v124;
        v28 = (unsigned int)*(char *)(v124 + v46 + 12);
      }
      else
      {
        v28 = 4;
        v11 = v124;
      }
      if ( (v28 & 6) == 0 )
      {
        v51 = v126;
        *(_DWORD *)(v126 + 32) = v46;
        v52 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v131 = v28;
          v130 = v46;
          v52 = sub_1EAA920(a1: v18, a2: v19, a3: v136);
          v51 = v126;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v52 + 24;
          *(_DWORD *)v52 = 34082680;
          *(_DWORD *)(v52 + 4) = 0;
          *(_QWORD *)(v52 + 8) = 0;
          *(_QWORD *)(v52 + 16) = 0;
          v131 = v28;
          v130 = v46;
        }
        v53 = v7 + 8LL * *(unsigned int *)(v51 + 12);
        v123 = v52;
        v122 = v53;
        sub_4FE8CC0(a1: v132, a2: v19, a3: v52, a4: v28, a5: v53, a6: 0);
        v56 = v123;
        v57 = v126;
        *(_DWORD *)(v126 + 20) = (unsigned __int64)(v123 - v7) >> 3;
        if ( (*(_DWORD *)v57 & 2) != 0 )
        {
          v109 = v57;
          v110 = v57;
          v111 = v57 & 0xFFFFFFFFFFF80000LL;
          v112 = (v110 - (v111 + 2112)) >> 9;
          if ( *(_BYTE *)(v111 + v112 + 56) != 0 )
            *(_BYTE *)(v111 + v112 + 56) = 0;
          v58 = v109;
        }
        else
        {
          v58 = v57;
        }
        if ( *(_BYTE *)(v58 + 45) != 0 )
        {
          v59 = sub_4FFDF00(a1: v54, a2: v55, a3: v56);
          v58 = v126;
          *(_DWORD *)(v126 + 20) = (unsigned __int64)(v59 - v7) >> 3;
          if ( (*(_DWORD *)v58 & 2) != 0 )
          {
            v118 = (v58 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v118) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v118) >> 9) + 0x38) = 0;
          }
        }
        *(_DWORD *)(v58 + 40) = -3;
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280(a1: v54, a2: v55, a3: v58, a4: (unsigned int)v131);
        return 4294967293LL;
      }
      v37 = v132;
      v129 = v28;
      v133 = v46;
      v35 = v126;
      v36 = v135;
    }
    v40 = 2 * v38;
    if ( (v38 & 0x40000000) == 0 )
    {
      v41 = *(_QWORD *)(v8 + 40);
      v42 = (2LL * v40 + 19) & 0x3FFFFFFF8LL;
      if ( v42 >= 0x20000 || (unsigned __int64)(v43 = v41 + v42) > *(_QWORD *)(v8 + 32) )
      {
        v134 = v40;
        v123 = v39;
        v130 = v38;
        v132 = v37;
        v131 = 2 * v38;
        sub_1EAA840(a1: v18, a2: v19, a3: v135, a4: v40, a5: v40);
        v40 = v131;
        v38 = v130;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v43;
        *(_QWORD *)v41 = v36;
        *(_DWORD *)(v41 + 8) = v40;
      }
      if ( v38 >= v40 )
        JUMPOUT(0x309E3EA9CLL);
      JUMPOUT(0x309E3EA8FLL);
    }
    v132 = v37;
    sub_579A6E0(a1: v18, a2: v19, a3: v39, a4: v28, a5: v40);
    goto LABEL_223;
  }
  if ( (v138 & 8) == 0 )
  {
    if ( v137 != 47 || *(_BYTE *)(v126 + 47) == 0 && *(_BYTE *)(v126 + 48) == 0 )
    {
      v134 = v6 + *(_QWORD *)(v7 + 8LL * (*(_DWORD *)v126 >> 3) + 144);
      if ( (v138 & 0x10) == 0 )
      {
        v107 = v137;
        *(_DWORD *)(v126 + 40) = v137;
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280();
        return v107;
      }
      v139 = v6;
      v133 = v137;
      while ( 1 )
      {
        v90 = sub_4F2A0E0(a1: v18, a2: v19, a3: v126, a4: v28, a5: v20, a6: v21, a7: v121);
        if ( v90 == 10 || v90 == 13 || v90 < 0 )
          break;
        if ( *(int *)(v8 + 16) <= 0 )
LABEL_226:
          v133 = sub_277F280(a1: v18, a2: v19, a3: v91, a4: v28, a5: v133);
        else
          v133 = v90;
      }
      v108 = v126;
      *(_DWORD *)(v126 + 32) = v90;
      v133 = v90;
      result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))v134)(
                 a1: v18,
                 a2: v19,
                 a3: v108,
                 a4: v108);
      if ( *(int *)(v8 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    v134 = v6 + *(_QWORD *)(v7 + 8LL * (*(_DWORD *)v126 >> 3) + 144);
    v97 = sub_4F2A0E0(a1: v18, a2: v19, a3: v126, a4: v126, a5: v20, a6: v21, a7: v121);
    if ( v97 == 42 )
    {
      v11 = v126;
      if ( *(_BYTE *)(v126 + 48) != 0 )
      {
        v133 = 0;
        v132 = 42;
        while ( 1 )
        {
          v113 = sub_4F2A0E0(a1: v99, a2: v100, a3: v11, a4: v98, a5: v101, a6: v102, a7: v121);
          if ( v113 == 47 && v133 == 42 )
            break;
          v114 = v126;
          v98 = (unsigned int)(*(_DWORD *)(v126 + 36) + 1);
          if ( v113 == 13 )
          {
            *(_DWORD *)(v126 + 36) = v98;
            v113 = sub_4F2A0E0(a1: v99, a2: v100, a3: v114, a4: v98, a5: v101, a6: v102, a7: v121);
            if ( v113 == 10 )
              v113 = sub_4F2A0E0(a1: v99, a2: v100, a3: v126, a4: v98, a5: v101, a6: v102, a7: v121);
          }
          else if ( v113 == 10 )
          {
            *(_DWORD *)(v126 + 36) = v98;
            v113 = sub_4F2A0E0(a1: v99, a2: v100, a3: v114, a4: v98, a5: v101, a6: v102, a7: v121);
          }
          if ( v113 < 0 )
          {
            *(_DWORD *)(v126 + 40) = -1;
            if ( *(int *)(v8 + 16) <= 0 )
              sub_277F280(a1: v99, a2: v100, a3: v133, a4: v98);
            return 0xFFFFFFFFLL;
          }
          if ( *(int *)(v8 + 16) <= 0 )
          {
            v133 = sub_277F280(a1: v99, a2: v100, a3: v114, a4: v98);
            v132 = v133;
          }
          else
          {
            v133 = v113;
            v132 = v113;
          }
          v11 = v126;
        }
        result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))v134)(
                   a1: v99,
                   a2: v100,
                   a3: v126,
                   a4: v126);
        if ( *(int *)(v8 + 16) > 0 )
          return result;
        return sub_277F280();
      }
      v103 = v126;
    }
    else
    {
      v103 = v126;
    }
    if ( v97 == 47 && *(_BYTE *)(v103 + 47) != 0 )
    {
      v133 = 47;
      while ( 1 )
      {
        v115 = sub_4F2A0E0(a1: v99, a2: v100, a3: v103, a4: v103, a5: v101, a6: v102, a7: v121);
        if ( v115 == 10 || v115 == 13 || v115 < 0 )
          break;
        if ( *(int *)(v8 + 16) <= 0 )
          v133 = sub_277F280(a1: v99, a2: v100, a3: v116, a4: v134, a5: v133);
        else
          v133 = v115;
        LODWORD(v103) = v126;
      }
      v120 = v126;
      *(_DWORD *)(v126 + 32) = v115;
      v133 = v115;
      result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))v134)(
                 a1: v99,
                 a2: v100,
                 a3: v120,
                 a4: v120);
      if ( *(int *)(v8 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    v104 = v125;
    if ( v125 != 0 )
    {
      v11 = *(_DWORD *)(v7 + 8LL * v125 + 8);
      if ( v11 >= 0x30 )
      {
        if ( (*(_BYTE *)(v7 + 8LL * v125 + 59) & 0x10) == 0 )
        {
          *(_DWORD *)(v103 + 32) = v97;
          *(_DWORD *)(v103 + 40) = 47;
          if ( *(int *)(v8 + 16) > 0 )
            return 47;
LABEL_223:
          sub_277F280();
          return 47;
        }
        v133 = v97;
        while ( 1 )
        {
          v105 = sub_4F2A0E0(a1: v99, a2: v100, a3: v103, a4: v103, a5: v101, a6: v102, a7: v121);
          if ( v105 == 10 || v105 == 13 || v105 < 0 )
            break;
          if ( *(int *)(v8 + 16) <= 0 )
            v133 = sub_277F280(a1: v99, a2: v100, a3: v106, a4: v134, a5: v133);
          else
            v133 = v105;
          LODWORD(v103) = v126;
        }
        v117 = v126;
        *(_DWORD *)(v126 + 32) = v105;
        v133 = v105;
        result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))v134)(
                   a1: v99,
                   a2: v100,
                   a3: v117,
                   a4: v117);
        if ( *(int *)(v8 + 16) > 0 )
          return result;
        return sub_277F280();
      }
LABEL_240:
      sub_2771220(a1: v99, a2: v100, a3: 47, a4: v104, a5: v11);
LABEL_241:
      v131 = v11;
      v75 = sub_2771080();
LABEL_242:
      sub_2771220(a1: v124, a2: v11, a3: v133, a4: v66, a5: v75, a6: v138);
      __halt();
    }
LABEL_239:
    sub_2771080(a1: v99, a2: v100, a3: v103);
    goto LABEL_240;
  }
  v60 = v137;
  *(_DWORD *)(v126 + 40) = v137;
  v62 = sub_4F2A0E0(a1: v18, a2: v19, a3: v35, a4: v60, a5: v20, a6: v21, a7: v121);
  v133 = 0;
  v139 = v6;
  v132 = v137;
  v66 = (unsigned int *)v126;
  while ( 1 )
  {
    v67 = v66[10];
    if ( v62 < 0 || (_DWORD)v67 == v62 || v62 == 10 || v62 == 13 )
      break;
    if ( v62 == 92 )
    {
      v77 = sub_4F2A0E0(a1: v63, a2: v67, a3: v126, a4: v61, a5: v64, a6: v65, a7: v121);
      v131 = v77;
      v82 = v77 - 48;
      if ( (unsigned int)(v77 - 48) < 8 )
      {
        v130 = v77 - 48;
        v83 = sub_4F2A0E0(a1: v78, a2: v79, a3: v126, a4: v82, a5: v80, a6: v81, a7: v121);
        if ( (unsigned int)(v83 - 48) < 8 )
        {
          v129 = v83;
          v128 = 8 * v130 + v83 - 48;
          v85 = sub_4F2A0E0(a1: v63, a2: v84, a3: v126, a4: 8 * v130, a5: v64, a6: v65, a7: v121);
          if ( (unsigned int)(v85 - 48) < 8 )
          {
            v66 = (unsigned int *)v126;
            v129 = v85;
            if ( v131 < 52 )
            {
              v127 = 8 * v128 + v85 - 48;
              v129 = sub_4F2A0E0(a1: v63, a2: v86, a3: v126, a4: v127, a5: v64, a6: v65, a7: v121);
              v11 = v127;
              v66 = (unsigned int *)v126;
            }
            else
            {
              v11 = v128;
            }
          }
          else
          {
            v129 = v85;
            v11 = v128;
            v66 = (unsigned int *)v126;
          }
        }
        else
        {
          v129 = v83;
          v11 = v130;
          v66 = (unsigned int *)v126;
        }
      }
      else
      {
        if ( (unsigned int)v77 <= 0x76 )
          __asm { jmp     rdx; switch jump }
        v130 = v77;
        v129 = sub_4F2A0E0(a1: v78, a2: v79, a3: v126, a4: v82, a5: v80, a6: v81, a7: v121);
        v11 = v130;
        v66 = (unsigned int *)v126;
      }
    }
    else
    {
      v130 = v62;
      v129 = sub_4F2A0E0(a1: v63, a2: v67, a3: (_DWORD)v66, a4: (_DWORD)v66, a5: v64, a6: v65, a7: v121);
      v11 = v130;
      v66 = (unsigned int *)v126;
    }
    v68 = v66[3];
    if ( (_DWORD)v68 == 0 )
      goto LABEL_241;
    v69 = *(_DWORD *)(v7 + 8 * v68 + 8);
    v61 = v7 + 8 * v68;
    if ( (int)v69 <= (int)v133 )
    {
      v70 = 2 * v69;
      if ( (v69 & 0x40000000) == 0 )
      {
        v71 = *(_QWORD *)(v8 + 40);
        v72 = (2LL * (unsigned int)v70 + 19) & 0x3FFFFFFF8LL;
        if ( v72 >= 0x20000 || (unsigned __int64)(v73 = v71 + v72) > *(_QWORD *)(v8 + 32) )
        {
          v134 = (unsigned int)v70;
          v123 = v61;
          v128 = v69;
          v131 = v11;
          v127 = 2 * v69;
          sub_1EAA840(a1: v71, a2: v70, a3: v135, a4: v61, a5: (unsigned int)v70);
          LODWORD(v70) = v127;
          v69 = v128;
        }
        else
        {
          v74 = v135;
          *(_QWORD *)(v8 + 40) = v73;
          *(_QWORD *)v71 = v74;
          *(_DWORD *)(v71 + 8) = v70;
        }
        if ( v69 >= (unsigned int)v70 )
          JUMPOUT(0x309E3EF0BLL);
        JUMPOUT(0x309E3EF00LL);
      }
      goto LABEL_234;
    }
    v75 = *(_DWORD *)(v61 + 8);
    v76 = v133 + 1;
    if ( v75 <= v133 )
      goto LABEL_242;
    *(_WORD *)(v61 + 2LL * v133 + 12) = v11;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v131 = v11;
      sub_277F280();
      v62 = v129;
      v133 = v76;
      v139 = v6;
      v132 = v131;
      v66 = (unsigned int *)v126;
    }
    else
    {
      v133 = v76;
      v132 = v11;
      v62 = v129;
    }
  }
  v130 = v62;
  if ( (_DWORD)v67 != v62 )
    JUMPOUT(0x309E3F3CFLL);
  v66[8] = 0x7FFFFFFF;
  v92 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v92 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v92 = sub_1EAA920(a1: v63, a2: v67, a3: v136);
    v66 = (unsigned int *)v126;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v92 + 24;
    *(_DWORD *)v92 = 34082680;
    *(_DWORD *)(v92 + 4) = 0;
    *(_QWORD *)(v92 + 8) = 0;
    *(_QWORD *)(v92 + 16) = 0;
  }
  v93 = v7 + 8LL * v66[3];
  v123 = v92;
  v122 = v93;
  sub_4FE8CC0(a1: v133, a2: v67, a3: v92, a4: v61, a5: v93, a6: 0);
  v96 = v126;
  *(_DWORD *)(v126 + 20) = (unsigned __int64)(v123 - v7) >> 3;
  if ( (*(_DWORD *)v96 & 2) != 0 )
  {
    v119 = (v96 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v96 & 0xFFFFFFFFFFF80000LL) + ((v96 - v119) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v96 & 0xFFFFFFFFFFF80000LL) + ((v96 - v119) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v94, a2: v95, a3: v132);
  return *(unsigned int *)(v126 + 40);
}
