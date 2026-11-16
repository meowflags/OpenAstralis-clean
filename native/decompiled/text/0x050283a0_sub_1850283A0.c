// sub_1850283A0
// rva 0x050283a0  size 45  section .text  group text
// window base 0x1850283a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850283A0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v3 <= *(_QWORD *)(v1 + 8) )
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
    return sub_1850283E0();
  }
  else
  {
    if ( *(int *)(v1 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v0 + 375388672;
  }
}
