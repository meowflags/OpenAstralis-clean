// sub_277B3E0
// rva 0x0277b3e0  size 134  section .text  group text
// window base 0x18277b3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277B3E0(
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
        __m128 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdx
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v16 + 8) )
  {
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_277B480(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29, a7: a15);
  }
  else
  {
    v33 = a3;
    result = sub_277A040(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    v32 = result;
    if ( result != v15 )
    {
      v23 = *(unsigned int *)(result + 8);
      v31 = v15 + 8 * v23;
      if ( (_DWORD)v23 != 0 )
        sub_2787720(a1: v19, a2: v20, a3: v15 + 8 * v23, a4: v15 + 8 * v23, a5: v21, a6: v22, a7: v30);
      result = sub_2780140(a1: v19, a2: v20, a3: v32);
    }
    if ( *(int *)(v16 + 16) <= 0 )
      return sub_277F280(a1: v19, a2: v20, a3: v18);
  }
  return result;
}
