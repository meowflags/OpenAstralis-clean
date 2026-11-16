// sub_18503C340
// rva 0x0503c340  size 399  section .text  group text
// window base 0x18503c340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503C340(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // ecx
  __int64 v6; // rbp
  signed __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  int v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+8h] [rbp-20h]
  _DWORD *v18; // [rsp+10h] [rbp-18h]
  int v19; // [rsp+1Ch] [rbp-Ch]
  __int64 v20; // [rsp+20h] [rbp-8h]

  v18 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v4 + 8) )
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
    return sub_18503C4E0();
  }
  v5 = *(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 48);
  if ( v5 == 0 )
    goto LABEL_22;
  v6 = *(unsigned int *)((char *)a3 + v5);
  if ( (_DWORD)v6 == 0 || v4 == *(_QWORD *)(v3 + 376351704) )
    goto LABEL_22;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_QWORD *)(v3 + 8 * v6 + 16);
  if ( v8 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v3 + 8 * v6 + 16), 0, v7) == 0 )
    {
      v20 = v5;
      v19 = v5;
      goto LABEL_8;
    }
    goto LABEL_22;
  }
  if ( v8 != v7 || (v14 = *(_DWORD *)(v3 + 8 * v6 + 28) + 1) < 0 )
  {
LABEL_22:
    v20 = v5;
    v19 = v5;
    MEMORY[0x18208CC20]();
    a3 = v18;
    goto LABEL_8;
  }
  *(_DWORD *)(v3 + 8 * v6 + 28) = v14;
  v20 = v5;
  v19 = v5;
LABEL_8:
  result = v3 + 8LL * (unsigned int)a3[3];
  if ( (_DWORD *)result == a3 )
    result = v3;
  if ( v19 != 0 )
  {
    v10 = *(unsigned int *)((char *)a3 + v20);
    v11 = *(_DWORD *)(v3 + 8 * v10 + 28);
    if ( v11 == 1 )
    {
      *(_QWORD *)(v3 + 8 * v10 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v3 + 8 * v10 + 28) = v11 - 1;
    }
    if ( v11 != 1 )
      goto LABEL_14;
    v12 = *(unsigned int *)(v3 + 8 * v10 + 4);
    if ( (_DWORD)v12 == 0 )
      goto LABEL_14;
    v13 = *(unsigned int *)(v3 + 8 * v12 + 8);
    if ( (_DWORD)v13 == 0 || *(_DWORD *)(v3 + 8 * v13 + 16) == 0 )
      goto LABEL_14;
    v15 = 1;
  }
  else
  {
    v15 = 0xFFFFFFFFLL;
  }
  v17 = result;
  MEMORY[0x18208CCA0](a1: v8, a2: v7, a3, a4: a3, a5: v15);
  result = v17;
  a3 = v18;
LABEL_14:
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v17 = result;
    MEMORY[0x18277F280](a1: v8, a2: v7, a3);
    return v17;
  }
  return result;
}
