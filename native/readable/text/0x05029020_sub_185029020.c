// sub_5029020
// rva 0x05029020  size 77  section .text  group text
// window base 0x185029020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v9[4] = a3;
  v9[3] = a5;
  v9[2] = a6;
  v9[1] = a1;
  result = sub_4FD0020(a1, a2, a3: a5, a4, a5: v6);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
