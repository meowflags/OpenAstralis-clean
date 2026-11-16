// sub_2772080
// rva 0x02772080  size 491  section .text  group text
// window base 0x182772080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_2772080(
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
  _QWORD *v19; // r15
  __m128i v20; // xmm8
  __m128i v21; // xmm9
  __m128i v22; // xmm10
  __m128i v23; // xmm11
  __m128i v24; // xmm12
  __m128i v25; // xmm13
  __m128i v26; // xmm14
  __m128i v27; // xmm15
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // [rsp+0h] [rbp-178h] BYREF
  __int64 v35; // [rsp+8h] [rbp-170h]
  __int64 v36; // [rsp+10h] [rbp-168h]
  __m128i v37; // [rsp+18h] [rbp-160h]
  __m128i v38; // [rsp+28h] [rbp-150h]
  __m128i v39; // [rsp+38h] [rbp-140h]
  __m128i v40; // [rsp+48h] [rbp-130h]
  __m128i v41; // [rsp+58h] [rbp-120h]
  __m128i v42; // [rsp+68h] [rbp-110h]
  __m128i v43; // [rsp+78h] [rbp-100h]
  __m128i v44; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v46; // [rsp+A8h] [rbp-D0h]
  __m128i v47; // [rsp+B8h] [rbp-C0h]
  __m128i v48; // [rsp+C8h] [rbp-B0h]
  __m128i v49; // [rsp+D8h] [rbp-A0h]
  __m128i v50; // [rsp+E8h] [rbp-90h]
  __m128i v51; // [rsp+F8h] [rbp-80h]
  __m128i v52; // [rsp+108h] [rbp-70h]
  __int64 v53; // [rsp+120h] [rbp-58h]
  __int64 v54; // [rsp+128h] [rbp-50h]
  __int64 v55; // [rsp+130h] [rbp-48h]
  __int64 v56; // [rsp+138h] [rbp-40h]
  __int64 v57; // [rsp+140h] [rbp-38h]
  __int64 v58; // [rsp+148h] [rbp-30h]
  __int64 v59; // [rsp+158h] [rbp-20h]
  __int64 v60; // [rsp+160h] [rbp-18h]
  __int64 v61; // [rsp+168h] [rbp-10h]

  v53 = v17;
  v54 = v16;
  v55 = a6;
  v56 = a5;
  v57 = a1;
  v58 = a2;
  v59 = a3;
  v60 = a4;
  v61 = v15;
  v37 = v27;
  v38 = v26;
  v39 = v25;
  v40 = v24;
  v41 = v23;
  v42 = v22;
  v43 = v21;
  v44 = v20;
  m128_i128 = (__m128i)a14.m128_i128;
  v46 = (__m128i)a13.m128_i128;
  v47 = (__m128i)a12.m128_i128;
  v48 = (__m128i)a11.m128_i128;
  v49 = (__m128i)a10.m128_i128;
  v50 = (__m128i)a9.m128_i128;
  v51 = (__m128i)a8.m128_i128;
  v52 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v34 <= v19[1] )
  {
    sub_1EB84E0();
    JUMPOUT(0x18277226BLL);
  }
  v36 = a3;
  v28 = v19[5];
  if ( (unsigned __int64)(v28 + 40) > v19[4] )
  {
    v28 = sub_1EAA920(a1, a2, a3: 36206872);
  }
  else
  {
    v19[5] = v28 + 40;
    *(_DWORD *)v28 = 36206872;
    *(_DWORD *)(v28 + 4) = 0;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 16) = 0;
    *(_QWORD *)(v28 + 24) = 0;
    *(_QWORD *)(v28 + 32) = 0;
  }
  *(_DWORD *)(v28 + 20) = 46923644;
  *(_DWORD *)(v28 + 16) = *(_DWORD *)(v18 + 374343896);
  *(_DWORD *)(v28 + 12) = (unsigned __int64)(v28 - v18) >> 3;
  v35 = v28;
  sub_503B9A0(a1, a2, a3: v28, a4, a5: 0);
  v32 = v35;
  *(_DWORD *)(v35 + 8) = (unsigned __int64)(v36 - v18) >> 3;
  if ( (*(_DWORD *)v32 & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v32 = sub_27697E0(a1: v30, a2: v31, a3: (_DWORD *)v32, a4: v29, a5: (__int64)&a15);
LABEL_6:
    v29 = v32 & 0xFFFFFFFFFFF80000LL;
    v33 = (v32 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v32 & 0xFFFFFFFFFFF80000LL) + ((v32 - v33) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v32 & 0xFFFFFFFFFFF80000LL) + ((v32 - v33) >> 9) + 0x38) = 0;
  }
}
