// sub_181E914C0
// rva 0x01e914c0  size 55  section .text  group text
// window base 0x181e914c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E914C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 result; // rax
  double v10; // xmm0_8
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v11);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E91500(a1: v10);
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 376652832);
    v12 = a3;
    result = MEMORY[0x181E78F00](a1, a2, a3, a4, a5: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
