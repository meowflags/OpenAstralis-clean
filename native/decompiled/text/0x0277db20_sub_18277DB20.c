// sub_18277DB20
// rva 0x0277db20  size 141  section .text  group text
// window base 0x18277db20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277DB20(
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
        __int64 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // edx
  int v28; // ecx
  int v29; // edi
  int v30; // esi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // [rsp+0h] [rbp-28h] BYREF
  __int64 v34; // [rsp+10h] [rbp-18h]
  __int64 v35; // [rsp+18h] [rbp-10h]
  __int64 v36; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v16 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18277DBC0(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32, a7: a15);
  }
  else
  {
    v17 = *(unsigned int *)(v16 + 72);
    if ( (_DWORD)v17 != 0 )
    {
      v18 = *(unsigned int *)(v15 + 8 * v17 + 72);
      if ( (_DWORD)v18 != 0 )
        v19 = v15 + 8 * v18;
      else
        v19 = v15 + 8 * v17;
    }
    else
    {
      v19 = v15;
    }
    v34 = a13;
    v36 = a3;
    v35 = sub_18277AE40(
            a1,
            a2,
            a3: v19,
            a4: v19,
            a5: a3,
            a6: a14,
            a7: a4,
            a8: a5,
            a9: a6,
            a10: a7,
            a11: a8,
            a12: a9,
            a13: a10,
            a14: a11);
    result = sub_182773240(a1: v21, a2: v22, a3: v35, a4: v20, a5: 0, a6: v34);
    if ( *(int *)(v16 + 16) <= 0 )
      return sub_18277F280(a1: v25, a2: v26, a3: v24);
  }
  return result;
}
