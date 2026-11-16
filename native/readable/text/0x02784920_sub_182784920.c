// sub_2784920
// rva 0x02784920  size 313  section .text  group text
// window base 0x182784920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2784920(
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
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  BOOL v26; // eax
  char v27; // [rsp+0h] [rbp-18h] BYREF
  volatile signed __int32 *v28; // [rsp+8h] [rbp-10h]
  __int64 v29; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a4.m128_u64 = sub_1EB84E0();
    goto LABEL_16;
  }
  v17 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v17 == 47083684 )
  {
    v20 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v20 != 47083684 )
    {
      v18 = v15 + 8 * v20;
      goto LABEL_4;
    }
    v21 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v21 != 0 )
    {
      v29 = v15 + 8 * v20;
      v28 = (volatile signed __int32 *)a3;
      v22 = *(_DWORD *)(v15 + 8 * v21) >> 3;
      v23 = *(unsigned int *)(v15 + 8 * v22 + 44);
      v24 = v15 + 8LL * *(unsigned int *)(v15 + 8 * v22 + 20);
      v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v14
                                                               + *(_QWORD *)(v15
                                                                           + 8 * v22
                                                                           + HIWORD(*(_DWORD *)(v24
                                                                                              + 4LL
                                                                                              * ((unsigned int)v23
                                                                                               & (0x654u >> HIBYTE(*(_DWORD *)(v15 + 8 * v22 + 44))))
                                                                                              + 12)))))(
              a1: v24,
              a2: v23,
              a3: v15 + 8 * v21);
      v25 = (unsigned __int64)v28;
      v26 = __sync_val_compare_and_swap(v28 + 2, 47083684, (unsigned __int64)(v18 - v15) >> 3) == 47083684;
      a3 = *(unsigned int *)v25;
      if ( (a3 & 2) != 0 )
      {
        a2 = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
        a3 = (v25 - a2) >> 9;
        if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + a3 + 0x38) != 0 )
          *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - a2) >> 9) + 0x38) = 0;
      }
      if ( !v26 )
        v18 = v15 + 8LL * *(unsigned int *)(v25 + 8);
      goto LABEL_4;
    }
LABEL_16:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v20,
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
      a15: v27);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2784A60();
  }
  v18 = v15 + 8 * v17;
LABEL_4:
  if ( *(int *)(v16 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4: v18);
  return v18;
}
