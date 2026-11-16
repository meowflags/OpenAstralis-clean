// sub_1E5CD20
// rva 0x01e5cd20  size 784  section .text  group text
// window base 0x181e5cd20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_1E5CD20(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 **a12)
{
  __int64 v12; // rbp
  __m128i v13; // xmm8
  __m128i v14; // xmm9
  __m128i v15; // xmm10
  __m128i v16; // xmm11
  __m128i v17; // xmm12
  __m128i v18; // xmm13
  __m128i v19; // xmm14
  __m128i v20; // xmm15
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm3_8
  double v31; // xmm4_8
  double v32; // xmm5_8
  double v33; // xmm6_8
  double v34; // xmm7_8
  _BOOL8 v35; // rdx
  double v36; // xmm0_8
  double v37; // xmm1_8
  double v38; // xmm2_8
  double v39; // xmm3_8
  double v40; // xmm4_8
  double v41; // xmm5_8
  double v42; // xmm6_8
  double v43; // xmm7_8
  _BYTE v44[12]; // [rsp+10h] [rbp-108h] BYREF
  int v45; // [rsp+1Ch] [rbp-FCh]
  _BYTE *v46; // [rsp+20h] [rbp-F8h]
  __int64 **v47; // [rsp+28h] [rbp-F0h]
  __m128i v48; // [rsp+30h] [rbp-E8h]
  __m128i v49; // [rsp+40h] [rbp-D8h]
  __m128i v50; // [rsp+50h] [rbp-C8h]
  __m128i v51; // [rsp+60h] [rbp-B8h]
  __m128i v52; // [rsp+70h] [rbp-A8h]
  __m128i v53; // [rsp+80h] [rbp-98h]
  __m128i v54; // [rsp+90h] [rbp-88h]
  __m128i v55; // [rsp+A0h] [rbp-78h]
  __m128i v56; // [rsp+B0h] [rbp-68h]
  __m128i m128_i128; // [rsp+C0h] [rbp-58h]
  __int64 v58; // [rsp+D0h] [rbp-48h]
  __int64 v59; // [rsp+D8h] [rbp-40h]
  __int64 v60; // [rsp+F8h] [rbp-20h]
  __int64 v61; // [rsp+100h] [rbp-18h]

  v61 = a1;
  v60 = a2;
  v58 = v12;
  m128_i128 = (__m128i)a9.m128_i128;
  v56 = (__m128i)a10.m128_i128;
  v55 = v13;
  v54 = v14;
  v53 = v15;
  v52 = v16;
  v51 = v17;
  v50 = v18;
  v49 = v19;
  v48 = v20;
  v47 = a12;
  v21 = **a12;
  v22 = 0;
  v46 = v44;
  v23 = sub_1EB6540(a1, a2, a3: v21, a4: a12, a5: v44);
  if ( v23 == 0 )
    goto LABEL_3;
  while ( 1 )
  {
    sub_1EB6CE0(a1: v25, a2: v26, a3: v23, a4: v24, a5: 292992448);
    v26 = v60;
    v25 = v61;
    v22 = v59;
    v33 = m128_i128.m128i_i64[0];
    v34 = v56.m128i_i64[0];
LABEL_3:
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v22 + 20), 3, 1) != 3 )
      sub_277F4A0(
        a1: v25,
        a2: v26,
        a3: 1,
        a4: v24,
        a5: 0,
        a6: v27,
        a7: v28,
        a8: v29,
        a9: v30,
        a10: v31,
        a11: v32,
        a12: v33,
        a13: v34);
    v35 = *v46 != 0;
    v45 = (char)*v46;
    v23 = sub_1EB6A20(
            a1: v25,
            a2: v26,
            a3: v35,
            a4: v27,
            a5: v28,
            a6: v29,
            a7: v30,
            a8: v31,
            a9: v32,
            a10: v33,
            a11: v34);
    if ( v23 == 0 )
    {
      if ( (_BYTE)v45 == 0 )
        goto LABEL_8;
      while ( 1 )
      {
        sub_20761A0(a1: v25, a2: v26, a3: v47);
        v26 = v60;
        v25 = v61;
        v42 = m128_i128.m128i_i64[0];
        v43 = v56.m128i_i64[0];
LABEL_8:
        sub_1EB79A0(a1: v25, a2: v26, a3: v36, a4: v37, a5: v38, a6: v39, a7: v40, a8: v41, a9: v42, a10: v43);
      }
    }
  }
}
