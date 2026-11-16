// sub_1EAC660
// rva 0x01eac660  size 6438  section .text  group text
// window base 0x181eac660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EAC660(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  int v9; // ecx
  int v10; // esi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  _DWORD *v18; // rbp
  int v19; // eax
  _DWORD *v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  int v23; // r10d
  char v24; // r11
  __int64 v25; // r12
  int v26; // r11d
  unsigned __int64 v27; // r10
  __int64 v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  char *v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r11
  __int64 v36; // rdi
  int v37; // r10d
  char *v38; // rcx
  unsigned __int64 v39; // rbx
  _DWORD *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r10
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  BOOL v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // r10
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rdi
  unsigned __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  char v56; // dl
  _QWORD *v57; // rax
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rdx
  _QWORD *v67; // rax
  char *v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // r10
  char *v73; // rax
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // rbp
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // rsi
  int v82; // ebx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // rbx
  int v87; // edx
  int v88; // ecx
  int v89; // ebx
  int j; // ecx
  __int64 v91; // rdx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rax
  __int64 v97; // rdx
  char *v98; // r10
  int v99; // ecx
  int v100; // edx
  char v101; // bp
  int i; // ecx
  int v103; // [rsp+0h] [rbp-168h]
  __int64 v104; // [rsp+0h] [rbp-168h]
  __int64 v105; // [rsp+8h] [rbp-160h]
  __int64 v106; // [rsp+8h] [rbp-160h]
  __int64 v107; // [rsp+10h] [rbp-158h]
  int v108; // [rsp+10h] [rbp-158h]
  __int64 v109; // [rsp+18h] [rbp-150h]
  __int64 v110; // [rsp+18h] [rbp-150h]
  __int64 v111; // [rsp+20h] [rbp-148h]
  __int64 v112; // [rsp+20h] [rbp-148h]
  __int64 v113; // [rsp+28h] [rbp-140h]
  __int64 v114; // [rsp+28h] [rbp-140h]
  int v115; // [rsp+34h] [rbp-134h]
  unsigned __int64 v116; // [rsp+38h] [rbp-130h]
  unsigned __int64 v117; // [rsp+40h] [rbp-128h]
  unsigned __int64 v118; // [rsp+58h] [rbp-110h]
  _DWORD *v119; // [rsp+60h] [rbp-108h]
  unsigned int v120; // [rsp+6Ch] [rbp-FCh]
  unsigned __int64 v121; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v122; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v123; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v124; // [rsp+80h] [rbp-E8h]
  unsigned int v125; // [rsp+8Ch] [rbp-DCh]
  __int64 v126; // [rsp+90h] [rbp-D8h]
  unsigned int v127; // [rsp+9Ch] [rbp-CCh]
  unsigned __int64 v128; // [rsp+A0h] [rbp-C8h]
  unsigned int v129; // [rsp+A8h] [rbp-C0h]
  unsigned int v130; // [rsp+ACh] [rbp-BCh]
  _QWORD *v131; // [rsp+B0h] [rbp-B8h]
  int v132; // [rsp+BCh] [rbp-ACh]
  _DWORD *v133; // [rsp+C0h] [rbp-A8h]
  _DWORD *v134; // [rsp+C0h] [rbp-A8h]
  char *v135; // [rsp+C8h] [rbp-A0h]
  unsigned int *v136; // [rsp+D0h] [rbp-98h]
  _DWORD *v137; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v138; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v139; // [rsp+100h] [rbp-68h]
  unsigned __int64 v140; // [rsp+128h] [rbp-40h]
  unsigned __int64 v141; // [rsp+138h] [rbp-30h]
  unsigned __int64 v142; // [rsp+140h] [rbp-28h]
  int v143; // [rsp+150h] [rbp-18h]
  int v144; // [rsp+154h] [rbp-14h]
  unsigned __int64 v145; // [rsp+158h] [rbp-10h]
  __int64 v146; // [rsp+160h] [rbp-8h]

  v146 = a5;
  v145 = a6;
  v119 = (_DWORD *)a1;
  v144 = a2;
  if ( a3 == (_DWORD *)v6 )
  {
    sub_276EFE0();
    goto LABEL_310;
  }
  v118 = (unsigned __int64)a3;
  v143 = *(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 32);
  v142 = (v143 >> 8) & 0xFFF;
  v7 = ((unsigned __int64)(unsigned int)a3[2] << v143) + v142;
  v141 = v7;
  result = v142;
  while ( 1 )
  {
LABEL_3:
    if ( v7 <= result )
      return result;
    v140 = sub_1EAC300(
             a1,
             a2,
             a3: a5,
             a4: v7,
             a5: result >> 9,
             a6,
             a7: v103,
             a8: v105,
             a9: v107,
             a10: v109,
             a11: v111,
             a12: v113);
    result = sub_1EAC0C0(
               a1: v144,
               a2: v10,
               a3: v146,
               a4: v9,
               a5: v140,
               a6: v145,
               a7: v104,
               a8: v106,
               a9: v108,
               a10: v110,
               a11: v112,
               a12: v114);
    if ( v140 == result )
      return result;
    a1 = (__int64)v119;
    if ( v118 == v6 )
      JUMPOUT(0x303D3678BLL);
    v11 = v140 << 9;
    if ( v142 > v140 << 9 )
      JUMPOUT(0x303D367A4LL);
    v12 = v140 << 9;
    a2 = v11 + v118;
    v139 = result << 9;
    if ( result << 9 < v141 )
      JUMPOUT(0x303D367D0LL);
    if ( v119 == (_DWORD *)v6 )
      break;
    v117 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
    v116 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
    v13 = *v119 >> 3;
    v14 = a2 + 4LL * (unsigned int)((v141 - v11) >> 2);
    v138 = v14;
    if ( v13 == 5057994 )
    {
      v19 = v119[1];
      v115 = v19;
      v20 = (_DWORD *)(v11 + v118);
      v21 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
      v22 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
      a2 = v118;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( v14 <= (unsigned __int64)v20 )
                {
                  result = v139;
                  v7 = v141;
                  a6 = v145;
                  a5 = v146;
                  goto LABEL_3;
                }
                if ( v19 == 0 )
                  goto LABEL_313;
                v11 = 8LL * (unsigned int)*v20;
                if ( v11 != 0 )
                  v11 += v6;
                v12 = (unsigned __int64)(v20 + 1);
                if ( v11 != 0 )
                  break;
                ++v20;
              }
              if ( v22 == v6 )
                JUMPOUT(0x303D369B3LL);
              if ( v22 > v11 )
                break;
              if ( v21 == v6 )
                JUMPOUT(0x303D36B7CLL);
              if ( v11 > v21 )
                break;
              ++v20;
            }
            v137 = (_DWORD *)v11;
            v23 = *(_DWORD *)v11;
            v24 = *(_BYTE *)(v6 + 376654992);
            v25 = *(_DWORD *)v11 & 6;
            if ( v25 == 6 )
              break;
            if ( v24 != 0 || (v23 & 2) == 0 )
            {
              v135 = (char *)v20;
              if ( v25 == 4 )
              {
                a1 = *(unsigned int *)(v11 + 4);
                *v20 = a1;
                if ( (_DWORD)a1 != 0 )
                {
                  if ( *(_BYTE *)(v6 + 376654992) != 0 )
                  {
                    if ( a2 == v6 )
                      JUMPOUT(0x303D36D03LL);
                    v11 = a2;
                    if ( v22 == v6 )
                      JUMPOUT(0x303D36D0DLL);
                    a1 = v22;
                    if ( v22 <= a2 )
                    {
                      if ( v21 == v6 )
                        JUMPOUT(0x303D37282LL);
                      a1 = v21;
                      if ( a2 <= v21 )
                      {
                        v134 = v20 + 1;
                        v60 = a2;
                        goto LABEL_94;
                      }
                    }
                    v133 = v20 + 1;
                    if ( *(_QWORD *)(v6 + 376612552) <= v118 )
                      JUMPOUT(0x303D36D44LL);
                    goto LABEL_118;
                  }
                  v42 = v6 + 8 * a1;
                  if ( v42 == v6 )
                    JUMPOUT(0x303D36F88LL);
                  if ( (*(_DWORD *)(v6 + 8 * a1) & 1) != 0 )
                    v43 = v42 - *(_QWORD *)(v42 - 8);
                  else
                    v43 = v42 & 0xFFFFFFFFFFF80000LL;
                  v44 = *(unsigned int *)(v43 + 40);
                  a1 = *(unsigned int *)(v6 + 8 * a1);
                  v45 = a1 & 6;
                  if ( v45 == 6 )
                  {
                    if ( (_DWORD)v44 == 0 )
                      goto LABEL_319;
                    v11 = *(_DWORD *)(v6 + 8 * v44 + 48) < 16;
                    v46 = *(_DWORD *)(v6 + 8 * v44 + 48) < 16;
                  }
                  else
                  {
                    v11 = 1;
                    if ( (a1 & 2) != 0 )
                      JUMPOUT(0x303D36FC5LL);
                    v46 = true;
                  }
                  if ( v46 )
                  {
                    v47 = *(unsigned int *)a2;
                    if ( (*(_DWORD *)a2 & 6) != 6 )
                    {
                      v11 = 0;
                      if ( (v47 & 2) != 0 )
                        JUMPOUT(0x303D36FFCLL);
                      v133 = v20 + 1;
                      goto LABEL_118;
                    }
                    v134 = v20 + 1;
                    v60 = a2;
                    if ( a2 == v6 )
                      JUMPOUT(0x303D37509LL);
                    if ( (*(_DWORD *)a2 & 1) != 0 )
                      v11 = a2 - *(_QWORD *)(a2 - 8);
                    else
                      v11 = a2 & 0xFFFFFFFFFFF80000LL;
                    v64 = *(unsigned int *)(v11 + 40);
                    if ( (_DWORD)v64 == 0 )
                      goto LABEL_321;
                    if ( *(int *)(v6 + 8 * v64 + 48) >= 16 )
                    {
LABEL_94:
                      if ( v60 == v6 )
                        JUMPOUT(0x303D36D5DLL);
                      if ( (*(_DWORD *)v60 & 1) != 0 )
                      {
                        v38 = (char *)(v60 - *(_QWORD *)(v60 - 8));
                        if ( v60 == v6 )
                          JUMPOUT(0x303D36D82LL);
                        v11 = v60;
                        v39 = ((unsigned __int64)v20 - v60) >> 9;
                        if ( v38[v39 + 48] != 0 )
                          v38[v39 + 48] = 0;
                      }
                      else
                      {
                        v11 = (v60 - ((v60 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                        if ( *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + v11 + 0x38) != 0 )
                          *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL)
                                   + ((v60 - ((v60 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                   + 0x38) = 0;
                      }
                      v20 = v134;
                      v19 = v115;
                      v21 = v116;
                      v22 = v117;
                      a2 = v60;
                      v14 = v138;
                    }
                    else
                    {
                      ++v20;
                      v19 = v115;
                      v21 = v116;
                      v22 = v117;
                      v14 = v138;
                    }
                  }
                  else
                  {
                    ++v20;
                    v21 = v116;
                  }
                }
                else
                {
                  ++v20;
                }
              }
              else
              {
                a1 = v11;
                v113 = v11;
                v26 = *(_DWORD *)v11 & 1;
                if ( (v23 & 1) != 0 )
                  v27 = v11 - *(_QWORD *)(v11 - 8);
                else
                  v27 = v11 & 0xFFFFFFFFFFF80000LL;
                v131 = (_QWORD *)v27;
                v28 = *(unsigned int *)(v27 + 40);
                v111 = v6 + 8 * v28;
                v11 = !(*(_BYTE *)v11 & 1);
                v130 = v26 ^ 1;
                if ( (_DWORD)v28 == 0 )
                  goto LABEL_314;
                if ( *(_BYTE *)(v6 + 8 * v28 + 52) != 0 )
                {
                  v133 = v20 + 1;
                  v29 = a1;
                }
                else
                {
                  v11 = (unsigned int)*(char *)(v6 + 376654992);
                  v132 = v26;
                  HIDWORD(v109) = *(_DWORD *)a1 >> 3;
                  a1 = *(unsigned int *)(v6 + 8LL * HIDWORD(v109) + 32);
                  v129 = a1;
                  v128 = (unsigned int)a1;
                  v127 = (unsigned __int8)a1;
                  v126 = ((int)a1 >> 8) & 0xFFF;
                  if ( *(_BYTE *)(v6 + 376654992) != 0 )
                  {
                    v133 = v20 + 1;
                    v29 = v6;
                    v40 = (_DWORD *)v113;
                  }
                  else
                  {
                    v11 = *(unsigned int *)(v6 + 376654972);
                    if ( (_DWORD)v11 == 0 )
                      goto LABEL_317;
                    v48 = *(_DWORD *)(v6 + 8 * v11) >> 3;
                    v49 = *(unsigned int *)(v6 + 8 * v48 + 20);
                    v50 = *(unsigned int *)(v6 + 8 * v48 + 44);
                    v51 = (unsigned __int16)*(_DWORD *)(v6
                                                      + 8 * v49
                                                      + 4LL * ((unsigned int)v50 & (0x207u >> SBYTE3(v50)))
                                                      + 12);
                    if ( (_DWORD)v51 != 519 )
                      goto LABEL_318;
                    v21 = *(unsigned int *)(v6 + 8 * v28 + 48);
                    v52 = (unsigned int)(*(_DWORD *)(v6 + 8 * v28 + 48) + 1);
                    if ( *(_DWORD *)(v6 + 8 * v11 + 16) + 1 > (int)v52 )
                    {
                      v62 = v6 + 376652784;
                      if ( v26 != 0 )
                      {
                        v125 = *(_DWORD *)(v6 + 8 * v28 + 48) + 1;
                        v120 = *(_DWORD *)(v6 + 8 * v28 + 48);
                        v133 = v20 + 1;
                        if ( (unsigned int)sub_1EA85C0(
                                             a1: v52,
                                             a2,
                                             a3: v6 + 376652784,
                                             a4: v21,
                                             a5: v131,
                                             a6: v12,
                                             a7: v103,
                                             a8: v105,
                                             a9: v107,
                                             a10: v109) != 0 )
                        {
                          if ( v120 >= 0xF )
                            goto LABEL_325;
                          v107 = v6 + 8LL * *(unsigned int *)(v6 + 4LL * v120 + 376654108);
                          sub_1E9D6C0(a1: v63, a2, a3: (__int64)v131, a4: v21, a5: v111, a6: v107);
                          v29 = v113;
                          a1 = v129;
                          v40 = (_DWORD *)v113;
                        }
                        else
                        {
                          v29 = v6;
                          a1 = v129;
                          v40 = (_DWORD *)v113;
                        }
                      }
                      else
                      {
                        v125 = *(_DWORD *)(v6 + 8 * v28 + 48) + 1;
                        v133 = v20 + 1;
                        v69 = a2;
                        if ( (unsigned int)v21 >= 0xF )
                          goto LABEL_323;
                        v70 = v129;
                        if ( (v129 & 0x80000000) != 0 )
                          v11 = (v126 + ((unsigned __int64)*(unsigned int *)(v113 + 8) << v127) + 7)
                              & 0xFFFFFFFFFFFFFFF8LL;
                        else
                          v11 = v128;
                        v71 = *(unsigned int *)(v6 + 4LL * (unsigned int)v21 + 376654108);
                        v21 = v6 + 8 * v71;
                        if ( (_DWORD)v71 == 0 )
                          goto LABEL_324;
                        LODWORD(v109) = v71;
                        a2 = *(_QWORD *)(v6 + 8 * v71 + 24);
                        if ( a2 != 0
                          && (v72 = *(_QWORD *)(a2 + 32), v11 <= *(_QWORD *)a2 - v72)
                          && (v98 = (char *)(a2 + v72),
                              v12 = (unsigned __int64)&v98[v11 - a2],
                              *(_QWORD *)(a2 + 32) = v12,
                              v98 != nullptr) )
                        {
                          v107 = v6 + 8 * v71;
                          v123 = v11;
                          v73 = v98;
                        }
                        else
                        {
                          v123 = v11;
                          v107 = v6 + 8 * v71;
                          v73 = sub_1E9D600(a1: v129, a2, a3: v11, a4: v21, a5: v107);
                        }
                        if ( v73 != nullptr )
                        {
                          v122 = (unsigned __int64)v73;
                          sub_28393A0(a1: v113, a2, a3: v113, a4: v21, a5: v73, a6: v123);
                          v29 = v122;
                          v21 = (unsigned int)v109;
                          if ( *(_DWORD *)(v6 + 8LL * (unsigned int)v109 + 48) == 16 && *(_BYTE *)(v6 + 376654992) == 0 )
                          {
                            v11 = v122 & 0xFFFFFFFFFFF80000LL;
                            v83 = v122 - ((v122 & 0xFFFFFFFFFFF80000LL) + 2112);
                            v84 = v83 >> 9;
                            v12 = (v83 + v123 - 1) >> 9;
                            if ( v12 != v83 >> 9 || (v83 & 0x1FF) == 0 )
                            {
                              if ( (v83 & 0x1FF) != 0 )
                              {
                                v85 = v84 + 1;
                                *(_BYTE *)(v11 + v84 + 1081) = -(__int64)((((v84 + 1) << 9) - v83) >> 3);
                              }
                              else
                              {
                                *(_BYTE *)(v11 + v84 + 1080) = 0;
                                v85 = (v122 - ((v122 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                              }
                              if ( v85 + 63 < v12 )
                                JUMPOUT(0x303D37A56LL);
                              v86 = v85 + 1;
                              v87 = 1;
                              while ( v86 <= v12 )
                                *(_BYTE *)(v11 + v86++ + 1080) = v87++;
                              v99 = 6;
LABEL_289:
                              while ( v86 <= v12 )
                              {
                                v100 = v99 + 1;
                                v101 = v99 + 58;
                                a2 = (unsigned int)(1 << v99);
                                for ( i = 0; ; ++i )
                                {
                                  if ( (int)a2 <= i )
                                  {
                                    v99 = v100;
                                    goto LABEL_289;
                                  }
                                  *(_BYTE *)(v11 + v86++ + 1080) = v101;
                                  if ( v86 > v12 )
                                    break;
                                }
                                v99 = v100;
                              }
                            }
                            v21 = *(unsigned int *)v122 | 2LL;
                            *(_DWORD *)v122 = v21;
                          }
                        }
                        else
                        {
                          v29 = v6;
                        }
                        if ( v29 == v6 )
                        {
                          a1 = v129;
                          v40 = (_DWORD *)v113;
                        }
                        else
                        {
                          a1 = v129;
                          v21 = (unsigned __int64)(v29 - v6) >> 3;
                          if ( (v129 & 0x80000000) != 0 )
                          {
                            v40 = (_DWORD *)v113;
                            v21 = v127;
                            v74 = (v126 + ((unsigned __int64)*(unsigned int *)(v113 + 8) << v127) + 7)
                                & 0xFFFFFFFFFFFFFFF8LL;
                          }
                          else
                          {
                            v74 = v128;
                            v40 = (_DWORD *)v113;
                          }
                          v11 = ((unsigned __int64)(unsigned int)((unsigned __int64)(v29 - v6) >> 3) << 32) | v74 | 4;
                          *(_QWORD *)v40 = v11;
                        }
                      }
                      if ( v29 == v6 )
                        *(_BYTE *)(v6 + 376652620) = 1;
                    }
                    else
                    {
                      a1 = v129;
                      v133 = v20 + 1;
                      v29 = v6;
                      v40 = (_DWORD *)v113;
                    }
                  }
                  if ( v29 == v6 )
                  {
                    v56 = *(_BYTE *)(v6 + 376654992);
                    v11 = (unsigned int)*(char *)(v6 + 8LL * HIDWORD(v109) + 68);
                    v107 = v6 + 8LL * HIDWORD(v109);
                    v57 = (_QWORD *)(((unsigned __int64)v40 - v6) >> 3);
                    HIDWORD(v109) = (_DWORD)v57;
                    if ( v132 != 0 )
                    {
                      if ( v56 != 0 )
                      {
                        if ( (*v40 & 6LL) == 6 )
                        {
                          v29 = (__int64)v40;
                        }
                        else
                        {
                          *v40 |= 6u;
                          if ( (_BYTE)v11 == 6 )
                          {
                            if ( v40[2] != 0 )
                            {
                              v94 = *(_QWORD **)(v6 + 376654880);
                              if ( v94 == nullptr || (_DWORD)(v95 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                              {
                                v57 = sub_1EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                                *(_QWORD *)(v6 + 376654880) = v57;
                                *(_DWORD *)(v6 + 376654876) = 0;
                                v94 = v57;
                                v95 = 0;
                                LODWORD(v57) = ((unsigned __int64)v40 - v6) >> 3;
                              }
                              *(_DWORD *)(v6 + 376654876) = v95 + 1;
                              *((_DWORD *)v94 + v95 + 2) = (_DWORD)v57;
                              v96 = *(_QWORD **)(v6 + 376654880);
                              if ( v96 == nullptr || (_DWORD)(v97 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                              {
                                v96 = sub_1EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                                *(_QWORD *)(v6 + 376654880) = v96;
                                *(_DWORD *)(v6 + 376654876) = 0;
                                v97 = 0;
                              }
                              *(_DWORD *)(v6 + 376654876) = v97 + 1;
                              *((_DWORD *)v96 + v97 + 2) = 0;
                              v29 = v113;
                            }
                            else
                            {
                              v29 = (__int64)v40;
                            }
                          }
                          else
                          {
                            v58 = *(_QWORD **)(v6 + 376654856);
                            if ( v58 == nullptr || (_DWORD)(v59 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                            {
                              v57 = sub_1EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654856));
                              *(_QWORD *)(v6 + 376654856) = v57;
                              *(_DWORD *)(v6 + 376654852) = 0;
                              v58 = v57;
                              v59 = 0;
                              LODWORD(v57) = ((unsigned __int64)v40 - v6) >> 3;
                            }
                            *(_DWORD *)(v6 + 376654852) = v59 + 1;
                            *((_DWORD *)v58 + v59 + 2) = (_DWORD)v57;
                            v29 = v113;
                          }
                        }
                      }
                      else
                      {
                        sub_1E9D6C0(a1, a2, a3: (__int64)v131, a4: v21, a5: v111, a6: v6 + 376653896);
                        v29 = v113;
                      }
                    }
                    else if ( v56 != 0 )
                    {
                      if ( (*v40 & 6) == 6 )
                      {
                        v29 = (__int64)v40;
                      }
                      else
                      {
                        *v40 |= 6u;
                        if ( (_BYTE)v11 == 6 )
                        {
                          if ( v40[2] != 0 )
                          {
                            v91 = *(_QWORD *)(v6 + 376654880);
                            if ( v91 == 0 || (_DWORD)(v11 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                            {
                              v57 = sub_1EA8720(a1, a2, a3: v91);
                              *(_QWORD *)(v6 + 376654880) = v57;
                              *(_DWORD *)(v6 + 376654876) = 0;
                              v91 = (__int64)v57;
                              v11 = 0;
                              LODWORD(v57) = ((unsigned __int64)v40 - v6) >> 3;
                            }
                            *(_DWORD *)(v6 + 376654876) = v11 + 1;
                            *(_DWORD *)(v91 + 4 * v11 + 8) = (_DWORD)v57;
                            v92 = *(_QWORD **)(v6 + 376654880);
                            if ( v92 == nullptr || (_DWORD)(v93 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                            {
                              v92 = sub_1EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                              *(_QWORD *)(v6 + 376654880) = v92;
                              *(_DWORD *)(v6 + 376654876) = 0;
                              v93 = 0;
                            }
                            *(_DWORD *)(v6 + 376654876) = v93 + 1;
                            *((_DWORD *)v92 + v93 + 2) = 0;
                            v29 = v113;
                          }
                          else
                          {
                            v29 = (__int64)v40;
                          }
                        }
                        else
                        {
                          v61 = *(_QWORD *)(v6 + 376654856);
                          if ( v61 == 0 || (_DWORD)(v11 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                          {
                            v57 = sub_1EA8720(a1, a2, a3: v61);
                            *(_QWORD *)(v6 + 376654856) = v57;
                            *(_DWORD *)(v6 + 376654852) = 0;
                            v61 = (__int64)v57;
                            v11 = 0;
                            LODWORD(v57) = ((unsigned __int64)v40 - v6) >> 3;
                          }
                          *(_DWORD *)(v6 + 376654852) = v11 + 1;
                          *(_DWORD *)(v61 + 4 * v11 + 8) = (_DWORD)v57;
                          v29 = v113;
                        }
                      }
                    }
                    else
                    {
                      if ( (int)a1 < 0 )
                      {
                        v21 = v127;
                        v66 = (v126 + ((unsigned __int64)*(unsigned int *)(v113 + 8) << v127) + 7)
                            & 0xFFFFFFFFFFFFFFF8LL;
                      }
                      else
                      {
                        v66 = v128;
                      }
                      v67 = *(_QWORD **)(v6 + 376653920);
                      if ( v67 != nullptr
                        && (v21 = v67[4], v66 <= *v67 - v21)
                        && (v21 += (unsigned __int64)v67, v11 = v21 + v66 - (_QWORD)v67, v67[4] = v11, v21 != 0) )
                      {
                        v68 = (char *)v21;
                        v121 = v66;
                      }
                      else
                      {
                        v121 = v66;
                        v68 = sub_1E9D600(a1, a2, a3: v66, a4: v21, a5: v6 + 376653896);
                      }
                      if ( v68 != nullptr )
                      {
                        v124 = (unsigned __int64)v68;
                        sub_28393A0(a1: v113, a2, a3: v113, a4: v21, a5: v68, a6: v121);
                        v29 = v124;
                        if ( *(_BYTE *)(v6 + 376654992) == 0 )
                        {
                          v76 = v124 & 0xFFFFFFFFFFF80000LL;
                          v77 = v124 - ((v124 & 0xFFFFFFFFFFF80000LL) + 2112);
                          v78 = v77 >> 9;
                          v79 = (v77 + v121 - 1) >> 9;
                          if ( v79 != v77 >> 9 || (v77 & 0x1FF) == 0 )
                          {
                            if ( (v77 & 0x1FF) != 0 )
                            {
                              v80 = v78 + 1;
                              a1 = -(__int64)((((v78 + 1) << 9) - v77) >> 3);
                              *(_BYTE *)(v76 + v78 + 1081) = a1;
                            }
                            else
                            {
                              *(_BYTE *)(v76 + v78 + 1080) = 0;
                              v80 = (v124 - ((v124 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
                            }
                            if ( v80 + 63 < v79 )
                              JUMPOUT(0x303D37996LL);
                            v81 = v80 + 1;
                            v82 = 1;
                            while ( v81 <= v79 )
                              *(_BYTE *)(v76 + v81++ + 1080) = v82++;
                            v88 = 6;
LABEL_257:
                            while ( v81 <= v79 )
                            {
                              v89 = v88 + 1;
                              a1 = (unsigned int)(v88 + 58);
                              v11 = (unsigned int)(1 << v88);
                              for ( j = 0; ; ++j )
                              {
                                if ( (int)v11 <= j )
                                {
                                  v88 = v89;
                                  goto LABEL_257;
                                }
                                *(_BYTE *)(v76 + v81++ + 1080) = a1;
                                if ( v81 > v79 )
                                  break;
                              }
                              v88 = v89;
                            }
                          }
                          *(_DWORD *)v124 |= 2u;
                        }
                      }
                      else
                      {
LABEL_310:
                        v29 = v6;
                      }
                      if ( v29 != v6 )
                      {
                        if ( (v129 & 0x80000000) != 0 )
                        {
                          a1 = v113;
                          v75 = (v126 + ((unsigned __int64)*(unsigned int *)(v113 + 8) << v127) + 7)
                              & 0xFFFFFFFFFFFFFFF8LL;
                        }
                        else
                        {
                          v75 = v128;
                          a1 = v113;
                        }
                        *(_QWORD *)a1 = ((unsigned __int64)(unsigned int)((unsigned __int64)(v29 - v6) >> 3) << 32)
                                      | v75
                                      | 4;
                      }
                    }
                  }
                }
                if ( v29 != v113 )
                  *(_DWORD *)v135 = (unsigned __int64)(v29 - v6) >> 3;
                if ( v29 == v6 )
                {
LABEL_118:
                  v20 = v133;
                  v19 = v115;
                  v14 = v138;
                  v21 = v116;
                  v22 = v117;
                  a2 = v118;
                }
                else if ( *(_BYTE *)(v6 + 376654992) != 0 )
                {
                  v22 = v117;
                  v30 = v118;
                  if ( v118 == v6 )
                    JUMPOUT(0x303D36ACFLL);
                  if ( v117 == v6 )
                    JUMPOUT(0x303D36AD9LL);
                  if ( v117 > v118 )
                  {
                    v31 = v116;
                  }
                  else
                  {
                    v31 = v116;
                    if ( v116 == v6 )
                      JUMPOUT(0x303D36AF8LL);
                    if ( v118 <= v116 )
                      goto LABEL_54;
                  }
                  if ( *(_QWORD *)(v6 + 376612552) <= v118 )
                    JUMPOUT(0x303D37234LL);
LABEL_148:
                  v20 = v133;
                  v19 = v115;
                  v21 = v31;
                  a2 = v30;
                  v14 = v138;
                }
                else
                {
                  v31 = v116;
                  v22 = v117;
                  v30 = v118;
                  if ( v29 == v6 )
                    JUMPOUT(0x303D370B0LL);
                  if ( (*(_DWORD *)v29 & 1) != 0 )
                    v53 = v29 - *(_QWORD *)(v29 - 8);
                  else
                    v53 = v29 & 0xFFFFFFFFFFF80000LL;
                  v54 = *(unsigned int *)(v53 + 40);
                  v55 = *(unsigned int *)v29;
                  v11 = *(_DWORD *)v29 & 6;
                  if ( v11 == 6 )
                  {
                    if ( (_DWORD)v54 == 0 )
                      goto LABEL_320;
                    a1 = *(_DWORD *)(v6 + 8 * v54 + 48) < 16;
                  }
                  else
                  {
                    if ( (v55 & 2) != 0 )
                      JUMPOUT(0x303D370E7LL);
                    a1 = 1;
                  }
                  if ( (_DWORD)a1 != 0 )
                  {
                    a1 = *(_DWORD *)v118 & 6;
                    if ( a1 != 6 )
                    {
                      if ( (*(_DWORD *)v118 & 2) != 0 )
                        JUMPOUT(0x303D3711ALL);
                      goto LABEL_148;
                    }
                    if ( v118 == v6 )
                      JUMPOUT(0x303D37566LL);
                    v11 = v118;
                    if ( (*(_DWORD *)v118 & 1) != 0 )
                    {
                      v65 = v118 - *(_QWORD *)(v118 - 8);
                    }
                    else
                    {
                      v11 = v118 & 0xFFFFFFFFFFF80000LL;
                      v65 = v118 & 0xFFFFFFFFFFF80000LL;
                    }
                    a1 = *(unsigned int *)(v65 + 40);
                    if ( (_DWORD)a1 == 0 )
                      goto LABEL_322;
                    if ( *(int *)(v6 + 8 * a1 + 48) < 16 )
                    {
                      v20 = v133;
                      v19 = v115;
                      v21 = v116;
                      a2 = v118;
                      v14 = v138;
                    }
                    else
                    {
LABEL_54:
                      if ( v30 == v6 )
                        JUMPOUT(0x303D36B15LL);
                      if ( (*(_DWORD *)v30 & 1) != 0 )
                      {
                        v32 = (char *)(v30 - *(_QWORD *)(v30 - 8));
                        if ( v30 == v6 )
                          JUMPOUT(0x303D36B2FLL);
                        v33 = (unsigned __int64)&v135[-v30] >> 9;
                        if ( v32[v33 + 48] != 0 )
                          v32[v33 + 48] = 0;
                        v20 = v133;
                        v19 = v115;
                        v21 = v31;
                        a2 = v30;
                        v14 = v138;
                      }
                      else
                      {
                        if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL)
                                      + ((v30 - ((v30 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                      + 0x38) != 0 )
                          *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL)
                                   + ((v30 - ((v30 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                   + 0x38) = 0;
                        v20 = v133;
                        v19 = v115;
                        v21 = v31;
                        a2 = v30;
                        v14 = v138;
                      }
                    }
                  }
                  else
                  {
                    v20 = v133;
                    v19 = v115;
                    v21 = v116;
                    a2 = v118;
                    v14 = v138;
                  }
                }
              }
            }
            else
            {
              ++v20;
            }
          }
          if ( v24 == 0 )
            break;
          if ( a2 == v6 )
            JUMPOUT(0x303D36BA7LL);
          if ( v22 == v6 )
            JUMPOUT(0x303D36BB1LL);
          if ( v22 <= a2 )
          {
            if ( v21 == v6 )
              JUMPOUT(0x303D36E00LL);
            if ( a2 <= v21 )
              goto LABEL_70;
          }
          v11 = 0;
          if ( *(_QWORD *)(v6 + 376612552) <= a2 )
            JUMPOUT(0x303D36BE0LL);
          a1 = 0;
LABEL_106:
          ++v20;
        }
        if ( (*(_DWORD *)v11 & 1) != 0 )
          v35 = v11 - *(_QWORD *)(v11 - 8);
        else
          v35 = v11 & 0xFFFFFFFFFFF80000LL;
        v36 = *(unsigned int *)(v35 + 40);
        if ( (*(_DWORD *)v11 & 6) == 6 )
        {
          if ( (_DWORD)v36 == 0 )
            goto LABEL_315;
          a1 = *(_DWORD *)(v6 + 8 * v36 + 48) < 16;
          v37 = a1;
        }
        else
        {
          a1 = 1;
          if ( (*(_DWORD *)v11 & 2) != 0 )
            JUMPOUT(0x303D36C9DLL);
          v37 = 1;
        }
        if ( v37 != 0 )
        {
          a1 = *(unsigned int *)a2;
          if ( (*(_DWORD *)a2 & 6) != 6 )
          {
            v11 = 0;
            if ( (a1 & 2) != 0 )
              JUMPOUT(0x303D36CCFLL);
            a1 = 0;
            goto LABEL_106;
          }
          if ( a2 == v6 )
            JUMPOUT(0x303D36F3ALL);
          if ( (*(_DWORD *)a2 & 1) != 0 )
            v11 = a2 - *(_QWORD *)(a2 - 8);
          else
            v11 = a2 & 0xFFFFFFFFFFF80000LL;
          v41 = *(unsigned int *)(v11 + 40);
          if ( (_DWORD)v41 == 0 )
            goto LABEL_316;
          if ( *(int *)(v6 + 8 * v41 + 48) >= 16 )
          {
LABEL_70:
            if ( a2 == v6 )
              JUMPOUT(0x303D36BF5LL);
            if ( (*(_DWORD *)a2 & 1) != 0 )
            {
              v11 = a2 - *(_QWORD *)(a2 - 8);
              if ( a2 == v6 )
                JUMPOUT(0x303D36C10LL);
              v34 = ((unsigned __int64)v20 - a2) >> 9;
              if ( *(_BYTE *)(v11 + v34 + 48) != 0 )
                *(_BYTE *)(v11 + v34 + 48) = 0;
              v20 = (_DWORD *)v12;
              v21 = v116;
            }
            else
            {
              v11 = a2 & 0xFFFFFFFFFFF80000LL;
              if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - ((a2 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
                *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - ((a2 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              ++v20;
              v21 = v116;
            }
          }
          else
          {
            ++v20;
            v21 = v116;
          }
        }
        else
        {
          ++v20;
        }
      }
    }
    if ( v13 != 5058014 )
      goto LABEL_326;
    v15 = (unsigned int *)(v11 + v118);
    v16 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
    v17 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
    while ( v14 > (unsigned __int64)v15 )
    {
      v18 = (_DWORD *)(8LL * *v15);
      if ( v18 != nullptr )
        v18 = (_DWORD *)((char *)v18 + v6);
      a2 = (unsigned __int64)(v15 + 1);
      if ( v18 != nullptr )
      {
        if ( v16 == v6 )
          JUMPOUT(0x303D3688FLL);
        LODWORD(a1) = v16;
        if ( v16 > (unsigned __int64)v18 )
          goto LABEL_19;
        if ( v17 == v6 )
          JUMPOUT(0x303D368DALL);
        LODWORD(a1) = v17;
        if ( (unsigned __int64)v18 > v17 )
        {
LABEL_19:
          if ( (unsigned __int64)v18 >= *(_QWORD *)(v6 + 376612552)
            && (unsigned __int64)v18 < *(_QWORD *)(v6 + 376612568) )
          {
            ++v15;
          }
          else
          {
            LODWORD(a1) = (_DWORD)v18;
            if ( (*v18 & 1) != 0 )
            {
              ++v15;
            }
            else
            {
              v113 = (__int64)v18;
              v136 = v15 + 1;
              v137 = v15;
              if ( sub_1EA8F40(a1: (__int64)v18, a2, a3: (unsigned __int64)v18) != 0 )
                JUMPOUT(0x303D3691BLL);
              *v137 = 0;
              v15 = v136;
              v14 = v138;
              v17 = v116;
              v16 = v117;
            }
          }
        }
        else
        {
          ++v15;
        }
      }
      else
      {
        ++v15;
      }
    }
    result = v139;
    v7 = v141;
    a6 = v145;
    a5 = v146;
  }
  sub_276EFE0(a1: v119, a2, a3: v118, a4: v140, a5: v11, a6: v12);
LABEL_313:
  sub_276EFE0(a1, a2, a3: a2, a4: v21, a5: v11, a6: v12);
LABEL_314:
  sub_276EFE0(a1, a2, a3: a2, a4: v21, a5: v11, a6: v12);
LABEL_315:
  sub_276EFE0(a1: v6 + 8 * v36, a2, a3: a2, a4: v21, a5: v11, a6: v12);
LABEL_316:
  sub_276EFE0(a1, a2, a3: a2, a4: v6 + 8 * v41, a5: v11, a6: v12);
LABEL_317:
  sub_276EFE0(a1, a2, a3: a2, a4: v21, a5: v11, a6: v12);
LABEL_318:
  sub_276EDE0(a1: v50, a2, a3: a2, a4: v51, a5: v11, a6: v12);
LABEL_319:
  sub_276EFE0(a1, a2, a3: a2, a4: v6 + 8 * v44, a5: v45, a6: v12);
LABEL_320:
  sub_276EFE0(a1: v55, a2: v31, a3: v30, a4: v6 + 8 * v54, a5: v11, a6: v12);
LABEL_321:
  sub_276EFE0(a1, a2, a3: v60, a4: v47, a5: v11, a6: v12);
LABEL_322:
  sub_276EFE0(a1: v6 + 8 * a1, a2: v31, a3: v30);
LABEL_323:
  sub_276F0E0(a1: v52, a2, a3: v69, a4: v21, a5: v62, a6: v12);
LABEL_324:
  sub_276EFE0(a1: v70, a2, a3: v69, a4: v21, a5: v11, a6: v12);
LABEL_325:
  sub_276F0E0(a1: v113, a2: v130, a3: v118, a4: v131, a5: v137, a6: v125);
LABEL_326:
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1EADFA0(a1);
}
