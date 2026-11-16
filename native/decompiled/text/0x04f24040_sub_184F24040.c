// sub_184F24040
// rva 0x04f24040  size 56  section .text  group text
// window base 0x184f24040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24040(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r15
  int v7; // eax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
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
    return sub_184F24080();
  }
  else
  {
    v10 = a3;
    v7 = sub_184F24680(a1, a2, a3, a4, a5, a6, a7: v9);
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = MEMORY[0x18277F280]();
    return v7 != 0;
  }
}
