// sub_5030B60
// rva 0x05030b60  size 56  section .text  group text
// window base 0x185030b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5030B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v7[2] = a3;
  v7[1] = a5;
  result = sub_2779800();
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
