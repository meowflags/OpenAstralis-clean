// sub_184F36C20
// rva 0x04f36c20  size 70  section .text  group text
// window base 0x184f36c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F36C20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v16 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F36C80(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15);
  }
  else
  {
    v8 = (__int64 (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 208));
    v16[2] = a3;
    v16[1] = a5;
    result = v8();
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
