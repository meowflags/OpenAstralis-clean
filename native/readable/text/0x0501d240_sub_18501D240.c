// sub_501D240
// rva 0x0501d240  size 62  section .text  group text
// window base 0x18501d240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501D240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-18h] BYREF
  int v8; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_501D280)();
  }
  else
  {
    v7[1] = a3;
    v8 = a5;
    result = sub_501D280(a1, a2, a3, a4: (unsigned int)a5, a5, a6: 0);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
