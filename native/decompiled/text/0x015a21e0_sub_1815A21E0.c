// sub_1815A21E0
// rva 0x015a21e0  size 48  section .text  group text
// window base 0x1815a21e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A21E0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v3 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A2220(a1: v6, a2: v7, a3: v5);
  }
  else
  {
    v8[2] = a3;
    result = sub_1815A20C0(a1, a2, a3);
    if ( *(int *)(v3 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
