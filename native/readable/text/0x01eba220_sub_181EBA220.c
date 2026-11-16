// sub_1EBA220
// rva 0x01eba220  size 256  section .text  group text
// window base 0x181eba220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EBA220(
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
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // r15
  __m128i v20; // xmm8
  __m128i v21; // xmm9
  __m128i v22; // xmm10
  __m128i v23; // xmm11
  __m128i v24; // xmm12
  __m128i v25; // xmm13
  __m128i v26; // xmm14
  __m128i v27; // xmm15
  char v28; // [rsp+0h] [rbp-168h] BYREF
  __m128i v29; // [rsp+8h] [rbp-160h]
  __m128i v30; // [rsp+18h] [rbp-150h]
  __m128i v31; // [rsp+28h] [rbp-140h]
  __m128i v32; // [rsp+38h] [rbp-130h]
  __m128i v33; // [rsp+48h] [rbp-120h]
  __m128i v34; // [rsp+58h] [rbp-110h]
  __m128i v35; // [rsp+68h] [rbp-100h]
  __m128i v36; // [rsp+78h] [rbp-F0h]
  __m128i m128_i128; // [rsp+88h] [rbp-E0h]
  __m128i v38; // [rsp+98h] [rbp-D0h]
  __m128i v39; // [rsp+A8h] [rbp-C0h]
  __m128i v40; // [rsp+B8h] [rbp-B0h]
  __m128i v41; // [rsp+C8h] [rbp-A0h]
  __m128i v42; // [rsp+D8h] [rbp-90h]
  __m128i v43; // [rsp+E8h] [rbp-80h]
  __m128i v44; // [rsp+F8h] [rbp-70h]
  __int64 v45; // [rsp+110h] [rbp-58h]
  __int64 v46; // [rsp+118h] [rbp-50h]
  __int64 v47; // [rsp+120h] [rbp-48h]
  __int64 v48; // [rsp+128h] [rbp-40h]
  __int64 v49; // [rsp+130h] [rbp-38h]
  __int64 v50; // [rsp+138h] [rbp-30h]
  __int64 v51; // [rsp+148h] [rbp-20h]
  __int64 v52; // [rsp+150h] [rbp-18h]
  __int64 v53; // [rsp+158h] [rbp-10h]

  v45 = v17;
  v46 = v16;
  v47 = a6;
  v48 = a5;
  v49 = a1;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = v15;
  v29 = v27;
  v30 = v26;
  v31 = v25;
  v32 = v24;
  v33 = v23;
  v34 = v22;
  v35 = v21;
  v36 = v20;
  m128_i128 = (__m128i)a14.m128_i128;
  v38 = (__m128i)a13.m128_i128;
  v39 = (__m128i)a12.m128_i128;
  v40 = (__m128i)a11.m128_i128;
  v41 = (__m128i)a10.m128_i128;
  v42 = (__m128i)a9.m128_i128;
  v43 = (__m128i)a8.m128_i128;
  v44 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v28 > *(_QWORD *)(v19 + 8) )
    sub_27697E0(a1, a2, a3: v18 + 376658752, a4, a5: &a15);
  sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v28);
  JUMPOUT(0x181EBA320LL);
}
