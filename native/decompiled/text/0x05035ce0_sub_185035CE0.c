// sub_185035CE0
// rva 0x05035ce0  size 2783  section .text  group text
// window base 0x185035ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185035CE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int16 v36; // cx
  __int64 v37; // rbp
  __int64 v38; // rdx
  int v39; // r8d
  BOOL v40; // r8d
  unsigned int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 result; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // rbp
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r9
  int v63; // r8d
  __int64 v64; // r11
  __int64 v65; // rcx
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  unsigned __int64 v68; // r8
  __int64 v69; // rbp
  __int64 v70; // r11
  unsigned __int64 v71; // rcx
  __int64 v72; // r11
  __int64 v73; // rax
  unsigned int v74; // edx
  int v75; // eax
  __int64 v76; // rax
  unsigned int v77; // ebx
  __int64 v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  int v84; // eax
  char *v85; // rdx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  void *v88; // rdi
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // rax
  int v92; // [rsp+0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+8h] [rbp-50h]
  _DWORD *v94; // [rsp+10h] [rbp-48h]
  __int64 v95; // [rsp+18h] [rbp-40h]
  _DWORD *v96; // [rsp+20h] [rbp-38h]
  __int64 v97; // [rsp+28h] [rbp-30h]
  unsigned int v98; // [rsp+30h] [rbp-28h]
  unsigned int v99; // [rsp+34h] [rbp-24h]
  unsigned int v100; // [rsp+38h] [rbp-20h]
  unsigned int v101; // [rsp+3Ch] [rbp-1Ch]
  __int64 v102; // [rsp+40h] [rbp-18h]
  unsigned int v103; // [rsp+4Ch] [rbp-Ch]
  __int64 v104; // [rsp+50h] [rbp-8h]

  v96 = a3;
  if ( (unsigned __int64)&v92 <= *(_QWORD *)(v9 + 8) )
  {
    v95 = a5;
    v21 = MEMORY[0x181EB84E0]();
    v104 = v7;
    v100 = v99;
    goto LABEL_15;
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  v103 = v10;
  v102 = (int)v10;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_91;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_91;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v95 = a5;
      goto LABEL_8;
    }
    goto LABEL_91;
  }
  if ( v13 != v12 || (v84 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_91:
    v95 = a5;
    MEMORY[0x18208CC20]();
    a3 = v96;
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v84;
  v95 = a5;
LABEL_8:
  v14 = (unsigned int)a3[4];
  if ( (_DWORD)v14 == 0 )
    goto LABEL_20;
  v15 = (unsigned int)a3[7];
  if ( (int)v15 < 1 )
  {
    v48 = (unsigned int)v15;
    v101 = 0;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v8 + 8 * v14 + 8) == 0 )
  {
    v21 = MEMORY[0x18276CFE0](a1: v13, a2: v12, a3: 0, a4: v15, a5: 0);
    v100 = 0;
    goto LABEL_15;
  }
  v16 = *(unsigned int *)(v8 + 8 * v14 + 12);
  if ( (_DWORD)v16 == 0 )
  {
    v21 = MEMORY[0x18276BEE0]();
    v100 = 0;
    goto LABEL_15;
  }
  v17 = (_DWORD *)((__int64 (__fastcall *)(unsigned __int64, signed __int64, __int64))(v7
                                                                                     + *(_QWORD *)(v8
                                                                                                 + 8LL
                                                                                                 * (*(_DWORD *)(v8 + 8 * v16) >> 3)
                                                                                                 + 152)))(
                    a1: v13,
                    a2: v12,
                    a3: v8 + 8 * v16);
  if ( v17 != (_DWORD *)v8 )
  {
    v20 = *v17 >> 3;
    if ( *(__int16 *)(v8 + 8 * v20 + 62) < 2
      || *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v20 + 16) + 16) != 27279 )
    {
      v21 = MEMORY[0x18276A220](a1: v13, a2: v12, a3: v17, a4: v18, a5: v8 + 40493168);
      v100 = 0;
      goto LABEL_15;
    }
  }
  if ( v17 == (_DWORD *)v8 )
  {
    sub_185035280(a1: v13, a2: v12, a3: (__int64)v96, a4: v18, a5: 0, a6: v19, a7: v92);
    v74 = 0;
  }
  else
  {
    v74 = 1;
  }
  v15 = v74;
  while ( 1 )
  {
    a3 = v96;
    v75 = v96[7];
    if ( v75 <= (int)v15 )
    {
      v48 = (unsigned int)v75;
      v101 = v15;
LABEL_45:
      v49 = (unsigned int)a3[4];
      if ( (_DWORD)v49 == 0 )
      {
LABEL_132:
        v21 = MEMORY[0x18276BEE0](a1: v13, a2: v12, a3, a4: v15, a5: v48);
        v104 = v7;
        v100 = v101;
        goto LABEL_15;
      }
      v50 = *(_DWORD *)(v8 + 8 * v49 + 8);
      v51 = v8 + 8 * v49;
      if ( v50 != (_DWORD)v48 )
      {
        v94 = (_DWORD *)(v8 + 8 * v49);
        v29 = (__int64)a3;
        goto LABEL_24;
      }
      v54 = *(_DWORD *)(v8 + 8 * v49) >> 3;
      v12 = (unsigned int)(v48 + 4);
      if ( (int)v12 < 0 )
      {
        v99 = v48 + 4;
        v93 = v51;
        v21 = MEMORY[0x18579AF80](a1: v13, a2: v12, a3: v51, a4: v15, a5: (unsigned int)v12, a6: v8 + 8 * v54);
        v100 = 0;
        goto LABEL_15;
      }
      v55 = *(unsigned int *)(v8 + 8 * v54 + 24);
      v56 = v8 + 8 * v55;
      if ( (_DWORD)v55 != 0 && (_DWORD)v55 != 4260190 )
      {
        v57 = *(unsigned int *)(v8 + 8 * v55 + 28);
        if ( (_DWORD)v57 != 0 )
        {
          v58 = *(unsigned int *)(v8 + 8 * v57 + 32);
          if ( (_DWORD)v58 == 0 )
          {
            v99 = v12;
            v93 = v51;
            v98 = v50;
            v91 = MEMORY[0x181EB8B60](a1: v56, a2: v12, a3: v56);
            if ( v91 != v8 )
            {
              v60 = v91;
              v51 = v93;
              a3 = v96;
LABEL_60:
              v61 = v60;
              v62 = *(_QWORD *)(v9 + 40);
              v13 = *(_QWORD *)(v9 + 32);
              v63 = *(_DWORD *)(v60 + 32);
              v64 = (unsigned int)v12;
              v65 = (unsigned __int8)v63;
              v66 = (((unsigned __int64)(unsigned int)v12 << v63) + ((v63 >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
              v67 = v61 - v8;
              if ( v66 >= 0x20000 || (v68 = v62 + v66) > v13 )
              {
                v97 = (unsigned int)v12;
                v93 = v51;
                v98 = v50;
                v99 = v12;
                v62 = MEMORY[0x181EAA840](a1: v13, a2: v12, a3: v67, a4: v65, a5: (unsigned int)v12, a6: v62);
                v64 = v97;
                v12 = v99;
                v51 = v93;
                v50 = v98;
                a3 = v96;
              }
              else
              {
                *(_QWORD *)(v9 + 40) = v68;
                *(_QWORD *)v62 = v67;
                *(_DWORD *)(v62 + 8) = v12;
              }
              if ( (unsigned int)v12 < v50 )
                JUMPOUT(0x30A05118DLL);
              if ( (unsigned int)v12 <= v50 )
                JUMPOUT(0x30A05119ALL);
              if ( v50 != 0 )
              {
                v69 = v51 + 12;
                v13 = 0;
                do
                {
                  *(_DWORD *)(v62 + 12 + 4 * v13) = *(_DWORD *)(v69 + 4 * v13);
                  ++v13;
                }
                while ( (__int64)v13 <= v50 - 1LL );
              }
              v70 = v64 - v50;
              v71 = 4 * v70;
              if ( 4 * v70 >= 2048 )
              {
                v88 = (void *)(v62 + 4LL * v50 + 12);
                memset(v88, 0, v71);
                v13 = (unsigned __int64)v88 + v71;
                v29 = (__int64)v96;
              }
              else if ( (unsigned int)v12 <= v50 )
              {
                v29 = (__int64)a3;
              }
              else
              {
                v72 = v70 - 1;
                v73 = 0;
                do
                  *(_DWORD *)(v62 + 4LL * v50 + 12 + 4 * v73++) = 0;
                while ( v73 <= v72 );
                v29 = (__int64)a3;
              }
              *(_DWORD *)(v29 + 16) = (unsigned __int64)(v62 - v8) >> 3;
              if ( (*(_DWORD *)v29 & 2) != 0 )
              {
                v87 = (v29 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v87) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v87) >> 9) + 0x38) = 0;
                v94 = (_DWORD *)v62;
              }
              else
              {
                v94 = (_DWORD *)v62;
              }
              goto LABEL_24;
            }
            goto LABEL_131;
          }
          v59 = *(unsigned int *)(v8 + 8 * v58 + 28);
          if ( (_DWORD)v59 != 0 )
          {
            if ( (*(_BYTE *)(v8 + 8 * v59 + 112) & 1) != 0 )
            {
              v60 = v8 + 8 * v58;
              goto LABEL_60;
            }
            goto LABEL_131;
          }
        }
        else
        {
          MEMORY[0x182771080](a1: v56);
        }
        MEMORY[0x182771080](a1: v56, a2: v12, a3, a4: v15, a5: v95);
        __builtin_debugtrap();
        return sub_1850367C0();
      }
LABEL_131:
      MEMORY[0x181EB87C0](a1: v56, a2: v12, a3: v56);
      goto LABEL_132;
    }
    v76 = (unsigned int)v96[4];
    if ( (_DWORD)v76 == 0 )
      goto LABEL_137;
    v77 = *(_DWORD *)(v8 + 8 * v76 + 8);
    if ( v77 <= (unsigned int)v15 )
      break;
    v78 = *(unsigned int *)(v8 + 8 * v76 + 4 * v15 + 12);
    if ( (_DWORD)v78 == 0 )
    {
LABEL_137:
      v99 = v15;
      v21 = MEMORY[0x18276BEE0]();
      v104 = v7;
      v100 = v99;
      goto LABEL_15;
    }
    v99 = v15;
    v79 = (_DWORD *)((__int64 (__fastcall *)(unsigned __int64, signed __int64, __int64))(v7
                                                                                       + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v78) >> 3) + 152)))(
                      a1: v13,
                      a2: v12,
                      a3: v8 + 8 * v78);
    if ( v79 != (_DWORD *)v8 )
    {
      v82 = *v79 >> 3;
      if ( *(__int16 *)(v8 + 8 * v82 + 62) < 2
        || *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v82 + 16) + 16) != 27279 )
      {
        v21 = MEMORY[0x18276A220](a1: v13, a2: v12, a3: v79, a4: v96, a5: v8 + 40493168);
        v104 = v7;
        v100 = v99;
        goto LABEL_15;
      }
    }
    if ( v79 == (_DWORD *)v8 )
    {
      sub_185035280(a1: v13, a2: v12, a3: (__int64)v96, a4: v80, a5: v99, a6: v81, a7: v92);
      v15 = v99;
    }
    else
    {
      v15 = v99 + 1;
    }
  }
  v99 = v15;
  v21 = MEMORY[0x18276CFE0](a1: v13, a2: v12, a3: (unsigned int)v15, a4: v15, a5: v77);
  v104 = v7;
  v100 = v99;
LABEL_15:
  while ( 2 )
  {
    while ( 2 )
    {
      v24 = v103;
      if ( v103 != 0 )
      {
        v25 = (__int64)v96;
        v26 = *(unsigned int *)((char *)v96 + v102);
        v24 = *(unsigned int *)(v8 + 8 * v26 + 28);
        if ( (_DWORD)v24 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v26 + 28) = v24 - 1;
        }
        if ( (_DWORD)v24 == 1 )
        {
          v52 = *(unsigned int *)(v8 + 8 * v26 + 4);
          if ( (_DWORD)v52 != 0 )
          {
            v53 = *(unsigned int *)(v8 + 8 * v52 + 8);
            if ( (_DWORD)v53 != 0 )
            {
              v24 = *(unsigned int *)(v8 + 8 * v53 + 16);
              if ( (_DWORD)v24 != 0 )
              {
                v90 = 1;
                goto LABEL_124;
              }
            }
          }
        }
      }
      else
      {
        v90 = 0xFFFFFFFFLL;
LABEL_124:
        v93 = v21;
        MEMORY[0x18208CCA0](a1: v22, a2: v23, a3: v96, a4: v24, a5: v90);
        v21 = v93;
        v25 = (__int64)v96;
      }
      MEMORY[0x182769900](a1: v25, a2: v23, a3: v21, a4: v24, a5: &a7);
LABEL_20:
      v27 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v27 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v27 = MEMORY[0x181EAA840](a1: v13, a2: v12, a3: 43253648, a4: v10, a5: 4);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v27 + 32;
        *(_QWORD *)v27 = 43253648;
        *(_DWORD *)(v27 + 8) = 4;
        *(_DWORD *)(v27 + 12) = 0;
        *(_QWORD *)(v27 + 16) = 0;
        *(_QWORD *)(v27 + 24) = 0;
      }
      v28 = (__int64)v96;
      v96[4] = (unsigned __int64)(v27 - v8) >> 3;
      if ( (*(_DWORD *)v28 & 2) != 0 )
      {
        v83 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v83) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v83) >> 9) + 0x38) = 0;
        v94 = (_DWORD *)v27;
        v29 = v28;
      }
      else
      {
        v94 = (_DWORD *)v27;
        v29 = v28;
      }
LABEL_24:
      v98 = *(_DWORD *)(v29 + 28);
      *(_DWORD *)(v29 + 28) = v98 + 1;
      v30 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v30 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v30 = MEMORY[0x181EAA920](a1: v13, a2: 34210160, a3: 34210160);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v30 + 32;
        *(_DWORD *)v30 = 34210160;
        *(_DWORD *)(v30 + 4) = 0;
        *(_QWORD *)(v30 + 8) = 0;
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = 0;
      }
      v93 = v30;
      MEMORY[0x1853F1120](a1: v13, a2: v12, a3: v30, a4: v29, a5: v95, a6: v8);
      v33 = (unsigned __int64)v94;
      v34 = (unsigned int)v94[2];
      if ( (unsigned int)v34 <= v98 )
      {
        v21 = MEMORY[0x18276CFE0](a1: v31, a2: v32, a3: v98, a4: v34, a5: (unsigned int)v34);
        v100 = 0;
        continue;
      }
      break;
    }
    v35 = *(unsigned int *)(v8 + 8LL * (*v94 >> 3) + 24);
    v36 = *(_WORD *)(v8 + 8 * v35 + 60);
    if ( v36 < 0 )
    {
      v37 = v102;
      v38 = (__int64)v96;
      v39 = *(_DWORD *)(v8 + 8 * v35 + 40);
      if ( v39 >= 0x10000 )
        goto LABEL_29;
      v40 = v39 == 0;
      v41 = v103;
    }
    else
    {
      if ( v36 >= 3 )
      {
LABEL_29:
        v21 = MEMORY[0x182769A20](a1: v31, a2: v32, a3: v93);
        v100 = 0;
        continue;
      }
      v37 = v102;
      v41 = v103;
      v38 = (__int64)v96;
      v40 = *(_DWORD *)(v8 + 8 * v35 + 36) == *(_DWORD *)(v8 + 4LL * (unsigned __int16)v36 + 60267852);
    }
    break;
  }
  if ( !v40 )
    goto LABEL_29;
  v42 = v98;
  v94[v98 + 3] = (unsigned __int64)(v93 - v8) >> 3;
  if ( (*(_DWORD *)v33 & 2) != 0 )
  {
    if ( (*(_DWORD *)v33 & 1) != 0 )
    {
      v43 = v38;
      v85 = (char *)(v33 - *(_QWORD *)(v33 - 8));
      v32 = v33;
      v86 = (unsigned __int64)(4 * v42 + 12) >> 9;
      if ( v85[v86 + 48] != 0 )
        v85[v86 + 48] = 0;
    }
    else
    {
      v32 = (v33 - ((v33 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + v32 + 0x38) != 0 )
        *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - ((v33 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      v43 = v38;
    }
  }
  else
  {
    v43 = v38;
  }
  if ( v41 != 0 )
  {
    v44 = *(unsigned int *)(v43 + v37);
    result = *(unsigned int *)(v8 + 8 * v44 + 28);
    if ( (_DWORD)result == 1 )
    {
      *(_QWORD *)(v8 + 8 * v44 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v42 = (unsigned int)(result - 1);
      *(_DWORD *)(v8 + 8 * v44 + 28) = v42;
    }
    if ( (_DWORD)result == 1 )
    {
      v46 = *(unsigned int *)(v8 + 8 * v44 + 4);
      if ( (_DWORD)v46 != 0 )
      {
        v47 = *(unsigned int *)(v8 + 8 * v46 + 8);
        if ( (_DWORD)v47 != 0 )
        {
          result = *(unsigned int *)(v8 + 8 * v47 + 16);
          if ( (_DWORD)result != 0 )
          {
            v89 = 1;
            goto LABEL_121;
          }
        }
      }
    }
  }
  else
  {
    v89 = 0xFFFFFFFFLL;
LABEL_121:
    result = MEMORY[0x18208CCA0](a1: v43, a2: v32, a3: v96, a4: v42, a5: v89);
    v43 = (__int64)v96;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v43);
  return result;
}
