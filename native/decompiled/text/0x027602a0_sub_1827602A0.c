// sub_1827602A0
// rva 0x027602a0  size 57  section .text  group text
// window base 0x1827602a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827602A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  char v20; // [rsp+0h] [rbp-18h] BYREF
  __int64 v21; // [rsp+8h] [rbp-10h]
  __int64 v22; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 > *(_QWORD *)(v8 + 8) )
  {
    v22 = a5;
    v21 = a3;
    v9 = sub_18275B940(a1, a2, a3, a4: a3, a5: v7 + 360883000, a6, a7: v20);
    sub_182769900(a1: v11, a2: v12, a3: v9, a4: v10, a5: &a7);
  }
  MEMORY[0x181EB84E0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1827602E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
}
