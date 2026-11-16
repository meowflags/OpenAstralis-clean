// sub_1E2CAA0
// rva 0x01e2caa0  size 975  section .text  group text
// window base 0x181e2caa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E2CAA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v13; // rbp
  __m128i v14; // xmm8
  __m128i v15; // xmm9
  __m128i v16; // xmm10
  __m128i v17; // xmm11
  __m128i v18; // xmm12
  __m128i v19; // xmm13
  __m128i v20; // xmm14
  __m128i v21; // xmm15
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  _BYTE v27[16]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE *v28; // [rsp+20h] [rbp-108h]
  __int64 v29; // [rsp+28h] [rbp-100h]
  __int64 v30; // [rsp+30h] [rbp-F8h]
  __int64 **v31; // [rsp+38h] [rbp-F0h]
  __m128i v32; // [rsp+40h] [rbp-E8h]
  __m128i v33; // [rsp+50h] [rbp-D8h]
  __m128i v34; // [rsp+60h] [rbp-C8h]
  __m128i v35; // [rsp+70h] [rbp-B8h]
  __m128i v36; // [rsp+80h] [rbp-A8h]
  __m128i v37; // [rsp+90h] [rbp-98h]
  __m128i v38; // [rsp+A0h] [rbp-88h]
  __m128i v39; // [rsp+B0h] [rbp-78h]
  __m128i v40; // [rsp+C0h] [rbp-68h]
  __m128i m128_i128; // [rsp+D0h] [rbp-58h]
  __int64 v42; // [rsp+E0h] [rbp-48h]
  __int64 v43; // [rsp+108h] [rbp-20h]
  __int64 v44; // [rsp+110h] [rbp-18h]

  v44 = a1;
  v43 = a2;
  v42 = v13;
  m128_i128 = (__m128i)a12.m128_i128;
  v40 = (__m128i)a13.m128_i128;
  v39 = v14;
  v38 = v15;
  v37 = v16;
  v36 = v17;
  v35 = v18;
  v34 = v19;
  v33 = v20;
  v32 = v21;
  v31 = a4;
  v30 = a3;
  v29 = a5;
  v22 = **a4;
  v28 = v27;
  if ( (unsigned int)sub_1EB6540(a1, a2, a3: v22, a4, a5: v27) != 0 )
    return 0xFFFFFFFFLL;
  v25 = 1;
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
    sub_277F4A0(a1: v23, a2: v24, a3: 1, a4: 1, a5: 0);
  if ( *v28 == 0 )
    sub_1EB79A0();
  sub_207F100(a1: v23, a2: v24, a3: v31, a4: v25, a5: v30, a6: v29);
  return 0;
}
