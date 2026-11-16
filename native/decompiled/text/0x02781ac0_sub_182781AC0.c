// sub_182781AC0
// rva 0x02781ac0  size 205  section .text  group text
// window base 0x182781ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182781AC0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // [rsp+0h] [rbp-28h] BYREF
  __int64 v39; // [rsp+10h] [rbp-18h]
  __int64 v40; // [rsp+18h] [rbp-10h]
  int v41; // [rsp+24h] [rbp-4h]

  v41 = a6;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
  }
  else if ( a5 != v6 )
  {
    v40 = a5;
    v39 = v6 + 376612120;
    v8 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v6 + 366738120, a5: v6 + 366738120);
    v12 = MEMORY[0x182084560](a1: v10, a2: v11, a3: v8, a4: v9, a5: 30);
    v16 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v12, a4: v13, a5: v6 + 372905800);
    MEMORY[0x182084180](a1: v18, a2: v19, a3: v16, a4: v17, a5: 1);
    if ( v41 != 0 )
      v23 = v6 + 376669080;
    else
      v23 = v6 + 376669096;
    MEMORY[0x181E64800](a1: v21, a2: v22, a3: v6 + 376651008, a4: v20, a5: v39, a6: v23);
    result = MEMORY[0x182084180](a1: v25, a2: v26, a3: v39, a4: v24, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v30, a2: v31, a3: v28, a4: v29);
    return result;
  }
  sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v38);
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
  return sub_182781BA0(a1: v34, a2: v35, a3: v32, a4: v33, a5: v36, a6: v37);
}
