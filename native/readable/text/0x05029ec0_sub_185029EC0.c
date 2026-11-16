// sub_5029EC0
// rva 0x05029ec0  size 49  section .text  group text
// window base 0x185029ec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029EC0(__int16 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = 2 * a6;
  *(_WORD *)(a5 + result + 12) = a1;
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
