// sub_2779B20
// rva 0x02779b20  size 70  section .text  group text
// window base 0x182779b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779B20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD v13[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v13 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2779B80();
  }
  else
  {
    v13[2] = a5;
    v8 = (__int64 (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 224));
    v13[1] = a3;
    result = v8();
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v11, a2: v12, a3: v10);
  }
  return result;
}
