// sub_1815A5860
// rva 0x015a5860  size 79  section .text  group text
// window base 0x1815a5860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A5860(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A58C0();
  }
  else
  {
    if ( *(_DWORD *)(a3 + 36) != 0 )
    {
      v10 = a3;
      sub_1815A4C20(a1, a2, a3, a4, a5, a6, a7: v9);
      v7 = *(_DWORD *)(v10 + 36);
    }
    else
    {
      v7 = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = MEMORY[0x18277F280]();
    return v7 == 0;
  }
}
