// sub_1E60CE0
// rva 0x01e60ce0  size 2603  section .text  group text
// window base 0x181e60ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E60CE0(__int64 a1, __int64 a2, char *a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 i; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rcx
  char *v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  char *v33; // r8
  unsigned int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 k; // rdx
  __int64 v49; // rdx
  int v50; // edx
  __int64 v51; // rcx
  char *v52; // rbx
  int v53; // r9d
  __int64 v54; // r8
  char *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  unsigned int v58; // edx
  unsigned int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rdi
  char *v62; // rbp
  BOOL v63; // ecx
  __int64 v64; // r11
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // r11
  char *v67; // rax
  unsigned __int64 v68; // r11
  int v69; // ecx
  int m; // ebx
  BOOL v71; // edx
  unsigned __int64 v72; // rcx
  char *v73; // rdi
  unsigned __int64 v74; // rax
  char *v75; // r8
  int v76; // edx
  int j; // ebp
  __int64 v78; // rax
  __int64 v79; // [rsp+0h] [rbp-78h] BYREF
  char *v80; // [rsp+10h] [rbp-68h]
  __int64 v81; // [rsp+18h] [rbp-60h]
  char *v82; // [rsp+20h] [rbp-58h]
  _DWORD *v83; // [rsp+28h] [rbp-50h]
  int v84; // [rsp+34h] [rbp-44h]
  char *v85; // [rsp+38h] [rbp-40h]
  _DWORD *v86; // [rsp+40h] [rbp-38h]
  unsigned int v87; // [rsp+4Ch] [rbp-2Ch]
  int v88; // [rsp+50h] [rbp-28h]
  unsigned int v89; // [rsp+54h] [rbp-24h]
  __int64 v90; // [rsp+58h] [rbp-20h]
  unsigned int v91; // [rsp+60h] [rbp-18h]
  unsigned int v92; // [rsp+64h] [rbp-14h]
  int v93; // [rsp+68h] [rbp-10h]
  unsigned int v94; // [rsp+6Ch] [rbp-Ch]
  int v95; // [rsp+70h] [rbp-8h]
  unsigned int v96; // [rsp+74h] [rbp-4h]

  v86 = a5;
  v96 = a6;
  if ( (unsigned __int64)&v79 <= *(_QWORD *)(v9 + 8) )
  {
    v85 = a3;
    sub_1EB84E0();
  }
  else if ( a6 >= 0 )
  {
    if ( v8 + 34081520 == a3 )
    {
LABEL_115:
      v85 = a3;
      goto LABEL_116;
    }
    v6 = *((unsigned int *)a3 + 7);
    if ( (_DWORD)v6 == 0 )
    {
LABEL_127:
      sub_2771080();
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
      return sub_1E61720();
    }
    v10 = *(unsigned int *)&v8[8 * v6 + 32];
    if ( (_DWORD)v10 == 0 )
      goto LABEL_117;
    v11 = *(unsigned int *)&v8[8 * v10 + 28];
    if ( (_DWORD)v11 == 0 )
    {
LABEL_126:
      v85 = a3;
      sub_2771080();
      goto LABEL_127;
    }
    if ( (v8[8 * v11 + 112] & 1) != 0 )
    {
      v12 = (__int64)&v8[8 * v10];
      goto LABEL_9;
    }
    v85 = a3;
    do
    {
LABEL_116:
      sub_1EB87C0(a1, a2, a3: v85);
LABEL_117:
      v85 = a3;
      v78 = sub_1EB8B60();
    }
    while ( (char *)v78 == v8 );
    v12 = v78;
    a5 = v86;
    a3 = v85;
LABEL_9:
    v13 = v12;
    v14 = *(_QWORD *)(v9 + 40);
    v15 = *(_QWORD *)(v9 + 32);
    v16 = *(_DWORD *)(v12 + 32);
    v17 = (v16 >> 8) & 0xFFF;
    v18 = (((unsigned __int64)(unsigned int)a6 << v16) + v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v13 - (_QWORD)v8;
    if ( v18 >= 0x20000 || v14 + v18 > v15 )
    {
      v84 = v6;
      v85 = a3;
      v14 = sub_1EAA840(a1: v17, a2: v15, a3: v19, a4: v18, a5: v96);
      LODWORD(v6) = v84;
      a6 = v96;
      a5 = v86;
      a3 = v85;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v14 + v18;
      *(_QWORD *)v14 = v19;
      *(_DWORD *)(v14 + 8) = a6;
      if ( (v17 & 7) != 0 )
      {
        v84 = v6;
        v85 = a3;
        *(_DWORD *)(v14 + v17) = 0;
        v17 += 4LL;
        a5 = v86;
      }
      if ( v18 - v17 >= 0x800 )
      {
        v84 = v6;
        v85 = a3;
        v72 = v18 - v17;
        v73 = (char *)(v17 + v14);
        memset(v73, 0, v72);
        v17 = (unsigned __int64)&v73[v72];
        a5 = v86;
      }
      else
      {
        for ( i = v17; v18 > i; i += 8LL )
          *(_QWORD *)(v14 + i) = 0;
      }
    }
    v21 = *(_DWORD *)v14 >> 3;
    if ( *(__int16 *)&v8[8 * v21 + 62] >= 2 )
      goto LABEL_19;
    do
    {
      v85 = a3;
      sub_276FC00(a1: v17, a2: v15, a3: v14, a4: v21, a5: v8 + 34084944);
LABEL_19:
      v83 = (_DWORD *)v14;
      v21 = *(unsigned int *)&v8[8 * v21 + 16];
    }
    while ( *(_DWORD *)&v8[8 * v21 + 16] != 64537 );
    if ( a6 < 1 )
      goto LABEL_25;
    v84 = v6;
    v85 = a3;
    v22 = *a5 >> 3;
    v23 = *(_DWORD *)&v8[8 * v22 + 44];
    v82 = &v8[8 * *(unsigned int *)&v8[8 * v22 + 20]];
    v24 = v23 & (0x63Fu >> SHIBYTE(v23));
    v94 = v23 & (0x63Fu >> SHIBYTE(v23));
    v25 = *(_DWORD *)&v82[4 * v24 + 12];
    v81 = (__int64)&v8[8 * v22];
    v26 = *(_QWORD *)(v81 + HIWORD(v25) + 8);
    v27 = (char *)((__int64 (__fastcall *)(__int64, char *, _DWORD *, __int64, char *))(v7 + v26))(
                    a1: v24,
                    a2: v8 + 55043968,
                    a3: a5,
                    a4: v26,
                    a5: v8 + 55043968);
    v28 = (unsigned __int64)v83;
    v29 = *(unsigned int *)&v8[8 * (*v83 >> 3) + 24];
    LODWORD(v6) = *(_DWORD *)&v8[8 * v29 + 36];
    v93 = v6;
    v15 = (unsigned int)*(__int16 *)&v8[8 * v29 + 60];
    v92 = v15;
    v30 = *(unsigned int *)&v8[8 * v29 + 40];
    v91 = *(_DWORD *)&v8[8 * v29 + 40];
    v90 = (__int16)v15;
    if ( v27 == v8 )
      goto LABEL_45;
    v31 = *(_DWORD *)v27 >> 3;
    v32 = (unsigned int)*(__int16 *)&v8[8 * v31 + 62];
    v33 = &v8[8 * *(unsigned int *)&v8[8 * v31 + 16]];
    if ( (v15 & 0x8000u) != 0LL )
    {
      if ( (int)v30 >= 0x10000 )
      {
        LODWORD(v6) = v84;
        v76 = 2 * *(__int16 *)&v8[8 * v31 + 64];
        v32 = (unsigned int)(__int16)v32;
        for ( j = 0; ; j += 2 )
        {
          if ( v76 <= j )
            goto LABEL_24;
          v15 = 4 * ((int)v32 + j) + 12;
          if ( (_DWORD)v30 == *(_DWORD *)&v33[v15] )
            break;
        }
        v15 = v92;
        v28 = (unsigned __int64)v83;
        goto LABEL_89;
      }
      v33 = &v8[8 * *(unsigned int *)&v8[8 * v31 + 20]];
      v32 = (unsigned __int16)*(_DWORD *)&v33[4
                                            * (*(_DWORD *)&v8[8 * v31 + 44]
                                             & ((unsigned int)v30 >> HIBYTE(*(_DWORD *)&v8[8 * v31 + 44])))
                                            + 12];
      v71 = v30 == v32;
LABEL_88:
      if ( !v71 )
        goto LABEL_24;
LABEL_89:
      *(_DWORD *)(v28 + 12) = (unsigned __int64)(v27 - v8) >> 3;
      if ( (*(_DWORD *)v28 & 2) != 0 )
      {
        if ( (*(_DWORD *)v28 & 1) != 0 )
        {
          v75 = (char *)(v28 - *(_QWORD *)(v28 - 8));
          if ( v75[48] != 0 )
            v75[48] = 0;
          v50 = 1;
        }
        else
        {
          v74 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v74) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v74) >> 9) + 0x38) = 0;
          v50 = 1;
        }
      }
      else
      {
        v50 = 1;
      }
      goto LABEL_46;
    }
    if ( *(__int16 *)&v8[8 * v31 + 62] > (__int16)v15 )
    {
      v71 = v6 == *(_DWORD *)&v33[4 * (__int16)v15 + 12];
      goto LABEL_88;
    }
LABEL_24:
    sub_276F520(a1: v30, a2: v15, a3: v27, a4: v32, a5: v33);
LABEL_25:
    v95 = 0;
    v34 = 0;
    v84 = v6;
    v85 = a3;
LABEL_26:
    if ( v34 == v96 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        goto LABEL_111;
      return (__int64)v83;
    }
    if ( (v34 & 0x80000000) != 0 )
    {
      v91 = v34;
      sub_2770E80(a1: v17, a2: v15, a3: v34);
    }
    else
    {
      v35 = *(unsigned int *)&v8[8 * v84 + 32];
      if ( (_DWORD)v35 != 0 )
      {
        v36 = *(unsigned int *)&v8[8 * v35 + 28];
        if ( (_DWORD)v36 == 0 )
          goto LABEL_125;
        if ( (v8[8 * v36 + 112] & 1) == 0 )
        {
          while ( 1 )
          {
            v91 = v34;
LABEL_122:
            sub_1EB87C0(a1: v17, a2: v15, a3: v85);
          }
        }
        v37 = (__int64)&v8[8 * v35];
        goto LABEL_32;
      }
    }
    v91 = v34;
    v37 = sub_1EB8B60(a1: v17, a2: v15, a3: v85);
    if ( (char *)v37 == v8 )
      goto LABEL_122;
LABEL_32:
    v38 = v37;
    v39 = *(_QWORD *)(v9 + 40);
    v40 = *(_DWORD *)(v37 + 32);
    v41 = (v40 >> 8) & 0xFFF;
    v42 = (unsigned __int8)v40;
    v43 = (unsigned __int64)v34 << v40;
    v44 = (v43 + v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v45 = v38 - (_QWORD)v8;
    if ( v44 >= 0x20000 || (v43 = v39 + v44, v39 + v44 > *(_QWORD *)(v9 + 32)) )
    {
      v91 = v34;
      v39 = sub_1EAA840(a1: v43, a2: v15, a3: v45, a4: v42, a5: v34);
      v34 = v91;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v43;
      *(_QWORD *)v39 = v45;
      *(_DWORD *)(v39 + 8) = v34;
      if ( (v41 & 7) != 0 )
      {
        v91 = v34;
        *(_DWORD *)(v39 + v41) = 0;
        v41 += 4;
      }
      v46 = v44 - v41;
      if ( v44 - v41 >= 0x800 )
      {
        v91 = v34;
        memset((void *)(v41 + v39), 0, v46);
        v43 = v39 + v44;
        v46 = 0;
      }
      else
      {
        for ( k = v41; v44 > k; k += 8LL )
          *(_QWORD *)(v39 + k) = 0;
      }
    }
    v49 = *(_DWORD *)v39 >> 3;
    if ( *(__int16 *)&v8[8 * v49 + 62] >= 2 && *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v49 + 16] + 16] == 64537 )
    {
      v91 = v34;
      v81 = v39;
      sub_1EB4960(a1: 0, a2: v34, a3: v83, a4: v46, a5: 0, a6: v39);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v81;
    }
    v81 = v39;
    v91 = v34;
    sub_276FC00(a1: v43, a2: v15, a3: v39, a4: v46, a5: v8 + 34084944);
LABEL_45:
    v50 = 0;
LABEL_46:
    v89 = v50;
    v51 = 1;
    v17 = v94;
    v52 = v82;
    v53 = v96;
    while ( 1 )
    {
      while ( 1 )
      {
        v88 = v51;
        if ( v53 <= (int)v51 )
        {
          v95 = v51;
          v34 = v89;
          goto LABEL_26;
        }
        if ( (unsigned int)(v51 + 128) >= 0x100 )
        {
          v54 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v54 + 16) > *(_QWORD *)(v9 + 32) )
          {
            v54 = sub_1EAA920(a1: v17, a2: v15, a3: 34086464);
            LODWORD(v51) = v88;
            v17 = v94;
            v52 = v82;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v54 + 16;
            *(_DWORD *)v54 = 34086464;
            *(_DWORD *)(v54 + 4) = 0;
            *(_QWORD *)(v54 + 8) = 0;
          }
          *(_DWORD *)(v54 + 4) = v51;
        }
        else
        {
          v54 = (__int64)&v8[8 * *(unsigned int *)&v8[4 * v51 + 376353716]];
        }
        v55 = (char *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v81 + HIWORD(*(_DWORD *)&v52[4 * v17 + 12]) + 8)))(
                        a1: v17,
                        a2: v15,
                        a3: v86,
                        a4: v54,
                        a5: v54);
        v58 = v88 + 1;
        if ( v55 != v8 )
          break;
        v51 = v58;
        v17 = v94;
        v52 = v82;
        v53 = v96;
      }
      v53 = v96;
      v80 = v55;
      v59 = v89 + 1;
      v87 = v89 + 1;
      if ( v96 <= v89 )
      {
        sub_2771220(a1: v57, a2: v15, a3: v89, a4: v56, a5: v96);
LABEL_125:
        sub_2771080();
        goto LABEL_126;
      }
      v15 = v92;
      v60 = *(_DWORD *)v55 >> 3;
      v61 = (unsigned int)*(__int16 *)&v8[8 * v60 + 62];
      v62 = &v8[8 * *(unsigned int *)&v8[8 * v60 + 16]];
      if ( (v92 & 0x8000u) == 0 )
        break;
      if ( (int)v91 < 0x10000 )
      {
        v61 = v91;
        v63 = v91 == (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v60 + 20]
                                                    + 4
                                                    * (*(_DWORD *)&v8[8 * v60 + 44]
                                                     & (v91 >> HIBYTE(*(_DWORD *)&v8[8 * v60 + 44])))
                                                    + 12];
        goto LABEL_55;
      }
      v64 = v89;
      v69 = 2 * *(__int16 *)&v8[8 * v60 + 64];
      v61 = (unsigned int)(__int16)v61;
      for ( m = 0; ; m += 2 )
      {
        if ( v69 <= m )
          goto LABEL_110;
        if ( v91 == *(_DWORD *)&v62[4 * (int)v61 + 12 + 4 * m] )
          break;
      }
      v59 = v87;
      v55 = v80;
LABEL_57:
      v65 = (unsigned __int64)v83;
      v83[v64 + 3] = (unsigned __int64)(v55 - v8) >> 3;
      if ( (*(_DWORD *)v65 & 2) != 0 )
      {
        if ( (*(_DWORD *)v65 & 1) != 0 )
        {
          v67 = (char *)(v65 - *(_QWORD *)(v65 - 8));
          v68 = (unsigned __int64)(4 * v64 + 12) >> 9;
          if ( v67[v68 + 48] != 0 )
            v67[v68 + 48] = 0;
          v89 = v59;
          v51 = v58;
          v17 = v94;
          v52 = v82;
        }
        else
        {
          v66 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v66) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v66) >> 9) + 0x38) = 0;
          v89 = v59;
          v51 = v58;
          v17 = v94;
          v52 = v82;
        }
      }
      else
      {
        v89 = v59;
        v51 = v58;
        v17 = v94;
        v52 = v82;
      }
    }
    if ( *(__int16 *)&v8[8 * v60 + 62] > (__int16)v92 )
    {
      v63 = v93 == *(_DWORD *)&v62[4 * v90 + 12];
      v61 = v91;
LABEL_55:
      if ( v63 )
      {
        v64 = v89;
        goto LABEL_57;
      }
    }
LABEL_110:
    sub_276F520(a1: v61, a2: v92, a3: v80);
LABEL_111:
    v91 = v34;
    sub_277F280();
    return (__int64)v83;
  }
  v85 = a3;
  sub_2770E80(a1, a2, a3: v96);
  goto LABEL_115;
}
