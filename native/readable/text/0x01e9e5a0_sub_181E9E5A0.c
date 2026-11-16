// sub_1E9E5A0
// rva 0x01e9e5a0  size 63  section .text  group text
// window base 0x181e9e5a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9E5A0(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  double v8; // xmm0_8
  char v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    v8 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    return sub_1E9E5E0(a1: v8);
  }
  else
  {
    v10 = a3;
    v12 = a5;
    v11 = a6;
    result = sub_1E785E0();
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
