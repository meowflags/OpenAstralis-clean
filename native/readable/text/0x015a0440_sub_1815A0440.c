// sub_15A0440
// rva 0x015a0440  size 134  section .text  group text
// window base 0x1815a0440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0440(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
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
    return sub_15A04E0();
  }
  else
  {
    if ( a5 == v6 )
    {
      v14 = a2;
      v13 = a1;
      v12 = a6;
      v11 = a5;
      v10 = a3;
      result = sub_1596600(a1, a2, a3: a6, a4, a5: a1, a6: a2);
    }
    else
    {
      v10 = a3;
      v11 = a5;
      v12 = a6;
      v13 = a1;
      v14 = a2;
      result = sub_1596780(a1: (unsigned int)a2, a2, a3: a5, a4, a5: a6, a6: a1);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
