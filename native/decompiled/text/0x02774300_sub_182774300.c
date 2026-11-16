// sub_182774300
// rva 0x02774300  size 74  section .text  group text
// window base 0x182774300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182774300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v14; // [rsp+0h] [rbp-28h]
  int v15; // [rsp+8h] [rbp-20h]

  sub_182773DA0(a1, a2, a3: v6 + 376612120, a4: a5, a5, a6, a7: v14, a8: v15);
  v10 = MEMORY[0x182084840](a1: v8, a2: v9, a3: v6 + 376612120, a4: v7, a5: v6 + 373049720);
  return MEMORY[0x1820841E0](a1: v11, a2: v12, a3: v10);
}
