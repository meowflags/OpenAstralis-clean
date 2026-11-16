// sub_2760320
// rva 0x02760320  size 697  section .text  group text
// window base 0x182760320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_2760320(__int64 a1, __int64 i, __int64 a3, char *a4, __int64 a5, char *a6)
{
  __int64 v6; // rbx
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // bp
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v15; // r8
  int v16; // edx
  BOOL v17; // edx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rbx
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  char *v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    v26 = a5;
    sub_1EB84E0();
    goto LABEL_33;
  }
  v28 = a3;
  v27 = a6;
  if ( *(_BYTE *)(a3 + 17) != 0 )
  {
LABEL_33:
    v26 = a5;
    v22 = a3;
    v23 = (__int64)(v7 + 373281248);
    if ( a6 == v7 )
      goto LABEL_37;
    v24 = (__int64)&v7[8 * *(unsigned int *)&v7[8 * (*(_DWORD *)a6 >> 3) + 12]];
    goto LABEL_35;
  }
  if ( a6 == v7 )
  {
LABEL_10:
    v26 = a5;
    goto LABEL_11;
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 == 0 )
  {
    v26 = a5;
    sub_2771080(a1, a2: i, a3, (_DWORD)a4, a5, (_DWORD)a6, a7: v25);
    goto LABEL_39;
  }
  v10 = *(unsigned int *)&v7[8 * v9 + 28];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_39:
    v26 = a5;
    sub_2771080(a1, a2: i, a3, (_DWORD)a4, a5, (_DWORD)a6, a7: v25);
    goto LABEL_40;
  }
  v6 = *(_DWORD *)a6 >> 3;
  v11 = *(_WORD *)&v7[8 * v6 + 62];
  i = (unsigned int)*(__int16 *)&v7[8 * v10 + 60];
  a4 = &v7[8 * *(unsigned int *)&v7[8 * v6 + 16]];
  if ( *(__int16 *)&v7[8 * v10 + 60] >= 0 )
  {
    if ( v11 <= *(__int16 *)&v7[8 * v10 + 60] )
    {
      v26 = a5;
LABEL_9:
      v12 = (__int64)&v7[8 * *(unsigned int *)&v7[8 * v6 + 12]];
      sub_275BEC0(a1, a2: i, a3, a4: v12, a5: v12, a6: (__int64)(v7 + 373281248), a7: v25);
      goto LABEL_10;
    }
    v26 = a5;
    v17 = *(_DWORD *)&v7[8 * v10 + 36] == *(_DWORD *)&a4[4 * (unsigned __int16)i + 12];
LABEL_17:
    if ( v17 )
    {
      a3 = v28;
      goto LABEL_11;
    }
LABEL_40:
    a3 = v28;
    goto LABEL_9;
  }
  v26 = a5;
  v16 = *(_DWORD *)&v7[8 * v10 + 40];
  if ( v16 < 0x10000 )
  {
    LODWORD(a4) = HIBYTE(*(_DWORD *)&v7[8 * v6 + 44]);
    v17 = v16 == (unsigned __int16)*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v6 + 20]
                                                + 4
                                                * (*(_DWORD *)&v7[8 * v6 + 44]
                                                 & ((unsigned int)v16 >> HIBYTE(*(_DWORD *)&v7[8 * v6 + 44])))
                                                + 12];
    goto LABEL_17;
  }
  for ( i = 0; ; i = (unsigned int)(i + 2) )
  {
    if ( 2 * *(__int16 *)&v7[8 * v6 + 64] <= (int)i )
    {
      a3 = v28;
      goto LABEL_9;
    }
    a1 = 4 * (v11 + (int)i) + 12;
    if ( v16 == *(_DWORD *)&a4[a1] )
      break;
  }
  a3 = v28;
LABEL_11:
  v13 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v13 == 0 )
  {
    while ( 1 )
    {
      v22 = sub_2771080(a1, a2: i, a3, (_DWORD)a4, a5: v13, a6: (_DWORD)v27, a7: v25);
LABEL_37:
      v24 = v23;
LABEL_35:
      sub_275BDA0(a1, a2: i, a3: v22, a4: v23, a5: v24, a6: v23, a7: v25);
    }
  }
  result = *(_QWORD *)(a3 + 8);
  v15 = (unsigned __int64)&v7[8 * v13];
  *(_DWORD *)(v15 + result) = (unsigned __int64)(v27 - v7) >> 3;
  __faststorefence();
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v18 = v15;
    if ( (*(_DWORD *)v15 & 1) != 0 )
    {
      v21 = (char *)(v15 - *(_QWORD *)(v15 - 8));
      if ( v21[(result >> 9) + 48] != 0 )
        v21[(result >> 9) + 48] = 0;
    }
    else
    {
      v19 = v15 & 0xFFFFFFFFFFF80000LL;
      result = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      v20 = (v18 - result) >> 9;
      if ( *(_BYTE *)(v19 + v20 + 56) != 0 )
        *(_BYTE *)(v19 + v20 + 56) = 0;
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1, a2: i, a3);
  return result;
}
