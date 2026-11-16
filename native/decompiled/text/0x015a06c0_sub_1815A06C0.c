// sub_1815A06C0
// rva 0x015a06c0  size 58  section .text  group text
// window base 0x1815a06c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A06C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
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
    __builtin_debugtrap();
    return sub_1815A0700();
  }
  else
  {
    v5 = *(unsigned int *)(a3 + 4);
    v6 = v3 + 8 * v5;
    if ( (_DWORD)v5 == 47076751 )
      result = v3;
    else
      result = v3 + 8 * v5;
    if ( *(int *)(v4 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: v6);
  }
  return result;
}
