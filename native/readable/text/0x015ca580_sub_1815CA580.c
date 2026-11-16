// sub_15CA580
// rva 0x015ca580  size 597  section .text  group text
// window base 0x1815ca580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CA580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  _QWORD v25[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  unsigned __int64 v28; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v16 + 8) )
  {
    v28 = a7.m128_u64[0];
    v27 = a3;
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a3 != v15 )
  {
    if ( *(_BYTE *)(v15 + 376616122) == 0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v28 = a7.m128_u64[0];
  v27 = a3;
  v21 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v21 + 48) > *(_QWORD *)(v16 + 32) )
  {
    v21 = sub_1EAA920(a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v21 + 48;
    *(_DWORD *)v21 = 34101256;
    *(_DWORD *)(v21 + 4) = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
  }
  *(_DWORD *)(v21 + 20) = 46923644;
  *(_DWORD *)(v21 + 16) = *(_DWORD *)(v15 + 374343896);
  *(_DWORD *)(v21 + 12) = (unsigned __int64)(v21 - v15) >> 3;
  v26 = v21;
  sub_503B9A0(a1, a2, a3: v21, a4, a5: 0);
  *(double *)a7.m128_u64 = sub_2769900(a1: v23, a2: v24, a3: v26, a4: v22, a5: &a15);
LABEL_17:
  v28 = a7.m128_u64[0];
  v27 = a3;
  sub_15ACE20(a1, a2, a3: v15 + 35862184, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  a3 = v27;
LABEL_4:
  v17 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v17 + 64) > *(_QWORD *)(v16 + 32) )
  {
    v28 = a7.m128_u64[0];
    v27 = a3;
    v17 = sub_1EAA920(a1, a2, a3: 35861776);
    a7.m128_u64[0] = v28;
    a3 = v27;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v17 + 64;
    *(_DWORD *)v17 = 35861776;
    *(_DWORD *)(v17 + 4) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0;
    *(_QWORD *)(v17 + 56) = 0;
  }
  *(_DWORD *)(v17 + 52) = (unsigned __int64)(a3 - v15) >> 3;
  v18 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v18 + 16) > *(_QWORD *)(v16 + 32) )
  {
    v26 = v17;
    v28 = a7.m128_u64[0];
    v27 = a3;
    v18 = sub_1EAA920(a1, a2, a3: 35862048);
    v17 = v26;
    a7.m128_u64[0] = v28;
    a3 = v27;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v18 + 16;
    *(_DWORD *)v18 = 35862048;
    *(_DWORD *)(v18 + 4) = 0;
    *(_QWORD *)(v18 + 8) = 0;
  }
  v19 = *(unsigned int *)(v15 + 374435760);
  *(_DWORD *)(v18 + 4) = v19;
  v26 = v17;
  v25[1] = v15 + 8 * v19;
  v27 = a3;
  v28 = a7.m128_u64[0];
  sub_94D1420(a1, a2, a3: v17, a4: v27, a5: v27);
  if ( *(int *)(v16 + 16) <= 0 )
    sub_277F280();
  return v26;
}
