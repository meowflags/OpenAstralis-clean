// sub_15AD240
// rva 0x015ad240  size 3311  section .text  group text
// window base 0x1815ad240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AD240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  _DWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int16 v29; // ax
  __int64 v30; // rcx
  int v31; // edi
  int v32; // esi
  int v33; // r9d
  __int64 result; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ebp
  __int64 v50; // rsi
  unsigned __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // rax
  _DWORD *v54; // r8
  __int64 v55; // r8
  __int64 v56; // rax
  _DWORD *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  unsigned int v62; // ebp
  __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rcx
  _DWORD *v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  _DWORD *v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  int v78; // r9d
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // edi
  int v84; // esi
  int v85; // r9d
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  _DWORD *v89; // rax
  unsigned int v90; // edx
  unsigned int v91; // ebp
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rdx
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // rsi
  char v108; // cl
  int v109; // ebx
  _DWORD *v110; // rbp
  int v111; // edx
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rcx
  int v119; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v120; // [rsp+8h] [rbp-70h]
  __int64 v121; // [rsp+10h] [rbp-68h]
  _DWORD *v122; // [rsp+18h] [rbp-60h]
  _DWORD *v123; // [rsp+20h] [rbp-58h]
  unsigned int v124; // [rsp+2Ch] [rbp-4Ch]
  __int64 v125; // [rsp+30h] [rbp-48h]
  __int64 v126; // [rsp+38h] [rbp-40h]
  __int64 v127; // [rsp+40h] [rbp-38h]
  int v128; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v129; // [rsp+50h] [rbp-28h]
  int v130; // [rsp+54h] [rbp-24h]
  int v131; // [rsp+58h] [rbp-20h]
  unsigned int v132; // [rsp+5Ch] [rbp-1Ch]
  __int64 v133; // [rsp+60h] [rbp-18h]
  __int64 v134; // [rsp+68h] [rbp-10h]
  __int64 v135; // [rsp+70h] [rbp-8h]

  v127 = a3;
  v126 = a5;
  if ( (unsigned __int64)&v119 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_73;
  }
  v11 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_73:
    sub_2771080();
    goto LABEL_74;
  }
  v12 = *(unsigned int *)(v9 + 8 * v11 + 4);
  v13 = v9 + 8 * v11;
  if ( (_DWORD)v12 == 0 )
  {
LABEL_74:
    v81 = sub_2771080();
    goto LABEL_75;
  }
  v125 = v13;
  sub_5A9A080(a1, a2, a3: v9 + 8 * v12);
  v17 = v127;
  v18 = *(unsigned int *)(v127 + 16);
  if ( (_DWORD)v18 == 47076835 && v10 != *(_QWORD *)(v127 + 24) )
  {
    v35 = *(unsigned int *)(v127 + 12);
    v7 = 35802688;
    v133 = 35802688;
    if ( (_DWORD)v35 != 0 )
    {
      v36 = v9 + 8 * v35;
    }
    else
    {
      v48 = *(unsigned int *)(v127 + 8);
      if ( (_DWORD)v48 == 0 )
        goto LABEL_138;
      v62 = *(_DWORD *)(v9 + 8 * v48 + 4);
      if ( v62 == 0 )
      {
LABEL_104:
        v125 = sub_276BEE0(a1: v15, a2: v16, a3: v127, a4: v9 + 8 * v48);
        goto LABEL_63;
      }
      v36 = *(_QWORD *)(v10 + 40);
      v63 = v36 + 24;
      if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v124 = v62;
        v123 = (_DWORD *)(v9 + 8 * v18);
        v36 = sub_1EAA920(a1: v15, a2: v63, a3: v133);
        v62 = v124;
        v7 = v133;
        v17 = v127;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v63;
        *(_DWORD *)v36 = 35802688;
        *(_DWORD *)(v36 + 4) = 0;
        *(_QWORD *)(v36 + 8) = 0;
        *(_QWORD *)(v36 + 16) = 0;
      }
      *(_DWORD *)(v36 + 12) = v62;
      *(_DWORD *)(v17 + 12) = (unsigned __int64)(v36 - v9) >> 3;
      if ( (*(_DWORD *)v17 & 2) != 0 )
      {
        v65 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v65) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v65) >> 9) + 0x38) = 0;
      }
    }
    v37 = (_DWORD *)v36;
    v38 = *(_DWORD *)v36 >> 3;
    v39 = *(unsigned int *)(v9 + 8 * v38 + 44);
    v40 = (unsigned int)v39 & (0x62Fu >> HIBYTE(*(_DWORD *)(v9 + 8 * v38 + 44)));
    v41 = (unsigned __int16)*(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v38 + 20) + 4 * v40 + 12);
    if ( (_DWORD)v41 != 1583 )
    {
LABEL_97:
      v125 = sub_276B120(a1: v40, a2: v39, a3: v17, a4: v41, a5: v126);
      goto LABEL_63;
    }
    while ( 1 )
    {
      v44 = *v37 >> 3;
      v45 = *(unsigned int *)(v9 + 8 * v44 + 44);
      v46 = v9 + 8LL * *(unsigned int *)(v9 + 8 * v44 + 20);
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v8
                                                       + *(_QWORD *)(v9
                                                                   + 8 * v44
                                                                   + HIWORD(*(_DWORD *)(v46
                                                                                      + 4LL
                                                                                      * ((unsigned int)v45
                                                                                       & (0x62Fu >> HIBYTE(*(_DWORD *)(v9 + 8 * v44 + 44))))
                                                                                      + 12))
                                                                   + 24)))(
        a1: v46,
        a2: v45,
        a3: v37);
      v17 = v127;
      v47 = *(unsigned int *)(v127 + 16);
      if ( (_DWORD)v47 != 47076835 || v10 == *(_QWORD *)(v127 + 24) )
        break;
      v42 = *(unsigned int *)(v127 + 12);
      if ( (_DWORD)v42 != 0 )
      {
        v43 = v9 + 8 * v42;
      }
      else
      {
        v48 = *(unsigned int *)(v127 + 8);
        if ( (_DWORD)v48 == 0 )
          goto LABEL_138;
        v49 = *(_DWORD *)(v9 + 8 * v48 + 4);
        if ( v49 == 0 )
          goto LABEL_104;
        v43 = *(_QWORD *)(v10 + 40);
        v50 = v43 + 24;
        if ( (unsigned __int64)(v43 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v124 = v49;
          v123 = (_DWORD *)(v9 + 8 * v47);
          v43 = sub_1EAA920(a1: v15, a2: v50, a3: v133);
          v49 = v124;
          v17 = v127;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v50;
          *(_DWORD *)v43 = 35802688;
          *(_DWORD *)(v43 + 4) = 0;
          *(_QWORD *)(v43 + 8) = 0;
          *(_QWORD *)(v43 + 16) = 0;
        }
        *(_DWORD *)(v43 + 12) = v49;
        *(_DWORD *)(v17 + 12) = (unsigned __int64)(v43 - v9) >> 3;
        if ( (*(_DWORD *)v17 & 2) != 0 )
        {
          v51 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v51) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v51) >> 9) + 0x38) = 0;
        }
      }
      v37 = (_DWORD *)v43;
      if ( (unsigned __int16)*(_DWORD *)(v9
                                       + 8LL * *(unsigned int *)(v9 + 8LL * (*(_DWORD *)v43 >> 3) + 20)
                                       + 4LL
                                       * (*(_DWORD *)(v9 + 8LL * (*(_DWORD *)v43 >> 3) + 44)
                                        & (0x62Fu >> HIBYTE(*(_DWORD *)(v9 + 8LL * (*(_DWORD *)v43 >> 3) + 44))))
                                       + 12) != 1583 )
      {
        v125 = sub_276B120();
        goto LABEL_63;
      }
    }
  }
  if ( *(_DWORD *)(v17 + 16) == 47076835 && v10 == *(_QWORD *)(v17 + 24) )
  {
    v52 = *(unsigned int *)(v17 + 8);
    if ( (_DWORD)v52 != 0 )
    {
      v53 = *(unsigned int *)(v9 + 8 * v52 + 4);
      v54 = (_DWORD *)(v9 + 8 * v52);
      if ( (_DWORD)v53 != 0 )
      {
        v123 = v54;
        result = sub_5A98320(a1: v15, a2: v16, a3: v9 + 8 * v53, a4: v14, a5: 1);
        if ( *(int *)(v10 + 16) > 0 )
          return result;
        return sub_277F280();
      }
    }
    else
    {
      sub_2771080(a1: v15, a2: v16, a3: v17, a4: v14, a5: v126);
    }
    sub_2771080(a1: v15, a2: v16, a3: v17, a4: v54, a5: v126);
    goto LABEL_100;
  }
  if ( *(_DWORD *)(v17 + 16) != 47076812 )
  {
    if ( *(_DWORD *)(v17 + 16) == 47076838 )
    {
      if ( v126 == v9 )
        goto LABEL_138;
      v86 = *(unsigned int *)(v126 + 12);
      v7 = v9 + 8 * v86;
      if ( (_DWORD)v86 != 0 )
      {
        v87 = v9 + 8 * v86;
        goto LABEL_79;
      }
LABEL_100:
      v87 = v9 + 353301280;
LABEL_79:
      v88 = *(unsigned int *)(v87 + 4);
      v89 = (_DWORD *)(v9 + 57670096);
      if ( (_DWORD)v88 != 0 )
      {
        v90 = *(_DWORD *)(v9 + 8 * v88 + 8);
        if ( v90 != 0 )
        {
          v91 = *(char *)(v87 + 12);
          v92 = *(unsigned int *)(v9 + 374343896);
          v121 = v87;
          v93 = (v90 >> v91) + 27;
          v94 = 34082880;
          if ( (int)v93 < 0 )
          {
            v129 = v91;
            v123 = (_DWORD *)v7;
            v112 = *(_QWORD *)(v10 + 40);
            if ( (unsigned __int64)(v112 + 40) > *(_QWORD *)(v10 + 32) )
            {
              v128 = (v90 >> v91) + 27;
              v124 = v92;
              v112 = sub_1EAA920(a1: v93, a2: v92, a3: 34082880);
              v92 = v124;
            }
            else
            {
              *(_QWORD *)(v10 + 40) = v112 + 40;
              *(_DWORD *)v112 = 34082880;
              *(_DWORD *)(v112 + 4) = 0;
              *(_QWORD *)(v112 + 8) = 0;
              *(_QWORD *)(v112 + 16) = 0;
              *(_QWORD *)(v112 + 24) = 0;
              *(_QWORD *)(v112 + 32) = 0;
              v128 = (v90 >> v91) + 27;
            }
            *(_DWORD *)(v112 + 20) = 46923644;
            *(_DWORD *)(v112 + 16) = v92;
            *(_DWORD *)(v112 + 12) = (unsigned __int64)(v112 - v9) >> 3;
            v120 = (_DWORD *)v112;
            sub_503B9A0(a1: v93, a2: v92, a3: v112, a4: v94, a5: 0);
            v113 = (__int64)v120;
            v120[2] = 46004603;
            if ( (*(_DWORD *)v113 & 2) != 0 )
            {
              v117 = (v113 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v117) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v113 & 0xFFFFFFFFFFF80000LL) + ((v113 - v117) >> 9) + 0x38) = 0;
              v125 = v113;
            }
            else
            {
              v125 = v113;
            }
            while ( 1 )
            {
LABEL_63:
              v66 = v127;
              v67 = *(unsigned int *)(v127 + 8);
              if ( (_DWORD)v67 != 0 )
              {
                v68 = *(unsigned int *)(v9 + 8 * v67 + 4);
                v69 = (_DWORD *)(v9 + 8 * v67);
                if ( (_DWORD)v68 != 0 )
                {
                  v122 = v69;
                  sub_5A98320(a1: v104, a2: v107, a3: v9 + 8 * v68, a4: v9 + 8 * v68, a5: 1);
                  v73 = (_DWORD *)v125;
LABEL_66:
                  v74 = (_DWORD *)sub_2769900(a1: v71, a2: v72, a3: v73, a4: v70, a5: &a7);
                  v79 = *v74 >> 3;
                  if ( *(__int16 *)(v9 + 8 * v79 + 62) < 3
                    || *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v79 + 16) + 20) != 70135 )
                  {
                    goto LABEL_71;
                  }
                  while ( 1 )
                  {
                    v122 = v74;
                    sub_15ACB80(a1: v76, a2: v77, a3: v127, a4: v75, a5: v9 + 376614704, a6: v78, a7: v119);
                    v73 = v122;
                    v80 = *v122 >> 3;
                    if ( *(__int16 *)(v9 + 8 * v80 + 62) >= 3
                      && *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v80 + 16) + 20) == 70135 )
                    {
                      goto LABEL_66;
                    }
                    v74 = (_DWORD *)sub_276FC00(a1: v71, a2: v72, a3: v122, a4: v70, a5: v9 + 34430416);
LABEL_71:
                    v123 = v74;
                    v74 = (_DWORD *)sub_15ABB40(a1: v76, a2: v77, a3: (__int64)v74, a4: v75);
                  }
                }
              }
              else
              {
                sub_2771080();
              }
              v125 = sub_2771080(a1: v104, a2: v107, a3: v66, a4: v68, a5: v69);
            }
          }
          v95 = v91;
          v96 = (unsigned int)((_DWORD)v93 << v91);
          if ( (int)v96 < 0 )
          {
            v128 = v96;
            v129 = v91;
            v123 = (_DWORD *)v7;
            v114 = *(_QWORD *)(v10 + 40);
            if ( (unsigned __int64)(v114 + 40) > *(_QWORD *)(v10 + 32) )
            {
              v124 = v92;
              v114 = sub_1EAA920(a1: v96, a2: v92, a3: 34082880);
              v92 = v124;
            }
            else
            {
              *(_QWORD *)(v10 + 40) = v114 + 40;
              *(_DWORD *)v114 = 34082880;
              *(_DWORD *)(v114 + 4) = 0;
              *(_QWORD *)(v114 + 8) = 0;
              *(_QWORD *)(v114 + 16) = 0;
              *(_QWORD *)(v114 + 24) = 0;
              *(_QWORD *)(v114 + 32) = 0;
            }
            *(_DWORD *)(v114 + 20) = 46923644;
            *(_DWORD *)(v114 + 16) = v92;
            *(_DWORD *)(v114 + 12) = (unsigned __int64)(v114 - v9) >> 3;
            v120 = (_DWORD *)v114;
            sub_503B9A0(a1: v96, a2: v92, a3: v114, a4: v95, a5: 0);
            v115 = (__int64)v120;
            v120[2] = 46004603;
            if ( (*(_DWORD *)v115 & 2) != 0 )
            {
              v118 = (v115 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v115 & 0xFFFFFFFFFFF80000LL) + ((v115 - v118) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v115 & 0xFFFFFFFFFFF80000LL) + ((v115 - v118) >> 9) + 0x38) = 0;
              v125 = v115;
            }
            else
            {
              v125 = v115;
            }
            goto LABEL_63;
          }
          v97 = *(_QWORD *)(v10 + 40);
          v98 = *(_QWORD *)(v10 + 32);
          v99 = ((unsigned int)v96 + 19LL) & 0x1FFFFFFF8LL;
          if ( v99 >= 0x20000 || (v99 += v97, v99 > v98) )
          {
            v128 = v96;
            v129 = v91;
            v120 = (_DWORD *)(v9 + 57670096);
            v123 = (_DWORD *)v7;
            v97 = sub_1EAA840(a1: v96, a2: 34082368, a3: 34082368, a4: v99, a5: (unsigned int)v96, a6: v98);
            v91 = v129;
            v89 = v120;
          }
          else
          {
            *(_QWORD *)(v10 + 40) = v99;
            *(_QWORD *)v97 = 34082368;
            *(_DWORD *)(v97 + 8) = v96;
            v128 = v96;
            v123 = (_DWORD *)v7;
          }
          v129 = v91;
          v120 = (_DWORD *)v97;
          sub_4FF2C40(a1: v91, a2: v120, a3: v89, a4: v99, a5: v120, a6: 0);
          sub_4FF2C40(a1: v129, a2: v101, a3: v121, a4: v100, a5: v120, a6: 27);
          v134 = v8;
          v132 = v129;
          v131 = 0;
          v135 = v8;
          v122 = v120;
          v130 = 0;
        }
        else
        {
          v123 = (_DWORD *)v7;
          v111 = *(unsigned __int8 *)(v9 + 57670109);
          v132 = 0;
          v131 = -681241108;
          v122 = (_DWORD *)(v9 + 376614728);
          v130 = v111;
        }
        v102 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v102 + 40) > *(_QWORD *)(v10 + 32) )
        {
          v102 = sub_1EAA920(a1: v15, a2: v16, a3: 35802856);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v102 + 40;
          *(_DWORD *)v102 = 35802856;
          *(_DWORD *)(v102 + 4) = 0;
          *(_QWORD *)(v102 + 8) = 0;
          *(_QWORD *)(v102 + 16) = 0;
          *(_QWORD *)(v102 + 24) = 0;
          *(_QWORD *)(v102 + 32) = 0;
        }
        v123 = (_DWORD *)v102;
        *(_DWORD *)(v102 + 20) = 46923644;
        *(_DWORD *)(v102 + 16) = *(_DWORD *)(v9 + 374343896);
        *(_DWORD *)(v102 + 12) = (unsigned __int64)(v102 - v9) >> 3;
        v103 = sub_503B9A0(a1: v15, a2: v16, a3: v102, a4: v102, a5: 0);
        v106 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v106 + 24) > *(_QWORD *)(v10 + 32) )
        {
          v120 = (_DWORD *)v103;
          v106 = sub_1EAA920(a1: v104, a2: v105, a3: 34082680);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v106 + 24;
          *(_DWORD *)v106 = 34082680;
          *(_DWORD *)(v106 + 4) = 0;
          *(_QWORD *)(v106 + 8) = 0;
          *(_QWORD *)(v106 + 16) = 0;
        }
        v107 = (__int64)v123;
        v108 = v132;
        v109 = v131;
        v110 = v122;
        *(_BYTE *)(v106 + 13) = v130;
        *(_BYTE *)(v106 + 12) = v108;
        *(_DWORD *)(v106 + 8) = v109;
        *(_DWORD *)(v106 + 4) = ((unsigned __int64)v110 - v9) >> 3;
        *(_DWORD *)(v107 + 8) = (unsigned __int64)(v106 - v9) >> 3;
        if ( (*(_DWORD *)v107 & 2) != 0 )
        {
          v116 = (v107 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v107 & 0xFFFFFFFFFFF80000LL) + ((v107 - v116) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v107 & 0xFFFFFFFFFFF80000LL) + ((v107 - v116) >> 9) + 0x38) = 0;
          v125 = v107;
        }
        else
        {
          v125 = v107;
        }
        goto LABEL_63;
      }
LABEL_138:
      v125 = sub_276BEE0();
      goto LABEL_63;
    }
    *(_DWORD *)(v17 + 16) = 47076835;
    __faststorefence();
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v64 = (v127 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v127 & 0xFFFFFFFFFFF80000LL) + ((v127 - v64) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v127 & 0xFFFFFFFFFFF80000LL) + ((v127 - v64) >> 9) + 0x38) = 0;
    }
    sub_15ACAE0(a1: v15, a2: v16, a3: v127);
    v22 = v127;
    v23 = *(unsigned int *)(v127 + 8);
    if ( (_DWORD)v23 != 0 )
    {
      v24 = *(unsigned int *)(v9 + 8 * v23 + 4);
      v25 = (_DWORD *)(v9 + 8 * v23);
      if ( (_DWORD)v24 != 0 )
      {
        v122 = v25;
        sub_5A98320(a1: v20, a2: v21, a3: v9 + 8 * v24, a4: v19, a5: 1);
        if ( v126 != v9 )
        {
          v29 = *(_WORD *)(v126 + 66);
          if ( (v29 & 2) != 0 )
            goto LABEL_13;
          v58 = *(unsigned int *)(v126 + 28);
          if ( (_DWORD)v58 != 0 )
          {
            v59 = *(unsigned int *)(v9 + 8 * v58 + 8);
            v26 = v9 + 8 * v59;
            if ( (_DWORD)v59 == 0 )
            {
              v123 = (_DWORD *)(v9 + 8 * v59);
LABEL_48:
              if ( (v29 & 0x10) != 0 )
                sub_15AC580(a1: v27, a2: v28, a3: v127, a4: v26);
LABEL_13:
              sub_15AC7C0(a1: v27, a2: v28, a3: v127, a4: v26, a5: v126);
              result = sub_15ACB80(a1: v31, a2: v32, a3: v127, a4: v30, a5: v9 + 376614496, a6: v33, a7: v119);
              if ( *(int *)(v10 + 16) > 0 )
                return result;
              return sub_277F280();
            }
            v60 = *(unsigned int *)(v9 + 8 * v59 + 28);
            if ( (_DWORD)v60 != 0 )
            {
              v61 = *(unsigned int *)(v9 + 8 * v60 + 44);
              if ( (_DWORD)v61 != 0 )
              {
                v130 = *(__int16 *)(v126 + 66);
                v123 = (_DWORD *)v26;
                v120 = (_DWORD *)(v9 + 8 * v61);
                sub_15AD080(a1: v27, a2: v28, a3: v120, a4: v26, a5: v26, a6: 1);
                LOBYTE(v29) = v132;
                goto LABEL_48;
              }
              v81 = sub_276BEE0(a1: v27, a2: v28, a3: v61, a4: v26);
            }
            else
            {
              v123 = (_DWORD *)v26;
              v81 = sub_276BEE0();
            }
          }
          else
          {
            v81 = sub_276BEE0();
          }
LABEL_75:
          v122 = (_DWORD *)v81;
          sub_15ACB80(a1: v83, a2: v84, a3: v127, a4: v82, a5: v9 + 376614704, a6: v85, a7: v119);
          v73 = v122;
          goto LABEL_66;
        }
        goto LABEL_96;
      }
LABEL_95:
      sub_2771080(a1: v20, a2: v21, a3: v22, a4: v19, a5: v126);
LABEL_96:
      sub_2771080();
      goto LABEL_97;
    }
LABEL_94:
    sub_2771080(a1: v20, a2: v21, a3: v22, a4: v19, a5: v126);
    goto LABEL_95;
  }
  v55 = *(unsigned int *)(v17 + 8);
  if ( (_DWORD)v55 == 0 )
  {
    sub_2771080(a1: v15, a2: v16, a3: v17, a4: v14, a5: v126);
    goto LABEL_93;
  }
  v56 = *(unsigned int *)(v9 + 8 * v55 + 4);
  v57 = (_DWORD *)(v9 + 8 * v55);
  if ( (_DWORD)v56 == 0 )
  {
LABEL_93:
    sub_2771080(a1: v15, a2: v16, a3: v17, a4: v14, a5: v126);
    goto LABEL_94;
  }
  v123 = v57;
  result = sub_5A98320(a1: v15, a2: v16, a3: v9 + 8 * v56, a4: v14, a5: 1);
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
