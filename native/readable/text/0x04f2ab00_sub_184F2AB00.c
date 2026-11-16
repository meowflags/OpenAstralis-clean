// sub_4F2AB00
// rva 0x04f2ab00  size 375  section .text  group text
// window base 0x184f2ab00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2AB00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  signed int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  int v27; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v28; // [rsp+10h] [rbp-18h]
  unsigned int v29; // [rsp+1Ch] [rbp-Ch]
  __int64 v30; // [rsp+20h] [rbp-8h]

  v28 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F2AC80(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
  }
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  if ( v9 == 0 )
    goto LABEL_21;
  v10 = *(unsigned int *)((char *)a3 + v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_21;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
    {
      v30 = v9;
      goto LABEL_8;
    }
    goto LABEL_21;
  }
  if ( v12 != v11 || (v19 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_21:
    v30 = v9;
    v29 = v9;
    sub_208CC20();
    v9 = v29;
    a3 = v28;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v19;
  v30 = v9;
LABEL_8:
  v13 = a3[3] - a3[2];
  if ( v9 != 0 )
  {
    v14 = *(unsigned int *)((char *)a3 + v30);
    v15 = *(_DWORD *)(v7 + 8 * v14 + 28);
    if ( v15 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v14 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v14 + 28) = v15 - 1;
    }
    if ( v15 != 1 )
      goto LABEL_12;
    v17 = *(unsigned int *)(v7 + 8 * v14 + 4);
    if ( (_DWORD)v17 == 0 )
      goto LABEL_12;
    v18 = *(unsigned int *)(v7 + 8 * v17 + 8);
    if ( (_DWORD)v18 == 0 || *(_DWORD *)(v7 + 8 * v18 + 16) == 0 )
      goto LABEL_12;
    v20 = 1;
  }
  else
  {
    v20 = 0xFFFFFFFF;
  }
  v29 = v13;
  sub_208CCA0(a1: v12, a2: v11, a3, a4: a3, a5: v20);
  v13 = v29;
  a3 = v28;
LABEL_12:
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v29 = v13;
    sub_277F280(a1: v12, a2: v11, a3);
  }
  return v13;
}
