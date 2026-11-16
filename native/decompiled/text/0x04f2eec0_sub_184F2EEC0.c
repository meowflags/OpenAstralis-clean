// sub_184F2EEC0
// rva 0x04f2eec0  size 80  section .text  group text
// window base 0x184f2eec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2EEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  unsigned int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
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
    return ((__int64 (*)(void))sub_184F2EF20)();
  }
  else
  {
    v15 = a6;
    v14 = a5;
    v13 = a3;
    v7 = sub_184F2FEA0();
    result = sub_184F2EF20(a1: v9, a2: v10, a3: v13, a4: v8, a5: v7, a6: v15);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
