// sub_18277B000
// rva 0x0277b000  size 166  section .text  group text
// window base 0x18277b000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277B000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __m128 v34; // xmm6
  __m128 v35; // xmm7
  char v36; // [rsp+0h] [rbp-68h] BYREF

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v18 + 8) )
  {
    *(double *)v22.m128_u64 = MEMORY[0x181EB83C0]();
    sub_18276E7E0(
      a1: v25,
      a2: v26,
      a3: v23,
      a4: v24,
      a5: v27,
      a6: v28,
      a7: v22,
      a8: v29,
      a9: v30,
      a10: v31,
      a11: v32,
      a12: v33,
      a13: v34,
      a14: v35,
      a15: v36);
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
    return sub_18277B0C0();
  }
  else
  {
    v19 = MEMORY[0x10E44B68];
    if ( MEMORY[0x10E44B68] != 0 )
    {
      v20 = (MEMORY[0x10E44B68] + 172031LL) / MEMORY[0x10E44B68];
      if ( *(int *)(v18 + 16) <= 0 )
        v20 = sub_18277F280(a1, a2, a3: (MEMORY[0x10E44B68] + 172031LL) % MEMORY[0x10E44B68]);
      return v19 * v20;
    }
    else
    {
      return sub_18277B04B(
               a1,
               a2,
               a3: 283396968,
               a4: 0,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18);
    }
  }
}
