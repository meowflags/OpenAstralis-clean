// sub_184F422E0
// rva 0x04f422e0  size 52  section .text  group text
// window base 0x184f422e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F422E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // eax
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v6 <= *(_QWORD *)(v3 + 8) )
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
    return sub_184F42320();
  }
  else
  {
    v4 = *(char *)(a3 + 4);
    v6[2] = a3;
    result = MEMORY[0x184F8C700](a1, a2, a3: v4);
    if ( *(int *)(v3 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
