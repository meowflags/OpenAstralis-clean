// sub_184F2DAA0
// rva 0x04f2daa0  size 504  section .text  group text
// window base 0x184f2daa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2DAA0(
        __int64 a1,
        signed __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  unsigned int v31; // [rsp+24h] [rbp-14h]
  __int64 v32; // [rsp+28h] [rbp-10h]
  __int64 v33; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v33 = a5;
    v32 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_30;
  }
  v9 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_30:
    v33 = a5;
    v32 = a3;
    v20 = MEMORY[0x182771080]();
    v22 = (unsigned int)(v27 - 1);
    *(_DWORD *)(v7 + 8 * v21 + 28) = v22;
    if ( v27 == 1 )
      goto LABEL_25;
    while ( 1 )
    {
      v20 = MEMORY[0x182769900](a1: v23, a2: v24, a3: v20, a4: v22, a5: &a7);
LABEL_25:
      v25 = *(unsigned int *)(v7 + 8 * v21 + 4);
      if ( (_DWORD)v25 != 0 )
      {
        v26 = *(unsigned int *)(v7 + 8 * v25 + 8);
        if ( (_DWORD)v26 != 0 && *(_DWORD *)(v7 + 8 * v26 + 16) != 0 )
        {
          v29 = v20;
          MEMORY[0x18208CCA0](a1: v23, a2: v24, a3: v30, a4: v22, a5: 1);
          v20 = v29;
        }
      }
    }
  }
  v31 = *(_DWORD *)(a3 + 12);
  v10 = *(unsigned int *)(v7 + 8 * v9 + 20);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_19;
  a2 = *(_QWORD *)(v8 + 64);
  a1 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( a1 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, a2) == 0 )
    {
      v30 = v7 + 8 * v9;
      v33 = a5;
      v32 = a3;
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  if ( a1 != a2 || (v19 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_19:
    v33 = a5;
    v32 = a3;
    v30 = v7 + 8 * v9;
    MEMORY[0x18208CC20](a1, a2, a3: v30);
    v9 = v31;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v19;
  v30 = v7 + 8 * v9;
  v33 = a5;
  v32 = a3;
LABEL_8:
  *(_DWORD *)(v7 + 8 * v9 + 16) = 0;
  result = sub_184F36F80(a1, a2, a3: v30, a4: v9, a5: v33);
  v14 = v31;
  v15 = *(unsigned int *)(v7 + 8LL * v31 + 20);
  v16 = *(_DWORD *)(v7 + 8 * v15 + 28);
  if ( v16 == 1 )
  {
    *(_QWORD *)(v7 + 8 * v15 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v16 - 1);
    *(_DWORD *)(v7 + 8 * v15 + 28) = result;
  }
  if ( v16 == 1 )
  {
    v17 = *(unsigned int *)(v7 + 8 * v15 + 4);
    if ( (_DWORD)v17 != 0 )
    {
      v18 = *(unsigned int *)(v7 + 8 * v17 + 8);
      if ( (_DWORD)v18 != 0 && *(_DWORD *)(v7 + 8 * v18 + 16) != 0 )
        result = MEMORY[0x18208CCA0](a1: v12, a2: v13, a3: v30, a4: v14, a5: 1);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
