// sub_15BFB40
// rva 0x015bfb40  size 586  section .text  group text
// window base 0x1815bfb40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_15BFB40(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 i; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v36; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v37; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v5 + 8) )
  {
    *(double *)v14.m128_u64 = sub_1EB84E0();
LABEL_21:
    v22 = sub_15ACE20(
            a1: v10,
            a2: v11,
            a3: v4 + 34085056,
            a4: v9,
            a5: v12,
            a6: v13,
            a7: v14,
            a8: v15,
            a9: v16,
            a10: v17,
            a11: v18,
            a12: v19,
            a13: v20,
            a14: v21);
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v6 + 104) > *(_QWORD *)(v5 + 32) )
  {
    v6 = sub_1EAA920(a1, a2, a3: 35838400);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v6 + 104;
    *(_DWORD *)v6 = 35838400;
    *(_DWORD *)(v6 + 4) = 0;
    for ( i = 8; i < 0x68; i += 8LL )
      *(_QWORD *)(v6 + i) = 0;
  }
  v37 = (_DWORD *)v6;
  *(_BYTE *)(v6 + 53) = 1;
  *(_BYTE *)(v6 + 52) = 1;
  *(_DWORD *)(v6 + 28) = -1;
  v8 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v8 + 48) > *(_QWORD *)(v5 + 32) )
  {
    v8 = sub_1EAA920(a1, a2, a3: 34162832);
    v6 = (__int64)v37;
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v8 + 48;
    *(_DWORD *)v8 = 34162832;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 40) = 0;
  }
  *(_DWORD *)(v8 + 32) = 8;
  *(_DWORD *)(v8 + 20) = 1061158912;
  *(_DWORD *)(v6 + 16) = (unsigned __int64)(v8 - v4) >> 3;
  if ( (*(_DWORD *)v6 & 2) != 0 )
  {
    a4 = (v6 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - a4) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - a4) >> 9) + 0x38) = 0;
  }
  sub_2E7DA80(a1, a2, a3: v6, a4, a5: 0);
  v22 = v4 + 35838400;
  if ( *(_BYTE *)(v4 + 376351762) != 0 )
    goto LABEL_21;
LABEL_10:
  v23 = sub_2E2F3C0(a1: v10, a2: v11, a3: v22);
  v27 = (unsigned __int64)v37;
  v37[2] = (unsigned __int64)(v23 - v4) >> 3;
  if ( (*(_DWORD *)v27 & 2) != 0 )
  {
    v24 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) = 0;
  }
  sub_2E7AE40(a1: v25, a2: v26, a3: v27, a4: v24, a5: v4);
  sub_2E86A40(a1: v28, a2: v29, a3: v37);
  sub_2E6F200(a1: v31, a2: v32, a3: v37, a4: v30, a5: 0xFFFFFFFFLL);
  sub_2E7A3C0(a1: v33, a2: v34, a3: v37);
  if ( *(int *)(v5 + 16) <= 0 )
    sub_277F280();
  return v37;
}
