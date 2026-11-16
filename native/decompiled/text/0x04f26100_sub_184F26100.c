// sub_184F26100
// rva 0x04f26100  size 53  section .text  group text
// window base 0x184f26100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F26100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  char v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

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
    return sub_184F26140();
  }
  else
  {
    v9 = a3;
    sub_184F25A20(a1, a2, a3, a4, a5, a6, a7: v8);
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
}
