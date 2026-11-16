// sub_184F35120
// rva 0x04f35120  size 396  section .text  group text
// window base 0x184f35120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F35120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  int v13; // [rsp+18h] [rbp-10h]
  unsigned int v14; // [rsp+1Ch] [rbp-Ch]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    v12 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_16;
  }
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 == 0 )
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
    return sub_184F352C0();
  }
  v6 = *(unsigned int *)(v3 + 8 * v5 + 4);
  v7 = *(_DWORD *)(v3 + 8 * v5 + 8);
  if ( *(_BYTE *)(v3 + 8 * v5 + 12) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 40);
    v9 = v8 + 32;
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v16 = *(char *)(v3 + 8 * v5 + 12);
      v15 = v7;
      v14 = v6;
      v13 = v5;
      v12 = a3;
      v8 = MEMORY[0x181EAA920](a1: v9, a2: 43283768, a3: 43283768);
      v7 = v15;
      v6 = v14;
      a3 = v12;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v9;
      *(_DWORD *)v8 = 43283768;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_DWORD *)(v8 + 16) = 16;
    *(_DWORD *)(v8 + 12) = v7;
    *(_DWORD *)(v8 + 4) = v6;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 40);
    v9 = v8 + 32;
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v16 = *(char *)(v3 + 8 * v5 + 12);
      v15 = v7;
      v14 = v6;
      v13 = v5;
      v12 = a3;
      v8 = MEMORY[0x181EAA920](a1: v9, a2: v8, a3: 43284120);
      v7 = v15;
      v6 = v14;
      a3 = v12;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v9;
      *(_DWORD *)v8 = 43284120;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_DWORD *)(v8 + 16) = 16464;
    *(_DWORD *)(v8 + 12) = v7;
    *(_DWORD *)(v8 + 4) = v6;
  }
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v12 = a3;
    MEMORY[0x18277F280](a1: v9, a2: v8, a3, a4: v3 + 8 * v6);
  }
  return v8;
}
