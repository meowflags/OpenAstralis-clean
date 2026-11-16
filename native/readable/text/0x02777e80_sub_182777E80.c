// sub_2777E80
// rva 0x02777e80  size 729  section .text  group text
// window base 0x182777e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2777E80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int16 v22; // bx
  int v23; // ebp
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  char v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+8h] [rbp-30h]
  int v32; // [rsp+14h] [rbp-24h]
  unsigned int v33; // [rsp+18h] [rbp-20h]
  int v34; // [rsp+1Ch] [rbp-1Ch]
  int v35; // [rsp+20h] [rbp-18h]
  unsigned int v36; // [rsp+24h] [rbp-14h]
  int v37; // [rsp+28h] [rbp-10h]
  unsigned int v38; // [rsp+2Ch] [rbp-Ch]
  __int64 v39; // [rsp+30h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v16 + 8) )
  {
    v38 = a13;
    *(double *)a4.m128_u64 = sub_1EB84E0();
    goto LABEL_29;
  }
  v17 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v17 == 0 )
  {
LABEL_29:
    v38 = a13;
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v17,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v30);
LABEL_30:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: (unsigned int)a13,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v30);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v15 + 8 * v17 + 8) >> *(_BYTE *)(a3 + 12) > (int)a13 )
  {
    v38 = a13;
    if ( (unsigned int)sub_4FEBC20() == 35 )
    {
      a13 = v38 + 1;
      v37 = 1;
    }
    else
    {
      v37 = 0;
      a13 = v38;
    }
    a3 = v31;
  }
  else
  {
    v37 = 0;
    v38 = a13;
  }
  v18 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v18 == 0 )
    goto LABEL_30;
  v36 = a13;
  if ( *(_DWORD *)(v15 + 8 * v18 + 8) >> *(_BYTE *)(a3 + 12) > (int)a13 )
  {
    v25 = sub_4FEBC20(a1, a2, a3, a4: a3);
    if ( v25 < 0x30 )
    {
      v35 = 32;
      v34 = -1;
      a13 = v36;
      a3 = v31;
    }
    else
    {
      if ( v25 >= 0x3A )
        goto LABEL_32;
      v26 = sub_4FEBC20(a1, a2, a3: v31);
      v33 = v36 + 2;
      v32 = v26 - 48;
      v35 = sub_4FEBC20(a1: v27, a2: v28, a3: v31, a4: v36 + 2, a5: v36 + 1);
      v39 = v14;
      v34 = v32;
      a13 = v33;
      a3 = v31;
    }
  }
  else
  {
    v35 = 32;
    v34 = -1;
  }
  while ( 1 )
  {
    v19 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v19 != 0 )
      break;
LABEL_31:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v19,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v30);
LABEL_32:
    v35 = 32;
    v34 = -1;
    a13 = v36;
    a3 = v31;
  }
  v36 = a13;
  if ( *(_DWORD *)(v15 + 8 * v19 + 8) >> *(_BYTE *)(a3 + 12) > (int)a13 )
  {
    if ( (unsigned int)sub_4FEBC20(a1, a2, a3, a4: a3) == 46 )
    {
      v33 = v36 + 1;
      v20 = sub_4FEBC20(a1, a2, a3: v31, a4: v29, a5: v36 + 1) - 48;
      LODWORD(a13) = v36 + 2;
    }
    else
    {
      v20 = -1;
      LODWORD(a13) = v36;
    }
  }
  else
  {
    v20 = -1;
  }
  v21 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v21 + 32) > *(_QWORD *)(v16 + 32) )
  {
    v36 = v20;
    v33 = a13;
    v21 = sub_1EAA920(a1, a2, a3: 40540744);
    v20 = v36;
    LODWORD(a13) = v33;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v21 + 32;
    *(_DWORD *)v21 = 40540744;
    *(_DWORD *)(v21 + 4) = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
  }
  v22 = v35;
  v23 = v34;
  *(_BYTE *)(v21 + 18) = v37;
  *(_WORD *)(v21 + 16) = v22;
  *(_DWORD *)(v21 + 12) = a13;
  *(_DWORD *)(v21 + 8) = v20;
  *(_DWORD *)(v21 + 4) = v23;
  if ( *(int *)(v16 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v21);
  return v21;
}
