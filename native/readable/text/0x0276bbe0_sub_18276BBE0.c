// sub_276BBE0
// rva 0x0276bbe0  size 747  section .text  group text
// window base 0x18276bbe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__m128i __fastcall sub_276BBE0(
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
        __m128 a14)
{
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm8
  __m128i v20; // xmm9
  __m128i v21; // xmm10
  __m128i v22; // xmm11
  __m128i v23; // xmm12
  __m128i v24; // xmm13
  __m128i v25; // xmm14
  __m128i v26; // xmm15
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v37; // rbp
  __int64 v38; // [rsp+0h] [rbp-188h] BYREF
  unsigned int *v39; // [rsp+10h] [rbp-178h]
  __int64 v40; // [rsp+18h] [rbp-170h]
  unsigned int v41; // [rsp+24h] [rbp-164h]
  __m128i v42; // [rsp+28h] [rbp-160h]
  __m128i v43; // [rsp+38h] [rbp-150h]
  __m128i v44; // [rsp+48h] [rbp-140h]
  __m128i v45; // [rsp+58h] [rbp-130h]
  __m128i v46; // [rsp+68h] [rbp-120h]
  __m128i v47; // [rsp+78h] [rbp-110h]
  __m128i v48; // [rsp+88h] [rbp-100h]
  __m128i v49; // [rsp+98h] [rbp-F0h]
  __m128i m128_i128; // [rsp+A8h] [rbp-E0h]
  __m128i v51; // [rsp+B8h] [rbp-D0h]
  __m128i v52; // [rsp+C8h] [rbp-C0h]
  __m128i v53; // [rsp+D8h] [rbp-B0h]
  __m128i v54; // [rsp+E8h] [rbp-A0h]
  __m128i v55; // [rsp+F8h] [rbp-90h]
  __m128i v56; // [rsp+108h] [rbp-80h]
  __m128i v57; // [rsp+118h] [rbp-70h]
  __int64 v58; // [rsp+130h] [rbp-58h]
  __int64 v59; // [rsp+138h] [rbp-50h]
  __int64 v60; // [rsp+140h] [rbp-48h]
  __int64 v61; // [rsp+148h] [rbp-40h]
  __int64 v62; // [rsp+150h] [rbp-38h]
  __int64 v63; // [rsp+158h] [rbp-30h]
  __int64 v64; // [rsp+168h] [rbp-20h]
  __int64 v65; // [rsp+170h] [rbp-18h]
  __int64 v66; // [rsp+178h] [rbp-10h]

  v58 = v16;
  v59 = v15;
  v60 = a6;
  v61 = a5;
  v62 = a1;
  v63 = a2;
  v64 = a3;
  v65 = a4;
  v66 = v14;
  v42 = v26;
  v43 = v25;
  v44 = v24;
  v45 = v23;
  v46 = v22;
  v47 = v21;
  v48 = v20;
  v49 = v19;
  m128_i128 = (__m128i)a14.m128_i128;
  v51 = (__m128i)a13.m128_i128;
  v52 = (__m128i)a12.m128_i128;
  v53 = (__m128i)a11.m128_i128;
  v54 = (__m128i)a10.m128_i128;
  v55 = (__m128i)a9.m128_i128;
  v56 = (__m128i)a8.m128_i128;
  v57 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v18 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x18276BECBLL);
  }
  v41 = a3;
  sub_2771FC0(a1, a2, a3: 0);
  v40 = sub_4F8C700(a1: v27, a2: v28, a3: v41);
  v31 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v31 + 40) > *(_QWORD *)(v18 + 32) )
  {
    v31 = sub_1EAA920(a1: v29, a2: v30, a3: 36108448);
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v31 + 40;
    *(_DWORD *)v31 = 36108448;
    *(_DWORD *)(v31 + 4) = 0;
    *(_QWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 16) = 0;
    *(_QWORD *)(v31 + 24) = 0;
    *(_QWORD *)(v31 + 32) = 0;
  }
  *(_DWORD *)(v31 + 20) = 46923644;
  *(_DWORD *)(v31 + 16) = *(_DWORD *)(v17 + 374343896);
  *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v17) >> 3;
  v39 = (unsigned int *)v31;
  sub_503B9A0(a1: v29, a2: v30, a3: v31, a4: v31, a5: 0);
  v34 = (unsigned __int64)v39;
  v39[2] = (unsigned __int64)(v40 - v17) >> 3;
  v35 = *(unsigned int *)v34;
  if ( (v35 & 2) != 0 )
  {
    v37 = (v34 & 0xFFFFFFFFFFF80000LL) + 2112;
    v35 = (v34 - v37) >> 9;
    if ( *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + v35 + 0x38) != 0 )
      *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + ((v34 - v37) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v18 + 16) <= 0 )
    sub_277F280(a1: v32, a2: v33, a3: v35);
  return v57;
}
