// sub_182771660
// rva 0x02771660  size 474  section .text  group text
// window base 0x182771660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_182771660(
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
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-178h] BYREF
  __int64 v37; // [rsp+10h] [rbp-168h]
  __m128i v38; // [rsp+18h] [rbp-160h]
  __m128i v39; // [rsp+28h] [rbp-150h]
  __m128i v40; // [rsp+38h] [rbp-140h]
  __m128i v41; // [rsp+48h] [rbp-130h]
  __m128i v42; // [rsp+58h] [rbp-120h]
  __m128i v43; // [rsp+68h] [rbp-110h]
  __m128i v44; // [rsp+78h] [rbp-100h]
  __m128i v45; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v47; // [rsp+A8h] [rbp-D0h]
  __m128i v48; // [rsp+B8h] [rbp-C0h]
  __m128i v49; // [rsp+C8h] [rbp-B0h]
  __m128i v50; // [rsp+D8h] [rbp-A0h]
  __m128i v51; // [rsp+E8h] [rbp-90h]
  __m128i v52; // [rsp+F8h] [rbp-80h]
  __m128i v53; // [rsp+108h] [rbp-70h]
  __int64 v54; // [rsp+120h] [rbp-58h]
  __int64 v55; // [rsp+128h] [rbp-50h]
  __int64 v56; // [rsp+130h] [rbp-48h]
  __int64 v57; // [rsp+138h] [rbp-40h]
  __int64 v58; // [rsp+140h] [rbp-38h]
  __int64 v59; // [rsp+148h] [rbp-30h]
  __int64 v60; // [rsp+158h] [rbp-20h]
  __int64 v61; // [rsp+160h] [rbp-18h]
  __int64 v62; // [rsp+168h] [rbp-10h]

  v54 = v17;
  v55 = v16;
  v56 = a6;
  v57 = a5;
  v58 = a1;
  v59 = a2;
  v60 = a3;
  v61 = a4;
  v62 = v15;
  v38 = v27;
  v39 = v26;
  v40 = v25;
  v41 = v24;
  v42 = v23;
  v43 = v22;
  v44 = v21;
  v45 = v20;
  m128_i128 = (__m128i)a14.m128_i128;
  v47 = (__m128i)a13.m128_i128;
  v48 = (__m128i)a12.m128_i128;
  v49 = (__m128i)a11.m128_i128;
  v50 = (__m128i)a10.m128_i128;
  v51 = (__m128i)a9.m128_i128;
  v52 = (__m128i)a8.m128_i128;
  v53 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v36 <= v19[1] )
  {
    MEMORY[0x181EB84E0]();
    JUMPOUT(0x18277183ALL);
  }
  sub_182771FC0(a1, a2, a3: 0);
  v31 = v19[5];
  if ( (unsigned __int64)(v31 + 40) > v19[4] )
  {
    v31 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 35966824);
  }
  else
  {
    v19[5] = v31 + 40;
    *(_DWORD *)v31 = 35966824;
    *(_DWORD *)(v31 + 4) = 0;
    *(_QWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 16) = 0;
    *(_QWORD *)(v31 + 24) = 0;
    *(_QWORD *)(v31 + 32) = 0;
  }
  *(_DWORD *)(v31 + 20) = 46923644;
  *(_DWORD *)(v31 + 16) = *(_DWORD *)(v18 + 374343896);
  *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v18) >> 3;
  v37 = v31;
  MEMORY[0x18503B9A0](a1: v29, a2: v30, a3: v31, a4: v28, a5: 0);
  v35 = v37;
  *(_DWORD *)(v37 + 8) = 7273087;
  if ( (*(_DWORD *)v35 & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v35 = sub_1827697E0(a1: v33, a2: v34, a3: (_DWORD *)v35, a4: v32, a5: (__int64)&a15);
LABEL_6:
    v32 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v35 - v32) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v35 - v32) >> 9) + 0x38) = 0;
  }
}
