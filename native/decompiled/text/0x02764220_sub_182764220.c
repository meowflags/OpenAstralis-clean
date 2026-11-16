// sub_182764220
// rva 0x02764220  size 62  section .text  group text
// window base 0x182764220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182764220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_182764260)();
  }
  else
  {
    v10[2] = a3;
    result = sub_182764260(a1, a2, a3: v4 + 376667760, a4, a5: a3);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_18277F280(a1: v8, a2: v9, a3: v7);
  }
  return result;
}
