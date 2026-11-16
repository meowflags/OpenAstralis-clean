// sub_1850443E0
// rva 0x050443e0  size 550  section .text  group text
// window base 0x1850443e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850443E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  signed __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ebx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+8h] [rbp-30h]
  __int64 v30; // [rsp+10h] [rbp-28h]
  __int64 v31; // [rsp+18h] [rbp-20h]
  _DWORD *v32; // [rsp+20h] [rbp-18h]
  int v33; // [rsp+2Ch] [rbp-Ch]
  __int64 v34; // [rsp+30h] [rbp-8h]

  v32 = a3;
  v31 = a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_31;
  }
  MEMORY[0x18635F240]();
  v11 = (unsigned __int64)v32;
  v12 = (unsigned int)v32[7];
  v13 = v7 + 8 * v12;
  v30 = v13;
  if ( (_DWORD)v12 == 0 )
  {
LABEL_31:
    v29 = MEMORY[0x18276BEE0]();
    MEMORY[0x186360580]();
    MEMORY[0x182769900](a1: v26, a2: v27, a3: v29, a4: v25, a5: &a7);
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
    return sub_185044620();
  }
  v14 = *(_DWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 8 * v12) >> 3) + 48);
  if ( v14 == 0 )
    goto LABEL_24;
  v10 = *(unsigned int *)(v13 + v14);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_24;
  v9 = *(_QWORD *)(v8 + 64);
  v15 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v15 != 0 )
  {
    if ( v15 == v9 )
    {
      v24 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1;
      if ( v24 >= 0 )
      {
        *(_DWORD *)(v7 + 8 * v10 + 28) = v24;
        v34 = v14;
        v33 = v14;
        v16 = v31;
        goto LABEL_9;
      }
    }
    goto LABEL_24;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v9) != 0 )
  {
LABEL_24:
    v34 = v14;
    v33 = v14;
    MEMORY[0x18208CC20](a1: v9, a2: v10, a3: v13);
    v16 = v31;
    v11 = (unsigned __int64)v32;
    goto LABEL_9;
  }
  v34 = v14;
  v33 = v14;
  v16 = v31;
LABEL_9:
  *(_DWORD *)(v11 + 36) = (unsigned __int64)(v16 - v7) >> 3;
  if ( (*(_DWORD *)v11 & 2) != 0 )
  {
    v23 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v23) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v23) >> 9) + 0x38) = 0;
  }
  if ( v33 != 0 )
  {
    v17 = v30;
    v18 = *(unsigned int *)(v30 + v34);
    v19 = *(_DWORD *)(v7 + 8 * v18 + 28);
    if ( v19 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v18 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v18 + 28) = v19 - 1;
    }
    if ( v19 != 1 )
      goto LABEL_14;
    v21 = *(unsigned int *)(v7 + 8 * v18 + 4);
    if ( (_DWORD)v21 == 0 )
      goto LABEL_14;
    v22 = *(unsigned int *)(v7 + 8 * v21 + 8);
    if ( (_DWORD)v22 == 0 || *(_DWORD *)(v7 + 8 * v22 + 16) == 0 )
      goto LABEL_14;
  }
  else
  {
    v17 = v30;
  }
  MEMORY[0x18208CCA0](a1: v9, a2: v10, a3: v17);
LABEL_14:
  result = MEMORY[0x186360580]();
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
