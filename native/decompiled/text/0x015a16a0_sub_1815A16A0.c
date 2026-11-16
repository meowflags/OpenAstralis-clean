// sub_1815A16A0
// rva 0x015a16a0  size 70  section .text  group text
// window base 0x1815a16a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A16A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A1700();
  }
  else
  {
    v13 = a5;
    v12[1] = a3;
    v7 = sub_1815A0E80(a1, a2, a3, a4, a5, a6);
    result = MEMORY[0x18578E980](a1: v9, a2: v10, a3: v7, a4: v8, a5: v13);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
