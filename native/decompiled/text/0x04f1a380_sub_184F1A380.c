// sub_184F1A380
// rva 0x04f1a380  size 847  section .text  group text
// window base 0x184f1a380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1A380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r8
  _DWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r8
  int v36; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v37; // [rsp+8h] [rbp-20h]
  __int64 v38; // [rsp+10h] [rbp-18h]
  unsigned int v39; // [rsp+1Ch] [rbp-Ch]
  __int64 v40; // [rsp+20h] [rbp-8h]

  v38 = a3;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v9 + 8) )
  {
    v32 = (_DWORD *)MEMORY[0x181EB84E0]();
    goto LABEL_47;
  }
  v10 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  if ( v10 == 0 )
    goto LABEL_25;
  v11 = *(unsigned int *)(a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_25;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v40 = (int)v10;
      v39 = v10;
      goto LABEL_8;
    }
    goto LABEL_25;
  }
  if ( v13 != v12 || (v23 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_25:
    v40 = (int)v10;
    v39 = v10;
    MEMORY[0x18208CC20]();
    a3 = v38;
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v23;
  v40 = (int)v10;
  v39 = v10;
LABEL_8:
  if ( *(_BYTE *)(a3 + 15) != 0 )
    goto LABEL_9;
  *(_BYTE *)(a3 + 15) = 1;
  v17 = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)v17 == 0 )
  {
    v33 = v40;
    v32 = (_DWORD *)MEMORY[0x18276BEE0](a1: v13, a2: v12, a3, a4: v39);
    v25 = *v32 >> 3;
    if ( *(__int16 *)(v8 + 8 * v25 + 62) >= 4
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v25 + 16) + 24) == 81613 )
    {
      goto LABEL_38;
    }
    goto LABEL_33;
  }
  ((void (__fastcall *)(__int64, signed __int64, __int64))(v7
                                                         + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v17) >> 3) + 216)))(
    a1: v13,
    a2: v12,
    a3: v8 + 8 * v17);
  v20 = *(unsigned int *)(v38 + 4);
  if ( (_DWORD)v20 == 0 )
  {
    v33 = v40;
    v32 = (_DWORD *)MEMORY[0x18276BEE0](a1: v18, a2: v19, a3: v38, a4: v39);
    v29 = *v32 >> 3;
    if ( *(__int16 *)(v8 + 8 * v29 + 62) >= 4
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v29 + 16) + 24) == 81613 )
    {
      goto LABEL_38;
    }
LABEL_33:
    v26 = v38;
    if ( (_DWORD)v28 == 0 )
    {
      v35 = 0xFFFFFFFFLL;
      v37 = v32;
      v34 = v38;
      goto LABEL_51;
    }
    v27 = *(unsigned int *)(v38 + v33);
    v28 = *(unsigned int *)(v8 + 8 * v27 + 28);
    if ( (_DWORD)v28 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v27 + 16) = 0;
      __faststorefence();
      goto LABEL_36;
    }
LABEL_47:
    v33 = (unsigned int)(v28 - 1);
    *(_DWORD *)(v8 + 8 * v27 + 28) = v33;
LABEL_36:
    if ( (_DWORD)v28 == 1 )
    {
      v30 = *(unsigned int *)(v8 + 8 * v27 + 4);
      if ( (_DWORD)v30 == 0 )
        goto LABEL_37;
      v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
      if ( (_DWORD)v31 == 0 )
        goto LABEL_37;
      v28 = *(unsigned int *)(v8 + 8 * v31 + 16);
      if ( (_DWORD)v28 == 0 )
        goto LABEL_37;
      v34 = v26;
      v35 = (_DWORD)v28 != 0;
      v37 = v32;
LABEL_51:
      MEMORY[0x18208CCA0](a1: v13, a2: v12, a3: v34, a4: v28, a5: v35);
      v32 = v37;
    }
LABEL_37:
    MEMORY[0x182769900](a1: v13, a2: v12, a3: v32, a4: v28, a5: &a7);
LABEL_38:
    a3 = v38;
    *(_BYTE *)(v38 + 14) = 1;
    v40 = v33;
    v39 = v28;
    goto LABEL_18;
  }
  ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v20) >> 3) + 112)))(
    a1: v18,
    a2: v19,
    a3: v8 + 8 * v20);
  a3 = v38;
LABEL_18:
  *(_DWORD *)(a3 + 24) = 0;
  *(_DWORD *)(a3 + 28) = 0;
  *(_DWORD *)(a3 + 4) = 0;
LABEL_9:
  v14 = v39;
  if ( v39 == 0 )
  {
    v24 = 0xFFFFFFFFLL;
    goto LABEL_29;
  }
  v15 = *(unsigned int *)(a3 + v40);
  result = *(unsigned int *)(v8 + 8 * v15 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v15 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v14 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v15 + 28) = v14;
  }
  if ( (_DWORD)result == 1 )
  {
    v21 = *(unsigned int *)(v8 + 8 * v15 + 4);
    if ( (_DWORD)v21 != 0 )
    {
      v22 = *(unsigned int *)(v8 + 8 * v21 + 8);
      if ( (_DWORD)v22 != 0 && *(_DWORD *)(v8 + 8 * v22 + 16) != 0 )
      {
        v24 = 1;
LABEL_29:
        result = MEMORY[0x18208CCA0](a1: v13, a2: v12, a3, a4: v14, a5: v24);
        a3 = v38;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v13, a2: v12, a3);
  return result;
}
