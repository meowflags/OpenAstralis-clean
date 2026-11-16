// sub_185021680
// rva 0x05021680  size 273  section .text  group text
// window base 0x185021680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185021680(int a1, int a2, unsigned int a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 i; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  char v21; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+10h] [rbp-8h]
  unsigned int v23; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a3;
    v8 = MEMORY[0x181EB84E0]();
    goto LABEL_15;
  }
  v23 = a3;
  v8 = sub_1850217A0(a1, a2, a3, a4, a5, a6, a7: v21);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_15:
    MEMORY[0x182770E80](a1: v9, a2: v10, a3: v8, a4: v23);
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
    return sub_1850217A0(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  v11 = *(_QWORD *)(v7 + 40);
  v12 = (v8 + 19LL) & 0x1FFFFFFF8LL;
  if ( v12 >= 0x20000 || v11 + v12 > *(_QWORD *)(v7 + 32) )
  {
    v22 = v8;
    v11 = MEMORY[0x181EAA840](a1: v9, a2: v10, a3: 34082368, a4: v12, a5: v8);
    v8 = v22;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v11 + v12;
    *(_QWORD *)v11 = 34082368;
    *(_DWORD *)(v11 + 8) = v8;
    *(_DWORD *)(v11 + 12) = 0;
    if ( v12 - 16 >= 0x800 )
    {
      v22 = v8;
      memset((void *)(v11 + 16), 0, v12 - 16);
      v9 = v11 + v12;
      v8 = v22;
    }
    else
    {
      for ( i = 16; v12 > i; i += 8LL )
        *(_QWORD *)(v11 + i) = 0;
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
  {
    v22 = v8;
    MEMORY[0x18277F280](a1: v9, a2: v10, a3: v11);
  }
  return v11;
}
