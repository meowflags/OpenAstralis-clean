// sub_185028FE0
// rva 0x05028fe0  size 57  section .text  group text
// window base 0x185028fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185028FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( a5 == v5 )
    result = v5 + 377209408;
  else
    result = v5 + 8LL * *(unsigned int *)(a5 + 40);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
