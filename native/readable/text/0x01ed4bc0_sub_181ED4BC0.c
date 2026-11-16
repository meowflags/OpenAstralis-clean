// sub_1ED4BC0
// rva 0x01ed4bc0  size 45  section .text  group text
// window base 0x181ed4bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED4BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v12);
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
    return sub_1ED4C00(a1: v10, a2: v11, a3: v9);
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return v6 + 8LL * *(unsigned int *)(a3 + 4);
  }
}
