// sub_1827879E0
// rva 0x027879e0  size 62  section .text  group text
// window base 0x1827879e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827879E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_182787A20)();
  }
  else
  {
    v12[2] = a3;
    v4 = sub_18278AC40(a1, a2, a3: 0);
    result = sub_182787A20(a1: v5, a2: v6, a3: v4);
    if ( *(int *)(v3 + 16) <= 0 )
      return sub_18277F280(a1: v10, a2: v11, a3: v8, a4: v9);
  }
  return result;
}
