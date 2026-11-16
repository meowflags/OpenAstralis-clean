// sub_1815950C0
// rva 0x015950c0  size 104  section .text  group text
// window base 0x1815950c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815950C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
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
    return sub_181595140();
  }
  else
  {
    v5 = *(unsigned int *)(v4 + 72);
    if ( (_DWORD)v5 != 0 )
    {
      v6 = *(unsigned int *)(v3 + 8 * v5 + 72);
      if ( (_DWORD)v6 != 0 )
        v7 = v3 + 8 * v6;
      else
        v7 = v3 + 8 * v5;
    }
    else
    {
      v7 = v3;
    }
    v10 = a3;
    MEMORY[0x182778C80](a1, a2, a3: v7, a4: v10, a5: v10);
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
}
