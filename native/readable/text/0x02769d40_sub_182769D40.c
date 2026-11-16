// sub_2769D40
// rva 0x02769d40  size 637  section .text  group text
// window base 0x182769d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__m128i __fastcall sub_2769D40(
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
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  _QWORD v35[3]; // [rsp+0h] [rbp-178h] BYREF
  __m128i v36; // [rsp+18h] [rbp-160h]
  __m128i v37; // [rsp+28h] [rbp-150h]
  __m128i v38; // [rsp+38h] [rbp-140h]
  __m128i v39; // [rsp+48h] [rbp-130h]
  __m128i v40; // [rsp+58h] [rbp-120h]
  __m128i v41; // [rsp+68h] [rbp-110h]
  __m128i v42; // [rsp+78h] [rbp-100h]
  __m128i v43; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v45; // [rsp+A8h] [rbp-D0h]
  __m128i v46; // [rsp+B8h] [rbp-C0h]
  __m128i v47; // [rsp+C8h] [rbp-B0h]
  __m128i v48; // [rsp+D8h] [rbp-A0h]
  __m128i v49; // [rsp+E8h] [rbp-90h]
  __m128i v50; // [rsp+F8h] [rbp-80h]
  __m128i v51; // [rsp+108h] [rbp-70h]
  __int64 v52; // [rsp+120h] [rbp-58h]
  __int64 v53; // [rsp+128h] [rbp-50h]
  __int64 v54; // [rsp+130h] [rbp-48h]
  __int64 v55; // [rsp+138h] [rbp-40h]
  __int64 v56; // [rsp+140h] [rbp-38h]
  __int64 v57; // [rsp+148h] [rbp-30h]
  __int64 v58; // [rsp+158h] [rbp-20h]
  __int64 v59; // [rsp+160h] [rbp-18h]
  __int64 v60; // [rsp+168h] [rbp-10h]

  v52 = v16;
  v53 = v15;
  v54 = a6;
  v55 = a5;
  v56 = a1;
  v57 = a2;
  v58 = a3;
  v59 = a4;
  v60 = v14;
  v36 = v26;
  v37 = v25;
  v38 = v24;
  v39 = v23;
  v40 = v22;
  v41 = v21;
  v42 = v20;
  v43 = v19;
  m128_i128 = (__m128i)a14.m128_i128;
  v45 = (__m128i)a13.m128_i128;
  v46 = (__m128i)a12.m128_i128;
  v47 = (__m128i)a11.m128_i128;
  v48 = (__m128i)a10.m128_i128;
  v49 = (__m128i)a9.m128_i128;
  v50 = (__m128i)a8.m128_i128;
  v51 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)v35 <= *(_QWORD *)(v18 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x182769FBDLL);
  }
  sub_2771FC0(a1, a2, a3: 0);
  v30 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v30 + 40) > *(_QWORD *)(v18 + 32) )
  {
    v30 = sub_1EAA920(a1: v28, a2: v29, a3: 34591136);
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v30 + 40;
    *(_DWORD *)v30 = 34591136;
    *(_DWORD *)(v30 + 4) = 0;
    *(_QWORD *)(v30 + 8) = 0;
    *(_QWORD *)(v30 + 16) = 0;
    *(_QWORD *)(v30 + 24) = 0;
    *(_QWORD *)(v30 + 32) = 0;
  }
  *(_DWORD *)(v30 + 20) = 46923644;
  *(_DWORD *)(v30 + 16) = *(_DWORD *)(v17 + 374343896);
  *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - v17) >> 3;
  v35[2] = v30;
  sub_503B9A0(a1: v28, a2: v29, a3: v30, a4: v27, a5: 0);
  if ( *(int *)(v18 + 16) <= 0 )
    sub_277F280(a1: v32, a2: v33, a3: v31);
  return v51;
}
