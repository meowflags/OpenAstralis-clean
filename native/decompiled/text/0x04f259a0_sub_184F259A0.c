// sub_184F259A0
// rva 0x04f259a0  size 62  section .text  group text
// window base 0x184f259a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F259A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F259E0();
  }
  else
  {
    v7[2] = a5;
    v7[1] = a3;
    result = MEMORY[0x184EBFAE0](a1, a2, a3: a5, a4, a5: a3);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
