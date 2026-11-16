// sub_2778BA0
// rva 0x02778ba0  size 205  section .text  group text
// window base 0x182778ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778BA0(
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
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+8h] [rbp-10h]
  __int64 v23; // [rsp+10h] [rbp-8h]

  v23 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a3 != v14 )
  {
    if ( *(_DWORD *)(a3 + 116) != 0 )
      result = sub_1EEFB40();
    else
      result = sub_5048900();
    if ( result == v14 )
    {
      v22 = result;
      sub_50327A0();
      result = v22;
    }
    if ( result == v14 )
    {
      v20 = v23;
      while ( 1 )
      {
        if ( *(_DWORD *)(v20 + 116) != 0 )
          result = sub_1EEFB40();
        else
          result = sub_5048900(a1: v18, a2: v19, a3: v23);
        if ( result == v14 )
        {
          v22 = result;
          sub_50327A0();
          result = v22;
        }
        if ( result != v14 )
          break;
        v20 = v23;
        if ( *(int *)(v15 + 16) <= 0 )
          sub_277F280(a1: v18, a2: v19, a3: v23);
      }
    }
    if ( *(int *)(v15 + 16) <= 0 )
      return sub_277F280(a1: v18, a2: v19, a3: v17);
    return result;
  }
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2778C80();
}
