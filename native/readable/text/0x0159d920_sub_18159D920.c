// sub_159D920
// rva 0x0159d920  size 77  section .text  group text
// window base 0x18159d920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159D920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[3]; // [rsp+0h] [rbp-18h] BYREF

  v8 = v6 + 376612120;
  if ( (unsigned __int64)v16 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3: v8);
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
    return sub_159D980(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15);
  }
  else
  {
    v16[2] = a5;
    v16[1] = a6;
    result = sub_159D980(a1: 0, a2: 0, a3: v8, a4: a6, a5, a6);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
