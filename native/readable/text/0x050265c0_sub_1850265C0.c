// sub_50265C0
// rva 0x050265c0  size 81  section .text  group text
// window base 0x1850265c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50265C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  __int64 v12; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = a6;
    v12 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v12 = a3;
    v11 = a5;
    v10 = a6;
    result = sub_4FA32A0(a1, a2, a3: a5, a4, a5: a6);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  return sub_5026620();
}
