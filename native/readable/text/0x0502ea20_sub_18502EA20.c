// sub_502EA20
// rva 0x0502ea20  size 496  section .text  group text
// window base 0x18502ea20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502EA20(signed __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // ebx
  unsigned __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  _DWORD *v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+2Ch] [rbp-Ch]
  __int64 v22; // [rsp+30h] [rbp-8h]

  v20 = (_DWORD *)a3;
  v19 = a5;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_31;
  }
  v7 = *(unsigned int *)(a3 + 28);
  v8 = v5 + 8 * v7;
  v18 = v8;
  if ( (_DWORD)v7 == 0 )
  {
LABEL_31:
    sub_2771080();
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
    return sub_502EC20();
  }
  v9 = *(_DWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 8 * v7) >> 3) + 48);
  if ( v9 == 0 )
    goto LABEL_24;
  a2 = *(unsigned int *)(v8 + v9);
  if ( (_DWORD)a2 == 0 || v6 == *(_QWORD *)(v5 + 376351704) )
    goto LABEL_24;
  a1 = *(_QWORD *)(v6 + 64);
  v10 = *(_QWORD *)(v5 + 8 * a2 + 16);
  if ( v10 != 0 )
  {
    if ( v10 == a1 )
    {
      v15 = *(_DWORD *)(v5 + 8 * a2 + 28) + 1;
      if ( v15 >= 0 )
      {
        *(_DWORD *)(v5 + 8 * a2 + 28) = v15;
        v22 = v9;
        v21 = v9;
        goto LABEL_9;
      }
    }
    goto LABEL_24;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v5 + 8 * a2 + 16), 0, a1) != 0 )
  {
LABEL_24:
    v22 = v9;
    v21 = v9;
    sub_208CC20(a1, a2, a3: v8);
    a5 = v19;
    a3 = (unsigned __int64)v20;
    goto LABEL_9;
  }
  v22 = v9;
  v21 = v9;
LABEL_9:
  *(_DWORD *)(a3 + 36) = (unsigned __int64)(a5 - v5) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
  }
  if ( v21 != 0 )
  {
    v11 = v18;
    result = *(unsigned int *)(v18 + v22);
    v13 = *(_DWORD *)(v5 + 8 * result + 28);
    if ( v13 == 1 )
    {
      *(_QWORD *)(v5 + 8 * result + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v5 + 8 * result + 28) = v13 - 1;
    }
    if ( v13 != 1 )
      goto LABEL_14;
    result = *(unsigned int *)(v5 + 8 * result + 4);
    if ( (_DWORD)result == 0 )
      goto LABEL_14;
    result = *(unsigned int *)(v5 + 8 * result + 8);
    if ( (_DWORD)result == 0 )
      goto LABEL_14;
    result = *(unsigned int *)(v5 + 8 * result + 16);
    if ( (_DWORD)result == 0 )
      goto LABEL_14;
    v16 = 1;
  }
  else
  {
    v16 = 0xFFFFFFFF;
    v11 = v18;
  }
  result = sub_208CCA0(a1, a2, a3: v11, a4: v11, a5: v16);
  v11 = v18;
  a5 = v19;
  a3 = (unsigned __int64)v20;
LABEL_14:
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1, a2, a3, a4: v11, a5);
  return result;
}
