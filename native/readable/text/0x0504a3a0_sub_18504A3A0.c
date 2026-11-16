// sub_504A3A0
// rva 0x0504a3a0  size 45  section .text  group text
// window base 0x18504a3a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A3A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
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
    return sub_504A3E0();
  }
  else
  {
    v5 = *(unsigned int *)(a3 + 4);
    if ( *(int *)(v4 + 16) <= 0 )
      v5 = sub_277F280();
    return v3 + 8 * v5;
  }
}
