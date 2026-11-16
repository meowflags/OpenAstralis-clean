// sub_184F24DA0
// rva 0x04f24da0  size 55  section .text  group text
// window base 0x184f24da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F24DE0(a1: v9, a2: v10, a3: v7, a4: v8, a5: v11);
  }
  else
  {
    v12[1] = a3;
    v13 = a5;
    result = sub_184F23900(a1, a2, a3, a4: a5, a5);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
