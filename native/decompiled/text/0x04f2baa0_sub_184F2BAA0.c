// sub_184F2BAA0
// rva 0x04f2baa0  size 656  section .text  group text
// window base 0x184f2baa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2BAA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  int v15; // ebx
  __int64 result; // rax
  __int64 v17; // r8
  int v18; // ecx
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  unsigned int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  int v35; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v36; // [rsp+10h] [rbp-28h]
  __int64 v37; // [rsp+18h] [rbp-20h]
  unsigned int v38; // [rsp+24h] [rbp-14h]
  __int64 v39; // [rsp+28h] [rbp-10h]
  __int64 v40; // [rsp+30h] [rbp-8h]

  v36 = a3;
  v40 = a5;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
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
    return sub_184F2BD40(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7);
  }
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  if ( v9 == 0 )
    goto LABEL_32;
  v10 = *(unsigned int *)((char *)a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_32;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
    {
      v39 = (int)v9;
      v38 = v9;
      goto LABEL_8;
    }
    goto LABEL_32;
  }
  if ( v12 != v11 || (v26 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_32:
    v39 = (int)v9;
    v38 = v9;
    MEMORY[0x18208CC20]();
    a5 = v40;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v26;
  v39 = (int)v9;
  v38 = v9;
LABEL_8:
  if ( a5 >= 0 )
  {
    v13 = v38;
    v14 = v36;
    v15 = v36[2];
    if ( v36[3] - v15 < a5 )
      JUMPOUT(0x309E41B44LL);
    result = a5;
    v36[2] = v15 + a5;
    if ( (_DWORD)v13 != 0 )
    {
      v17 = *(unsigned int *)((char *)v14 + v39);
      v18 = *(_DWORD *)(v7 + 8 * v17 + 28);
      if ( v18 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v17 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v17 + 28) = v18 - 1;
      }
      if ( v18 != 1 )
        goto LABEL_14;
      v22 = *(unsigned int *)(v7 + 8 * v17 + 4);
      if ( (_DWORD)v22 == 0 )
        goto LABEL_14;
      v25 = *(unsigned int *)(v7 + 8 * v22 + 8);
      if ( (_DWORD)v25 == 0 )
        goto LABEL_14;
      v13 = *(unsigned int *)(v7 + 8 * v25 + 16);
      if ( (_DWORD)v13 == 0 )
        goto LABEL_14;
      v27 = 1;
    }
    else
    {
      v27 = 0xFFFFFFFFLL;
    }
    v37 = result;
    MEMORY[0x18208CCA0](a1: v12, a2: v11, a3: v36, a4: v13, a5: v27);
    result = v37;
    v14 = v36;
LABEL_14:
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v37 = result;
      return MEMORY[0x18277F280](a1: v12, a2: v11, a3: v14);
    }
    return result;
  }
  v19 = v36;
  if ( v38 != 0 )
  {
    v20 = *(unsigned int *)((char *)v36 + v39);
    v21 = *(_DWORD *)(v7 + 8 * v20 + 28);
    if ( v21 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v20 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v20 + 28) = v21 - 1;
    }
    if ( v21 != 1 )
      goto LABEL_20;
    v23 = *(unsigned int *)(v7 + 8 * v20 + 4);
    if ( (_DWORD)v23 == 0 )
      goto LABEL_20;
    v24 = *(unsigned int *)(v7 + 8 * v23 + 8);
    if ( (_DWORD)v24 == 0 )
      goto LABEL_20;
    v20 = *(unsigned int *)(v7 + 8 * v24 + 16);
    if ( (_DWORD)v20 == 0 )
      goto LABEL_20;
    v28 = 1;
  }
  else
  {
    v28 = 0xFFFFFFFF;
  }
  MEMORY[0x18208CCA0](a1: v12, a2: v11, a3: v19, a4: v19, a5: v28);
  a5 = v40;
  v19 = v36;
LABEL_20:
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v12, a2: v11, a3: v19, a4: v20, a5);
  return 0;
}
