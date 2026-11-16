// sub_182757D60
// rva 0x02757d60  size 134  section .text  group text
// window base 0x182757d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182757D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  char *v11; // rax
  char v12; // al
  int v13; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+8h] [rbp-10h]
  __int64 v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182757E00(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    v23 = a5;
    v22 = a3;
    sub_18275A260();
    v11 = *(char **)(v22 + 8);
    if ( v23 == v7 )
      v12 = *v11;
    else
      v12 = v11[v23];
    v13 = v12 != 0;
    if ( *(int *)(v8 + 16) <= 0 )
      v13 = sub_18277F280(a1: v9, a2: v10, a3: v22);
    if ( v13 != 0 )
      JUMPOUT(0x304EA0DC0LL);
    return v7 + 35127280;
  }
}
