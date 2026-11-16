// sub_182780680
// rva 0x02780680  size 343  section .text  group text
// window base 0x182780680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  unsigned int *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, __int64, unsigned int *); // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __m128 v32; // xmm6
  __m128 v33; // xmm7
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  void (__fastcall *v37)(__int64, __int64, unsigned int *); // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm2
  __m128 v46; // xmm3
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  __m128 v49; // xmm6
  __m128 v50; // xmm7
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 (__fastcall *v54)(__int64, __int64, unsigned int *); // rax
  __int64 result; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  char v60; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v61; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v60 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a4.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  v17 = v15[94167253];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_8:
    sub_182771080(
      a1,
      a2,
      a3,
      a4: v17,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v60);
    goto LABEL_9;
  }
  v18 = v15[2 * v17] >> 3;
  v19 = v15[2 * v18 + 11] & (0x252u >> HIBYTE(v15[2 * v18 + 11]));
  v20 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v14
                                                              + *(_QWORD *)((char *)&v15[2 * v18 + 6]
                                                                          + HIWORD(v15[2 * v15[2 * v18 + 5] + 3 + v19])));
  v61 = &v15[2 * v17];
  v20(a1, a2: v19, a3: v61);
  v34 = v15[94167254];
  if ( (_DWORD)v34 == 0 )
  {
LABEL_9:
    sub_182771080(
      a1: v22,
      a2: v23,
      a3: v21,
      a4: v34,
      a5: v24,
      a6: v25,
      a7: v26,
      a8: v27,
      a9: v28,
      a10: v29,
      a11: v30,
      a12: v31,
      a13: v32,
      a14: v33,
      a15: v60);
    goto LABEL_10;
  }
  v35 = v15[2 * v34] >> 3;
  v36 = v15[2 * v35 + 11] & (0x252u >> HIBYTE(v15[2 * v35 + 11]));
  v37 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v14
                                                              + *(_QWORD *)((char *)&v15[2 * v35 + 6]
                                                                          + HIWORD(v15[2 * v15[2 * v35 + 5] + 3 + v36])));
  v61 = &v15[2 * v34];
  v37(a1: v22, a2: v36, a3: v61);
  v51 = v15[94167255];
  if ( (_DWORD)v51 == 0 )
  {
LABEL_10:
    sub_182771080(
      a1: v39,
      a2: v40,
      a3: v38,
      a4: v51,
      a5: v41,
      a6: v42,
      a7: v43,
      a8: v44,
      a9: v45,
      a10: v46,
      a11: v47,
      a12: v48,
      a13: v49,
      a14: v50,
      a15: v60);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827807E0();
  }
  v52 = v15[2 * v51] >> 3;
  v53 = v15[2 * v52 + 11] & (0x252u >> HIBYTE(v15[2 * v52 + 11]));
  v54 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *))(v14
                                                                 + *(_QWORD *)((char *)&v15[2 * v52 + 6]
                                                                             + HIWORD(v15[2 * v15[2 * v52 + 5] + 3 + v53])));
  v61 = &v15[2 * v51];
  result = v54(a1: v39, a2: v53, a3: v61);
  if ( *(int *)(v16 + 16) <= 0 )
    return sub_18277F280(a1: v58, a2: v59, a3: v56, a4: v57);
  return result;
}
