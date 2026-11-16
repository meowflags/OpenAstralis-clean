// sub_50339E0
// rva 0x050339e0  size 379  section .text  group text
// window base 0x1850339e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_50339E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7)
{
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]
  char *v20; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v9 = (unsigned __int16)*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * (*(_DWORD *)a5 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v7[8 * (*(_DWORD *)a5 >> 3) + 44]
                                         & (0x574u >> HIBYTE(*(_DWORD *)&v7[8 * (*(_DWORD *)a5 >> 3) + 44])))];
    if ( (_DWORD)v9 != 1396 )
    {
      while ( 1 )
      {
        v20 = a5;
        v19 = a3;
        sub_276FC00(a1, a2, a3: a5, a4: v9, a5: v7 + 43305920);
LABEL_15:
        v20 = a5;
        v19 = a3;
        v12 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_13:
        *(_DWORD *)(v12 + 20) = 46923644;
        *(_DWORD *)(v12 + 16) = *((_DWORD *)v7 + 93585974);
        v13 = (unsigned __int64)(v12 - (_QWORD)v7) >> 3;
        *(_DWORD *)(v12 + 12) = v13;
        v18 = v12;
        sub_503B9A0(a1, a2, a3: v12, a4: v13, a5: 0);
        sub_2769900(a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
      }
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(a5 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return a3;
  }
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_15;
  *(_QWORD *)(v8 + 40) = v12 + 48;
  *(_DWORD *)v12 = 34101256;
  *(_DWORD *)(v12 + 4) = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  v20 = a5;
  v19 = a3;
  goto LABEL_13;
}
