// sub_181E64300
// rva 0x01e64300  size 363  section .text  group text
// window base 0x181e64300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  unsigned int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a5;
    v16 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a6 != v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v17 = a6;
      v19 = a5;
      v16 = a3;
      v8 = MEMORY[0x181EAA920](a1: v8, a2, a3: 40451336);
      a6 = v17;
      a5 = v19;
      a3 = v16;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 40451336;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    *(_QWORD *)(v8 + 8) = a5;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v6 + 376650988);
    v9 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v15 = v8;
      v17 = a6;
      v19 = a5;
      v16 = a3;
      v9 = MEMORY[0x181EAA920](a1: v8, a2, a3: 40452352);
      v8 = v15;
      a6 = v17;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 24;
      *(_DWORD *)v9 = 40452352;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v19 = a5;
      v16 = a3;
    }
    v10 = (unsigned int)*(char *)(a6 + 69);
    *(_DWORD *)(v9 + 8) = v10;
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(v8 - v6) >> 3;
    v17 = a6;
    v15 = v8;
    v18 = v10;
    result = sub_181E61720(a1: (unsigned int)v10, a2, a3: v8, a4: v10, a5: v6 + 34085496, a6: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v15, a2: v13, a3: v12, a4: v18);
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
  return sub_181E64480();
}
