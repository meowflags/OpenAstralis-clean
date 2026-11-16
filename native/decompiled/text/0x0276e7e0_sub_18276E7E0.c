// sub_18276E7E0
// rva 0x0276e7e0  size 255  section .text  group text
// window base 0x18276e7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18276E7E0(
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
  __int64 v17; // rbp
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r12
  _DWORD *v21; // r14
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
  __int64 v33; // rax
  __int64 v34; // r11
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __m128i v42; // xmm7
  __m128i v43; // xmm6
  __m128i v44; // xmm5
  __m128i v45; // xmm4
  __m128i v46; // xmm3
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  int v58; // edx
  int v59; // ecx
  int v60; // edi
  int v61; // esi
  int v62; // r8d
  int v63; // r9d
  __m128i v65[16]; // [rsp+168h] [rbp-2C8h] BYREF
  __int64 v66; // [rsp+268h] [rbp-1C8h]
  __int64 v67; // [rsp+270h] [rbp-1C0h]
  __int64 v68; // [rsp+278h] [rbp-1B8h]
  __int64 v69; // [rsp+280h] [rbp-1B0h]
  __int64 v70; // [rsp+288h] [rbp-1A8h]
  __int64 v71; // [rsp+290h] [rbp-1A0h]
  __int64 v72; // [rsp+298h] [rbp-198h]
  __int64 v73; // [rsp+2A0h] [rbp-190h]
  __int64 v74; // [rsp+2A8h] [rbp-188h]
  __int64 v75; // [rsp+2B0h] [rbp-180h]
  __int64 v76; // [rsp+2B8h] [rbp-178h]
  __int64 v77; // [rsp+2C0h] [rbp-170h]
  __m128i v78[16]; // [rsp+2D0h] [rbp-160h] BYREF
  __int64 v79; // [rsp+3D0h] [rbp-60h]
  __int64 v80; // [rsp+3D8h] [rbp-58h]
  __int64 v81; // [rsp+3E0h] [rbp-50h]
  __int64 v82; // [rsp+3E8h] [rbp-48h]
  __int64 v83; // [rsp+3F0h] [rbp-40h]
  __int64 v84; // [rsp+3F8h] [rbp-38h]
  __int64 v85; // [rsp+400h] [rbp-30h]
  __int64 v86; // [rsp+408h] [rbp-28h]
  __int64 v87; // [rsp+410h] [rbp-20h]
  __int64 v88; // [rsp+418h] [rbp-18h]
  __int64 v89; // [rsp+420h] [rbp-10h]

  v79 = v20;
  v80 = v19;
  v81 = v18;
  v82 = a6;
  v83 = a5;
  v84 = a1;
  v85 = a2;
  v86 = v16;
  v87 = a3;
  v88 = a4;
  v89 = v15;
  v78[0] = v29;
  v78[1] = v28;
  v78[2] = v27;
  v78[3] = v26;
  v78[4] = v25;
  v78[5] = v24;
  v78[6] = v23;
  v78[7] = v22;
  v78[8] = (__m128i)a14.m128_i128;
  v78[9] = (__m128i)a13.m128_i128;
  v78[10] = (__m128i)a12.m128_i128;
  v78[11] = (__m128i)a11.m128_i128;
  v78[12] = (__m128i)a10.m128_i128;
  v78[13] = (__m128i)a9.m128_i128;
  v78[14] = (__m128i)a8.m128_i128;
  v78[15] = (__m128i)a7.m128_i128;
  sub_182771FC0(a1, a2, a3: 1);
  v33 = sub_1827697E0(a1: v31, a2: v32, a3: v21 + 94166958, a4: v30, a5: (__int64)&a15);
  __builtin_debugtrap();
  v77 = v17;
  v66 = v20;
  v67 = v34;
  v68 = v35;
  v69 = v36;
  v70 = v37;
  v71 = v38;
  v72 = v39;
  v73 = v16;
  v74 = v40;
  v75 = v41;
  v76 = v33;
  v65[0] = v29;
  v65[1] = v28;
  v65[2] = v27;
  v65[3] = v26;
  v65[4] = v25;
  v65[5] = v24;
  v65[6] = v23;
  v65[7] = v22;
  v65[8] = v42;
  v65[9] = v43;
  v65[10] = v44;
  v65[11] = v45;
  v65[12] = v46;
  v65[13] = v47;
  v65[14] = v48;
  v65[15] = v49;
  sub_182771FC0(a1: v38, a2: v39, a3: 1);
  sub_1827697E0(a1: v51, a2: v52, a3: v21 + 94166968, a4: v50, a5: (__int64)v78);
  __builtin_debugtrap();
  sub_182771FC0(a1: v53, a2: v54, a3: 1);
  sub_1827697E0(a1: v56, a2: v57, a3: v21 + 94166978, a4: v55, a5: (__int64)v65);
  __builtin_debugtrap();
  return sub_18276EAE0(a1: v60, a2: v61, a3: v58, a4: v59, a5: v62, a6: v63, a7: a15);
}
