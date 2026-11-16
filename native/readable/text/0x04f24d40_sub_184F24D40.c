// sub_4F24D40
// rva 0x04f24d40  size 70  section .text  group text
// window base 0x184f24d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F24D40(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+20h] [rbp-8h]
  unsigned int v10; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_4F24DA0();
  }
  else
  {
    v8[3] = a3;
    v8[2] = a5;
    v10 = a6;
    v9 = a1;
    result = sub_4F239A0(a1, a2, a3, a4: a5, a5, a6);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
