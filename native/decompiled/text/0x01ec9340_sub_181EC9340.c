// sub_181EC9340
// rva 0x01ec9340  size 141  section .text  group text
// window base 0x181ec9340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC9340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+8h] [rbp-20h]
  __int64 v28; // [rsp+10h] [rbp-18h]
  __int64 v29; // [rsp+18h] [rbp-10h]
  __int64 v30; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v26);
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
    return sub_181EC93E0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25);
  }
  else
  {
    v30 = v6 + 52423576;
    v29 = a6;
    v8 = v6 + 8LL * *(unsigned int *)(a5 + 4);
    v28 = a5;
    v27 = MEMORY[0x1827C5940](a1, a2, a3: v8);
    v12 = MEMORY[0x1827CE160](a1: v10, a2: v11, a3: v6 + 376659688, a4: v9, a5: v27, a6: 0);
    v13 = v30;
    v30 = v12;
    result = MEMORY[0x182853620](a1: v15, a2: v16, a3: v13, a4: v14, a5: v12, a6: v29);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v18, a2: v19, a3: v27, a4: v30);
  }
  return result;
}
