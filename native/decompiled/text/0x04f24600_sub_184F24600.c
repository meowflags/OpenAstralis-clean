// sub_184F24600
// rva 0x04f24600  size 51  section .text  group text
// window base 0x184f24600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int16 v4; // ax
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
    __builtin_debugtrap();
    return sub_184F24640();
  }
  else
  {
    v6[2] = a3;
    v4 = sub_184F24780();
    if ( *(int *)(v3 + 16) <= 0 )
      return (unsigned int)(__int16)MEMORY[0x18277F280]();
    return (unsigned int)v4;
  }
}
