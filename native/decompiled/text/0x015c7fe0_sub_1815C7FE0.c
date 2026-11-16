// sub_1815C7FE0
// rva 0x015c7fe0  size 1017  section .text  group text
// window base 0x1815c7fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C7FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15,
        __int64 a16)
{
  __int64 v16; // r14
  __int64 v17; // r15
  __m128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rdx
  unsigned __int64 i; // rcx
  __int64 v24; // rcx
  int v25; // xmm0_4
  __int64 v26; // rbp
  int v27; // ebx
  __int64 v28; // rsi
  __int64 v29; // rdi
  int v30; // r9d
  __int64 v31; // r8
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // [rsp+0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+8h] [rbp-40h]
  __int64 v44; // [rsp+10h] [rbp-38h]
  __int64 v45; // [rsp+18h] [rbp-30h]
  __int64 v46; // [rsp+20h] [rbp-28h]
  __int64 v47; // [rsp+28h] [rbp-20h]
  __int64 v48; // [rsp+30h] [rbp-18h]
  int v49; // [rsp+38h] [rbp-10h]
  unsigned int v50; // [rsp+3Ch] [rbp-Ch]
  unsigned int v51; // [rsp+40h] [rbp-8h]
  int v52; // [rsp+44h] [rbp-4h]

  v47 = a3;
  v46 = a5;
  v52 = a6;
  v51 = a1;
  v50 = a2;
  v49 = a4;
  v45 = a16;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v17 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v16 )
  {
    v18.m128_i128 = MEMORY[0x123F3C58];
    if ( *(_BYTE *)(v16 + 376438490) == 0 )
      goto LABEL_4;
    goto LABEL_29;
  }
  v38 = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(v38 + 48) > *(_QWORD *)(v17 + 32) )
  {
    v38 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v38 + 48;
    *(_DWORD *)v38 = 34101256;
    *(_DWORD *)(v38 + 4) = 0;
    *(_QWORD *)(v38 + 8) = 0;
    *(_QWORD *)(v38 + 16) = 0;
    *(_QWORD *)(v38 + 24) = 0;
    *(_QWORD *)(v38 + 32) = 0;
    *(_QWORD *)(v38 + 40) = 0;
  }
  *(_DWORD *)(v38 + 20) = 46923644;
  *(_DWORD *)(v38 + 16) = *(_DWORD *)(v16 + 374343896);
  *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - v16) >> 3;
  v44 = v38;
  MEMORY[0x18503B9A0](a1, a2, a3: v38, a4, a5: 0);
  *(double *)v18.m128_u64 = MEMORY[0x182769900](a1: v40, a2: v41, a3: v44, a4: v39, a5: &a15);
LABEL_29:
  sub_1815ACE20(a1, a2, a3: v16 + 34335144, a4, a5, a6, a7: v18, a8, a9, a10, a11, a12, a13, a14);
LABEL_4:
  v19 = MEMORY[0x188D268E0](a1: *(double *)v18.m128_u64);
  v22 = *(_DWORD **)(v17 + 40);
  if ( (unsigned __int64)(v22 + 32) > *(_QWORD *)(v17 + 32) )
  {
    v48 = v19;
    v24 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 35851880);
    v19 = v48;
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v22 + 32;
    *v22 = 35851880;
    v22[1] = 0;
    for ( i = 2; i < 32; i += 2LL )
      *(_QWORD *)&v22[i] = 0;
    v24 = (__int64)v22;
  }
  v25 = MEMORY[0x123F3C58];
  v26 = v45;
  v27 = v49;
  v28 = v50;
  v29 = v51;
  v30 = v52;
  v31 = v46;
  *(_DWORD *)(v24 + 116) = (unsigned __int64)(v47 - v16) >> 3;
  *(_BYTE *)(v24 + 113) = 1;
  *(_BYTE *)(v24 + 112) = 1;
  *(_BYTE *)(v24 + 110) = 1;
  *(_BYTE *)(v24 + 109) = 1;
  *(_BYTE *)(v24 + 108) = 1;
  *(_DWORD *)(v24 + 96) = -9408400;
  *(_DWORD *)(v24 + 92) = -2039584;
  v32 = v19;
  *(_QWORD *)(v24 + 72) = v19 / 1000000;
  *(_DWORD *)(v24 + 68) = 32;
  *(_DWORD *)(v24 + 44) = 46660156;
  *(_DWORD *)(v24 + 40) = (unsigned __int64)(v31 - v16) >> 3;
  *(_BYTE *)(v24 + 38) = 1;
  *(_BYTE *)(v24 + 37) = 1;
  *(_DWORD *)(v24 + 28) = v29;
  *(_DWORD *)(v24 + 24) = v30;
  *(_DWORD *)(v24 + 20) = v27;
  *(_DWORD *)(v24 + 16) = v28;
  *(_DWORD *)(v24 + 12) = v25;
  *(_DWORD *)(v24 + 4) = (unsigned __int64)(v26 - v16) >> 3;
  v33 = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(v33 + 32) > *(_QWORD *)(v17 + 32) )
  {
    v44 = v24;
    v48 = v19;
    v33 = MEMORY[0x181EAA920](a1: v29, a2: v28, a3: 35587264);
    v24 = v44;
    v32 = v48;
    v28 = v50;
    v29 = v51;
    v31 = v46;
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v33 + 32;
    *(_DWORD *)v33 = 35587264;
    *(_DWORD *)(v33 + 4) = 0;
    *(_QWORD *)(v33 + 8) = 0;
    *(_QWORD *)(v33 + 16) = 0;
    *(_QWORD *)(v33 + 24) = 0;
  }
  *(_DWORD *)(v33 + 8) = 4718589;
  v34 = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v17 + 32) )
  {
    v43 = v33;
    v44 = v24;
    v48 = v32;
    v34 = MEMORY[0x181EAA920](a1: v29, a2: v28, a3: 34161576, a4: v24, a5: v31);
    v33 = v43;
    v24 = v44;
    v28 = v50;
    v29 = v51;
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v34 + 24;
    *(_DWORD *)v34 = 34161576;
    *(_DWORD *)(v34 + 4) = 0;
    *(_QWORD *)(v34 + 8) = 0;
    *(_QWORD *)(v34 + 16) = 0;
  }
  *(_DWORD *)(v34 + 8) = 47045786;
  *(_DWORD *)(v24 + 8) = (unsigned __int64)(v33 - v16) >> 3;
  if ( (*(_DWORD *)v24 & 2) != 0 )
  {
    v36 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v36) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v36) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v24 + 56) = (unsigned __int64)(v34 - v16) >> 3;
  if ( (*(_DWORD *)v24 & 2) != 0 )
  {
    v37 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v37) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v37) >> 9) + 0x38) = 0;
  }
  v44 = v24;
  MEMORY[0x186E6C260](a1: v29, a2: v28, a3: v24);
  if ( *(int *)(v17 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v44;
}
