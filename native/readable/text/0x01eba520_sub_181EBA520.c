// sub_1EBA520
// rva 0x01eba520  size 3068  section .text  group text
// window base 0x181eba520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBA520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  _DWORD *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned int v29; // r8d
  int v30; // r10d
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r11
  unsigned __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r8
  BOOL v41; // eax
  __int64 v42; // r8
  unsigned int v43; // r8d
  __int64 v44; // rcx
  unsigned int v45; // r11d
  __int64 v46; // rax
  __int64 v47; // r11
  __int64 v48; // rdi
  __int64 v49; // r11
  __int64 v50; // rdx
  BOOL v51; // eax
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rbp
  __int64 v60; // rcx
  _BOOL8 v61; // r8
  unsigned __int64 v62; // rbx
  __int64 v63; // r11
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  char *v66; // rax
  __int64 v68; // r8
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rax
  int v77; // [rsp+0h] [rbp-98h] BYREF
  __int64 v78; // [rsp+8h] [rbp-90h]
  unsigned __int32 v79; // [rsp+14h] [rbp-84h]
  _DWORD *v80; // [rsp+18h] [rbp-80h]
  unsigned int v81; // [rsp+24h] [rbp-74h]
  __int64 v82; // [rsp+28h] [rbp-70h]
  __int64 v83; // [rsp+30h] [rbp-68h]
  unsigned __int64 v84; // [rsp+38h] [rbp-60h]
  unsigned int v85; // [rsp+44h] [rbp-54h]
  unsigned __int64 v86; // [rsp+48h] [rbp-50h]
  int v87; // [rsp+50h] [rbp-48h]
  unsigned int v89; // [rsp+58h] [rbp-40h]
  unsigned int v90; // [rsp+5Ch] [rbp-3Ch]
  int v91; // [rsp+60h] [rbp-38h]
  unsigned int v92; // [rsp+64h] [rbp-34h]
  unsigned __int64 v93; // [rsp+68h] [rbp-30h]
  __int64 v94; // [rsp+70h] [rbp-28h]
  __int64 v95; // [rsp+78h] [rbp-20h]
  unsigned int v96; // [rsp+84h] [rbp-14h]
  unsigned __int64 v97; // [rsp+88h] [rbp-10h]
  __int64 v98; // [rsp+90h] [rbp-8h]

  v83 = a5;
  if ( (unsigned __int64)&v77 <= *(_QWORD *)(v9 + 8) )
  {
LABEL_127:
    LODWORD(v14) = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v77);
LABEL_128:
    v91 = v14;
    LODWORD(v14) = sub_2771080();
LABEL_129:
    v91 = v14;
    LODWORD(v14) = sub_2771220(a1: v15, a2: v16, a3: v96, a4: v18, a5: (unsigned int)v18);
LABEL_130:
    v91 = v14;
    LODWORD(v14) = sub_2771080();
LABEL_131:
    v91 = v14;
    LODWORD(v14) = sub_2771220(a1: v23, a2: v19, a3: (unsigned int)v14);
LABEL_132:
    v91 = v14;
    sub_2771220(a1: v23, a2: v19, a3: (unsigned int)v25, a4: v18, a5: (unsigned int)v18);
LABEL_133:
    v94 = v44;
    v90 = v7;
    v89 = v43;
    v78 = v23;
    v91 = v30;
    v72 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v72 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v72 = sub_1EAA920(a1: v23, a2: v10, a3: 34090048);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v72 + 40;
      *(_DWORD *)v72 = 34090048;
      *(_DWORD *)(v72 + 4) = 0;
      *(_QWORD *)(v72 + 8) = 0;
      *(_QWORD *)(v72 + 16) = 0;
      *(_QWORD *)(v72 + 24) = 0;
      *(_QWORD *)(v72 + 32) = 0;
    }
    *(_DWORD *)(v72 + 20) = 46923644;
    *(_DWORD *)(v72 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v72 + 12) = (unsigned __int64)(v72 - v8) >> 3;
    v80 = (_DWORD *)v72;
    sub_503B9A0(a1: v23, a2: v10, a3: v72, a4: v72, a5: 0, a6: v32);
    v76 = (__int64)v80;
    v80[2] = 46279854;
    if ( (*(_DWORD *)v76 & 2) != 0 )
      goto LABEL_139;
    while ( 1 )
    {
      LODWORD(v46) = sub_2769900(a1: v74, a2: v75, a3: v76, a4: v73, a5: &a7);
LABEL_137:
      v85 = v46;
      v94 = v44;
      v90 = v7;
      v89 = v43;
      v78 = v23;
      v91 = v30;
      v54 = sub_2771220(a1: v23, a2: v10, a3: (unsigned int)v46, a4: v44, a5: v45, a6: v32);
LABEL_138:
      v76 = sub_2770E80(a1: v48, a2: v10, a3: v54, a4: v53, a5: v85, a6: v32);
LABEL_139:
      v73 = (v76 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v76 & 0xFFFFFFFFFFF80000LL) + ((v76 - v73) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v76 & 0xFFFFFFFFFFF80000LL) + ((v76 - v73) >> 9) + 0x38) = 0;
    }
  }
  v82 = a3;
  if ( a5 == v8 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  v98 = *(_QWORD *)(a3 + 8);
  v81 = *(_DWORD *)(a3 + 4);
  v80 = (_DWORD *)(v8 + 8LL * v81);
  v10 = (unsigned __int64)(a5 - v8) >> 3;
  v79 = v10;
  v11 = 0x8000000000000000LL;
  v97 = 0x8000000000000000LL;
LABEL_4:
  v12 = *(_QWORD *)(a3 + 32);
  v13 = v12 + 1024;
  if ( v12 != -1024 )
    JUMPOUT(0x303D445B4LL);
  v7 = v11 & v13 ^ v13;
  v96 = 0xFFFFFFF5;
  v95 = -1024;
  v94 = 0;
  v93 = v11 & v13;
  v92 = 64;
  v14 = sub_4F9CAA0(a1: v11, a2: v10, a3: v11 & v13 ^ v13);
  v17 = v81;
  if ( v81 == 0 )
    goto LABEL_128;
  v18 = *(unsigned int *)(v8 + 8LL * v81 + 8);
  if ( (unsigned int)v18 <= v96 )
    goto LABEL_129;
  v19 = v96;
  v20 = v80;
  v21 = (unsigned int)v80[v96 + 3];
  if ( (_DWORD)v21 != 0 )
    v22 = v8 + 8 * v21;
  else
    v22 = v8 + 8LL * (unsigned int)v80[v96 + 3];
  v23 = v22;
  if ( v22 == v8 )
    goto LABEL_130;
  v24 = *(_DWORD *)(v22 + 8);
  if ( v24 <= (int)v14 )
  {
    v25 = 54 - v92;
    if ( (unsigned int)v18 <= (unsigned int)v25 )
      goto LABEL_132;
    v26 = (unsigned int)v80[v25 + 3];
    if ( (_DWORD)v26 != 0 )
      v27 = v8 + 8 * v26;
    else
      v27 = v8 + 8LL * *(unsigned int *)((char *)v80 + (unsigned int)(4 * v25) + 12);
    if ( v27 == v8 )
    {
      v30 = v14;
      v32 = v79;
      v52 = *(unsigned int *)(v8 + 8LL * v81 + 12);
      if ( (_DWORD)v52 != 0 )
        v23 = v8 + 8 * v52;
      else
        v23 = v8 + 8LL * *(unsigned int *)(v8 + 8LL * v81 + 12);
      v28 = v96;
      v29 = 0;
      v31 = 0;
    }
    else
    {
      v23 = v27;
      v28 = 0xFFFFFFFFLL;
      v29 = 0;
      v30 = v14;
      v31 = 54 - v92;
      v32 = v79;
    }
    goto LABEL_16;
  }
  if ( v24 <= (unsigned int)v14 )
    goto LABEL_131;
  v29 = v14 + 1;
  if ( *(_DWORD *)(v22 + 4 * v14 + 12) != 0 )
  {
    v28 = 0xFFFFFFFFLL;
    v30 = v14;
    v32 = v79;
    v31 = v96;
LABEL_16:
    v92 = v18;
    v7 = v31;
    v33 = v29;
    v34 = (unsigned int)v28;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v23 == v8 )
          {
            v90 = v7;
            v89 = v34;
            v91 = v30;
            v35 = sub_2771080(a1: v23, a2: v19, a3: v28, a4: v18, a5: v34, a6: v32);
LABEL_125:
            v90 = v7;
            v89 = v34;
            v78 = v23;
            v91 = v30;
            LODWORD(v36) = sub_2771220(a1: v23, a2: v19, a3: (unsigned int)v33, a4: v18, a5: v35, a6: v32);
LABEL_126:
            v89 = v34;
            v78 = v23;
            v91 = v30;
            sub_2771220(a1: v23, a2: v19, a3: (unsigned int)v36, a4: v18, a5: (unsigned int)v18, a6: v32);
            goto LABEL_127;
          }
          v35 = *(_DWORD *)(v23 + 8);
          if ( (int)v35 > (int)v33 )
            break;
          v36 = v7 + 1;
          if ( (unsigned int)v18 <= (unsigned int)v36 )
            goto LABEL_126;
          v37 = (unsigned int)v20[v36 + 3];
          if ( (_DWORD)v37 != 0 )
            v28 = v8 + 8 * v37;
          else
            v28 = v8 + 8LL * (unsigned int)v20[(int)v36 + 3];
          if ( v28 == v8 )
          {
            v89 = v34;
            v39 = *(unsigned int *)(v8 + 8 * v17 + 12);
            if ( (_DWORD)v39 != 0 )
            {
              v40 = v8 + 8 * v39;
              if ( *(int *)(v9 + 16) <= 0 )
                sub_277F280(a1: v23, a2: v19, a3: v28, a4: v18, a5: v40, a6: v32);
              v33 = 0;
              v23 = v40;
              v34 = v7;
              v7 = 0;
            }
            else
            {
              if ( *(int *)(v9 + 16) <= 0 )
              {
                sub_277F280(
                  a1: v23,
                  a2: v19,
                  a3: v28,
                  a4: v18,
                  a5: v8 + 8LL * *(unsigned int *)(v8 + 8 * v17 + 12),
                  a6: v32);
                v33 = 0;
                v23 = v42;
              }
              else
              {
                v33 = 0;
                v23 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v17 + 12);
              }
              v34 = v7;
              v7 = 0;
            }
          }
          else
          {
            if ( *(int *)(v9 + 16) <= 0 )
            {
              v89 = v34;
              v7 = sub_277F280(a1: v23, a2: v19, a3: v28, a4: v18, a5: v34, a6: v32);
            }
            else
            {
              ++v7;
            }
            v33 = 0;
            v23 = v28;
          }
        }
        if ( v35 <= (unsigned int)v33 )
          goto LABEL_125;
        if ( *(_DWORD *)(v23 + 4 * v33 + 12) != 0 )
        {
          v89 = v34;
        }
        else
        {
          v89 = v34;
          v28 = 4 * (int)v33;
          v41 = __sync_val_compare_and_swap((volatile signed __int32 *)(v23 + v28 + 12), 0, v32) == 0;
          v34 = *(unsigned int *)v23;
          if ( (v34 & 2) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v34 = v23 - *(_QWORD *)(v23 - 8);
              v18 = v23;
              v28 = (v28 + 12) >> 9;
              if ( *(_BYTE *)(v34 + v28 + 48) != 0 )
                *(_BYTE *)(v34 + v28 + 48) = 0;
            }
            else
            {
              v28 = v23 & 0xFFFFFFFFFFF80000LL;
              v34 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
              v18 = (v23 - v34) >> 9;
              if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + v18 + 0x38) != 0 )
                *(_BYTE *)(v28 + v18 + 56) = 0;
            }
          }
          if ( v41 )
          {
            v68 = v89;
            goto LABEL_114;
          }
        }
        v38 = v33 + 1;
        if ( v7 != (_DWORD)v19 )
          break;
        if ( v30 == v38 )
        {
          v43 = v89;
          a3 = v82;
          v44 = *(_QWORD *)(v82 + 16) - v98;
          v93 = v44 + 1024;
          if ( v44 != -1024 )
            JUMPOUT(0x303D44998LL);
          v10 = 4294967285LL;
          if ( v89 == -11 )
            goto LABEL_133;
          v87 = 64;
          v45 = v92;
          v46 = v89 + 1;
          if ( v92 <= (unsigned int)v46 )
            goto LABEL_137;
          v78 = v23;
          v47 = (unsigned int)v20[v46 + 3];
          v48 = 4 * (int)v46;
          if ( (_DWORD)v47 != 0 )
            v49 = v8 + 8 * v47;
          else
            v49 = v8 + 8LL * (unsigned int)v20[(unsigned __int64)v48 / 4 + 3];
          if ( v49 == v8 )
          {
            v94 = -1024;
            v86 = 4 * (int)v46;
            v53 = (unsigned int)v46;
            v92 = 1024 << (v89 + 1);
            v85 = v89 + 1;
            v90 = v7;
            v91 = v30;
            if ( v89 == -12 )
            {
              v84 = v93 & (v97 >> v87);
              v54 = sub_4F9CAA0(a1: v48, a2: 4294967285LL, a3: v84 ^ v93) + 1;
            }
            else
            {
              v54 = 1024 << (v89 + 1);
            }
            if ( (v54 & 0x80000000) != 0 )
              goto LABEL_138;
            v55 = *(_QWORD *)(v9 + 40);
            v56 = (4LL * v54 + 19) & 0x7FFFFFFF8LL;
            if ( v56 >= 0x20000 || v55 + v56 > *(_QWORD *)(v9 + 32) )
            {
              v87 = v54;
              v55 = sub_1EAA840(a1: v48, a2: v10, a3: 34084944, a4: v54, a5: v54);
              v54 = v87;
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v55 + v56;
              *(_QWORD *)v55 = 34084944;
              *(_DWORD *)(v55 + 8) = v54;
              *(_DWORD *)(v55 + 12) = 0;
              if ( v56 - 16 >= 0x800 )
              {
                v87 = v54;
                memset((void *)(v55 + 16), 0, v56 - 16);
                v54 = v87;
              }
              else
              {
                for ( i = 16; v56 > i; i += 8LL )
                  *(_QWORD *)(v55 + i) = 0;
              }
            }
            v10 = v79;
            *(_DWORD *)(v55 + 12) = v79;
            if ( (*(_DWORD *)v55 & 2) != 0 )
            {
              if ( (*(_DWORD *)v55 & 1) != 0 )
              {
                v65 = v55 - *(_QWORD *)(v55 - 8);
                if ( *(_BYTE *)(v65 + 48) != 0 )
                  *(_BYTE *)(v65 + 48) = 0;
              }
              else
              {
                v62 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v62) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v62) >> 9) + 0x38) = 0;
              }
            }
            v58 = v86;
            v59 = (unsigned __int64)v80;
            v60 = v54;
            v61 = __sync_val_compare_and_swap(&v80[v86 / 4 + 3], 0, (unsigned __int64)(v55 - v8) >> 3) == 0;
            if ( (*(_DWORD *)v59 & 2) != 0 )
            {
              if ( (*(_DWORD *)v59 & 1) != 0 )
              {
                v66 = (char *)(v59 - *(_QWORD *)(v59 - 8));
                v58 = (v58 + 12) >> 9;
                if ( v66[v58 + 48] != 0 )
                  v66[v58 + 48] = 0;
              }
              else
              {
                v58 = (v59 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v58) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v58) >> 9) + 0x38) = 0;
              }
            }
            if ( v61 )
            {
              v87 = v60;
              *(_QWORD *)(v82 + 32) = (int)(v92 + 1) - 1024LL;
              __faststorefence();
              if ( *(int *)(v9 + 16) <= 0 )
                sub_277F280(a1: v58, a2: v10, a3: v55, a4: v60, a5: v61, a6: v32);
              return v98 + (int)v92 - 1024;
            }
            if ( *(int *)(v9 + 16) <= 0 )
            {
              v87 = v60;
              sub_277F280(a1: v58, a2: v10, a3: v55, a4: v60, a5: v61, a6: v32);
            }
            v11 = v97;
            a3 = v82;
          }
          else if ( *(int *)(v9 + 16) <= 0 )
          {
            v85 = v89 + 1;
            v94 = -1024;
            v90 = v7;
            v91 = v30;
            sub_277F280(a1: v48, a2: 4294967285LL, a3: v82, a4: -1024, a5: v89, a6: v32);
            v11 = v97;
            a3 = v82;
          }
          else
          {
            v11 = v97;
          }
          goto LABEL_4;
        }
        if ( *(int *)(v9 + 16) <= 0 )
        {
LABEL_52:
          v33 = (unsigned int)sub_277F280(a1: v23, a2: v19, a3: v28, a4: v18, a5: v34, a6: v32);
          v34 = v89;
          v18 = v92;
        }
        else
        {
          v33 = v38;
          v34 = v89;
          v18 = v92;
        }
      }
      if ( *(int *)(v9 + 16) <= 0 )
        goto LABEL_52;
      v33 = v38;
      v34 = v89;
      v18 = v92;
    }
  }
  v32 = v79;
  v50 = 4 * (int)v14;
  v30 = v14;
  v51 = __sync_val_compare_and_swap((volatile signed __int32 *)(v23 + v50 + 12), 0, v79) == 0;
  if ( (*(_DWORD *)v23 & 2) != 0 )
  {
    if ( (*(_DWORD *)v23 & 1) != 0 )
    {
      v63 = v23 - *(_QWORD *)(v23 - 8);
      v64 = (unsigned __int64)(v50 + 12) >> 9;
      if ( *(_BYTE *)(v63 + v64 + 48) != 0 )
        *(_BYTE *)(v63 + v64 + 48) = 0;
    }
    else if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - ((v23 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
    {
      *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - ((v23 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
    }
  }
  if ( !v51 )
  {
    v28 = 0xFFFFFFFFLL;
    v31 = v19;
    goto LABEL_16;
  }
  v68 = 0xFFFFFFFFLL;
  LODWORD(v33) = v30;
  LOBYTE(v7) = v19;
LABEL_114:
  v91 = v30;
  if ( (unsigned int)(v33 + 1) < *(_DWORD *)(v23 + 8) )
    v69 = (unsigned int)(v33 + 1);
  else
    v69 = (unsigned int)v33;
  v70 = 1024 << v7;
  v71 = (int)v69 + (1024 << v7) - 1024LL;
  *(_QWORD *)(v82 + 32) = v71;
  __faststorefence();
  if ( *(int *)(v9 + 16) <= 0 )
    v70 = sub_277F280(a1: v23, a2: v19, a3: v69, a4: v71, a5: v68);
  return v98 + (int)v33 + v70 - 1024;
}
