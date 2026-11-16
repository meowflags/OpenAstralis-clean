// sub_184F2D880
// rva 0x04f2d880  size 536  section .text  group text
// window base 0x184f2d880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2D880(signed __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-28h]
  __int64 v32; // [rsp+18h] [rbp-20h]
  unsigned int v33; // [rsp+24h] [rbp-14h]
  __int64 v34; // [rsp+28h] [rbp-10h]
  unsigned int v35; // [rsp+30h] [rbp-8h]
  int v36; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v8 + 8) )
  {
    v36 = a5;
    v34 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_30;
  }
  v9 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_30:
    v36 = a5;
    v34 = a3;
    v22 = MEMORY[0x182771080]();
    v24 = (unsigned int)(v29 - 1);
    *(_DWORD *)(v7 + 8 * v23 + 28) = v24;
    if ( v29 == 1 )
      goto LABEL_25;
    while ( 1 )
    {
      v22 = MEMORY[0x182769900](a1: v25, a2: v26, a3: v22, a4: v24, a5: &a7);
LABEL_25:
      v27 = *(unsigned int *)(v7 + 8 * v23 + 4);
      if ( (_DWORD)v27 != 0 )
      {
        v28 = *(unsigned int *)(v7 + 8 * v27 + 8);
        if ( (_DWORD)v28 != 0 && *(_DWORD *)(v7 + 8 * v28 + 16) != 0 )
        {
          v31 = v22;
          MEMORY[0x18208CCA0](a1: v25, a2: v26, a3: v32, a4: v24, a5: 1);
          v22 = v31;
        }
      }
    }
  }
  v33 = *(_DWORD *)(a3 + 12);
  v10 = *(unsigned int *)(v7 + 8 * v9 + 20);
  v11 = (unsigned __int16)a5;
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_19;
  a1 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, a1) == 0 )
    {
      v35 = (unsigned __int16)a5;
      v32 = v7 + 8 * v9;
      v36 = a5;
      v34 = a3;
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  if ( v12 != a1 || (v21 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_19:
    v35 = (unsigned __int16)a5;
    v36 = a5;
    v34 = a3;
    v32 = v7 + 8 * v9;
    MEMORY[0x18208CC20](a1, a2: (unsigned __int16)a5, a3: v32);
    v9 = v33;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v21;
  v35 = (unsigned __int16)a5;
  v32 = v7 + 8 * v9;
  v36 = a5;
  v34 = a3;
LABEL_8:
  *(_DWORD *)(v7 + 8 * v9 + 16) = 0;
  result = sub_184F35F80(a1, a2: v11, a3: v32, a4: v9, a5: v35);
  v16 = v33;
  v17 = *(unsigned int *)(v7 + 8LL * v33 + 20);
  v18 = *(_DWORD *)(v7 + 8 * v17 + 28);
  if ( v18 == 1 )
  {
    *(_QWORD *)(v7 + 8 * v17 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v18 - 1);
    *(_DWORD *)(v7 + 8 * v17 + 28) = result;
  }
  if ( v18 == 1 )
  {
    v19 = *(unsigned int *)(v7 + 8 * v17 + 4);
    if ( (_DWORD)v19 != 0 )
    {
      v20 = *(unsigned int *)(v7 + 8 * v19 + 8);
      if ( (_DWORD)v20 != 0 && *(_DWORD *)(v7 + 8 * v20 + 16) != 0 )
        result = MEMORY[0x18208CCA0](a1: v14, a2: v15, a3: v32, a4: v16, a5: 1);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
