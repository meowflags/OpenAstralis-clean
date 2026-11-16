// sub_184F181A0
// rva 0x04f181a0  size 38  section .text  group text
// window base 0x184f181a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F181A0()
{
  __int64 v0; // r15
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v2 <= *(_QWORD *)(v0 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F181E0();
  }
  else if ( *(int *)(v0 + 16) <= 0 )
  {
    return MEMORY[0x18277F280]();
  }
  return result;
}
