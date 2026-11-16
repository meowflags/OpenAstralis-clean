// sub_4F49DC0
// rva 0x04f49dc0  size 46  section .text  group text
// window base 0x184f49dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F49DC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v5 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F49E00();
  }
  else
  {
    v5[5] = a3;
    result = sub_4F49E00();
    if ( *(int *)(v3 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
