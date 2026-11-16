// sub_181599940
// rva 0x01599940  size 166  section .text  group text
// window base 0x181599940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181599940(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+2Ch] [rbp-Ch]
  unsigned int v23; // [rsp+30h] [rbp-8h]
  unsigned int v24; // [rsp+34h] [rbp-4h]

  v24 = a1;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return sub_181599A00();
  }
  else
  {
    v23 = a4;
    v22 = a2;
    v21 = a6;
    v20 = a5;
    v19 = v6 + 376612120;
    v8 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120);
    MEMORY[0x182084B80](a1: v10, a2: v11, a3: v8, a4: v9, a5: v21);
    v14 = v24;
    if ( v24 != 0 )
    {
      MEMORY[0x1820846E0](a1: v24, a2: v13, a3: v19, a4: v12, a5: 1);
      sub_18159DE60(a1: v23, a2: v16, a3: v19, a4: v15, a5: v21, a6: v22);
    }
    result = MEMORY[0x1820841E0](a1: v14, a2: v13, a3: v19);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
