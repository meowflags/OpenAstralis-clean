// sub_1815A4560
// rva 0x015a4560  size 57  section .text  group text
// window base 0x1815a4560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A4560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A45A0();
  }
  else
  {
    v9 = a3;
    sub_1815A45A0();
    v6 = v9;
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v4, a2: v5, a3: v9);
    return *(int *)(v6 + 20);
  }
}
