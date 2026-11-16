// sub_1932C9154
// rva 0x132c9154  size 52  section .text  group text
// window base 0x1932c9154: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9154(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi

  MEMORY[0x796B0](a1, a2, a3, a4: 0);
  MEMORY[0x79560](a1: v6, a2: v7, a3: v5, a4);
  v9 = MEMORY[0x79778](a1: v8);
  return MEMORY[0x79488](a1: v10, a2: v11, a3: 3221226505LL, a4: v9);
}
