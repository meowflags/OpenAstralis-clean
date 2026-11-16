// sub_184F24080
// rva 0x04f24080  size 51  section .text  group text
// window base 0x184f24080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24080(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r15
  char v7; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
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
    return sub_184F240C0(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v14);
  }
  else
  {
    v16 = a3;
    v7 = sub_184F24680(a1, a2, a3, a4, a5, a6, a7: v15);
    if ( *(int *)(v6 + 16) <= 0 )
      return (unsigned int)(char)MEMORY[0x18277F280]();
    return (unsigned int)v7;
  }
}
