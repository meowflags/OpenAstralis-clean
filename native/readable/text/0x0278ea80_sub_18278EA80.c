// sub_278EA80
// rva 0x0278ea80  size 839  section .text  group text
// window base 0x18278ea80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278EA80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r9
  __m128i v48; // xmm0
  __m128 v49; // xmm1
  __m128 v50; // xmm2
  __m128 v51; // xmm3
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __m128 v54; // xmm6
  __m128 v55; // xmm7
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+10h] [rbp-48h]
  _DWORD *v59; // [rsp+18h] [rbp-40h]
  __int64 v60; // [rsp+20h] [rbp-38h]
  __int64 v61; // [rsp+28h] [rbp-30h]
  __int64 v62; // [rsp+30h] [rbp-28h]
  __int64 v63; // [rsp+38h] [rbp-20h]
  __int64 v64; // [rsp+40h] [rbp-18h]
  unsigned int v65; // [rsp+4Ch] [rbp-Ch]
  unsigned int v66; // [rsp+50h] [rbp-8h]
  unsigned int v67; // [rsp+54h] [rbp-4h]

  v64 = a5;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v15 + 8) )
  {
    v62 = a3;
    v26 = sub_1EB84E0();
    goto LABEL_24;
  }
  v16 = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)v16 == 0 )
    return sub_18278EC44(a1, a2, a3, a4: (int)v14 + 353301280, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  v63 = v14 + 353301280;
  v62 = a3;
  v61 = v14 + 8 * v16;
  v17 = sub_27C6220(a1, a2, a3: v61);
  if ( v64 == v14 )
    v20 = v63;
  else
    v20 = v64;
  if ( v17 == v14 )
    v21 = v63;
  else
    v21 = v17;
  v63 = v17;
  v67 = *(char *)(v21 + 12) | *(char *)(v20 + 12);
  v61 = v21;
  v60 = v20;
  v22 = sub_50132E0(a1: v18, a2: v19, a3: 36, a4: v20, a5: v20);
  v26 = sub_50132E0(a1: v24, a2: v25, a3: v22, a4: v23, a5: v61);
  v29 = v67;
  v13 = v26 << v67;
  if ( ((v26 << v67) & 0x80000000) != 0 )
  {
LABEL_24:
    v66 = v26;
    v43 = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v15 + 32) )
    {
      v65 = v13;
      v43 = sub_1EAA920(a1: v27, a2: v28, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v43 + 40;
      *(_DWORD *)v43 = 34082880;
      *(_DWORD *)(v43 + 4) = 0;
      *(_QWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_QWORD *)(v43 + 32) = 0;
      v65 = v13;
    }
    *(_DWORD *)(v43 + 20) = 46923644;
    *(_DWORD *)(v43 + 16) = *(_DWORD *)(v14 + 374343896);
    *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - v14) >> 3;
    v59 = (_DWORD *)v43;
    sub_503B9A0(a1: v27, a2: v28, a3: v43, a4: v29, a5: 0);
    v56 = (unsigned __int64)v59;
    v59[2] = 46004603;
    if ( (*(_DWORD *)v56 & 2) != 0 )
      goto LABEL_28;
    while ( 1 )
    {
      v48 = sub_2769900(
              a1: v45,
              a2: v46,
              a3: (_DWORD *)v56,
              a4: v44,
              a5: (__int64)&a7,
              a6: v47,
              a7: (__m128)v48.m128i_i128,
              a8: v49,
              a9: v50,
              a10: v51,
              a11: v52,
              a12: v53,
              a13: v54,
              a14: v55);
LABEL_28:
      v44 = (v56 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v56 & 0xFFFFFFFFFFF80000LL) + ((v56 - v44) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v56 & 0xFFFFFFFFFFF80000LL) + ((v56 - v44) >> 9) + 0x38) = 0;
    }
  }
  v30 = *(_QWORD *)(v15 + 40);
  v31 = (v13 + 19LL) & 0x1FFFFFFF8LL;
  if ( v31 >= 0x20000 || (v32 = v30 + v31) > *(_QWORD *)(v15 + 32) )
  {
    v66 = v26;
    v30 = sub_1EAA840(a1: 34082368, a2: v28, a3: 34082368, a4: v67, a5: v13);
    v26 = v66;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v32;
    *(_QWORD *)v30 = 34082368;
    *(_DWORD *)(v30 + 8) = v13;
  }
  v59 = (_DWORD *)v30;
  v33 = v14 + 373281248;
  v58 = v14 + 373281248;
  v66 = v26;
  if ( v67 != 0 )
    sub_4FF2C40(a1: 1, a2: v28, a3: v14 + 373281248, a4: v33, a5: v30, a6: v26);
  else
    sub_1EB4960(a1: v26, a2: 0, a3: v14 + 376351544, a4: v33, a5: 0, a6: v59);
  v35 = sub_5011A80(a1: v61, a2: v14 + 58185240, a3: v66, a4: v34, a5: v67, a6: v59);
  v37 = sub_5011A80(a1: v60, a2: v58, a3: v35, a4: v36, a5: v67, a6: v59);
  v40 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v40 + 24) > *(_QWORD *)(v15 + 32) )
  {
    v65 = v37;
    v40 = sub_1EAA920(a1: v38, a2: v39, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v40 + 24;
    *(_DWORD *)v40 = 34082680;
    *(_DWORD *)(v40 + 4) = 0;
    *(_QWORD *)(v40 + 8) = 0;
    *(_QWORD *)(v40 + 16) = 0;
  }
  v41 = (__int64)v59;
  *(_BYTE *)(v40 + 12) = v67;
  *(_DWORD *)(v40 + 4) = (unsigned __int64)(v41 - v14) >> 3;
  if ( *(int *)(v15 + 16) <= 0 )
    sub_277F280(a1: v38, a2: v39, a3: v40, a4: v41);
  return v40;
}
