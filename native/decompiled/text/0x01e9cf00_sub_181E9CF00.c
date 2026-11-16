// sub_181E9CF00
// rva 0x01e9cf00  size 62  section .text  group text
// window base 0x181e9cf00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E9CF00(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 result; // rax
  char v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E9CF40();
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    result = *(_QWORD *)(v6 + 376612576);
    if ( result > 0x400000000LL )
      JUMPOUT(0x303D26F29LL);
  }
  return result;
}
