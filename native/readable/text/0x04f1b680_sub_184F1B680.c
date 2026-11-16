// sub_4F1B680
// rva 0x04f1b680  size 77  section .text  group text
// window base 0x184f1b680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1B680(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F1B6E0();
  }
  else
  {
    if ( a5 == v6 )
      v8 = v6 + 353301280;
    else
      v8 = a5;
    v12 = a5;
    v11 = a3;
    result = sub_4F1C8C0(a1, a2, a3, a4: a3, a5: v8, a6, a7: v10);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
