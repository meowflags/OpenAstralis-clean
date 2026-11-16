// sub_184F416A0
// rva 0x04f416a0  size 72  section .text  group text
// window base 0x184f416a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F416A0(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  char v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F41700();
  }
  else
  {
    v10 = a3;
    v9 = a5;
    result = sub_184F41F80(a1, a2, a3: a5, a4, a5: 10, a6, a7: v8);
    *(_BYTE *)(v10 + 4) = result;
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
