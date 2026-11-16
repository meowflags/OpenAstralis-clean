// sub_18502F3C0
// rva 0x0502f3c0  size 52  section .text  group text
// window base 0x18502f3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502F3C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = *(unsigned __int8 *)(a3 + 100);
  if ( *(_BYTE *)(a3 + 100) != 0 )
  {
    *(_BYTE *)(a3 + 100) = 0;
    __faststorefence();
  }
  if ( *(int *)(v3 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
