// sub_4F2E300
// rva 0x04f2e300  size 486  section .text  group text
// window base 0x184f2e300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2E300(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // ecx
  __int64 v6; // rbp
  signed __int64 v7; // rsi
  __int64 v8; // rdi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  _DWORD *v17; // rbx
  __int64 v18; // r8
  int v19; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-20h]
  _DWORD *v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+1Ch] [rbp-Ch]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v21 = a3;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F2E500();
  }
  v5 = *(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 48);
  if ( v5 == 0 )
    goto LABEL_29;
  v6 = *(unsigned int *)((char *)a3 + (int)v5);
  if ( (_DWORD)v6 == 0 || v4 == *(_QWORD *)(v3 + 376351704) )
    goto LABEL_29;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_QWORD *)(v3 + 8 * v6 + 16);
  if ( v8 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v3 + 8 * v6 + 16), 0, v7) == 0 )
    {
      v23 = (int)v5;
      v22 = v5;
      goto LABEL_8;
    }
    goto LABEL_29;
  }
  if ( v8 != v7 || (v16 = *(_DWORD *)(v3 + 8 * v6 + 28) + 1) < 0 )
  {
LABEL_29:
    v23 = (int)v5;
    v22 = v5;
    sub_208CC20();
    a3 = v21;
    goto LABEL_8;
  }
  *(_DWORD *)(v3 + 8 * v6 + 28) = v16;
  v23 = (int)v5;
  v22 = v5;
LABEL_8:
  v9 = (_DWORD *)(v3 + 8LL * (unsigned int)a3[3]);
  if ( v9 == a3 )
    v9 = (_DWORD *)v3;
  v10 = v22;
  if ( v22 != 0 )
  {
    v11 = *(unsigned int *)((char *)a3 + v23);
    v10 = *(unsigned int *)(v3 + 8 * v11 + 28);
    if ( (_DWORD)v10 == 1 )
    {
      *(_QWORD *)(v3 + 8 * v11 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v3 + 8 * v11 + 28) = v10 - 1;
    }
    if ( (_DWORD)v10 != 1 )
      goto LABEL_14;
    v14 = *(unsigned int *)(v3 + 8 * v11 + 4);
    if ( (_DWORD)v14 == 0 )
      goto LABEL_14;
    v15 = *(unsigned int *)(v3 + 8 * v14 + 8);
    if ( (_DWORD)v15 == 0 )
      goto LABEL_14;
    v10 = *(unsigned int *)(v3 + 8 * v15 + 16);
    if ( (_DWORD)v10 == 0 )
      goto LABEL_14;
    v17 = a3;
    v20 = v9;
    v18 = (_DWORD)v10 != 0;
  }
  else
  {
    v20 = v9;
    v17 = a3;
    v18 = 0xFFFFFFFFLL;
  }
  sub_208CCA0(a1: v8, a2: v7, a3: v17, a4: v10, a5: v18);
  v9 = v20;
LABEL_14:
  if ( v9 != (_DWORD *)v3 )
  {
    v12 = *v9 >> 3;
    if ( *(__int16 *)(v3 + 8 * v12 + 62) < 4
      || *(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v12 + 16) + 24) != 81613 )
    {
      sub_276FC00(a1: v8, a2: v7, a3: v9, a4: v10, a5: v3 + 34107088);
    }
  }
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v20 = v9;
    sub_277F280();
    return (__int64)v20;
  }
  return (__int64)v9;
}
