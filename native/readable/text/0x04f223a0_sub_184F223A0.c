// sub_4F223A0
// rva 0x04f223a0  size 2642  section .text  group text
// window base 0x184f223a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F223A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  char *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  char *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 result; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned __int64 i; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // [rsp+0h] [rbp-68h] BYREF
  char *v66; // [rsp+8h] [rbp-60h]
  char *v67; // [rsp+10h] [rbp-58h]
  __int64 v68; // [rsp+18h] [rbp-50h]
  __int64 v69; // [rsp+20h] [rbp-48h]
  __int64 v70; // [rsp+28h] [rbp-40h]
  char *v71; // [rsp+30h] [rbp-38h]
  unsigned __int64 v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+40h] [rbp-28h]
  int v74; // [rsp+44h] [rbp-24h]
  unsigned int v75; // [rsp+48h] [rbp-20h]
  int v76; // [rsp+4Ch] [rbp-1Ch]
  __int64 v77; // [rsp+50h] [rbp-18h]
  unsigned int v78; // [rsp+5Ch] [rbp-Ch]
  __int64 v79; // [rsp+60h] [rbp-8h]

  v72 = a3;
  v71 = a5;
  v70 = a6;
  v78 = a1;
  if ( (unsigned __int64)&v65 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
LABEL_66:
    v21 = sub_2771080();
    goto LABEL_67;
  }
  v11 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v10 + 32) )
  {
    v11 = sub_1EAA920(a1, a2, a3: 34085496);
    a1 = v78;
    a6 = v70;
    a5 = v71;
    a3 = v72;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v11 + 16;
    *(_DWORD *)v11 = 34085496;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
  }
  *(_DWORD *)(a3 + 12) = (unsigned __int64)(v11 - (_QWORD)v9) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v37 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v37) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v37) >> 9) + 0x38) = 0;
  }
  v12 = *(_QWORD *)(v10 + 40);
  v13 = v12 + 24;
  LODWORD(v7) = 34082368;
  v77 = 34082368;
  if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v10 + 32) )
  {
    v12 = sub_1EAA840(a1, a2, a3: v77, a4: v13, a5: 8);
    LODWORD(v7) = v77;
    a1 = v78;
    a6 = v70;
    a5 = v71;
    a3 = v72;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v13;
    *(_QWORD *)v12 = 34082368;
    *(_DWORD *)(v12 + 8) = 8;
    *(_DWORD *)(v12 + 12) = 0;
    *(_QWORD *)(v12 + 16) = 0;
  }
  *(_DWORD *)(a3 + 16) = (unsigned __int64)(v12 - (_QWORD)v9) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v13 = a3 & 0xFFFFFFFFFFF80000LL;
    v38 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v38) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v38) >> 9) + 0x38) = 0;
  }
  if ( a5 == v9 )
  {
    v69 = (__int64)v9;
  }
  else
  {
    v69 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v8 + *(_QWORD *)&v9[8 * (*(_DWORD *)a5 >> 3) + 256]))(
            a1,
            a2,
            a3: a5);
    a6 = v70;
  }
  if ( (char *)a6 == v9 )
    goto LABEL_66;
  if ( v9 + 352316984 == (char *)a6 )
  {
    LODWORD(v7) = 0;
    v20 = 0;
    v21 = 1;
  }
  else
  {
    if ( *(_BYTE *)(a6 + 12) == 0 )
    {
      v14 = *(unsigned int *)(a6 + 4);
      if ( (_DWORD)v14 == 0 )
      {
        sub_2771080();
        goto LABEL_90;
      }
      if ( *(_DWORD *)&v9[8 * v14 + 8] == 1
        && (unsigned int)sub_282F960(a1: 12, a2: 1, a3: v9 + 377133136, a4: v13, a5: 12, a6: &v9[8 * v14]) != 0 )
      {
        LODWORD(v7) = 0;
        v20 = 0;
        v21 = 1;
        goto LABEL_28;
      }
    }
    if ( (unsigned int)sub_4FFC820(a1, a2, a3: v70, a4: v13, a5: v9 + 352161344, a6: 0) == 0 )
    {
      LODWORD(v7) = 0;
      v20 = 0;
      v21 = -1;
      goto LABEL_28;
    }
    v15 = *(unsigned int *)(v70 + 4);
    if ( (_DWORD)v15 == 0 )
    {
      sub_2771080();
LABEL_92:
      v57 = (v60 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v57) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v57) >> 9) + 0x38) = 0;
      for ( i = v60; ; i = (unsigned __int64)v66 )
      {
LABEL_80:
        v21 = sub_2769900(a1: v58, a2: v59, a3: i, a4: v57, a5: &a7);
LABEL_81:
        v75 = v21;
        v76 = v7;
        v74 = v20;
        v62 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v62 + 48) > *(_QWORD *)(v10 + 32) )
        {
          v62 = sub_1EAA920(a1: v22, a2, a3: 34101256);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v62 + 48;
          *(_DWORD *)v62 = 34101256;
          *(_DWORD *)(v62 + 4) = 0;
          *(_QWORD *)(v62 + 8) = 0;
          *(_QWORD *)(v62 + 16) = 0;
          *(_QWORD *)(v62 + 24) = 0;
          *(_QWORD *)(v62 + 32) = 0;
          *(_QWORD *)(v62 + 40) = 0;
        }
        *(_DWORD *)(v62 + 20) = 46923644;
        *(_DWORD *)(v62 + 16) = *((_DWORD *)v9 + 93585974);
        *(_DWORD *)(v62 + 12) = (unsigned __int64)(v62 - (_QWORD)v9) >> 3;
        v66 = (char *)v62;
        sub_503B9A0(a1: v22, a2, a3: v62, a4: v20, a5: 0);
      }
    }
    v16 = *(_DWORD *)&v9[8 * v15 + 8];
    v17 = *(char *)(v70 + 12);
    v18 = v17;
    if ( v16 >> *(_BYTE *)(v70 + 12) < 3 )
    {
      LODWORD(v7) = 0;
      v20 = 1;
      v21 = 2;
      goto LABEL_28;
    }
    if ( v9 + 352160528 == (char *)v70 )
    {
      LODWORD(v7) = 1;
      v20 = 1;
      v21 = 6;
    }
    else
    {
      v19 = &v9[8 * v15];
      if ( *(_BYTE *)(v70 + 12) != 0 )
      {
        v68 = (__int64)v19;
        v76 = v17;
        v75 = v16;
      }
      else if ( v16 == 3 )
      {
        v76 = *(char *)(v70 + 12);
        v75 = 3;
        v68 = (__int64)v19;
        if ( (unsigned int)sub_282F960(a1: 12, a2: 3, a3: v9 + 377133152, a4: v68, a5: 12, a6: v68) != 0 )
        {
          LODWORD(v7) = 1;
          v20 = 1;
          v21 = 6;
          goto LABEL_28;
        }
      }
      else
      {
        v68 = (__int64)v19;
        v76 = 0;
        v75 = v16;
      }
      if ( v9 + 352160808 == (char *)v70 )
      {
        LODWORD(v7) = 1;
        v20 = 1;
        v21 = 10;
      }
      else if ( v76 != 0 )
      {
        LODWORD(v7) = 0;
        v20 = 1;
        v21 = -1;
      }
      else if ( v75 == 3 )
      {
        if ( (unsigned int)sub_282F960(a1: 12, a2: 3, a3: v9 + 377133168, a4: v18, a5: 12, a6: v68) != 0 )
        {
          LODWORD(v7) = 1;
          v20 = 1;
          v21 = 10;
        }
        else
        {
          LODWORD(v7) = 0;
          v20 = 1;
          v21 = -1;
        }
      }
      else
      {
        LODWORD(v7) = 0;
        v20 = 1;
        v21 = -1;
      }
    }
  }
LABEL_28:
  v22 = v78;
  v23 = v72;
  *(_BYTE *)(v72 + 24) = v20;
  *(_BYTE *)(v23 + 25) = v7;
  if ( (_DWORD)v22 != 0 )
    v21 |= 0x10u;
  if ( v21 < 0 )
  {
LABEL_67:
    v75 = v21;
    v76 = v7;
    v74 = v20;
    v41 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v41 + 24) > *(_QWORD *)(v10 + 32) )
    {
      v41 = sub_1EAA920(a1: v22, a2, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v41 + 24;
      *(_DWORD *)v41 = 34085680;
      *(_DWORD *)(v41 + 4) = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 16) = 0;
    }
    v68 = v41;
    v42 = *(_QWORD *)(v10 + 40);
    v7 = v77;
    if ( (unsigned __int64)(v42 + 32) > *(_QWORD *)(v10 + 32) )
    {
      v42 = sub_1EAA840(a1: v22, a2, a3: v77, a4: v20, a5: 16);
      v41 = v68;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v42 + 32;
      *(_QWORD *)v42 = v7;
      *(_DWORD *)(v42 + 8) = 16;
      *(_DWORD *)(v42 + 12) = 0;
      *(_QWORD *)(v42 + 16) = 0;
      *(_QWORD *)(v42 + 24) = 0;
    }
    *(_DWORD *)(v41 + 4) = (unsigned __int64)(v42 - (_QWORD)v9) >> 3;
    if ( (*(_DWORD *)v41 & 2) != 0 )
    {
      v20 = (v41 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v20) >> 9) + 0x38) = 0;
    }
    sub_4F36F80(a1: v22, a2, a3: v41, a4: v20, a5: v9 + 369922192);
    sub_4F36F80(a1: v44, a2: v45, a3: v68, a4: v43, a5: v70);
    v49 = sub_4F36F80(a1: v47, a2: v48, a3: v68, a4: v46, a5: v9 + 372877880);
    v53 = v68;
    if ( *(_DWORD *)(v68 + 8) != 0 )
    {
      v54 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v66 = (char *)v49;
        v54 = sub_1EAA920(a1: v51, a2: v52, a3: 34082680);
        v55 = v68;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v54 + 24;
        *(_DWORD *)v54 = 34082680;
        *(_DWORD *)(v54 + 4) = 0;
        *(_QWORD *)(v54 + 8) = 0;
        *(_QWORD *)(v54 + 16) = 0;
        v55 = v53;
      }
      v66 = (char *)v54;
      sub_4FE9280(a1: v51, a2: v52, a3: v54, a4: v50, a5: v55, a6: v9);
      v79 = v8;
      v67 = v66;
LABEL_76:
      v56 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v56 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v56 = sub_1EAA920(a1: v51, a2: v52, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v56 + 40;
        *(_DWORD *)v56 = 34081944;
        *(_DWORD *)(v56 + 4) = 0;
        *(_QWORD *)(v56 + 8) = 0;
        *(_QWORD *)(v56 + 16) = 0;
        *(_QWORD *)(v56 + 24) = 0;
        *(_QWORD *)(v56 + 32) = 0;
      }
      *(_DWORD *)(v56 + 20) = 46923644;
      *(_DWORD *)(v56 + 16) = *((_DWORD *)v9 + 93585974);
      *(_DWORD *)(v56 + 12) = (unsigned __int64)(v56 - (_QWORD)v9) >> 3;
      v66 = (char *)v56;
      sub_503B9A0(a1: v51, a2: v52, a3: v56, a4: v50, a5: 0);
      v60 = (unsigned __int64)v66;
      *((_DWORD *)v66 + 2) = (unsigned __int64)(v67 - v9) >> 3;
      if ( (*(_DWORD *)v60 & 2) == 0 )
      {
        i = v60;
        goto LABEL_80;
      }
      goto LABEL_92;
    }
LABEL_90:
    v67 = v9 + 373281248;
    goto LABEL_76;
  }
  if ( (char *)v69 == v9 )
    goto LABEL_81;
  if ( v71 == v9 )
  {
    v75 = v21;
    v76 = v7;
    v74 = v20;
    sub_2771080();
LABEL_85:
    v63 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v63 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v63 = sub_1EAA920(a1: v25, a2: v26, a3: 34082480);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v63 + 40;
      *(_DWORD *)v63 = 34082480;
      *(_DWORD *)(v63 + 4) = 0;
      *(_QWORD *)(v63 + 8) = 0;
      *(_QWORD *)(v63 + 16) = 0;
      *(_QWORD *)(v63 + 24) = 0;
      *(_QWORD *)(v63 + 32) = 0;
    }
    *(_DWORD *)(v63 + 20) = 46923644;
    *(_DWORD *)(v63 + 16) = *((_DWORD *)v9 + 93585974);
    *(_DWORD *)(v63 + 12) = (unsigned __int64)(v63 - (_QWORD)v9) >> 3;
    v66 = (char *)v63;
    sub_503B9A0(a1: v25, a2: v26, a3: v63, a4: v24, a5: 0);
    v64 = (unsigned __int64)v66;
    *((_DWORD *)v66 + 2) = 46228168;
    if ( (*(_DWORD *)v64 & 2) != 0 )
    {
      v57 = (v64 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v64 & 0xFFFFFFFFFFF80000LL) + ((v64 - v57) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v64 & 0xFFFFFFFFFFF80000LL) + ((v64 - v57) >> 9) + 0x38) = 0;
      i = v64;
    }
    else
    {
      i = v64;
    }
    goto LABEL_80;
  }
  v75 = v21;
  v76 = v7;
  v74 = v20;
  v73 = sub_4EC46E0(a1: v22, a2, a3: v71);
  if ( v73 != 0 )
    goto LABEL_85;
  v27 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v27 + 40) > *(_QWORD *)(v10 + 32) )
  {
    v27 = sub_1EAA920(a1: v25, a2: v26, a3: 38990032);
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v27 + 40;
    *(_DWORD *)v27 = 38990032;
    *(_DWORD *)(v27 + 4) = 0;
    *(_QWORD *)(v27 + 8) = 0;
    *(_QWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 24) = 0;
    *(_QWORD *)(v27 + 32) = 0;
  }
  v28 = v72;
  *(_DWORD *)(v27 + 24) = -1;
  *(_QWORD *)(v27 + 16) = -1;
  *(_DWORD *)(v28 + 4) = (unsigned __int64)(v27 - (_QWORD)v9) >> 3;
  if ( (*(_DWORD *)v28 & 2) != 0 )
  {
    v24 = v28 & 0xFFFFFFFFFFF80000LL;
    v40 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v40) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v40) >> 9) + 0x38) = 0;
  }
  sub_4EC7AE0(a1: v25, a2: v26, a3: v27, a4: v24, a5: v28);
  v32 = v69;
  v33 = v72;
  *(_DWORD *)(v72 + 8) = (unsigned __int64)(v69 - (_QWORD)v9) >> 3;
  if ( (*(_DWORD *)v33 & 2) != 0 )
  {
    v39 = (v33 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v39) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v39) >> 9) + 0x38) = 0;
  }
  sub_4F23CE0(a1: v30, a2: v31, a3: v33, a4: v29, a5: v32, a6: v75);
  result = sub_4EC7800(a1: v34, a2: v35, a3: &v9[8 * *(unsigned int *)(v72 + 4)]);
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
