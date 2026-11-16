// sub_1EBA320
// rva 0x01eba320  size 509  section .text  group text
// window base 0x181eba320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EBA320(
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
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // [rsp+0h] [rbp-178h] BYREF
  _DWORD *v31; // [rsp+10h] [rbp-168h]
  __m128i v32; // [rsp+18h] [rbp-160h]
  __m128i v33; // [rsp+28h] [rbp-150h]
  __m128i v34; // [rsp+38h] [rbp-140h]
  __m128i v35; // [rsp+48h] [rbp-130h]
  __m128i v36; // [rsp+58h] [rbp-120h]
  __m128i v37; // [rsp+68h] [rbp-110h]
  __m128i v38; // [rsp+78h] [rbp-100h]
  __m128i v39; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v41; // [rsp+A8h] [rbp-D0h]
  __m128i v42; // [rsp+B8h] [rbp-C0h]
  __m128i v43; // [rsp+C8h] [rbp-B0h]
  __m128i v44; // [rsp+D8h] [rbp-A0h]
  __m128i v45; // [rsp+E8h] [rbp-90h]
  __m128i v46; // [rsp+F8h] [rbp-80h]
  __m128i v47; // [rsp+108h] [rbp-70h]
  __int64 v48; // [rsp+120h] [rbp-58h]
  __int64 v49; // [rsp+128h] [rbp-50h]
  __int64 v50; // [rsp+130h] [rbp-48h]
  __int64 v51; // [rsp+138h] [rbp-40h]
  __int64 v52; // [rsp+140h] [rbp-38h]
  __int64 v53; // [rsp+148h] [rbp-30h]
  __int64 v54; // [rsp+158h] [rbp-20h]
  __int64 v55; // [rsp+160h] [rbp-18h]
  __int64 v56; // [rsp+168h] [rbp-10h]

  v48 = v17;
  v49 = v16;
  v50 = a6;
  v51 = a5;
  v52 = a1;
  v53 = a2;
  v54 = a3;
  v55 = a4;
  v56 = v15;
  v32 = v27;
  v33 = v26;
  v34 = v25;
  v35 = v24;
  v36 = v23;
  v37 = v22;
  v38 = v21;
  v39 = v20;
  m128_i128 = (__m128i)a14.m128_i128;
  v41 = (__m128i)a13.m128_i128;
  v42 = (__m128i)a12.m128_i128;
  v43 = (__m128i)a11.m128_i128;
  v44 = (__m128i)a10.m128_i128;
  v45 = (__m128i)a9.m128_i128;
  v46 = (__m128i)a8.m128_i128;
  v47 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v19 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
    JUMPOUT(0x181EBA51DLL);
  }
  if ( *(_DWORD *)(v19 + 300) == 0 )
    goto LABEL_5;
  v28 = v18 + 376658752;
  while ( 1 )
  {
    sub_27697E0(a1, a2, a3: v28, a4, a5: &a15);
LABEL_5:
    if ( *(_DWORD *)(v19 + 324) != 0 )
    {
      v28 = v18 + 376658752;
    }
    else
    {
      v29 = *(_QWORD *)(v19 + 40);
      if ( (unsigned __int64)(v29 + 40) > *(_QWORD *)(v19 + 32) )
      {
        v29 = sub_1EAA920(a1, a2, a3: 37751696);
      }
      else
      {
        *(_QWORD *)(v19 + 40) = v29 + 40;
        *(_DWORD *)v29 = 37751696;
        *(_DWORD *)(v29 + 4) = 0;
        *(_QWORD *)(v29 + 8) = 0;
        *(_QWORD *)(v29 + 16) = 0;
        *(_QWORD *)(v29 + 24) = 0;
        *(_QWORD *)(v29 + 32) = 0;
      }
      *(_DWORD *)(v29 + 20) = 46923644;
      *(_DWORD *)(v29 + 16) = *(_DWORD *)(v18 + 374343896);
      *(_DWORD *)(v29 + 12) = (unsigned __int64)(v29 - v18) >> 3;
      v31 = (_DWORD *)v29;
      sub_503B9A0(a1, a2, a3: v29, a4, a5: 0);
      v28 = (unsigned __int64)v31;
      v31[2] = 7272304;
      if ( (*(_DWORD *)v28 & 2) != 0 )
      {
        a4 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - a4) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - a4) >> 9) + 0x38) = 0;
      }
    }
  }
}
