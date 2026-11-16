// sub_4F272E0
// rva 0x04f272e0  size 727  section .text  group text
// window base 0x184f272e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_4F272E0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  char *v14; // rsi
  __int64 v15; // rdi
  char *result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rbx
  char *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // rbx
  __int64 v34; // [rsp+0h] [rbp-18h] BYREF
  __int64 v35; // [rsp+8h] [rbp-10h]
  unsigned int *v36; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
    goto LABEL_24;
  }
  v10 = a3[1];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_24:
    sub_2771080(a1, a2, a3, a4: a3);
    goto LABEL_25;
  }
  v36 = a3;
  v11 = *(_DWORD *)&v8[8 * v10] >> 3;
  v12 = *(_DWORD *)&v8[8 * v11 + 44] & (0x616u >> HIBYTE(*(_DWORD *)&v8[8 * v11 + 44]));
  if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v11 + 20] + 12 + 4 * v12] != 1558 )
  {
LABEL_25:
    sub_2770780(a1, a2: v12, a3, a4: a3);
LABEL_26:
    sub_2771080(a1: v17, a2: v18, a3: v19, a4: v19);
    goto LABEL_27;
  }
  v13 = *(_DWORD *)&v8[8 * v10] >> 3;
  v14 = &v8[8 * *(unsigned int *)&v8[8 * v13 + 20]];
  v15 = *(_DWORD *)&v8[8 * v13 + 44] & (0x616u >> HIBYTE(*(_DWORD *)&v8[8 * v13 + 44]));
  result = (char *)((__int64 (__fastcall *)(__int64, char *, char *))(v7
                                                                    + *(_QWORD *)&v8[8 * v13
                                                                                   + 8
                                                                                   + HIWORD(*(_DWORD *)&v14[4 * v15 + 12])]))(
                     a1: v15,
                     a2: v14,
                     a3: &v8[8 * v10]);
  if ( (_DWORD)result == 0 )
    goto LABEL_10;
  v19 = v36;
  v20 = v36[1];
  if ( (_DWORD)v20 == 0 )
    goto LABEL_26;
  v21 = *(_DWORD *)&v8[8 * v20] >> 3;
  v22 = *(_DWORD *)&v8[8 * v21 + 44] & (0x616u >> HIBYTE(*(_DWORD *)&v8[8 * v21 + 44]));
  if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v21 + 20] + 12 + 4 * v22] != 1558 )
  {
LABEL_27:
    sub_2770780(a1: v17, a2: v22, a3: v19, a4: v19);
    goto LABEL_28;
  }
  v23 = *(_DWORD *)&v8[8 * v20] >> 3;
  v24 = &v8[8 * *(unsigned int *)&v8[8 * v23 + 20]];
  v25 = *(_DWORD *)&v8[8 * v23 + 44] & (0x616u >> HIBYTE(*(_DWORD *)&v8[8 * v23 + 44]));
  result = (char *)((__int64 (__fastcall *)(__int64, char *, char *))(v7
                                                                    + *(_QWORD *)&v8[8 * v23
                                                                                   + 16
                                                                                   + HIWORD(*(_DWORD *)&v24[4 * v25 + 12])]))(
                     a1: v25,
                     a2: v24,
                     a3: &v8[8 * v20]);
  if ( result == v8 )
    goto LABEL_13;
  v26 = *(_DWORD *)result >> 3;
  if ( *(__int16 *)&v8[8 * v26 + 62] >= 2 )
  {
    while ( *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v26 + 16] + 16] == 70120 )
    {
LABEL_13:
      v28 = (unsigned __int64)v36;
      v36[2] = (unsigned __int64)(result - v8) >> 3;
      v27 = *(unsigned int *)v28;
      if ( (v27 & 2) != 0 )
      {
        v33 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
        v27 = (v28 - v33) >> 9;
        if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + v27 + 0x38) != 0 )
          *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v33) >> 9) + 0x38) = 0;
      }
      if ( result != v8 )
        goto LABEL_11;
      v29 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v29 + 48) > *(_QWORD *)(v9 + 32) )
      {
LABEL_28:
        v29 = sub_1EAA920(a1: v17, a2: v18, a3: 34101256);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v29 + 48;
        *(_DWORD *)v29 = 34101256;
        *(_DWORD *)(v29 + 4) = 0;
        *(_QWORD *)(v29 + 8) = 0;
        *(_QWORD *)(v29 + 16) = 0;
        *(_QWORD *)(v29 + 24) = 0;
        *(_QWORD *)(v29 + 32) = 0;
        *(_QWORD *)(v29 + 40) = 0;
      }
      *(_DWORD *)(v29 + 20) = 46923644;
      *(_DWORD *)(v29 + 16) = *((_DWORD *)v8 + 93585974);
      *(_DWORD *)(v29 + 12) = (unsigned __int64)(v29 - (_QWORD)v8) >> 3;
      v35 = v29;
      sub_503B9A0(a1: v17, a2: v18, a3: v29, a4: v29, a5: 0);
      result = (char *)sub_2769900(a1: v31, a2: v32, a3: v35, a4: v30, a5: &a7);
    }
  }
  result = (char *)sub_276FC00(a1: v17, a2: v18, a3: result, a4: v36, a5: v8 + 34096536);
LABEL_10:
  v27 = (unsigned __int64)v36;
  v36[2] = 0;
  v28 = v27;
LABEL_11:
  if ( *(int *)(v9 + 16) <= 0 )
    return (char *)sub_277F280(a1: v17, a2: v18, a3: v27, a4: v28);
  return result;
}
