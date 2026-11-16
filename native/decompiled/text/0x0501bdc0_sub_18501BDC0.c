// sub_18501BDC0
// rva 0x0501bdc0  size 45  section .text  group text
// window base 0x18501bdc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501BDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18501BE00();
  }
  else
  {
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 8);
  }
}
