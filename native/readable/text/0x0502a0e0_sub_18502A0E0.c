// sub_502A0E0
// rva 0x0502a0e0  size 45  section .text  group text
// window base 0x18502a0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502A0E0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v3 <= *(_QWORD *)(v1 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( *(int *)(v1 + 16) <= 0 )
    sub_277F280();
  return v0 + 376668552;
}
