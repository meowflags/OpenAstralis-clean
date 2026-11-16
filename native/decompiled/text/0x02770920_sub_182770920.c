// sub_182770920
// rva 0x02770920  size 474  section .text  group text
// window base 0x182770920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182770920(
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
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r12
  __int64 v20; // r14
  _QWORD *v21; // r15
  __m128i v22; // xmm8
  __m128i v23; // xmm9
  __m128i v24; // xmm10
  __m128i v25; // xmm11
  __m128i v26; // xmm12
  __m128i v27; // xmm13
  __m128i v28; // xmm14
  __m128i v29; // xmm15
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // edi
  int v41; // esi
  int v42; // r8d
  int v43; // r9d
  __int64 v45; // [rsp+0h] [rbp-178h] BYREF
  __int64 v46; // [rsp+10h] [rbp-168h]
  __m128i v47; // [rsp+18h] [rbp-160h]
  __m128i v48; // [rsp+28h] [rbp-150h]
  __m128i v49; // [rsp+38h] [rbp-140h]
  __m128i v50; // [rsp+48h] [rbp-130h]
  __m128i v51; // [rsp+58h] [rbp-120h]
  __m128i v52; // [rsp+68h] [rbp-110h]
  __m128i v53; // [rsp+78h] [rbp-100h]
  __m128i v54; // [rsp+88h] [rbp-F0h]
  __m128i m128_i128; // [rsp+98h] [rbp-E0h]
  __m128i v56; // [rsp+A8h] [rbp-D0h]
  __m128i v57; // [rsp+B8h] [rbp-C0h]
  __m128i v58; // [rsp+C8h] [rbp-B0h]
  __m128i v59; // [rsp+D8h] [rbp-A0h]
  __m128i v60; // [rsp+E8h] [rbp-90h]
  __m128i v61; // [rsp+F8h] [rbp-80h]
  __m128i v62; // [rsp+108h] [rbp-70h]
  __int64 v63; // [rsp+118h] [rbp-60h]
  __int64 v64; // [rsp+120h] [rbp-58h]
  __int64 v65; // [rsp+128h] [rbp-50h]
  __int64 v66; // [rsp+130h] [rbp-48h]
  __int64 v67; // [rsp+138h] [rbp-40h]
  __int64 v68; // [rsp+140h] [rbp-38h]
  __int64 v69; // [rsp+148h] [rbp-30h]
  __int64 v70; // [rsp+150h] [rbp-28h]
  __int64 v71; // [rsp+158h] [rbp-20h]
  __int64 v72; // [rsp+160h] [rbp-18h]
  __int64 v73; // [rsp+168h] [rbp-10h]

  v63 = v19;
  v64 = v18;
  v65 = v17;
  v66 = a6;
  v67 = a5;
  v68 = a1;
  v69 = a2;
  v70 = v16;
  v71 = a3;
  v72 = a4;
  v73 = v15;
  v47 = v29;
  v48 = v28;
  v49 = v27;
  v50 = v26;
  v51 = v25;
  v52 = v24;
  v53 = v23;
  v54 = v22;
  m128_i128 = (__m128i)a14.m128_i128;
  v56 = (__m128i)a13.m128_i128;
  v57 = (__m128i)a12.m128_i128;
  v58 = (__m128i)a11.m128_i128;
  v59 = (__m128i)a10.m128_i128;
  v60 = (__m128i)a9.m128_i128;
  v61 = (__m128i)a8.m128_i128;
  v62 = (__m128i)a7.m128_i128;
  if ( (unsigned __int64)&v45 > v21[1] )
  {
    sub_182771FC0(a1, a2, a3: 0);
    v33 = v21[5];
    if ( (unsigned __int64)(v33 + 40) > v21[4] )
    {
      v33 = MEMORY[0x181EAA920](a1: v31, a2: v32, a3: 34171952);
    }
    else
    {
      v21[5] = v33 + 40;
      *(_DWORD *)v33 = 34171952;
      *(_DWORD *)(v33 + 4) = 0;
      *(_QWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = 0;
      *(_QWORD *)(v33 + 24) = 0;
      *(_QWORD *)(v33 + 32) = 0;
    }
    *(_DWORD *)(v33 + 20) = 46923644;
    *(_DWORD *)(v33 + 16) = *(_DWORD *)(v20 + 374343896);
    *(_DWORD *)(v33 + 12) = (unsigned __int64)(v33 - v20) >> 3;
    v46 = v33;
    MEMORY[0x18503B9A0](a1: v31, a2: v32, a3: v33, a4: v30, a5: 0);
    v37 = v46;
    *(_DWORD *)(v46 + 8) = 45110288;
    if ( (*(_DWORD *)v37 & 2) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      v37 = sub_1827697E0(a1: v35, a2: v36, a3: (_DWORD *)v37, a4: v34, a5: (__int64)&a15);
LABEL_6:
      v34 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v34) >> 9) + 0x38) = 0;
    }
  }
  MEMORY[0x181EB84E0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182770B00(a1: v40, a2: v41, a3: v38, a4: v39, a5: v42, a6: v43, a7: a15);
}
