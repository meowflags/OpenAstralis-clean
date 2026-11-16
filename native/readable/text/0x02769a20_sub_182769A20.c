// sub_2769A20
// rva 0x02769a20  size 774  section .text  group text
// window base 0x182769a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__m128i __fastcall sub_2769A20(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
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
  _DWORD *v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm8
  __m128i v20; // xmm9
  __m128i v21; // xmm10
  __m128i v22; // xmm11
  __m128i v23; // xmm12
  __m128i v24; // xmm13
  __m128i v25; // xmm14
  __m128i v26; // xmm15
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v41; // rbp
  char v42; // [rsp+0h] [rbp-188h] BYREF
  unsigned int *v43; // [rsp+10h] [rbp-178h]
  __int64 v44; // [rsp+18h] [rbp-170h]
  _DWORD *v45; // [rsp+20h] [rbp-168h]
  __m128i v46; // [rsp+28h] [rbp-160h]
  __m128i v47; // [rsp+38h] [rbp-150h]
  __m128i v48; // [rsp+48h] [rbp-140h]
  __m128i v49; // [rsp+58h] [rbp-130h]
  __m128i v50; // [rsp+68h] [rbp-120h]
  __m128i v51; // [rsp+78h] [rbp-110h]
  __m128i v52; // [rsp+88h] [rbp-100h]
  __m128i v53; // [rsp+98h] [rbp-F0h]
  __m128i m128_i128; // [rsp+A8h] [rbp-E0h]
  __m128i v55; // [rsp+B8h] [rbp-D0h]
  __m128i v56; // [rsp+C8h] [rbp-C0h]
  __m128i v57; // [rsp+D8h] [rbp-B0h]
  __m128i v58; // [rsp+E8h] [rbp-A0h]
  __m128i v59; // [rsp+F8h] [rbp-90h]
  __m128i v60; // [rsp+108h] [rbp-80h]
  __m128i v61; // [rsp+118h] [rbp-70h]
  __int64 v62; // [rsp+130h] [rbp-58h]
  __int64 v63; // [rsp+138h] [rbp-50h]
  __int64 v64; // [rsp+140h] [rbp-48h]
  __int64 v65; // [rsp+148h] [rbp-40h]
  __int64 v66; // [rsp+150h] [rbp-38h]
  __int64 v67; // [rsp+158h] [rbp-30h]
  _DWORD *v68; // [rsp+168h] [rbp-20h]
  __int64 v69; // [rsp+170h] [rbp-18h]
  __int64 v70; // [rsp+178h] [rbp-10h]

  v62 = v16;
  v63 = v15;
  v64 = a6;
  v65 = a5;
  v66 = a1;
  v67 = a2;
  v68 = a3;
  v69 = a4;
  v70 = v14;
  v46 = v26;
  v47 = v25;
  v48 = v24;
  v49 = v23;
  v50 = v22;
  v51 = v21;
  v52 = v20;
  v53 = v19;
  m128_i128 = (__m128i)a14.m128_i128;
  v55 = (__m128i)a13.m128_i128;
  v56 = (__m128i)a12.m128_i128;
  v57 = (__m128i)a11.m128_i128;
  v58 = (__m128i)a10.m128_i128;
  v59 = (__m128i)a9.m128_i128;
  v60 = (__m128i)a8.m128_i128;
  v61 = (__m128i)a7.m128_i128;
  v45 = a3;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v18 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_13;
  }
  sub_2771FC0(a1, a2, a3: 0);
  v32 = (int)v45;
  if ( v45 == v17 )
  {
LABEL_13:
    sub_2771080(a1: v28, a2: v29, a3: v32, a4: v27, a5: v30, a6: v31, a7: v42);
    JUMPOUT(0x182769D26LL);
  }
  v44 = sub_4F68C80(a1: v28, a2: v29, a3: &v17[2 * (*v45 >> 3)]);
  v35 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v18 + 32) )
  {
    v35 = sub_1EAA920(a1: v33, a2: v34, a3: 35966824);
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v35 + 40;
    *(_DWORD *)v35 = 35966824;
    *(_DWORD *)(v35 + 4) = 0;
    *(_QWORD *)(v35 + 8) = 0;
    *(_QWORD *)(v35 + 16) = 0;
    *(_QWORD *)(v35 + 24) = 0;
    *(_QWORD *)(v35 + 32) = 0;
  }
  *(_DWORD *)(v35 + 20) = 46923644;
  *(_DWORD *)(v35 + 16) = v17[93585974];
  *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - (_QWORD)v17) >> 3;
  v43 = (unsigned int *)v35;
  sub_503B9A0(a1: v33, a2: v34, a3: v35, a4: v35, a5: 0);
  v38 = (unsigned __int64)v43;
  v43[2] = (unsigned __int64)(v44 - (_QWORD)v17) >> 3;
  v39 = *(unsigned int *)v38;
  if ( (v39 & 2) != 0 )
  {
    v41 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
    v39 = (v38 - v41) >> 9;
    if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + v39 + 0x38) != 0 )
      *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v41) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v18 + 16) <= 0 )
    sub_277F280(a1: v36, a2: v37, a3: v39);
  return v61;
}
