// sub_182779760
// rva 0x02779760  size 150  section .text  group text
// window base 0x182779760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779760(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 result; // rax
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  __int64 v25; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a3.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v17 = *(unsigned int *)(v16 + 72);
  v18 = v15 + 8 * v17;
  if ( (_DWORD)v17 != 0 )
  {
    if ( *(_DWORD *)(v15 + 8 * v17 + 72) != 0 )
    {
      v19 = *(unsigned int *)(v15 + 8 * v17 + 40);
      if ( (_DWORD)v19 != 0 )
      {
        v25 = v18;
        v24 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v14
                                                                 + *(_QWORD *)(v15
                                                                             + 8LL * (*(_DWORD *)(v15 + 8 * v19) >> 3)
                                                                             + 120)))(
                a1,
                a2,
                a3: v15 + 8 * v19);
        result = (unsigned int)MEMORY[0x18635ECE0](a1: v20, a2: v21, a3: v24) != 0;
        goto LABEL_6;
      }
LABEL_12:
      sub_182771080(
        a1,
        a2,
        a3: v19,
        a4: v18,
        a5: a13,
        a6: a14,
        a7: a3,
        a8: a4,
        a9: a5,
        a10: a6,
        a11: a7,
        a12: a8,
        a13: a9,
        a14: a10,
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
      return sub_182779800();
    }
    result = 0;
    v25 = v15 + 8 * v17;
  }
  else
  {
    result = 0;
    v25 = v15 + 8 * v17;
  }
LABEL_6:
  if ( *(int *)(v16 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3: v17);
  return result;
}
