// sub_19329B540
// rva 0x1329b540  size 38  section .text  group text
// window base 0x19329b540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329B540()
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
    return sub_19329B580();
  }
  else if ( *(int *)(v0 + 16) <= 0 )
  {
    return MEMORY[0x18277F280]();
  }
  return result;
}
