// sub_15A3860
// rva 0x015a3860  size 48  section .text  group text
// window base 0x1815a3860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A3860(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

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
    return sub_15A38A0();
  }
  else
  {
    v5[2] = a3;
    result = sub_15A3740(a1, a2, a3);
    if ( *(int *)(v3 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
