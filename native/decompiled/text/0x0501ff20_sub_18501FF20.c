// sub_18501FF20
// rva 0x0501ff20  size 82  section .text  group text
// window base 0x18501ff20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501FF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v4 )
  {
    v6 = *(_DWORD *)(a3 + 8) >> 1;
    v8[2] = a3;
    result = MEMORY[0x186320160](a1: 0, a2, a3, a4, a5: 0, a6: v6);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_18501FF80();
}
