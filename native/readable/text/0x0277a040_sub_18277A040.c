// sub_277A040
// rva 0x0277a040  size 80  section .text  group text
// window base 0x18277a040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A040(
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
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v15 + 8) )
  {
    v22 = a3;
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a3 != v14 )
  {
    v16 = *(unsigned int *)(a3 + 64);
    if ( (_DWORD)v16 == 0 )
    {
LABEL_8:
      sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v21);
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
      __builtin_debugtrap();
      return sub_277A0A0();
    }
    v22 = a3;
    result = sub_277FE00(a1, a2, a3: v14 + 8 * v16);
    if ( *(int *)(v15 + 16) <= 0 )
      return sub_277F280(a1: v19, a2: v20, a3: v18);
    return result;
  }
  sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v21);
  goto LABEL_8;
}
