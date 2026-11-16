// sub_182764460
// rva 0x02764460  size 109  section .text  group text
// window base 0x182764460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182764460(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v13 <= *(_QWORD *)(v5 + 8) )
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
    return sub_1827644E0();
  }
  else
  {
    v6 = v4 + 8LL * a3[1];
    v7 = v4 + 8LL * a3[2];
    v8 = v4 + 8LL * a3[3];
    v13[4] = a3;
    v13[3] = v6;
    v13[2] = v7;
    v13[1] = v8;
    result = MEMORY[0x18C96A0C0](a1, a2, a3: v6, a4, a5: v7, a6: v8);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_18277F280(a1: v11, a2: v12, a3: v10);
  }
  return result;
}
