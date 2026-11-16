// sub_502F4C0
// rva 0x0502f4c0  size 56  section .text  group text
// window base 0x18502f4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502F4C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v6 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v6[2] = a3;
  result = sub_2779340(a1, a2, a3: 0, a4, a5: a3);
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
