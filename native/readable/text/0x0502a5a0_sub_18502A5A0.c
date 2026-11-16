// sub_502A5A0
// rva 0x0502a5a0  size 45  section .text  group text
// window base 0x18502a5a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502A5A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( *(int *)(v4 + 16) <= 0 )
    sub_277F280();
  return v3 + 8LL * *(unsigned int *)(a3 + 4);
}
