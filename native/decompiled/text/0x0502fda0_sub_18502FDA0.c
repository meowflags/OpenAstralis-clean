// sub_18502FDA0
// rva 0x0502fda0  size 40  section .text  group text
// window base 0x18502fda0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502FDA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = *(unsigned __int8 *)(a3 + 100);
  if ( *(int *)(v3 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
