// sub_184F47F80
// rva 0x04f47f80  size 56  section .text  group text
// window base 0x184f47f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F47F80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
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
    return sub_184F47FC0();
  }
  else
  {
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280]();
    if ( (a3 & 0xFFFF0000) != 0 )
      JUMPOUT(0x309E5DFA4LL);
    return 1;
  }
}
