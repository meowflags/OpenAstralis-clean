// sub_18502F400
// rva 0x0502f400  size 45  section .text  group text
// window base 0x18502f400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502F400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = v3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
