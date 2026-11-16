// sub_18278D580
// rva 0x0278d580  size 827  section .text  group text
// window base 0x18278d580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278D580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // rax
  int v22; // edi
  int v23; // esi
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r9
  __m128i v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __m128 v41; // xmm6
  __m128 v42; // xmm7
  unsigned __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v45; // [rsp+10h] [rbp-38h]
  __int64 v46; // [rsp+20h] [rbp-28h]
  __int64 v47; // [rsp+28h] [rbp-20h]
  int v48; // [rsp+30h] [rbp-18h]
  int v49; // [rsp+34h] [rbp-14h]
  int v50; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v44 <= v17[1] )
  {
    v46 = a3;
    MEMORY[0x181EB84E0]();
    v49 = v14;
    v30 = v17[5];
    if ( (unsigned __int64)(v30 + 40) > v17[4] )
    {
      v48 = v29;
      v30 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: 34082880);
    }
    else
    {
      v17[5] = v30 + 40;
      *(_DWORD *)v30 = 34082880;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      *(_QWORD *)(v30 + 24) = 0;
      *(_QWORD *)(v30 + 32) = 0;
      v48 = v29;
    }
    *(_DWORD *)(v30 + 20) = 46923644;
    *(_DWORD *)(v30 + 16) = *(_DWORD *)(v16 + 374343896);
    *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - v16) >> 3;
    v45 = (_DWORD *)v30;
    MEMORY[0x18503B9A0](a1: v28, a2: v29, a3: v30, a4: v27, a5: 0);
    v43 = (unsigned __int64)v45;
    v45[2] = 46004603;
    if ( (*(_DWORD *)v43 & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v35 = sub_182769900(
              a1: v32,
              a2: v33,
              a3: (_DWORD *)v43,
              a4: v31,
              a5: (__int64)&a7,
              a6: v34,
              a7: (__m128)v35.m128i_i128,
              a8: v36,
              a9: v37,
              a10: v38,
              a11: v39,
              a12: v40,
              a13: v41,
              a14: v42);
LABEL_11:
      v31 = (v43 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - v31) >> 9) + 0x38) = 0;
    }
  }
  v18 = *(unsigned int *)(a3 + 4);
  v19 = v16 + 8 * v18;
  if ( (_DWORD)v18 == 0 )
    return sub_18278D72E(a1, a2, a3, a4: *(_DWORD *)(a3 + 8), a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v50 = *(_DWORD *)(a3 + 8);
  v46 = a3;
  v20 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v15
                                                          + *(_QWORD *)(v16
                                                                      + 8LL * (*(_DWORD *)(v16 + 8 * v18) >> 3)
                                                                      + 104));
  v47 = v19;
  v21 = v20(a1, a2, a3: v19);
  if ( v21 == v16 )
    v25 = v16 + 353301280;
  else
    v25 = v21;
  return sub_18278D5EC(
           a1: v22,
           a2: v23,
           a3: 54,
           a4: *(char *)(v25 + 12),
           a5: v25,
           a6: v24,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
