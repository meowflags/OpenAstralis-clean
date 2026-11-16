// sub_15CC4A0
// rva 0x015cc4a0  size 595  section .text  group text
// window base 0x1815cc4a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_15CC4A0(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 i; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  __int64 v26; // [rsp+18h] [rbp-10h]
  char *v27; // [rsp+20h] [rbp-8h]

  v27 = a3;
  v26 = a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
    goto LABEL_20;
  if ( a3 == v8 )
    goto LABEL_21;
  if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)a3 >> 3) + 20]
                                      + 12
                                      + 4
                                      * (*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44]
                                       & (0x18D8u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44])))] != 6360 )
  {
    for ( i = sub_276B120(); ; i = sub_276BEE0() )
    {
      sub_2769900(a1: v21, a2: v22, a3: i, a4: v26, a5: &a7);
LABEL_20:
      sub_1EB84E0();
LABEL_21:
      ;
    }
  }
  v10 = *(_DWORD *)a3 >> 3;
  v11 = *(_DWORD *)&v8[8 * v10 + 44] & (0x18D8u >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44]));
  v25 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v7
                                                                  + *(_QWORD *)&v8[8 * v10
                                                                                 + 32
                                                                                 + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v10 + 20] + 12 + 4 * v11])]))(
          a1,
          a2: v11,
          a3,
          a4: a3);
  v14 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v14 = sub_1EAA920(a1: v12, a2: v13, a3: 35865776);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v14 + 40;
    *(_DWORD *)v14 = 35865776;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
  }
  *(_DWORD *)(v14 + 20) = 46923644;
  *(_DWORD *)(v14 + 16) = *((_DWORD *)v8 + 93585974);
  *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - (_QWORD)v8) >> 3;
  v24 = (_DWORD *)v14;
  sub_503B9A0(a1: v12, a2: v13, a3: v14, a4: v14, a5: 0);
  v15 = (unsigned __int64)v24;
  v24[2] = (unsigned __int64)(v25 - (_QWORD)v8) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v17 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v17) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v15 + 12) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v18 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v15 + 28) = (unsigned __int64)(v27 - v8) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v19 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v19) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v19) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return v15;
}
