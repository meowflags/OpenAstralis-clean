// sub_15A82A0
// rva 0x015a82a0  size 45  section .text  group text
// window base 0x1815a82a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A82A0()
{
  __int64 v0; // r15
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v0 + 8) )
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
    return sub_15A82E0(a1: v4, a2: v5, a3: v2, a4: v3, a5: v6);
  }
  else
  {
    if ( *(int *)(v0 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
}
