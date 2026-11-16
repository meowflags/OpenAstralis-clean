// sub_504C0C0
// rva 0x0504c0c0  size 1285  section .text  group text
// window base 0x18504c0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504C0C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 (*v11)(void); // rax
  char *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  char *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  char *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // [rsp+0h] [rbp-48h] BYREF
  char *v50; // [rsp+10h] [rbp-38h]
  char *v51; // [rsp+18h] [rbp-30h]
  char *v52; // [rsp+20h] [rbp-28h]
  _DWORD *v53; // [rsp+28h] [rbp-20h]
  _DWORD *v54; // [rsp+30h] [rbp-18h]
  char *v55; // [rsp+38h] [rbp-10h]
  unsigned int v56; // [rsp+44h] [rbp-4h]

  v55 = a5;
  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v9 + 8) )
  {
    v54 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*a3 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*a3 >> 3) + 44]
                                         & (0x16B8u >> HIBYTE(*(_DWORD *)&v8[8 * (*a3 >> 3) + 44])))] != 5816 )
      goto LABEL_33;
    v10 = *a3 >> 3;
    v11 = (__int64 (*)(void))(v7
                            + *(_QWORD *)&v8[8 * v10
                                           + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v10 + 20]
                                                                 + 12
                                                                 + 4
                                                                 * (*(_DWORD *)&v8[8 * v10 + 44]
                                                                  & (0x16B8u >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44])))])]);
    v54 = a3;
    v12 = (char *)v11();
    if ( v12 == v8 )
      goto LABEL_34;
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v12 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)v12 >> 3) + 44]
                                         & (0x2331u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v12 >> 3) + 44])))] != 9009 )
      goto LABEL_35;
    v14 = *(_DWORD *)v12 >> 3;
    v15 = *(_DWORD *)&v8[8 * v14 + 44] & (0x2331u >> HIBYTE(*(_DWORD *)&v8[8 * v14 + 44]));
    v16 = (char *)((__int64 (__fastcall *)(__int64, __int64, char *))(v7
                                                                    + *(_QWORD *)&v8[8 * v14
                                                                                   + 128
                                                                                   + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v14 + 20] + 12 + 4 * v15])]))(
                    a1: v13,
                    a2: v15,
                    a3: v12);
    if ( v16 == v8 )
      goto LABEL_36;
    v53 = v16;
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v16 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)v16 >> 3) + 44]
                                         & (0x61Bu >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v16 >> 3) + 44])))] != 1563 )
      goto LABEL_37;
    v18 = *(_DWORD *)v16 >> 3;
    v19 = *(_DWORD *)&v8[8 * v18 + 44];
    v52 = &v8[8 * *(unsigned int *)&v8[8 * v18 + 20]];
    v56 = v19 & (0x61Bu >> SHIBYTE(v19));
    v20 = *(_DWORD *)&v52[4 * v56 + 12];
    v51 = &v8[8 * v18];
    if ( ((unsigned int (__fastcall *)(__int64, char *, char *))(v7 + *(_QWORD *)&v51[HIWORD(v20) + 8]))(
           a1: v17,
           a2: v52,
           a3: v16) == 0 )
    {
LABEL_9:
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return (__int64)(v8 + 376426880);
    }
    v24 = (char *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                      + *(_QWORD *)&v51[HIWORD(*(_DWORD *)&v52[4 * v56 + 12])
                                                                                      + 16]))(
                    a1: v21,
                    a2: v22,
                    a3: v53);
    if ( v24 != v8 )
    {
      v27 = (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v24 >> 3) + 20]
                                           + 12
                                           + 4
                                           * (*(_DWORD *)&v8[8 * (*(_DWORD *)v24 >> 3) + 44]
                                            & (0x16B7u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v24 >> 3) + 44])))];
      if ( (_DWORD)v27 != 5815 )
        goto LABEL_39;
    }
    if ( v24 == v8 )
      goto LABEL_38;
    v28 = *(_DWORD *)v24 >> 3;
    v29 = *(_DWORD *)&v8[8 * v28 + 44] & (0x16B7u >> HIBYTE(*(_DWORD *)&v8[8 * v28 + 44]));
    v30 = *(_QWORD *)&v8[8 * v28 + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v28 + 20] + 12 + 4 * v29])];
    v50 = v24;
    v31 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v7 + v30))(a1: v25, a2: v29, a3: v24);
    if ( (char *)v31 != v55 )
    {
      while ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                       + *(_QWORD *)&v51[HIWORD(*(_DWORD *)&v52[4 * v56 + 12])
                                                                                       + 8]))(
                a1: v32,
                a2: v33,
                a3: v53) != 0 )
      {
        v34 = (char *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                          + *(_QWORD *)&v51[HIWORD(*(_DWORD *)&v52[4 * v56 + 12])
                                                                                          + 16]))(
                        a1: v41,
                        a2: v42,
                        a3: v53);
        if ( v34 != v8
          && (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v34 >> 3) + 20]
                                            + 12
                                            + 4
                                            * (*(_DWORD *)&v8[8 * (*(_DWORD *)v34 >> 3) + 44]
                                             & (0x16B7u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v34 >> 3) + 44])))] != 5815 )
        {
          goto LABEL_41;
        }
        if ( v34 == v8 )
        {
          while ( 1 )
          {
            v34 = (char *)sub_2771080();
LABEL_41:
            sub_276FC00(a1: v35, a2: v36, a3: v34, a4: v53, a5: v8 + 43292104);
LABEL_42:
            v45 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_32:
            *(_DWORD *)(v45 + 20) = 46923644;
            *(_DWORD *)(v45 + 16) = *((_DWORD *)v8 + 93585974);
            *(_DWORD *)(v45 + 12) = (unsigned __int64)(v45 - (_QWORD)v8) >> 3;
            v53 = (_DWORD *)v45;
            sub_503B9A0(a1, a2, a3: (unsigned int *)v45, a4, a5: 0);
            sub_2769900(a1: v47, a2: v48, a3: v53, a4: v46, a5: &a7);
LABEL_33:
            v54 = a3;
            sub_2770780();
LABEL_34:
            sub_2771080();
LABEL_35:
            sub_2770780();
LABEL_36:
            sub_2771080();
LABEL_37:
            sub_2770780();
LABEL_38:
            v24 = (char *)sub_2771080();
LABEL_39:
            sub_276FC00(a1: v25, a2: v26, a3: v24, a4: v27, a5: v8 + 43292104);
          }
        }
        v37 = *(_DWORD *)v34 >> 3;
        v38 = *(_DWORD *)&v8[8 * v37 + 44] & (0x16B7u >> HIBYTE(*(_DWORD *)&v8[8 * v37 + 44]));
        v39 = *(_QWORD *)&v8[8 * v37 + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v37 + 20] + 12 + 4 * v38])];
        v50 = v34;
        v40 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v7 + v39))(a1: v35, a2: v38, a3: v34);
        if ( (char *)v40 == v55 )
          goto LABEL_23;
      }
      goto LABEL_9;
    }
LABEL_23:
    v43 = v50;
    v44 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v44 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v44 = sub_1EAA920(a1: v32, a2: v33, a3: 34201016);
      v43 = v50;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v44 + 16;
      *(_DWORD *)v44 = 34201016;
      *(_DWORD *)(v44 + 4) = 0;
      *(_QWORD *)(v44 + 8) = 0;
    }
    *(_DWORD *)(v44 + 4) = (unsigned __int64)(v43 - v8) >> 3;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v44;
  }
  v54 = a3;
  v45 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v45 + 48) > *(_QWORD *)(v9 + 32) )
    goto LABEL_42;
  *(_QWORD *)(v9 + 40) = v45 + 48;
  *(_DWORD *)v45 = 34101256;
  *(_DWORD *)(v45 + 4) = 0;
  *(_QWORD *)(v45 + 8) = 0;
  *(_QWORD *)(v45 + 16) = 0;
  *(_QWORD *)(v45 + 24) = 0;
  *(_QWORD *)(v45 + 32) = 0;
  *(_QWORD *)(v45 + 40) = 0;
  goto LABEL_32;
}
