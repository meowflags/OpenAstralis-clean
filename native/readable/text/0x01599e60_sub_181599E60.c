// sub_1599E60
// rva 0x01599e60  size 45  section .text  group text
// window base 0x181599e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1599E60()
{
  __int64 v0; // r15
  __int64 v2; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v2 <= *(_QWORD *)(v0 + 8) )
  {
    sub_1EB83C0();
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
    return sub_1599EA0();
  }
  else
  {
    if ( *(int *)(v0 + 16) <= 0 )
      sub_277F280();
    return 3;
  }
}
