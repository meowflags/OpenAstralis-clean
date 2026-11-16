// sub_184F46CC0
// rva 0x04f46cc0  size 56  section .text  group text
// window base 0x184f46cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return *(unsigned __int16 *)(a3 + 4) - (unsigned int)*(unsigned __int16 *)(a5 + 4);
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F46D00();
}
