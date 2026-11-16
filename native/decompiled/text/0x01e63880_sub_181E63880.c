// sub_181E63880
// rva 0x01e63880  size 198  section .text  group text
// window base 0x181e63880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E63880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    v15 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a6 != v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v16 = a6;
      v17 = a5;
      v15 = a3;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 40451336);
      a5 = v17;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 40451336;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      v16 = a6;
      v15 = a3;
    }
    *(_QWORD *)(v8 + 8) = a5;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v6 + 376650988);
    v17 = a5;
    v14 = v8;
    result = sub_181E617E0(a1, a2, a3: (_DWORD *)v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v11, a2: v12, a3: v10, a4: v14);
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_181E63960();
}
