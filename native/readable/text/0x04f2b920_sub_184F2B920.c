// sub_4F2B920
// rva 0x04f2b920  size 368  section .text  group text
// window base 0x184f2b920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2B920(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rbp
  signed __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  int v15; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+10h] [rbp-18h]
  unsigned int v17; // [rsp+1Ch] [rbp-Ch]
  __int64 v18; // [rsp+20h] [rbp-8h]

  v16 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F2BAA0();
  }
  v5 = *(unsigned int *)(v3 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v5 == 0 )
    goto LABEL_20;
  v6 = *(unsigned int *)((char *)a3 + (int)v5);
  if ( (_DWORD)v6 == 0 || v4 == *(_QWORD *)(v3 + 376351704) )
    goto LABEL_20;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_QWORD *)(v3 + 8 * v6 + 16);
  if ( v8 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v3 + 8 * v6 + 16), 0, v7) == 0 )
    {
      v18 = (int)v5;
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  if ( v8 != v7 || (v13 = *(_DWORD *)(v3 + 8 * v6 + 28) + 1) < 0 )
  {
LABEL_20:
    v18 = (int)v5;
    v17 = v5;
    sub_208CC20();
    v5 = v17;
    a3 = v16;
    goto LABEL_8;
  }
  *(_DWORD *)(v3 + 8 * v6 + 28) = v13;
  v18 = (int)v5;
LABEL_8:
  a3[2] = 0;
  if ( (_DWORD)v5 != 0 )
  {
    v9 = *(unsigned int *)((char *)a3 + v18);
    result = *(unsigned int *)(v3 + 8 * v9 + 28);
    if ( (_DWORD)result == 1 )
    {
      *(_QWORD *)(v3 + 8 * v9 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v5 = (unsigned int)(result - 1);
      *(_DWORD *)(v3 + 8 * v9 + 28) = v5;
    }
    if ( (_DWORD)result != 1 )
      goto LABEL_12;
    v11 = *(unsigned int *)(v3 + 8 * v9 + 4);
    if ( (_DWORD)v11 == 0 )
      goto LABEL_12;
    v12 = *(unsigned int *)(v3 + 8 * v11 + 8);
    if ( (_DWORD)v12 == 0 || *(_DWORD *)(v3 + 8 * v12 + 16) == 0 )
      goto LABEL_12;
    v14 = 1;
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
  }
  result = sub_208CCA0(a1: v8, a2: v7, a3, a4: v5, a5: v14);
  a3 = v16;
LABEL_12:
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280(a1: v8, a2: v7, a3);
  return result;
}
