// sub_185035240
// rva 0x05035240  size 45  section .text  group text
// window base 0x185035240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185035240()
{
  __int64 v0; // r15
  __int64 v2; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v2 <= *(_QWORD *)(v0 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( *(int *)(v0 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 0;
}
