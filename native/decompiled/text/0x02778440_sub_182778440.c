// sub_182778440
// rva 0x02778440  size 40  section .text  group text
// window base 0x182778440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182778440(
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
        __m128 a14)
{
  _QWORD *v14; // r14
  __int64 v15; // r15
  char *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __m128 v28; // xmm6
  __m128 v29; // xmm7
  _QWORD *v30; // rdx
  __int64 (*v31)(void); // rcx
  char vars0; // [rsp+8h] [rbp+0h] BYREF
  char *vars8; // [rsp+10h] [rbp+8h]
  _QWORD *vars10; // [rsp+18h] [rbp+10h]

  v16 = &vars0;
  if ( (unsigned __int64)&vars0 <= *(_QWORD *)(v15 + 8) )
  {
    vars8 = &vars0;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
  }
  else if ( (_QWORD *)a3 != v14 )
  {
    vars8 = &vars0;
    vars10 = (_QWORD *)a3;
    MEMORY[0x18635E6C0](a1, a2, a3, a4, a5: 0);
    v16 = vars8;
    v30 = vars10;
    goto LABEL_4;
  }
  vars8 = &vars0;
  v22 = sub_18276BEE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
LABEL_4:
  if ( v30 == v14 )
  {
    vars8 = v16;
    sub_182771080(
      a1: v18,
      a2: v19,
      a3: (__int64)v30,
      a4: v17,
      a5: v20,
      a6: v21,
      a7: (__m128)v22.m128i_i128,
      a8: v23,
      a9: v24,
      a10: v25,
      a11: v26,
      a12: v27,
      a13: v28,
      a14: v29,
      a15: vars0);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827784E0();
  }
  else
  {
    v31 = (__int64 (*)(void))v30[5];
    v30[5] = 0;
    v30[4] = 0;
    v30[6] = 0;
    vars10 = v31;
    return v31();
  }
}
