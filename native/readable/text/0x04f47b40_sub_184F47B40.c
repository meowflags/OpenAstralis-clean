// sub_4F47B40
// rva 0x04f47b40  size 46  section .text  group text
// window base 0x184f47b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F47B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  _DWORD v8[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v3 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F47B80(a1: v6, a2: v7, a3: v5);
  }
  else
  {
    v8[5] = a3;
    result = sub_4F47B80(a1, a2, a3);
    if ( *(int *)(v3 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
