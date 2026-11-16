// sub_501D1E0
// rva 0x0501d1e0  size 70  section .text  group text
// window base 0x18501d1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501D1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-18h] BYREF
  int v9; // [rsp+10h] [rbp-8h]
  unsigned int v10; // [rsp+14h] [rbp-4h]

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
    return sub_501D240();
  }
  else
  {
    v8[1] = a3;
    v10 = a5;
    v9 = a6;
    result = sub_501D060(a1: 1, a2, a3, a4: a5, a5, a6);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
