// sub_2786160
// rva 0x02786160  size 77  section .text  group text
// window base 0x182786160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2786160(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD v15[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB83C0();
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
    return sub_27861C0();
  }
  else if ( *(_QWORD *)(v8 + 376613408) != 0 )
  {
    v15[2] = a3;
    sub_278AE00(a1, a2, a3: 3000);
    result = sub_278B0A0();
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v13, a2: v14, a3: v11, a4: v12);
  }
  else
  {
    return sub_182786196(a1, a2, a3, a4, a5, a6, a7, a8);
  }
  return result;
}
