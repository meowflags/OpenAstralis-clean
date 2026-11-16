// sub_4F40FA0
// rva 0x04f40fa0  size 82  section .text  group text
// window base 0x184f40fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
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
    return sub_4F41000();
  }
  else
  {
    v7[2] = a3;
    if ( (unsigned int)sub_4FF2420(a1, a2, a3: v4 + 350970688, a4, a5: a3) != 0 )
      result = v4 + 35651568;
    else
      result = v4 + 35127280;
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
