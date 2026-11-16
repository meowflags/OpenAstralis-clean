// sub_181E99BC0
// rva 0x01e99bc0  size 198  section .text  group text
// window base 0x181e99bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E99BC0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+8h] [rbp-30h]
  __int64 v24; // [rsp+10h] [rbp-28h]
  __int64 v25; // [rsp+18h] [rbp-20h]
  BOOL v26; // [rsp+24h] [rbp-14h]
  __int64 v27; // [rsp+28h] [rbp-10h]
  int v28; // [rsp+30h] [rbp-8h]
  int v29; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    v29 = a2;
    v28 = a1;
    v27 = a6;
    v24 = a3;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v22);
  }
  else if ( a5 != v6 )
  {
    v29 = a2;
    v28 = a1;
    v27 = a6;
    v25 = a5;
    v24 = a3;
    v23 = v6 + 376612120;
    v8 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v6 + 370216688, a5: v6 + 370216688);
    MEMORY[0x182084180](a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    v26 = v29 == 1;
    sub_181E9AC40(a1: v13, a2: v14, a3: v6 + 376613784, a4: v12, a5: v23, a6: v29 == 1);
    result = MEMORY[0x182084180](a1: v16, a2: v17, a3: v23, a4: v15, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v20, a2: v21, a3: v19, a4: v26);
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
  return sub_181E99CA0();
}
