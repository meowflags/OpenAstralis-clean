// sub_1E98360
// rva 0x01e98360  size 119  section .text  group text
// window base 0x181e98360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E98360(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  double v9; // xmm0_8
  char v10; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v9 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v10);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E983E0(a1: v9);
  }
  else
  {
    v6[47082011] = v6[47081604];
    v6[47082012] = sub_1E98300(a1, a2);
    v6[47082013] = sub_1E982C0();
    result = v6[47082017] << 19;
    v6[47082014] = result;
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
