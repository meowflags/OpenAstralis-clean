// sub_1EA52C0
// rva 0x01ea52c0  size 82  section .text  group text
// window base 0x181ea52c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA52C0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  double v8; // xmm0_8
  __int64 v9; // rax
  double v11; // xmm0_8
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v12);
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
    return sub_1EA5320(a1: v11);
  }
  else
  {
    v14 = sub_1E9FCA0(a1, a2, a3: v6 + 376653960, a4, a5, a6);
    v9 = sub_1EA5320(a1: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      v9 = sub_277F280();
    return v14 + v9;
  }
}
