// sub_2770380
// rva 0x02770380  size 491  section .text  group text
// window base 0x182770380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_2770380(
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
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // [rsp+0h] [rbp-178h] BYREF
  __int64 v37; // [rsp+8h] [rbp-170h]
  __int64 v38; // [rsp+10h] [rbp-168h]
  __m128i v39; // [rsp+18h] [rbp-160h]
  __m128i v40; // [rsp+28h] [rbp-150h]
  __m128i v41; // [rsp+38h] [rbp-140h]
  __m128i v42; // [rsp+48h] [rbp-130h]
  __m128i v43; // [rsp+58h] [rbp-120h]
  __m128i v44; // [rsp+68h] [rbp-110h]
  __m128i v45; // [rsp+78h] [rbp-100h]
  __m128i v46; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v48; // [rsp+A8h] [rbp-D0h]
  __m128i v49; // [rsp+B8h] [rbp-C0h]
  __m128i v50; // [rsp+C8h] [rbp-B0h]
  __m128i v51; // [rsp+D8h] [rbp-A0h]
  __m128i v52; // [rsp+E8h] [rbp-90h]
  __m128i v53; // [rsp+F8h] [rbp-80h]
  __m128i v54; // [rsp+108h] [rbp-70h]
  __int64 v55; // [rsp+120h] [rbp-58h]
  __int64 v56; // [rsp+128h] [rbp-50h]
  __int64 v57; // [rsp+130h] [rbp-48h]
  __int64 v58; // [rsp+138h] [rbp-40h]
  __int64 v59; // [rsp+140h] [rbp-38h]
  __int64 v60; // [rsp+148h] [rbp-30h]
  __int64 v61; // [rsp+158h] [rbp-20h]
  __int64 v62; // [rsp+160h] [rbp-18h]
  __int64 v63; // [rsp+168h] [rbp-10h]

  v55 = v17;
  v56 = v16;
  v57 = a6;
  v58 = a5;
  v59 = a1;
  v60 = a2;
  v61 = a3;
  v62 = a4;
  v63 = v15;
  v39 = v27;
  v40 = v26;
  v41 = v25;
  v42 = v24;
  v43 = v23;
  v44 = v22;
  v45 = v21;
  v46 = v20;
  m128_i128 = (__m128i)a14.m128_i128;
  v48 = (__m128i)a13.m128_i128;
  v49 = (__m128i)a12.m128_i128;
  v50 = (__m128i)a11.m128_i128;
  v51 = (__m128i)a10.m128_i128;
  v52 = (__m128i)a9.m128_i128;
  v53 = (__m128i)a8.m128_i128;
  v54 = (__m128i)a7.m128_i128;
  v38 = a3;
  if ( (unsigned __int64)&v36 <= v19[1] )
  {
    sub_1EB84E0();
    JUMPOUT(0x18277056BLL);
  }
  sub_2771FC0(a1, a2, a3: 0);
  v30 = v19[5];
  if ( (unsigned __int64)(v30 + 40) > v19[4] )
  {
    v30 = sub_1EAA920(a1: v28, a2: v29, a3: 34081944);
  }
  else
  {
    v19[5] = v30 + 40;
    *(_DWORD *)v30 = 34081944;
    *(_DWORD *)(v30 + 4) = 0;
    *(_QWORD *)(v30 + 8) = 0;
    *(_QWORD *)(v30 + 16) = 0;
    *(_QWORD *)(v30 + 24) = 0;
    *(_QWORD *)(v30 + 32) = 0;
  }
  *(_DWORD *)(v30 + 20) = 46923644;
  *(_DWORD *)(v30 + 16) = *(_DWORD *)(v18 + 374343896);
  *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - v18) >> 3;
  v37 = v30;
  sub_503B9A0(a1: v28, a2: v29, a3: v30, a4: v30, a5: 0);
  v34 = v37;
  *(_DWORD *)(v37 + 8) = (unsigned __int64)(v38 - v18) >> 3;
  if ( (*(_DWORD *)v34 & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v34 = sub_27697E0(a1: v32, a2: v33, a3: (_DWORD *)v34, a4: v31, a5: (__int64)&a15);
LABEL_6:
    v31 = v34 & 0xFFFFFFFFFFF80000LL;
    v35 = (v34 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + ((v34 - v35) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + ((v34 - v35) >> 9) + 0x38) = 0;
  }
}
