// sub_1827860C0
// rva 0x027860c0  size 158  section .text  group text
// window base 0x1827860c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827860C0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v17; // [rsp+34h] [rbp-4h]

  *(_DWORD *)(v1 + 324) = 1;
  __faststorefence();
  *(_QWORD *)(v1 + 8) = 1;
  *(_DWORD *)(v1 + 320) = 2130640638;
  v17 = MEMORY[0x10E441F0]();
  MEMORY[0x182084840](a1: v2, a2: v3, a3: v0 + 376612880, a4: v0 + 376612880, a5: v0 + 367119432);
  v7 = MEMORY[0x182084840](a1: v5, a2: v6, a3: v0 + 376612880, a4: v4, a5: v0 + 372920920);
  v11 = MEMORY[0x182084040](a1: v9, a2: v10, a3: v7, a4: v8, a5: v17);
  MEMORY[0x1820841E0](a1: v12, a2: v13, a3: v11);
  return MEMORY[0x1820835E0](a1: v14, a2: v15, a3: v0 + 376612056);
}
