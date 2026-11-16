// sub_2762760
// rva 0x02762760  size 55  section .text  group text
// window base 0x182762760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2762760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v4 + 8) )
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
    return sub_27627A0();
  }
  else
  {
    v5 = v3 + 8LL * *(unsigned int *)(a3 + 4);
    v10[2] = a3;
    result = sub_57AAA40(a1, a2, a3: v5);
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280(a1: v8, a2: v9, a3: v7);
  }
  return result;
}
