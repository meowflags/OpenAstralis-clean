// sub_181EB2CA0
// rva 0x01eb2ca0  size 334  section .text  group text
// window base 0x181eb2ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB2CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  int v29; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
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
    return sub_181EB2E00(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 12);
    v10 = (unsigned int)(v9 + 128);
    if ( (unsigned int)v10 >= 0x100 )
    {
      v11 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v29 = *(_DWORD *)(a3 + 12);
        v28 = a3;
        v11 = sub_181EAA920(a1, a2, a3: 34086464);
        v9 = v29;
        a3 = v28;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v11 + 16;
        *(_DWORD *)v11 = 34086464;
        *(_DWORD *)(v11 + 4) = 0;
        *(_QWORD *)(v11 + 8) = 0;
      }
      *(_DWORD *)(v11 + 4) = v9;
    }
    else
    {
      v11 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v10 + 376353204);
    }
    v12 = *(_QWORD *)(v8 + 40);
    v13 = v12 + 24;
    if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v27 = v11;
      v28 = a3;
      v12 = sub_181EAA840(a1: v13, a2, a3: 34084944, a4, a5: 2u);
      v11 = v27;
      a3 = v28;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13;
      *(_QWORD *)v12 = 34084944;
      *(_DWORD *)(v12 + 8) = 2;
      *(_DWORD *)(v12 + 12) = 0;
      *(_QWORD *)(v12 + 16) = 0;
    }
    *(_DWORD *)(v12 + 16) = (unsigned __int64)(v11 - v7) >> 3;
    *(_DWORD *)(v12 + 12) = *(_DWORD *)(a3 + 4);
    v28 = a3;
    v27 = v12;
    result = MEMORY[0x18631FE80](a1: 1, a2, a3: v12, a4, a5: 0, a6: 2);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v27);
  }
  return result;
}
