// sub_184F46C80
// rva 0x04f46c80  size 45  section .text  group text
// window base 0x184f46c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46C80(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
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
    return sub_184F46CC0();
  }
  else
  {
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (unsigned int)(a3 - a5);
  }
}
