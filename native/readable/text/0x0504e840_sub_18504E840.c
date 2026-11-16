// sub_504E840
// rva 0x0504e840  size 575  section .text  group text
// window base 0x18504e840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504E840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64, char *); // rax
  char *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v20; // rsi
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+8h] [rbp-20h]
  char *v29; // [rsp+10h] [rbp-18h]
  char *v30; // [rsp+18h] [rbp-10h]
  __int64 v31; // [rsp+20h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    v30 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)a5 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)a5 >> 3) + 44]
                                         & (0x654u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)a5 >> 3) + 44])))] != 1620 )
    {
LABEL_20:
      v30 = a5;
      v13 = (char *)sub_2770780();
LABEL_21:
      sub_276FC00(a1: v14, a2: v15, a3: v13, a4: v31, a5: v8 + 34143680);
      __builtin_debugtrap();
      return sub_504EA80(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
    }
    v10 = *(_DWORD *)a5 >> 3;
    v11 = *(_DWORD *)&v8[8 * v10 + 44] & (0x654u >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44]));
    v12 = (__int64 (__fastcall *)(__int64, __int64, char *))(v7
                                                           + *(_QWORD *)&v8[8 * v10
                                                                          + HIWORD(*(_DWORD *)&v8[8
                                                                                                * *(unsigned int *)&v8[8 * v10 + 20]
                                                                                                + 12
                                                                                                + 4 * v11])]);
    v30 = a5;
    v13 = (char *)v12(a1, a2: v11, a3: a5);
    if ( v13 != v8
      && (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)v13 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)v13 >> 3) + 44]
                                         & (0x61Du >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)v13 >> 3) + 44])))] != 1565 )
    {
      goto LABEL_21;
    }
    v16 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v29 = v13;
      v16 = sub_1EAA920(a1: v14, a2: v15, a3: 43311368);
      v13 = v29;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v16 + 24;
      *(_DWORD *)v16 = 43311368;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
    }
    *(_DWORD *)(v16 + 4) = (unsigned __int64)(v13 - v8) >> 3;
    v17 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v17 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v28 = v16;
      v29 = v13;
      v18 = sub_1EAA920(a1: v14, a2: v15, a3: 43311512);
      v16 = v28;
      v13 = v29;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v17 + 16;
      *(_DWORD *)v17 = 43311512;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      v18 = v17;
    }
    *(_DWORD *)(v18 + 4) = (unsigned __int64)(v31 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v16 + 8) = (unsigned __int64)(v18 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v16 & 2) != 0 )
    {
      v20 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v20) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v28 = v16;
      v29 = v13;
      sub_277F280();
      return v28;
    }
    return v16;
  }
  sub_2771080();
  goto LABEL_20;
}
