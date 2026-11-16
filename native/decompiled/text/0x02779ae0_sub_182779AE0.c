// sub_182779AE0
// rva 0x02779ae0  size 52  section .text  group text
// window base 0x182779ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  *(_QWORD *)(a3 + 8) = 0;
  *(_BYTE *)(a3 + 20) = 1;
  __faststorefence();
  if ( *(int *)(v3 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3);
  return result;
}
