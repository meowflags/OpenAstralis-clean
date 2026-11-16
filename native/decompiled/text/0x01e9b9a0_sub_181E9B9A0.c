// sub_181E9B9A0
// rva 0x01e9b9a0  size 341  section .text  group text
// window base 0x181e9b9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9B9A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  int v21; // [rsp+14h] [rbp-14h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a5;
    v22 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
LABEL_15:
    v23 = a5;
    v22 = a3;
    MEMORY[0x182771080]();
    goto LABEL_16;
  }
  v8 = *(unsigned int *)(v7 + 72);
  if ( (_DWORD)v8 != 0 )
  {
    v9 = *(unsigned int *)(v6 + 8 * v8 + 72);
    if ( (_DWORD)v9 != 0 )
      v10 = v6 + 8 * v9;
    else
      v10 = v6 + 8 * v8;
  }
  else
  {
    v10 = v6;
  }
  if ( v10 == v6 )
    goto LABEL_15;
  v11 = *(unsigned int *)(v10 + 12);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_16:
    v23 = a5;
    v22 = a3;
    MEMORY[0x182771080]();
    goto LABEL_17;
  }
  v12 = *(_DWORD *)(v6 + 8 * v11 + 28);
  v13 = *(unsigned int *)(v10 + 12);
  if ( (_DWORD)v13 == 0 )
  {
LABEL_17:
    v23 = a5;
    v22 = a3;
    MEMORY[0x182771080]();
    goto LABEL_18;
  }
  v21 = v12;
  v20 = v10;
  *(_DWORD *)(v6 + 8 * v13 + 28) = 657;
  __faststorefence();
  v22 = a3;
  v23 = a5;
  result = sub_181E9B8E0(a1, a2, a3, a4: v10, a5, a6);
  v15 = *(unsigned int *)(v20 + 12);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_18:
    MEMORY[0x182771080]();
    MEMORY[0x182771080](a1: v17, a2: v18, a3: v22, a4: v16, a5: v23);
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
    return sub_181E9BB00();
  }
  *(_DWORD *)(v6 + 8 * v15 + 28) = v21;
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
