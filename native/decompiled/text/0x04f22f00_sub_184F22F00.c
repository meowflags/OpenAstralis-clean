// sub_184F22F00
// rva 0x04f22f00  size 848  section .text  group text
// window base 0x184f22f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_184F22F00(
        signed __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rbp
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r8
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  int v39; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v40; // [rsp+Ch] [rbp-2Ch]
  __int64 v41; // [rsp+10h] [rbp-28h]
  __int64 v42; // [rsp+18h] [rbp-20h]
  __int64 v43; // [rsp+20h] [rbp-18h]
  int v44; // [rsp+2Ch] [rbp-Ch]
  __int64 v45; // [rsp+30h] [rbp-8h]

  v43 = a3;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_53:
    MEMORY[0x182771080]();
    goto LABEL_54;
  }
  if ( *(_BYTE *)(a3 + 26) != 0 )
  {
    if ( *(int *)(v9 + 16) > 0 )
      return;
LABEL_49:
    MEMORY[0x18277F280]();
    return;
  }
  v10 = *(unsigned int *)(a3 + 12);
  v11 = v8 + 8 * v10;
  v42 = v11;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_53;
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  if ( v12 == 0 )
    goto LABEL_38;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_38;
  a1 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v45 = v12;
      v44 = v12;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
  if ( v13 != a1 || (v31 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_38:
    v45 = v12;
    v44 = v12;
    MEMORY[0x18208CC20](a1, a2, a3: v11);
    a3 = v43;
    goto LABEL_12;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v31;
  v45 = v12;
  v44 = v12;
LABEL_12:
  if ( *(_BYTE *)(a3 + 26) != 0 )
  {
    if ( v44 != 0 )
    {
      v11 = v42;
      v14 = *(unsigned int *)(v42 + v45);
      v15 = *(_DWORD *)(v8 + 8 * v14 + 28);
      if ( v15 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v14 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v14 + 28) = v15 - 1;
      }
      if ( v15 != 1 )
        goto LABEL_17;
      v27 = *(unsigned int *)(v8 + 8 * v14 + 4);
      if ( (_DWORD)v27 == 0 )
        goto LABEL_17;
      v30 = *(unsigned int *)(v8 + 8 * v27 + 8);
      if ( (_DWORD)v30 == 0 || *(_DWORD *)(v8 + 8 * v30 + 16) == 0 )
        goto LABEL_17;
      v32 = 1;
    }
    else
    {
      v32 = 0xFFFFFFFFLL;
    }
    MEMORY[0x18208CCA0](a1, a2, a3: v42, a4: v11, a5: v32);
    a3 = v43;
LABEL_17:
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3);
    return;
  }
  v16 = v45;
  v17 = v44;
  v18 = v42;
  *(_BYTE *)(a3 + 26) = 1;
  __faststorefence();
  if ( v17 == 0 )
    goto LABEL_47;
  v19 = *(unsigned int *)(v18 + v16);
  v20 = *(_DWORD *)(v8 + 8 * v19 + 28);
  if ( v20 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v19 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v19 + 28) = v20 - 1;
  }
  if ( v20 == 1 )
  {
    v28 = *(unsigned int *)(v8 + 8 * v19 + 4);
    if ( (_DWORD)v28 != 0 )
    {
      v29 = *(unsigned int *)(v8 + 8 * v28 + 8);
      if ( (_DWORD)v29 != 0 && *(_DWORD *)(v8 + 8 * v29 + 16) != 0 )
      {
LABEL_47:
        MEMORY[0x18208CCA0](a1, a2, a3: v18);
        a3 = v43;
      }
    }
  }
  v21 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v21 == 0 )
  {
    sub_184F230CF(a1, a2, a3, a4: v8, a5: v13, a6, a7, a8);
    return;
  }
  v41 = v8 + 8 * v21;
  MEMORY[0x185540460](a1, a2, a3: v41);
  v24 = v43;
  v25 = *(unsigned int *)(v43 + 4);
  if ( (_DWORD)v25 == 0 )
  {
LABEL_54:
    MEMORY[0x182771080](a1: v22, a2: v23, a3: v24, a4: v41);
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
    sub_184F23260(a1: v35, a2: v36, a3: v33, a4: v34, a5: v37, a6: v38, a7);
    return;
  }
  v26 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v26 + 16) > *(_QWORD *)(v9 + 32) )
  {
    v40 = *(_DWORD *)(v43 + 4);
    v26 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: 43282856);
    v25 = v40;
    v24 = v43;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v26 + 16;
    *(_DWORD *)v26 = 43282856;
    *(_DWORD *)(v26 + 4) = 0;
    *(_QWORD *)(v26 + 8) = 0;
  }
  *(_DWORD *)(v26 + 4) = (unsigned __int64)(v24 - v8) >> 3;
  MEMORY[0x184EC8520](a1: v22, a2: v23, a3: v8 + 8 * v25);
  if ( *(int *)(v9 + 16) <= 0 )
    goto LABEL_49;
}
