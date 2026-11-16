// sub_181591700
// rva 0x01591700  size 183  section .text  group text
// window base 0x181591700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181591700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi

  *(_DWORD *)(v7 + 324) = 1;
  __faststorefence();
  *(_QWORD *)(v7 + 8) = 1;
  *(_DWORD *)(v7 + 320) = 2130640638;
  if ( MEMORY[0x1820825E0](a1: v6, a2, a3: v6 + 376612056) != v6 )
  {
    sub_18159D980(a1: 0, a2: 1, a3: v6 + 376612120, a4: v6 + 376612120, a5: a3, a6: a5);
    v13 = MEMORY[0x182084840](a1: v11, a2: v12, a3: v6 + 376612120, a4: v10, a5: a6);
    MEMORY[0x1820841E0](a1: v14, a2: v15, a3: v13);
  }
  return MEMORY[0x1820835E0](a1: v8, a2: v9, a3: v6 + 376612056);
}
