// sub_18275C3C0
// rva 0x0275c3c0  size 200  section .text  group text
// window base 0x18275c3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275C3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  int *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+24h] [rbp-4h]

  v17 = a3;
  v16 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18275C4A0();
  }
  else
  {
    sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
    v9 = v17;
    v10 = *(int **)(v17 + 8);
    if ( v16 == v5 )
      v11 = *v10;
    else
      v11 = *(int *)((char *)v10 + (_QWORD)v16);
    v12 = (unsigned int)(v11 + 128);
    if ( (unsigned int)v12 >= 0x100 )
    {
      v13 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v6 + 32) )
      {
        v18 = v11;
        v13 = MEMORY[0x181EAA920](a1: v7, a2: v8, a3: 34086464);
        v11 = v18;
        v9 = v17;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v13 + 16;
        *(_DWORD *)v13 = 34086464;
        *(_DWORD *)(v13 + 4) = 0;
        *(_QWORD *)(v13 + 8) = 0;
      }
      *(_DWORD *)(v13 + 4) = v11;
    }
    else
    {
      v13 = (__int64)&v5[2 * v5[v12 + 94088301]];
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_18277F280(a1: v7, a2: v8, a3: v9);
    return v13;
  }
}
