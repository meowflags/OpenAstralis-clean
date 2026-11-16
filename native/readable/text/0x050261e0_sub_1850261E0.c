// sub_50261E0
// rva 0x050261e0  size 60  section .text  group text
// window base 0x1850261e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50261E0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v3 <= *(_QWORD *)(v1 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5026220();
  }
  else
  {
    result = __sync_val_compare_and_swap((volatile signed __int8 *)(v0 + 377210892), 0, 1) == 0;
    if ( *(int *)(v1 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
