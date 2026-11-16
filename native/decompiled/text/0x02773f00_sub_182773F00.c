// sub_182773F00
// rva 0x02773f00  size 171  section .text  group text
// window base 0x182773f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773F00(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+18h] [rbp-20h]
  unsigned int v24; // [rsp+24h] [rbp-14h]
  unsigned int v25; // [rsp+28h] [rbp-10h]
  unsigned int v26; // [rsp+2Ch] [rbp-Ch]
  __int64 v27; // [rsp+30h] [rbp-8h]

  v23 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a2;
    v26 = a1;
    v22 = a6;
    v27 = a5;
    MEMORY[0x181EB83C0]();
    goto LABEL_6;
  }
  v27 = a5;
  v22 = a6;
  v26 = a1;
  v25 = a2;
  v8 = sub_1827734E0(a1: (unsigned int)a2, a2, a3: a5, a4, a5: a6, a6: a1);
  v12 = v23;
  if ( v23 == v6 )
  {
LABEL_6:
    sub_18276EFE0(a1: v26, a2: v25, a3: v12, a4: v9, a5: v27, a6: v22, a7: v21);
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
    return sub_182773FC0();
  }
  v24 = v8;
  v13 = MEMORY[0x182083EA0](a1: v10, a2: v11, a3: v6 + 376612120, a4: v9, a5: v8);
  result = MEMORY[0x1820846E0](a1: v15, a2: v16, a3: v13, a4: v14, a5: 2);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v19, a2: v20, a3: v18);
  return result;
}
