// sub_181E61A20
// rva 0x01e61a20  size 294  section .text  group text
// window base 0x181e61a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E61A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v20[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+18h] [rbp-10h]
  unsigned int v22; // [rsp+20h] [rbp-8h]
  unsigned int v23; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v20 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a6;
    v22 = a5;
    v21 = a3;
    v9 = (_DWORD *)MEMORY[0x181EB84E0]();
LABEL_11:
    MEMORY[0x18276FC00](a1: v11, a2: v12, a3: v9, a4: v21, a5: v6 + 8521346, a6: v23);
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
    return sub_181E61B60(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19);
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v23 = a6;
    v22 = a5;
    v21 = a3;
    v8 = MEMORY[0x181EAA920](a1: v8, a2, a3: 40450576);
    a5 = v22;
    a3 = v21;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 24;
    *(_DWORD *)v8 = 40450576;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    v23 = a6;
  }
  *(_DWORD *)(v8 + 8) = a5;
  *(_DWORD *)(v8 + 4) = (unsigned __int64)(a3 - (_QWORD)v6) >> 3;
  v21 = a3;
  v22 = a5;
  v9 = (_DWORD *)sub_181E61720(a1: a5, a2, a3, a4: a3, a5: v6 + 8524030, a6: v8);
  if ( v9 != v6 && *v9 >> 3 != 4260673 )
    goto LABEL_11;
  v20[2] = v9;
  result = MEMORY[0x181E65120](a1: v11, a2: v12, a3: v9, a4: v10, a5: v23);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
