// sub_1815979C0
// rva 0x015979c0  size 95  section .text  group text
// window base 0x1815979c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815979C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+8h] [rbp-10h]
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_181597A20(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  else
  {
    v24 = a5;
    v23 = a3;
    MEMORY[0x184F36F80](a1, a2, a3, a4: a3, a5: v7 + 373054984);
    MEMORY[0x18500AEA0](a1: v10, a2: v11, a3: v23, a4: v9, a5: v24);
    result = MEMORY[0x184F36F80](a1: v13, a2: v14, a3: v23, a4: v12, a5: v7 + 57135224);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
