// sub_181E9E560
// rva 0x01e9e560  size 45  section .text  group text
// window base 0x181e9e560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9E560(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  double v9; // xmm0_8
  char v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v9 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v10);
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
    return sub_181E9E5A0(a1: v9);
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v6 + 352628864;
  }
}
