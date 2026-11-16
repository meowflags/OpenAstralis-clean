// JVM_FindClassFromBootLoader
// rva 0x01e2dca0  size 1397  section .text  group text
// window base 0x181e2dca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JVM_FindClassFromBootLoader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+10h] [rbp-108h]

  if ( a4 != 0 )
  {
    MEMORY[0x181EB6D20]();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a4 + 20), 3, 1) != 3 )
      MEMORY[0x18277F4A0](a1: v6, a2: v7, a3: 1, a4: v5, a5: 0);
    v9 = MEMORY[0x18207F5A0](a1: v6, a2: v7, a3: a4, a4: v5, a5: a3);
    MEMORY[0x1828390C0]();
    return v9;
  }
  else
  {
    MEMORY[0x182072560](a1, a2, a3: 2);
    return 0;
  }
}
