// sub_185041E80
// rva 0x05041e80  size 2374  section .text  group text
// window base 0x185041e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185041E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 i; // r8
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  char *v41; // r8
  unsigned __int64 v42; // rbx
  __int64 v43; // r8
  unsigned int v44; // r9d
  int v45; // eax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // rcx
  __int64 result; // rax
  unsigned __int64 v54; // rbx
  char *v55; // rcx
  char *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  unsigned __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rsi
  unsigned __int64 v78; // rcx
  unsigned int v79; // edx
  char v80; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v81; // [rsp+10h] [rbp-68h]
  __int64 k; // [rsp+18h] [rbp-60h]
  __int64 v83; // [rsp+20h] [rbp-58h]
  __int64 v84; // [rsp+28h] [rbp-50h]
  __int64 v85; // [rsp+30h] [rbp-48h]
  int v86; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v87; // [rsp+40h] [rbp-38h]
  unsigned int v88; // [rsp+44h] [rbp-34h]
  unsigned int j; // [rsp+48h] [rbp-30h]
  int v90; // [rsp+4Ch] [rbp-2Ch]
  __int64 v91; // [rsp+50h] [rbp-28h]
  unsigned int v92; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v93; // [rsp+60h] [rbp-18h]
  unsigned int v94; // [rsp+64h] [rbp-14h]
  __int64 v95; // [rsp+68h] [rbp-10h]
  __int64 v96; // [rsp+70h] [rbp-8h]

  v85 = a3;
  if ( (unsigned __int64)&v80 <= *(_QWORD *)(v10 + 8) )
    goto LABEL_86;
  if ( a3 == v9 )
    goto LABEL_87;
  v11 = MEMORY[0x184FF40A0](a1, a2, a3, a4, a5: 46, a6: 0) + 1;
  if ( v11 < 1 )
  {
    v94 = v11;
    v16 = 1;
    goto LABEL_9;
  }
  LODWORD(v7) = v11;
  v93 = 1;
  v15 = v85;
  while ( 1 )
  {
    while ( 1 )
    {
      v92 = v7;
      v12 = (unsigned int)MEMORY[0x184FF40A0](a1: v13, a2: v14, a3: v15, a4: v12, a5: 46, a6: (unsigned int)v7) + 1;
      v16 = v93 + 1;
      if ( (int)v12 < 1 )
        break;
      if ( *(int *)(v10 + 16) <= 0 )
        goto LABEL_103;
      LODWORD(v7) = v12;
      ++v93;
      v15 = v85;
    }
    v94 = v12;
LABEL_9:
    v93 = v16;
    if ( (int)v16 < 0 )
      goto LABEL_88;
    v17 = *(_QWORD *)(v10 + 40);
    v18 = (4LL * (unsigned int)v16 + 19) & 0x7FFFFFFF8LL;
    if ( v18 >= 0x20000 || (v14 = v17 + v18, v17 + v18 > *(_QWORD *)(v10 + 32)) )
    {
      v84 = MEMORY[0x181EAA840](a1: v13, a2: v14, a3: 34089712, a4: v12, a5: (unsigned int)v16);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v14;
      *(_QWORD *)v17 = 34089712;
      *(_DWORD *)(v17 + 8) = v16;
      *(_DWORD *)(v17 + 12) = 0;
      v19 = v18 - 16;
      if ( v18 - 16 >= 0x800 )
      {
        memset((void *)(v17 + 16), 0, v19);
        v13 = v17 + v18;
        v19 = 0;
      }
      else
      {
        for ( i = 16; v18 > i; i += 8LL )
          *(_QWORD *)(v17 + i) = 0;
      }
      v84 = v17;
    }
    v21 = MEMORY[0x184FF3F80](a1: v13, a2: v14, a3: v85, a4: v19, a5: 46);
    v91 = 34086464;
    if ( v21 < 0 )
      break;
    v90 = v21;
    v25 = sub_185041AE0(a1: v23, a2: v24, a3: v85, a4: v22, a5: 0, a6: v21, a7: v80);
    if ( v93 == 0 )
    {
      MEMORY[0x182771220](a1: v27, a2: v28, a3: 0, a4: v26, a5: 0);
      goto LABEL_94;
    }
    v29 = v25 + 128;
    if ( (unsigned int)v29 >= 0x100 )
    {
      v30 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v30 + 16) > *(_QWORD *)(v10 + 32) )
      {
        j = v25;
        v30 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: v91);
        v25 = j;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v30 + 16;
        *(_DWORD *)v30 = 34086464;
        *(_DWORD *)(v30 + 4) = 0;
        *(_QWORD *)(v30 + 8) = 0;
      }
      *(_DWORD *)(v30 + 4) = v25;
    }
    else
    {
      v30 = v9 + 8LL * *(unsigned int *)(v9 + 4 * v29 + 376353204);
    }
    v31 = v84;
    *(_DWORD *)(v84 + 12) = (unsigned __int64)(v30 - v9) >> 3;
    if ( (*(_DWORD *)v31 & 2) != 0 )
    {
      if ( (*(_DWORD *)v31 & 1) != 0 )
      {
        v56 = (char *)(v31 - *(_QWORD *)(v31 - 8));
        if ( v56[48] != 0 )
          v56[48] = 0;
      }
      else
      {
        v54 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v54) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v54) >> 9) + 0x38) = 0;
      }
    }
    j = v90 + 1;
    v32 = MEMORY[0x184FF40A0](
            a1: v27,
            a2: v28,
            a3: v85,
            a4: (unsigned int)(v90 + 1),
            a5: 46,
            a6: (unsigned int)(v90 + 1));
    LODWORD(v7) = j;
    for ( j = 1; ; ++j )
    {
      if ( v32 < 0 )
      {
        v94 = v32;
        v96 = v8;
        v92 = j;
        goto LABEL_41;
      }
      v90 = v7;
      v88 = v32;
      v34 = sub_185041AE0(a1: v23, a2: v24, a3: v85, a4: v33, a5: v7, a6: v32, a7: v80);
      if ( v93 <= j )
        break;
      v37 = v34 + 128;
      if ( (unsigned int)v37 >= 0x100 )
      {
        v38 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v38 + 16) > *(_QWORD *)(v10 + 32) )
        {
          v87 = v34;
          v38 = MEMORY[0x181EAA920](a1: v35, a2: v36, a3: v91);
          v34 = v87;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v38 + 16;
          *(_DWORD *)v38 = 34086464;
          *(_DWORD *)(v38 + 4) = 0;
          *(_QWORD *)(v38 + 8) = 0;
        }
        *(_DWORD *)(v38 + 4) = v34;
      }
      else
      {
        v38 = v9 + 8LL * *(unsigned int *)(v9 + 4 * v37 + 376353204);
      }
      v39 = j;
      v40 = v84;
      *(_DWORD *)(v84 + 4LL * j + 12) = (unsigned __int64)(v38 - v9) >> 3;
      if ( (*(_DWORD *)v40 & 2) != 0 )
      {
        if ( (*(_DWORD *)v40 & 1) != 0 )
        {
          v41 = (char *)(v40 - *(_QWORD *)(v40 - 8));
          v42 = (unsigned __int64)(4 * v39 + 12) >> 9;
          if ( v41[v42 + 48] != 0 )
            v41[v42 + 48] = 0;
        }
        else if ( *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - ((v40 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
        {
          *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - ((v40 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
        }
      }
      v87 = v88 + 1;
      v32 = MEMORY[0x184FF40A0](a1: v35, a2: v36, a3: v85, a4: v39, a5: 46, a6: v88 + 1);
      v33 = j + 1;
      LODWORD(v7) = v87;
    }
    MEMORY[0x182771220](a1: v35, a2: v88, a3: j, a4: j, a5: v93);
LABEL_103:
    v7 = v85;
    MEMORY[0x18277F280](a1: v13, a2: v93, a3: v16);
    v93 = v79;
    v15 = v7;
    LODWORD(v7) = v12;
  }
  v94 = v21;
  v92 = 0;
  LODWORD(v7) = 0;
LABEL_41:
  v43 = *(unsigned int *)(v85 + 4);
  if ( (_DWORD)v43 == 0 )
    goto LABEL_89;
  v44 = *(_DWORD *)(v9 + 8 * v43 + 8) >> *(_BYTE *)(v85 + 12);
  v87 = v7;
  v45 = sub_185041AE0(a1: v23, a2: v24, a3: v85, a4: v85, a5: v7, a6: v44, a7: v80);
  if ( v93 <= v92 )
    goto LABEL_90;
  v49 = (unsigned int)(v45 + 128);
  if ( (unsigned int)v49 >= 0x100 )
  {
    v50 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v50 + 16) > *(_QWORD *)(v10 + 32) )
    {
      v86 = v45;
      v50 = MEMORY[0x181EAA920](a1: v47, a2: v48, a3: v91);
      v45 = v86;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v50 + 16;
      *(_DWORD *)v50 = 34086464;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
    }
    *(_DWORD *)(v50 + 4) = v45;
  }
  else
  {
    v50 = v9 + 8LL * *(unsigned int *)(v9 + 4 * v49 + 376353204);
  }
  v7 = v92;
  v51 = v84;
  *(_DWORD *)(v84 + 4LL * v92 + 12) = (unsigned __int64)(v50 - v9) >> 3;
  if ( (*(_DWORD *)v51 & 2) != 0 )
  {
    if ( (*(_DWORD *)v51 & 1) != 0 )
    {
      v55 = (char *)(v51 - *(_QWORD *)(v51 - 8));
      v48 = v51;
      v47 = (4 * v7 + 12) >> 9;
      if ( v55[v47 + 48] != 0 )
        v55[v47 + 48] = 0;
    }
    else
    {
      v47 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
      v48 = (v51 - v47) >> 9;
      if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + v48 + 0x38) != 0 )
        *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v47) >> 9) + 0x38) = 0;
    }
  }
  v52 = *(unsigned int *)(v51 + 12);
  if ( (_DWORD)v52 == 0 )
    goto LABEL_91;
  if ( *(_DWORD *)(v9 + 8 * v52 + 4) == 0 || v45 == 0 )
  {
    v57 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v57 + 24) > *(_QWORD *)(v10 + 32) )
    {
      v57 = MEMORY[0x181EAA920](a1: v47, a2: v48, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v57 + 24;
      *(_DWORD *)v57 = 34085680;
      *(_DWORD *)(v57 + 4) = 0;
      *(_QWORD *)(v57 + 8) = 0;
      *(_QWORD *)(v57 + 16) = 0;
    }
    v83 = v57;
    v58 = *(_QWORD *)(v10 + 40);
    v59 = 34082368;
    if ( (unsigned __int64)(v58 + 32) > *(_QWORD *)(v10 + 32) )
    {
      v58 = MEMORY[0x181EAA840](a1: v47, a2: v48, a3: 34082368, a4: 34082368, a5: 16);
      v57 = v83;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v58 + 32;
      *(_QWORD *)v58 = 34082368;
      *(_DWORD *)(v58 + 8) = 16;
      *(_DWORD *)(v58 + 12) = 0;
      *(_QWORD *)(v58 + 16) = 0;
      *(_QWORD *)(v58 + 24) = 0;
    }
    *(_DWORD *)(v57 + 4) = (unsigned __int64)(v58 - v9) >> 3;
    if ( (*(_DWORD *)v57 & 2) != 0 )
    {
      v59 = (v57 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v59) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v59) >> 9) + 0x38) = 0;
    }
    MEMORY[0x184F36F80](a1: v47, a2: v48, a3: v57, a4: v59, a5: v9 + 369187544);
    k = MEMORY[0x1857AAA40](a1: v60, a2: v61, a3: v84);
    MEMORY[0x184F36F80](a1: v63, a2: v64, a3: v83, a4: v62, a5: k);
    v68 = MEMORY[0x184F36F80](a1: v66, a2: v67, a3: v83, a4: v65, a5: v9 + 372674176);
    v72 = v83;
    if ( *(_DWORD *)(v83 + 8) == 0 )
      goto LABEL_92;
    v73 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v73 + 24) > *(_QWORD *)(v10 + 32) )
    {
      v81 = (_DWORD *)v68;
      v73 = MEMORY[0x181EAA920](a1: v70, a2: v71, a3: 34082680);
      v74 = v83;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v73 + 24;
      *(_DWORD *)v73 = 34082680;
      *(_DWORD *)(v73 + 4) = 0;
      *(_QWORD *)(v73 + 8) = 0;
      *(_QWORD *)(v73 + 16) = 0;
      v74 = v72;
    }
    v81 = (_DWORD *)v73;
    MEMORY[0x184FE9280](a1: v70, a2: v71, a3: v73, a4: v69, a5: v74, a6: v9);
    v95 = v8;
    for ( k = (__int64)v81; ; k = v9 + 373281248 )
    {
      v75 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v75 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v75 = MEMORY[0x181EAA920](a1: v70, a2: v71, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v75 + 40;
        *(_DWORD *)v75 = 34081944;
        *(_DWORD *)(v75 + 4) = 0;
        *(_QWORD *)(v75 + 8) = 0;
        *(_QWORD *)(v75 + 16) = 0;
        *(_QWORD *)(v75 + 24) = 0;
        *(_QWORD *)(v75 + 32) = 0;
      }
      *(_DWORD *)(v75 + 20) = 46923644;
      *(_DWORD *)(v75 + 16) = *(_DWORD *)(v9 + 374343896);
      *(_DWORD *)(v75 + 12) = (unsigned __int64)(v75 - v9) >> 3;
      v81 = (_DWORD *)v75;
      sub_18503B9A0(a1: v70, a2: v71, a3: (unsigned int *)v75, a4: v69, a5: 0);
      v78 = (unsigned __int64)v81;
      v81[2] = (unsigned __int64)(k - v9) >> 3;
      if ( (*(_DWORD *)v78 & 2) != 0 )
      {
LABEL_94:
        v7 = (v78 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v78 & 0xFFFFFFFFFFF80000LL) + ((v78 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v78 & 0xFFFFFFFFFFF80000LL) + ((v78 - v7) >> 9) + 0x38) = 0;
      }
      MEMORY[0x182769900](a1: v76, a2: v77, a3: v78, a4: v78, a5: &a7);
LABEL_86:
      MEMORY[0x181EB84E0]();
LABEL_87:
      MEMORY[0x182771080]();
LABEL_88:
      MEMORY[0x182770E80](a1: v13, a2: v14, a3: v16, a4: v12, a5: v94);
LABEL_89:
      v87 = v7;
      MEMORY[0x182771080]();
LABEL_90:
      MEMORY[0x182771220](a1: v47, a2: v48, a3: v92, a4: v46, a5: v93);
LABEL_91:
      MEMORY[0x182771080]();
LABEL_92:
      ;
    }
  }
  result = MEMORY[0x1858D0980](a1: v47, a2: v48, a3: v51);
  if ( *(int *)(v10 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
