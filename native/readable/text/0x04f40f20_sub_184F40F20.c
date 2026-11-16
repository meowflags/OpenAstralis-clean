// sub_4F40F20
// rva 0x04f40f20  size 55  section .text  group text
// window base 0x184f40f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40F20(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F40F60();
  }
  else
  {
    if ( a3 != 0 )
      result = v3 + 350970688;
    else
      result = v3 + 361697768;
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
