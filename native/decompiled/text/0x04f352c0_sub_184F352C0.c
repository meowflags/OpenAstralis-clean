// sub_184F352C0
// rva 0x04f352c0  size 396  section .text  group text
// window base 0x184f352c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F352C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  int v23; // [rsp+18h] [rbp-10h]
  unsigned int v24; // [rsp+1Ch] [rbp-Ch]
  int v25; // [rsp+20h] [rbp-8h]
  int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_16;
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_16:
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
    return sub_184F35460(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  v10 = *(unsigned int *)(v7 + 8 * v9 + 4);
  v11 = *(_DWORD *)(v7 + 8 * v9 + 8);
  if ( *(_BYTE *)(v7 + 8 * v9 + 12) != 0 )
  {
    v12 = *(_QWORD *)(v8 + 40);
    v13 = v12 + 32;
    if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v8 + 32) )
    {
      v26 = *(char *)(v7 + 8 * v9 + 12);
      v25 = v11;
      v24 = v10;
      v23 = v9;
      v22 = a3;
      v12 = MEMORY[0x181EAA920](a1: v13, a2: 43284472, a3: 43284472);
      v11 = v25;
      v10 = v24;
      a3 = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13;
      *(_DWORD *)v12 = 43284472;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
    }
    *(_DWORD *)(v12 + 16) = 16464;
    *(_DWORD *)(v12 + 12) = v11;
    *(_DWORD *)(v12 + 4) = v10;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 40);
    v13 = v12 + 32;
    if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v8 + 32) )
    {
      v26 = *(char *)(v7 + 8 * v9 + 12);
      v25 = v11;
      v24 = v10;
      v23 = v9;
      v22 = a3;
      v12 = MEMORY[0x181EAA920](a1: v13, a2: v12, a3: 43284120);
      v11 = v25;
      v10 = v24;
      a3 = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13;
      *(_DWORD *)v12 = 43284120;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
    }
    *(_DWORD *)(v12 + 16) = 16464;
    *(_DWORD *)(v12 + 12) = v11;
    *(_DWORD *)(v12 + 4) = v10;
  }
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v22 = a3;
    MEMORY[0x18277F280](a1: v13, a2: v12, a3, a4: v7 + 8 * v10);
  }
  return v12;
}
