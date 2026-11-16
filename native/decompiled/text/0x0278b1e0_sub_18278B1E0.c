// sub_18278B1E0
// rva 0x0278b1e0  size 82  section .text  group text
// window base 0x18278b1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278B1E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // r8
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v15 + 8) )
  {
    v24 = a3;
    *(double *)a5.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v16 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_6:
    sub_182771080(
      a1,
      a2,
      a3,
      a4,
      a5: v16,
      a6: a14,
      a7: a5,
      a8: a6,
      a9: a7,
      a10: a8,
      a11: a9,
      a12: a10,
      a13: a11,
      a14: a12,
      a15: v23);
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
    return sub_18278B240();
  }
  v17 = v14 + 8 * *(_DWORD *)(a3 + 8);
  v24 = a3;
  result = sub_18278EA80(a1, a2, a3: v14 + 8 * (int)v16, a4, a5: v17, a6: a14, a7: v23);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_18277F280(a1: v21, a2: v22, a3: v19, a4: v20);
  return result;
}
