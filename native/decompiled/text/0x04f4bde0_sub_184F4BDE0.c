// sub_184F4BDE0
// rva 0x04f4bde0  size 49  section .text  group text
// window base 0x184f4bde0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4BDE0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v5 <= *(_QWORD *)(v3 + 8) )
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
    return sub_184F4BE20();
  }
  else
  {
    v5[5] = a3;
    LOWORD(result) = sub_184F4BE20();
    if ( *(int *)(v3 + 16) <= 0 )
      LOWORD(result) = MEMORY[0x18277F280]();
    return (unsigned __int16)result;
  }
}
