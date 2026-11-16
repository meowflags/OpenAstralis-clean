// sub_181E99CA0
// rva 0x01e99ca0  size 45  section .text  group text
// window base 0x181e99ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E99CA0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r15
  double v8; // xmm0_8
  char v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    v8 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v9);
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
    return sub_181E99CE0(a1: v8);
  }
  else
  {
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
}
