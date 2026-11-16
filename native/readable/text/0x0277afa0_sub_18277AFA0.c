// sub_277AFA0
// rva 0x0277afa0  size 81  section .text  group text
// window base 0x18277afa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277AFA0(
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
  __int64 v14; // r14
  __int64 v15; // r15
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v15 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( *(int *)(v15 + 336) >= 1 )
  {
    if ( a3 == v14 )
    {
LABEL_9:
      sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v17);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_277B000();
    }
    if ( *(int *)(v15 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return *(_QWORD *)(a3 + 56);
  }
  v18 = a3;
  *(double *)a7.m128_u64 = sub_28C1C40(a1, a2, a3: v14 + 368617776);
  goto LABEL_9;
}
