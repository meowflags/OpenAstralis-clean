// sub_181E2D220
// rva 0x01e2d220  size 919  section .text  group text
// window base 0x181e2d220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E2D220(
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
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  _BOOL8 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  _BYTE v29[4]; // [rsp+10h] [rbp-108h] BYREF
  int v30; // [rsp+14h] [rbp-104h]
  __int64 v31; // [rsp+20h] [rbp-F8h]
  __int64 v32; // [rsp+28h] [rbp-F0h]
  __int64 v33; // [rsp+30h] [rbp-E8h]
  __m128i v34; // [rsp+40h] [rbp-D8h]
  __m128i m128_i128; // [rsp+50h] [rbp-C8h]
  __m128i v36; // [rsp+60h] [rbp-B8h]
  __m128i v37; // [rsp+70h] [rbp-A8h]
  __m128i v38; // [rsp+80h] [rbp-98h]
  __m128i v39; // [rsp+90h] [rbp-88h]
  __m128i v40; // [rsp+A0h] [rbp-78h]
  __m128i v41; // [rsp+B0h] [rbp-68h]
  __m128i v42; // [rsp+C0h] [rbp-58h]
  __m128i v43; // [rsp+D0h] [rbp-48h]
  _BYTE *v44; // [rsp+E8h] [rbp-30h]
  __int64 **v45; // [rsp+F0h] [rbp-28h]

  v45 = a12;
  v21 = **a12;
  v44 = v29;
  v43 = v20;
  v42 = v19;
  v41 = v18;
  v40 = v17;
  v39 = v16;
  v38 = v15;
  v37 = v14;
  v36 = v13;
  m128_i128 = (__m128i)a10.m128_i128;
  v34 = (__m128i)a9.m128_i128;
  v33 = a1;
  v32 = a2;
  v31 = v12;
  if ( (unsigned int)MEMORY[0x181EB6540](a1, a2, a3: v21, a4: a12, a5: v29) != 0 )
    return 0xFFFFFFFFLL;
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
    MEMORY[0x18277F4A0](a1: v23, a2: v24, a3: 1, a4: v22, a5: 0);
  v25 = *v44 != 0;
  v30 = (char)*v44;
  if ( (unsigned int)MEMORY[0x181EB6A20](a1: v23, a2: v24, a3: v25) != 0 )
    return 0xFFFFFFFFLL;
  if ( (_BYTE)v30 == 0 )
    MEMORY[0x181EB79A0]();
  MEMORY[0x18207F380](a1: v26, a2: v27, a3: v45);
  MEMORY[0x182839080]();
  return 0;
}
