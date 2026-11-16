// sub_181E91C00
// rva 0x01e91c00  size 5175  section .text  group text
// window base 0x181e91c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E91C00(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  int v12; // ebx
  char v13; // r10
  __int64 v14; // r11
  _DWORD *v15; // r11
  int v16; // edx
  unsigned __int64 v17; // rbx
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  BOOL v27; // eax
  int v28; // eax
  int v29; // ebx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbp
  char *v32; // rcx
  char *v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // r8
  char v41; // r9
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  BOOL v51; // edx
  int v52; // eax
  unsigned __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  BOOL v56; // edx
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rcx
  char *v62; // rdx
  char *v63; // rsi
  unsigned __int64 v64; // rax
  char *v65; // rax
  char *v66; // rsi
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rbp
  unsigned __int64 v69; // rbp
  unsigned __int64 v70; // rdx
  char *v71; // rax
  __int64 v72; // rax
  char *v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  char *v77; // rbp
  __int64 v78; // rax
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // rcx
  unsigned __int64 v83; // rbx
  __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  unsigned __int64 *v86; // r11
  __int64 v87; // rcx
  __int64 v88; // r9
  unsigned __int64 v89; // rbp
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rsi
  unsigned __int64 v94; // rsi
  int v95; // ebx
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // r9
  unsigned __int64 v100; // rbx
  unsigned __int64 v101; // rbx
  int v102; // edx
  int v103; // ecx
  int v104; // ebx
  int v105; // r8d
  int i; // ecx
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rdx
  char *v117; // r9
  int v118; // ecx
  int v119; // edx
  char v120; // bp
  int j; // ecx
  unsigned int v122; // [rsp+18h] [rbp-B0h]
  unsigned int v123; // [rsp+1Ch] [rbp-ACh]
  int v124; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 v125; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+28h] [rbp-A0h]
  __int64 v127; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v128; // [rsp+38h] [rbp-90h]
  _DWORD *v129; // [rsp+40h] [rbp-88h]
  unsigned int v131; // [rsp+54h] [rbp-74h]
  unsigned __int64 v132; // [rsp+58h] [rbp-70h]
  __int64 v133; // [rsp+58h] [rbp-70h]
  unsigned __int64 v134; // [rsp+60h] [rbp-68h]
  __int64 v135; // [rsp+68h] [rbp-60h]
  int v136; // [rsp+70h] [rbp-58h]
  __int64 v137; // [rsp+78h] [rbp-50h]
  char v138; // [rsp+84h] [rbp-44h]
  unsigned __int64 v139; // [rsp+88h] [rbp-40h]
  int v140; // [rsp+90h] [rbp-38h]
  unsigned __int64 v141; // [rsp+98h] [rbp-30h]
  unsigned int v142; // [rsp+A4h] [rbp-24h]
  _DWORD *v143; // [rsp+B8h] [rbp-10h]
  unsigned int v144; // [rsp+C4h] [rbp-4h]

  if ( *(_DWORD *)(a3 + 8) == 0 )
  {
    MEMORY[0x18276EFE0]();
LABEL_301:
    MEMORY[0x18276EFE0]();
    goto LABEL_302;
  }
  if ( a6 != 0 )
  {
    if ( *a5 != 0 )
      v7 = v6 + 8LL * (unsigned int)*a5;
    else
      v7 = 0;
  }
  else
  {
    v7 = *(_QWORD *)a5;
  }
  *(_QWORD *)(v6 + 376656560) = v7;
  if ( *(_DWORD *)(a3 + 4) == 0 )
    goto LABEL_301;
  if ( a6 != 0 )
    v8 = v6 + 8LL * (unsigned int)*a5;
  else
    v8 = *(_QWORD *)a5;
  v9 = v8 - v6;
  if ( v9 != 0 )
    v9 += v6;
  if ( v9 != 0 )
  {
    v10 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
    if ( v10 == v6 )
      JUMPOUT(0x303D1BC89LL);
    v11 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
    if ( v10 > v9 )
      goto LABEL_13;
    if ( v11 == v6 )
      JUMPOUT(0x303D1BDF6LL);
    if ( v9 > v11 )
    {
LABEL_13:
      v143 = a5;
      v129 = (_DWORD *)a2;
      v12 = *(_DWORD *)v9;
      v13 = *(_BYTE *)(v6 + 376654992);
      v14 = *(_DWORD *)v9 & 6;
      if ( v14 == 6 )
      {
        if ( a2 == v6 )
          goto LABEL_26;
        if ( v13 != 0 )
        {
          if ( a2 == v6 )
            JUMPOUT(0x303D1BE24LL);
          v22 = 8LL * *(unsigned int *)(v6 + 58177844);
          if ( v22 != 0 )
            v22 += v6;
          if ( v22 > a2 )
            goto LABEL_44;
          v31 = 8LL * *(unsigned int *)(v6 + 58177848);
          if ( v31 != 0 )
            v31 += v6;
          if ( a2 > v31 )
          {
LABEL_44:
            if ( *(_QWORD *)(v6 + 376612552) <= a2 )
              JUMPOUT(0x303D1BE57LL);
            goto LABEL_26;
          }
        }
        else
        {
          if ( (*(_DWORD *)v9 & 1) != 0 )
            v25 = v9 - *(_QWORD *)(v9 - 8);
          else
            v25 = v9 & 0xFFFFFFFFFFF80000LL;
          v26 = *(unsigned int *)(v25 + 40);
          if ( (*(_DWORD *)v9 & 6) == 6 )
          {
            if ( (_DWORD)v26 == 0 )
            {
LABEL_303:
              MEMORY[0x18276EFE0]();
              goto LABEL_304;
            }
            v27 = *(_DWORD *)(v6 + 8 * v26 + 48) < 16;
          }
          else
          {
            if ( (*(_DWORD *)v9 & 2) != 0 )
              JUMPOUT(0x303D1BEEALL);
            v27 = true;
          }
          if ( !v27 )
            goto LABEL_26;
          v28 = *(_DWORD *)a2;
          if ( (*(_DWORD *)a2 & 6) != 6 )
          {
            if ( (v28 & 2) != 0 )
              JUMPOUT(0x303D1BF1ALL);
            goto LABEL_26;
          }
          if ( a2 == v6 )
            JUMPOUT(0x303D1C2C0LL);
          if ( (v28 & 1) != 0 )
          {
            v46 = a2 - *(_QWORD *)(a2 - 8);
            v144 = a1;
            v142 = a6;
          }
          else
          {
            v144 = a1;
            v142 = a6;
            v46 = a2 & 0xFFFFFFFFFFF80000LL;
          }
          v47 = *(unsigned int *)(v46 + 40);
          if ( (_DWORD)v47 == 0 )
            goto LABEL_306;
          if ( *(int *)(v6 + 8 * v47 + 48) < 16 )
            goto LABEL_26;
        }
        if ( a2 == v6 )
          JUMPOUT(0x303D1C07FLL);
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          v32 = (char *)(a2 - *(_QWORD *)(a2 - 8));
          v33 = (char *)(a2 - v6);
          if ( v33 != nullptr )
            v33 += v6;
          v34 = (unsigned __int64)((char *)a5 - v33) >> 9;
          if ( v32[v34 + 48] != 0 )
            v32[v34 + 48] = 0;
        }
        else if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - (a2 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
        {
          *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - (a2 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
        }
        goto LABEL_26;
      }
      if ( v13 == 0 && (v12 & 2) != 0 )
        goto LABEL_26;
      if ( v14 == 4 )
      {
        v23 = *(unsigned int *)(v9 + 4);
        v24 = v6 + 8 * v23;
        if ( a6 != 0 )
          *a5 = v23;
        else
          *(_QWORD *)a5 = v24;
        if ( a2 == v6 || (_DWORD)v23 == 0 )
          goto LABEL_26;
        if ( *(_BYTE *)(v6 + 376654992) != 0 )
        {
          if ( a2 == v6 )
            JUMPOUT(0x303D1C108LL);
          v35 = v10 - v6;
          if ( v35 != 0 )
            v35 += v6;
          if ( v35 > a2 )
            goto LABEL_96;
          v68 = v11 - v6;
          if ( v68 != 0 )
            v68 += v6;
          if ( a2 > v68 )
          {
LABEL_96:
            if ( *(_QWORD *)(v6 + 376612552) <= a2 )
              JUMPOUT(0x303D1C143LL);
            goto LABEL_26;
          }
        }
        else
        {
          if ( v24 == v6 )
            JUMPOUT(0x303D1C309LL);
          if ( (*(_DWORD *)(v6 + 8 * v23) & 1) != 0 )
          {
            v48 = v24 - *(_QWORD *)(v24 - 8);
            v144 = a1;
            v142 = a6;
          }
          else
          {
            v144 = a1;
            v142 = a6;
            v48 = v24 & 0xFFFFFFFFFFF80000LL;
          }
          v49 = *(unsigned int *)(v48 + 40);
          v50 = *(_DWORD *)(v6 + 8 * v23);
          if ( (v50 & 6) == 6 )
          {
            if ( (_DWORD)v49 == 0 )
            {
LABEL_307:
              MEMORY[0x18276EFE0]();
LABEL_308:
              MEMORY[0x18276EFE0](a1, a2: v20, a3: v55, a4: v6 + 8 * v54);
              goto LABEL_309;
            }
            v51 = *(_DWORD *)(v6 + 8 * v49 + 48) < 16;
          }
          else
          {
            if ( (v50 & 2) != 0 )
              JUMPOUT(0x303D1C35ALL);
            v51 = true;
          }
          if ( !v51 )
            goto LABEL_26;
          v52 = *(_DWORD *)a2;
          if ( (*(_DWORD *)a2 & 6) != 6 )
          {
            if ( (v52 & 2) != 0 )
              JUMPOUT(0x303D1C38BLL);
            goto LABEL_26;
          }
          if ( a2 == v6 )
            JUMPOUT(0x303D1C8A9LL);
          v80 = a2;
          if ( (v52 & 1) != 0 )
          {
            v81 = a2 - *(_QWORD *)(a2 - 8);
          }
          else
          {
            v80 = a2 & 0xFFFFFFFFFFF80000LL;
            v81 = a2 & 0xFFFFFFFFFFF80000LL;
          }
          v82 = *(unsigned int *)(v81 + 40);
          if ( (_DWORD)v82 == 0 )
            goto LABEL_311;
          if ( *(int *)(v6 + 8 * v82 + 48) < 16 )
            goto LABEL_26;
        }
        if ( a2 == v6 )
          JUMPOUT(0x303D1C549LL);
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          v62 = (char *)(a2 - *(_QWORD *)(a2 - 8));
          v63 = (char *)(a2 - v6);
          if ( v63 != nullptr )
            v63 += v6;
          v64 = (unsigned __int64)((char *)a5 - v63) >> 9;
          if ( v62[v64 + 48] != 0 )
            v62[v64 + 48] = 0;
        }
        else if ( *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - (a2 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
        {
          *(_BYTE *)((a2 & 0xFFFFFFFFFFF80000LL) + ((a2 - (a2 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
        }
        goto LABEL_26;
      }
      v15 = (_DWORD *)v9;
      v128 = (unsigned __int64 *)v9;
      v16 = *(_DWORD *)v9 & 1;
      if ( (v12 & 1) != 0 )
        v17 = v9 - *(_QWORD *)(v9 - 8);
      else
        v17 = v9 & 0xFFFFFFFFFFF80000LL;
      v141 = v17;
      v18 = *(unsigned int *)(v17 + 40);
      v127 = v6 + 8 * v18;
      if ( (_DWORD)v18 != 0 )
      {
        v126 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
        v125 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
        if ( *(_BYTE *)(v6 + 8 * v18 + 52) != 0 )
        {
          v144 = a1;
          v142 = a6;
          v19 = v9;
LABEL_21:
          if ( (unsigned __int64 *)v19 == v128 )
          {
            v20 = (unsigned __int64)v129;
            a6 = v142;
            a5 = v143;
          }
          else
          {
            a6 = v142;
            a5 = v143;
            if ( v142 != 0 )
              *v143 = (v19 - v6) >> 3;
            else
              *(_QWORD *)v143 = v19;
            v20 = (unsigned __int64)v129;
          }
          if ( v20 == v6 || v19 == v6 )
            goto LABEL_26;
          if ( *(_BYTE *)(v6 + 376654992) != 0 )
          {
            if ( v20 == v6 )
              JUMPOUT(0x303D1BFEELL);
            v30 = v126 - v6;
            if ( v126 != v6 )
              v30 = v126;
            if ( v30 <= v20 )
            {
              v69 = v125 - v6;
              if ( v125 != v6 )
                v69 = v125;
              if ( v20 <= v69 )
                goto LABEL_154;
            }
            if ( *(_QWORD *)(v6 + 376612552) <= v20 )
              JUMPOUT(0x303D1C021LL);
            goto LABEL_26;
          }
          if ( v19 == v6 )
            JUMPOUT(0x303D1C39CLL);
          if ( (*(_DWORD *)v19 & 1) != 0 )
            v53 = v19 - *(_QWORD *)(v19 - 8);
          else
            v53 = v19 & 0xFFFFFFFFFFF80000LL;
          v54 = *(unsigned int *)(v53 + 40);
          v55 = *(unsigned int *)v19;
          if ( (*(_DWORD *)v19 & 6) != 6 )
          {
            if ( (v55 & 2) != 0 )
              JUMPOUT(0x303D1C3DALL);
            v56 = true;
LABEL_132:
            if ( !v56 )
              goto LABEL_26;
            v57 = *(_DWORD *)v20;
            if ( (*(_DWORD *)v20 & 6) != 6 )
            {
              if ( (v57 & 2) != 0 )
                JUMPOUT(0x303D1C40BLL);
              goto LABEL_26;
            }
            if ( v20 == v6 )
              JUMPOUT(0x303D1C8E3LL);
            if ( (v57 & 1) != 0 )
              v83 = v20 - *(_QWORD *)(v20 - 8);
            else
              v83 = v20 & 0xFFFFFFFFFFF80000LL;
            v84 = *(unsigned int *)(v83 + 40);
            if ( (_DWORD)v84 != 0 )
            {
              if ( *(int *)(v6 + 8 * v84 + 48) < 16 )
                goto LABEL_26;
LABEL_154:
              if ( v20 == v6 )
                JUMPOUT(0x303D1C591LL);
              if ( (*(_DWORD *)v20 & 1) != 0 )
              {
                v65 = (char *)(v20 - *(_QWORD *)(v20 - 8));
                v66 = (char *)(v20 - v6);
                if ( v66 != nullptr )
                  v66 += v6;
                v67 = (unsigned __int64)((char *)a5 - v66) >> 9;
                if ( v65[v67 + 48] != 0 )
                  v65[v67 + 48] = 0;
              }
              else if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL)
                                 + ((v20 - (v20 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9)
                                 + 0x38) != 0 )
              {
                *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - (v20 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
              }
              goto LABEL_26;
            }
            goto LABEL_312;
          }
          if ( (_DWORD)v54 != 0 )
          {
            v56 = *(_DWORD *)(v6 + 8 * v54 + 48) < 16;
            goto LABEL_132;
          }
          goto LABEL_308;
        }
        v123 = *(_DWORD *)v9 >> 3;
        v29 = *(_DWORD *)(v6 + 8LL * v123 + 32);
        v140 = v29;
        v139 = (unsigned int)v29;
        v138 = v29;
        v137 = (v29 >> 8) & 0xFFF;
        if ( v13 != 0 )
        {
          v136 = *(_DWORD *)v9 & 1;
          v144 = a1;
          v142 = a6;
          v19 = v6;
LABEL_66:
          if ( v19 == v6 )
          {
            v40 = *(_BYTE *)(v6 + 376654992);
            v41 = *(_BYTE *)(v6 + 8LL * v123 + 68);
            v42 = ((unsigned __int64)v15 - v6) >> 3;
            v124 = v42;
            if ( v136 != 0 )
            {
              if ( v40 != 0 )
              {
                if ( (*v15 & 6) == 6 )
                {
                  v19 = (unsigned __int64)v15;
                }
                else
                {
                  *v15 |= 6u;
                  if ( v41 == 6 )
                  {
                    if ( v15[2] != 0 )
                    {
                      v112 = *(_QWORD *)(v6 + 376654880);
                      if ( v112 == 0 || (_DWORD)(v114 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                      {
                        v113 = sub_181EA8720(a1, a2, a3: v112);
                        *(_QWORD *)(v6 + 376654880) = v113;
                        *(_DWORD *)(v6 + 376654876) = 0;
                        v114 = 0;
                        LODWORD(v42) = v124;
                      }
                      else
                      {
                        v113 = *(_QWORD *)(v6 + 376654880);
                      }
                      *(_DWORD *)(v6 + 376654876) = v114 + 1;
                      *(_DWORD *)(v113 + 4 * v114 + 8) = v42;
                      v115 = *(_QWORD *)(v6 + 376654880);
                      if ( v115 == 0 || (_DWORD)(v116 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                      {
                        v115 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                        *(_QWORD *)(v6 + 376654880) = v115;
                        *(_DWORD *)(v6 + 376654876) = 0;
                        v116 = 0;
                      }
                      *(_DWORD *)(v6 + 376654876) = v116 + 1;
                      *(_DWORD *)(v115 + 4 * v116 + 8) = 0;
                      v19 = (unsigned __int64)v128;
                    }
                    else
                    {
                      v19 = (unsigned __int64)v15;
                    }
                  }
                  else
                  {
                    v43 = *(_QWORD *)(v6 + 376654856);
                    if ( v43 == 0 || (_DWORD)(v45 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                    {
                      v44 = sub_181EA8720(a1, a2, a3: v43);
                      *(_QWORD *)(v6 + 376654856) = v44;
                      *(_DWORD *)(v6 + 376654852) = 0;
                      v45 = 0;
                      LODWORD(v42) = v124;
                    }
                    else
                    {
                      v44 = *(_QWORD *)(v6 + 376654856);
                    }
                    *(_DWORD *)(v6 + 376654852) = v45 + 1;
                    *(_DWORD *)(v44 + 4 * v45 + 8) = v42;
                    v19 = (unsigned __int64)v128;
                  }
                }
              }
              else
              {
                sub_181E9D6C0(a1, a2, a3: v141, a4: v42, a5: v127, a6: v6 + 376653896);
                v19 = (unsigned __int64)v128;
              }
            }
            else if ( v40 != 0 )
            {
              if ( (*v15 & 6) == 6 )
              {
                v19 = (unsigned __int64)v15;
              }
              else
              {
                *v15 |= 6u;
                if ( v41 == 6 )
                {
                  if ( v15[2] != 0 )
                  {
                    v107 = *(_QWORD *)(v6 + 376654880);
                    if ( v107 == 0 || (_DWORD)(v109 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                    {
                      v108 = sub_181EA8720(a1, a2, a3: v107);
                      *(_QWORD *)(v6 + 376654880) = v108;
                      *(_DWORD *)(v6 + 376654876) = 0;
                      v109 = 0;
                      LODWORD(v42) = v124;
                    }
                    else
                    {
                      v108 = *(_QWORD *)(v6 + 376654880);
                    }
                    *(_DWORD *)(v6 + 376654876) = v109 + 1;
                    *(_DWORD *)(v108 + 4 * v109 + 8) = v42;
                    v110 = *(_QWORD *)(v6 + 376654880);
                    if ( v110 == 0 || (_DWORD)(v111 = *(unsigned int *)(v6 + 376654876)) == 16366 )
                    {
                      v110 = sub_181EA8720(a1, a2, a3: *(_QWORD *)(v6 + 376654880));
                      *(_QWORD *)(v6 + 376654880) = v110;
                      *(_DWORD *)(v6 + 376654876) = 0;
                      v111 = 0;
                    }
                    *(_DWORD *)(v6 + 376654876) = v111 + 1;
                    *(_DWORD *)(v110 + 4 * v111 + 8) = 0;
                    v19 = (unsigned __int64)v128;
                  }
                  else
                  {
                    v19 = (unsigned __int64)v15;
                  }
                }
                else
                {
                  v58 = *(_QWORD *)(v6 + 376654856);
                  if ( v58 == 0 || (_DWORD)(v60 = *(unsigned int *)(v6 + 376654852)) == 16366 )
                  {
                    v59 = sub_181EA8720(a1, a2, a3: v58);
                    *(_QWORD *)(v6 + 376654856) = v59;
                    *(_DWORD *)(v6 + 376654852) = 0;
                    v60 = 0;
                    LODWORD(v42) = v124;
                  }
                  else
                  {
                    v59 = *(_QWORD *)(v6 + 376654856);
                  }
                  *(_DWORD *)(v6 + 376654852) = v60 + 1;
                  *(_DWORD *)(v59 + 4 * v60 + 8) = v42;
                  v19 = (unsigned __int64)v128;
                }
              }
            }
            else
            {
              if ( v29 < 0 )
                v70 = (v137 + ((unsigned __int64)*((unsigned int *)v128 + 2) << v138) + 7) & 0xFFFFFFFFFFFFFFF8LL;
              else
                v70 = v139;
              v71 = *(char **)(v6 + 376653920);
              if ( v71 != nullptr
                && (v87 = *((_QWORD *)v71 + 4), v70 <= *(_QWORD *)v71 - v87)
                && (v73 = &v71[v87], *((_QWORD *)v71 + 4) = &v73[v70] - v71, v73 != nullptr) )
              {
                v72 = (__int64)v73;
                v132 = v70;
              }
              else
              {
                v132 = v70;
                v72 = sub_181E9D600(a1, a2, a3: v70, a4: v70, a5: v6 + 376653896);
              }
              if ( v72 != 0 )
              {
                v135 = v72;
                MEMORY[0x1828393A0](a1, a2, a3: v128, a4: v73, a5: v72, a6: v132);
                v19 = v135;
                if ( *(_BYTE *)(v6 + 376654992) == 0 )
                {
                  v89 = v135 & 0xFFFFFFFFFFF80000LL;
                  v90 = v135 - (v135 & 0xFFFFFFFFFFF80000LL) - 2112;
                  v91 = v90 >> 9;
                  v92 = (v90 + v132 - 1) >> 9;
                  if ( v92 != v90 >> 9 || (v90 & 0x1FF) == 0 )
                  {
                    if ( (v90 & 0x1FF) != 0 )
                    {
                      v93 = v91 + 1;
                      a1 = -(__int64)((((v91 + 1) << 9) - v90) >> 3);
                      *(_BYTE *)(v89 + v91 + 1081) = a1;
                    }
                    else
                    {
                      *(_BYTE *)(v89 + v91 + 1080) = 0;
                      v93 = (v135 - (v135 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9;
                    }
                    if ( v93 + 63 < v92 )
                      JUMPOUT(0x303D1CA76LL);
                    v94 = v93 + 1;
                    v95 = 1;
                    while ( v94 <= v92 )
                      *(_BYTE *)(v89 + v94++ + 1080) = v95++;
                    v103 = 6;
LABEL_241:
                    while ( v94 <= v92 )
                    {
                      v104 = v103 + 1;
                      a1 = (unsigned int)(v103 + 58);
                      v105 = 1 << v103;
                      for ( i = 0; ; ++i )
                      {
                        if ( v105 <= i )
                        {
                          v103 = v104;
                          goto LABEL_241;
                        }
                        *(_BYTE *)(v89 + v94++ + 1080) = a1;
                        if ( v94 > v92 )
                          break;
                      }
                      v103 = v104;
                    }
                  }
                  *(_DWORD *)v135 |= 2u;
                }
              }
              else
              {
                v19 = v6;
              }
              if ( v19 != v6 )
              {
                if ( v140 < 0 )
                {
                  v86 = v128;
                  v85 = (v137 + ((unsigned __int64)*((unsigned int *)v128 + 2) << v138) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v85 = v139;
                  v86 = v128;
                }
                *v86 = ((unsigned __int64)(unsigned int)((v19 - v6) >> 3) << 32) | v85 | 4;
              }
            }
          }
          goto LABEL_21;
        }
        v36 = *(unsigned int *)(v6 + 376654972);
        if ( (_DWORD)v36 != 0 )
        {
          v37 = *(_DWORD *)(v6 + 8 * v36) >> 3;
          if ( (unsigned __int16)*(_DWORD *)(v6
                                           + 8LL * *(unsigned int *)(v6 + 8 * v37 + 20)
                                           + 4LL
                                           * (*(_DWORD *)(v6 + 8 * v37 + 44)
                                            & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v37 + 44))))
                                           + 12) == 519 )
          {
            v38 = *(unsigned int *)(v6 + 8 * v18 + 48);
            v39 = (unsigned int)(*(_DWORD *)(v6 + 8 * v18 + 48) + 1);
            if ( *(_DWORD *)(v6 + 8 * v36 + 16) + 1 > (int)v39 )
            {
              if ( v16 != 0 )
              {
                v131 = *(_DWORD *)(v6 + 8 * v18 + 48);
                v136 = v16;
                v144 = a1;
                v142 = a6;
                if ( (unsigned int)sub_181EA85C0(a1, a2, a3: v6 + 376652784, a4: v39, a5: v141) != 0 )
                {
                  if ( v131 >= 0xF )
                  {
LABEL_313:
                    MEMORY[0x18276F0E0](a1: v144, a2: v129, a3, a4: v141, a5: v143, a6: v142);
                    JUMPOUT(0x181E93037LL);
                  }
                  sub_181E9D6C0(
                    a1,
                    a2,
                    a3: v141,
                    a4: v61,
                    a5: v127,
                    a6: v6 + 8LL * *(unsigned int *)(v6 + 4LL * v131 + 376654108));
                  v19 = (unsigned __int64)v128;
                  v15 = v128;
                }
                else
                {
                  v19 = v6;
                  v15 = v128;
                }
              }
              else
              {
                v136 = 0;
                v144 = a1;
                v142 = a6;
                if ( (unsigned int)v38 >= 0xF )
                {
LABEL_309:
                  MEMORY[0x18276F0E0]();
LABEL_310:
                  MEMORY[0x18276EFE0](a1, a2, a3: v74, a4: v76);
LABEL_311:
                  MEMORY[0x18276EFE0](a1, a2, a3: v80, a4: v6 + 8 * v82);
LABEL_312:
                  MEMORY[0x18276EFE0](a1, a2: v20, a3: v6 + 8 * v84);
                  goto LABEL_313;
                }
                if ( v29 < 0 )
                  v74 = (v137 + ((unsigned __int64)(unsigned int)v15[2] << v29) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                else
                  v74 = (unsigned int)v29;
                v75 = *(unsigned int *)(v6 + 4 * v38 + 376654108);
                v76 = v6 + 8 * v75;
                if ( (_DWORD)v75 == 0 )
                  goto LABEL_310;
                v122 = v75;
                v77 = *(char **)(v6 + 8 * v75 + 24);
                if ( v77 != nullptr
                  && (v88 = *((_QWORD *)v77 + 4), v74 <= *(_QWORD *)v77 - v88)
                  && (v117 = &v77[v88], a1 = &v117[v74] - v77, *((_QWORD *)v77 + 4) = a1, v117 != nullptr) )
                {
                  v134 = v74;
                  v78 = (__int64)v117;
                }
                else
                {
                  v134 = v74;
                  v78 = sub_181E9D600(a1: v74, a2, a3: v74, a4: v76, a5: v6 + 8 * v75);
                }
                if ( v78 != 0 )
                {
                  v133 = v78;
                  MEMORY[0x1828393A0](a1, a2, a3: v128, a4: v76, a5: v78, a6: v134);
                  v19 = v133;
                  if ( *(_DWORD *)(v6 + 8LL * v122 + 48) == 16 && *(_BYTE *)(v6 + 376654992) == 0 )
                  {
                    v96 = v133 & 0xFFFFFFFFFFF80000LL;
                    v97 = v133 - (v133 & 0xFFFFFFFFFFF80000LL) - 2112;
                    v98 = v97 >> 9;
                    v99 = (v97 + v134 - 1) >> 9;
                    if ( v99 != v97 >> 9 || (v97 & 0x1FF) == 0 )
                    {
                      if ( (v97 & 0x1FF) != 0 )
                      {
                        v100 = v98 + 1;
                        *(_BYTE *)(v96 + v98 + 1081) = -(__int64)((((v98 + 1) << 9) - v97) >> 3);
                      }
                      else
                      {
                        *(_BYTE *)(v96 + v98 + 1080) = 0;
                        v100 = (v133 - (v133 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9;
                      }
                      if ( v100 + 63 < v99 )
                        JUMPOUT(0x303D1CB36LL);
                      v101 = v100 + 1;
                      v102 = 1;
                      while ( v101 <= v99 )
                        *(_BYTE *)(v96 + v101++ + 1080) = v102++;
                      v118 = 6;
LABEL_273:
                      while ( v101 <= v99 )
                      {
                        v119 = v118 + 1;
                        v120 = v118 + 58;
                        a2 = (unsigned int)(1 << v118);
                        for ( j = 0; ; ++j )
                        {
                          if ( (int)a2 <= j )
                          {
                            v118 = v119;
                            goto LABEL_273;
                          }
                          *(_BYTE *)(v96 + v101++ + 1080) = v120;
                          if ( v101 > v99 )
                            break;
                        }
                        v118 = v119;
                      }
                    }
                    *(_DWORD *)v133 |= 2u;
                  }
                }
                else
                {
                  v19 = v6;
                }
                if ( v19 == v6 )
                {
                  v29 = v140;
                  v15 = v128;
                }
                else
                {
                  v29 = v140;
                  if ( v140 < 0 )
                  {
                    v15 = v128;
                    v79 = (v137 + ((unsigned __int64)*((unsigned int *)v128 + 2) << v138) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v79 = v139;
                    v15 = v128;
                  }
                  *(_QWORD *)v15 = ((unsigned __int64)(unsigned int)((v19 - v6) >> 3) << 32) | v79 | 4;
                }
              }
              if ( v19 == v6 )
                *(_BYTE *)(v6 + 376652620) = 1;
            }
            else
            {
              v19 = v6;
              v136 = v16;
              v144 = a1;
              v142 = a6;
            }
            goto LABEL_66;
          }
          goto LABEL_305;
        }
LABEL_304:
        MEMORY[0x18276EFE0]();
LABEL_305:
        v144 = a1;
        MEMORY[0x18276EDE0]();
LABEL_306:
        MEMORY[0x18276EFE0](a1, a2, a3: v46, a4: v6 + 8 * v47);
        goto LABEL_307;
      }
LABEL_302:
      MEMORY[0x18276EFE0]();
      goto LABEL_303;
    }
  }
LABEL_26:
  if ( a6 != 0 )
  {
    if ( *a5 != 0 )
      result = v6 + 8LL * (unsigned int)*a5;
    else
      result = 0;
  }
  else
  {
    result = *(_QWORD *)a5;
  }
  *(_QWORD *)(v6 + 376656568) = result;
  return result;
}
