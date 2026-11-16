// sub_182777AE0
// rva 0x02777ae0  size 237  section .text  group text
// window base 0x182777ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_182777AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r9
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm7
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    v24 = a3;
    result = (_DWORD *)MEMORY[0x181EB84E0]();
    goto LABEL_9;
  }
  if ( (_DWORD *)a3 == v8 )
    return (_DWORD *)sub_182777B41(a1, a2, a3, a4, a5, a6, a7, a8);
  v24 = a3;
  result = (_DWORD *)MEMORY[0x18AF110A0](a1, a2, a3: v8 + 94167086, a4, a5: a3, a6: v8);
  if ( result != v8 )
  {
    v11 = *result >> 3;
    if ( (_DWORD)v11 != 4288481 )
    {
LABEL_9:
      sub_18276FC00(
        a1: v12,
        a2: v13,
        a3: result,
        a4: v24,
        a5: v8 + 8576962,
        a6: v14,
        a7: v15,
        a8: v16,
        a9: v17,
        a10: v18,
        a11: v19,
        a12: v20,
        a13: v21,
        a14: v22,
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return (_DWORD *)sub_182777BE0();
    }
  }
  if ( result == v8 )
    JUMPOUT(0x182777B59LL);
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)sub_18277F280(a1: v12, a2: v13, a3: v11);
  return result;
}
