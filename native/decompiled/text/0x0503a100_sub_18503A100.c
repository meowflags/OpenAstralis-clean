// sub_18503A100
// rva 0x0503a100  size 56  section .text  group text
// window base 0x18503a100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503A100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503A140();
  }
  else
  {
    v6 = v4 + 8LL * *(unsigned int *)(v5 + 72);
    v8[2] = a3;
    result = sub_18503A080(a1, a2, a3, a4, a5: v6);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
