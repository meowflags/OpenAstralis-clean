// sub_185058700
// rva 0x05058700  size 1479  section .text  group text
// window base 0x185058700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_185058700(__int64 a1, __int64 a2, char *a3, __int64 a4, char *a5, char *a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  char *v27; // r9
  double v28; // xmm0_8
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // r10
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64, __int64, char *, _QWORD, __int64); // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+10h] [rbp-38h]
  __int64 v56; // [rsp+18h] [rbp-30h]
  __int64 v57; // [rsp+20h] [rbp-28h]
  __int64 v58; // [rsp+28h] [rbp-20h]
  char *v59; // [rsp+30h] [rbp-18h]
  char *v60; // [rsp+38h] [rbp-10h]
  char *v61; // [rsp+40h] [rbp-8h]

  v61 = a3;
  v60 = a5;
  v59 = a6;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)a3 >> 3) + 20]
                                           + 12
                                           + 4
                                           * (*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44]
                                            & (0x1E9Du >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44])))] == 7837 )
  {
    v10 = *(_DWORD *)a3 >> 3;
    v11 = *(_DWORD *)&v8[8 * v10 + 44] & (0x1E9Du >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44]));
    v12 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v7
                                                                    + *(_QWORD *)&v8[8 * v10
                                                                                   + 1536
                                                                                   + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v10 + 20] + 12 + 4 * v11])]))(
            a1,
            a2: v11,
            a3,
            a4: a3);
    v58 = v12;
    v15 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v15 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v15 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 43313720);
      v12 = v58;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v15 + 48;
      *(_DWORD *)v15 = 43313720;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0;
    }
    v57 = v15;
    MEMORY[0x185F35FC0](a1: v13, a2: v14, a3: v15, a4: v15, a5: v61, a6: v12);
    MEMORY[0x185F36720](a1: v16, a2: v17, a3: v57);
    if ( v60 == v8 )
      goto LABEL_31;
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v60 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)v60 >> 3) + 44]
                                         & (0x636u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v60 >> 3) + 44])))] != 1590 )
    {
LABEL_32:
      MEMORY[0x182770780]();
LABEL_33:
      v49 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v49 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v49 = MEMORY[0x181EAA920](a1: v24, a2: v25, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v49 + 40;
        *(_DWORD *)v49 = 34081944;
        *(_DWORD *)(v49 + 4) = 0;
        *(_QWORD *)(v49 + 8) = 0;
        *(_QWORD *)(v49 + 16) = 0;
        *(_QWORD *)(v49 + 24) = 0;
        *(_QWORD *)(v49 + 32) = 0;
      }
      *(_DWORD *)(v49 + 20) = 46923644;
      *(_DWORD *)(v49 + 16) = *((_DWORD *)v8 + 93585974);
      *(_DWORD *)(v49 + 12) = (unsigned __int64)(v49 - (_QWORD)v8) >> 3;
      v56 = v49;
      sub_18503B9A0(a1: v24, a2: v25, a3: (unsigned int *)v49, a4: v23, a5: 0);
      v53 = v56;
      *(_DWORD *)(v56 + 8) = 45841611;
      if ( (*(_DWORD *)v53 & 2) != 0 )
        goto LABEL_39;
      goto LABEL_36;
    }
    v19 = *(_DWORD *)v60 >> 3;
    v20 = *(_DWORD *)&v8[8 * v19 + 44] & (0x636u >> HIBYTE(*(_DWORD *)&v8[8 * v19 + 44]));
    ((void (__fastcall *)(__int64, __int64, char *, __int64, __int64))(v7
                                                                     + *(_QWORD *)&v8[8 * v19
                                                                                    + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v19 + 20] + 12 + 4 * v20])]))(
      a1: v18,
      a2: v20,
      a3: v60,
      a4: v57,
      a5: v57);
    MEMORY[0x185F36440](a1: v21, a2: v22, a3: v57);
    v26 = v57;
    if ( *(_BYTE *)(v57 + 33) == 0 )
      goto LABEL_33;
    v27 = v59;
    *(_QWORD *)&v28 = MEMORY[0xE9691FC];
    if ( v59 == v8 )
      goto LABEL_37;
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v59 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)v59 >> 3) + 44]
                                         & (0x636u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v59 >> 3) + 44])))] != 1590 )
    {
      while ( 1 )
      {
        v53 = MEMORY[0x182770780](a1: v28);
LABEL_39:
        v50 = (v53 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v50) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v53 & 0xFFFFFFFFFFF80000LL) + ((v53 - v50) >> 9) + 0x38) = 0;
LABEL_36:
        MEMORY[0x182769900](a1: v51, a2: v52, a3: v53, a4: v50, a5: &a7);
LABEL_37:
        MEMORY[0x182771080](a1: v28);
      }
    }
    v29 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v29 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v29 = MEMORY[0x181EAA920](a1: v24, a2: v25, a3: 43315664, a4: MEMORY[0xE9691FC]);
      *(_QWORD *)&v28 = MEMORY[0xE9691FC];
      v26 = v57;
      v30 = v58;
      v27 = v59;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v29 + 32;
      *(_DWORD *)v29 = 43315664;
      *(_DWORD *)(v29 + 4) = 0;
      *(_QWORD *)(v29 + 8) = 0;
      *(_QWORD *)(v29 + 16) = 0;
      *(_QWORD *)(v29 + 24) = 0;
      v30 = v58;
    }
    v31 = v61;
    *(_DWORD *)(v29 + 12) = (unsigned __int64)(v30 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v29 + 8) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v29 + 4) = (unsigned __int64)(v31 - v8) >> 3;
    v32 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v32 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v56 = v29;
      v32 = MEMORY[0x181EAA920](a1: v24, a2: v25, a3: 34172224, a4: v28);
      v29 = v56;
      *(_QWORD *)&v28 = MEMORY[0xE9691FC];
      v27 = v59;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v32 + 16;
      *(_DWORD *)v32 = 34172224;
      *(_DWORD *)(v32 + 4) = 0;
      *(_QWORD *)(v32 + 8) = 0;
    }
    v33 = *(_QWORD *)(v9 + 40);
    v34 = v33 + 48;
    if ( (unsigned __int64)(v33 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v55 = v32;
      v56 = v29;
      v33 = MEMORY[0x181EAA920](a1: v24, a2: v34, a3: 34162832, a4: v28);
      v32 = v55;
      v29 = v56;
      LODWORD(v28) = MEMORY[0xE9691FC];
      v27 = v59;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v34;
      *(_DWORD *)v33 = 34162832;
      *(_DWORD *)(v33 + 4) = 0;
      *(_QWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = 0;
      *(_QWORD *)(v33 + 24) = 0;
      *(_QWORD *)(v33 + 32) = 0;
      *(_QWORD *)(v33 + 40) = 0;
    }
    *(_DWORD *)(v33 + 20) = LODWORD(v28);
    *(_DWORD *)(v29 + 16) = (unsigned __int64)(v32 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v29 & 2) != 0 )
    {
      v46 = (v29 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v46) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v46) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v32 + 4) = (unsigned __int64)(v33 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v32 & 2) != 0 )
    {
      v47 = v32 & 0xFFFFFFFFFFF80000LL;
      v48 = (v32 - ((v32 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v47 + v48 + 56) != 0 )
        *(_BYTE *)(v47 + v48 + 56) = 0;
    }
    v35 = *(_DWORD *)v27 >> 3;
    v36 = *(unsigned int *)&v8[8 * v35 + 44];
    v37 = v29;
    v38 = (unsigned int)v36 & (0x636u >> HIBYTE(*(_DWORD *)&v8[8 * v35 + 44]));
    v39 = (void (__fastcall *)(__int64, __int64, char *, _QWORD, __int64))(v7
                                                                         + *(_QWORD *)&v8[8 * v35
                                                                                        + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v35 + 20] + 12 + 4 * v38])]);
    v56 = v37;
    v39(a1: v38, a2: v36, a3: v27, a4: v39, a5: v37);
    MEMORY[0x185F49D60](a1: v40, a2: v41, a3: v56);
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v43, a2: v44, a3: v42, a4: v56);
    return v61;
  }
  MEMORY[0x182770780]();
LABEL_31:
  MEMORY[0x182771080]();
  goto LABEL_32;
}
