// sub_184F46FA0
// rva 0x04f46fa0  size 53  section .text  group text
// window base 0x184f46fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46FA0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
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
    return sub_184F46FE0();
  }
  else
  {
    v7[5] = a3;
    v7[4] = a5;
    result = sub_184F46FE0();
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
