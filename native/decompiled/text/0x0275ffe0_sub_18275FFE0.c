// sub_18275FFE0
// rva 0x0275ffe0  size 59  section .text  group text
// window base 0x18275ffe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275FFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182760020();
  }
  else
  {
    v5 = *(__int64 **)(a3 + 8);
    v6 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v6 != 0 )
      result = *(__int64 *)((char *)&v5[v6] + v3);
    else
      result = *v5;
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_18277F280(a1, a2, a3);
  }
  return result;
}
