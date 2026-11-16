// sub_18159A1A0
// rva 0x0159a1a0  size 198  section .text  group text
// window base 0x18159a1a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159A1A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 result; // rax
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+10h] [rbp-28h]
  __int64 v29; // [rsp+18h] [rbp-20h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+28h] [rbp-10h]
  int v32; // [rsp+30h] [rbp-8h]
  int v33; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    v33 = a2;
    v32 = a1;
    v31 = a6;
    v29 = a3;
    MEMORY[0x181EB83C0]();
  }
  else if ( a5 != v6 )
  {
    v33 = a2;
    v32 = a1;
    v31 = a6;
    v30 = a5;
    v29 = a3;
    v28 = v6 + 376612120;
    v8 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v6 + 369643568, a5: v6 + 369643568);
    v12 = MEMORY[0x182084BC0](a1: v10, a2: v11, a3: v8, a4: v9, a5: v7);
    v16 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v12, a4: v13, a5: v6 + 372437504);
    MEMORY[0x182084180](a1: v18, a2: v19, a3: v16, a4: v17, a5: 1);
    sub_18159CD00(a1: v21, a2: v22, a3: v28, a4: v20, a5: v7);
    result = MEMORY[0x182084180](a1: v24, a2: v25, a3: v28, a4: v23, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276EFE0]();
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
  return sub_18159A280();
}
