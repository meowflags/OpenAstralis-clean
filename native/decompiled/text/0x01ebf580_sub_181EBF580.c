// sub_181EBF580
// rva 0x01ebf580  size 267  section .text  group text
// window base 0x181ebf580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBF580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int i; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+0h] [rbp-18h] BYREF
  __int64 v25; // [rsp+8h] [rbp-10h]
  int v26; // [rsp+10h] [rbp-8h]
  unsigned int v27; // [rsp+14h] [rbp-4h]

  v25 = a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v24);
    goto LABEL_14;
  }
  v8 = *(unsigned int *)(a3 + 4);
  v9 = (unsigned int)(31 * *(_DWORD *)(a3 + 12) + 42);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_9:
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v9);
    return (unsigned int)v9;
  }
  v27 = 31 * *(_DWORD *)(a3 + 12) + 42;
  v10 = MEMORY[0x1857B88C0](a1, a2, a3: v6 + 8 * v8, a4: v9, a5: 0);
  if ( v10 == -1 )
  {
    v9 = v27;
    goto LABEL_9;
  }
  v11 = v25;
  v12 = *(unsigned int *)(v25 + 4);
  v13 = 31 * v27 + v10 + 42;
  if ( (_DWORD)v12 != 0 )
  {
    v27 = 31 * v27 + v10 + 42;
    v26 = v10;
    for ( i = MEMORY[0x1857B88C0](a1, a2, a3: v6 + 8 * v12, a4: v13, a5: (unsigned int)(v10 + 1));
          ;
          i = MEMORY[0x1857B88C0](a1, a2, a3: v6 + 8 * v15, a4: v16, a5: (unsigned int)(i + 1)) )
    {
      v9 = v27;
      a3 = v25;
      if ( i == -1 )
        break;
      v15 = *(unsigned int *)(v25 + 4);
      v16 = i + 31 * v27 + 42;
      if ( (_DWORD)v15 == 0 )
        goto LABEL_15;
      v27 = i + 31 * v27 + 42;
      v26 = i;
    }
    goto LABEL_9;
  }
LABEL_14:
  MEMORY[0x182771080](a1, a2, a3: v11, a4: v13);
LABEL_15:
  MEMORY[0x182771080](a1, a2, a3, a4: v16);
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
  return sub_181EBF6A0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
}
