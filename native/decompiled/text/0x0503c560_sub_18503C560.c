// sub_18503C560
// rva 0x0503c560  size 944  section .text  group text
// window base 0x18503c560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503C560(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbp
  int v18; // ebx
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  int v39; // [rsp+0h] [rbp-28h] BYREF
  __int64 v40; // [rsp+8h] [rbp-20h]
  _DWORD *v41; // [rsp+10h] [rbp-18h]
  int v42; // [rsp+18h] [rbp-10h]
  int v43; // [rsp+1Ch] [rbp-Ch]
  __int64 v44; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v8 + 8) )
  {
    v31 = MEMORY[0x181EB84E0]();
    while ( 1 )
    {
      v33 = *(unsigned int *)(v7 + 8 * v38 + 16);
      if ( (_DWORD)v33 != 0 )
      {
        v40 = v31;
        MEMORY[0x18208CCA0](a1: v34, a2: v35, a3: v32, a4: v33, a5: (_DWORD)v33 != 0);
        v31 = v40;
      }
      do
      {
        do
        {
          v31 = MEMORY[0x182769900](a1: v34, a2: v35, a3: v31, a4: v33, a5: &a7);
          v37 = *(unsigned int *)(v7 + 8 * v36 + 4);
        }
        while ( (_DWORD)v37 == 0 );
        v38 = *(unsigned int *)(v7 + 8 * v37 + 8);
      }
      while ( (_DWORD)v38 == 0 );
    }
  }
  v41 = (_DWORD *)a3;
  v9 = *(_DWORD *)(v7 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  if ( v9 == 0 )
    goto LABEL_34;
  v10 = *(unsigned int *)(a3 + v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_34;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 != 0 )
  {
    if ( v12 == v11 )
    {
      v28 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1;
      if ( v28 >= 0 )
      {
        *(_DWORD *)(v7 + 8 * v10 + 28) = v28;
        v44 = v9;
        v43 = v9;
        goto LABEL_8;
      }
    }
    goto LABEL_34;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) != 0 )
  {
LABEL_34:
    v44 = v9;
    v43 = v9;
    MEMORY[0x18208CC20]();
    a3 = (unsigned __int64)v41;
    goto LABEL_8;
  }
  v44 = v9;
  v43 = v9;
LABEL_8:
  v13 = *(unsigned int *)(a3 + 16);
  v14 = *(unsigned int *)(v7 + 374343896);
  if ( (_DWORD)v14 != (_DWORD)v13 && (_DWORD)v13 != 0 )
  {
    result = v7 + 8 * v13;
    v17 = v44;
    v18 = v43;
    goto LABEL_12;
  }
  v15 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v15 != 0 )
  {
    v42 = *(_DWORD *)(a3 + 24);
    v40 = v7 + 8 * v15;
    result = MEMORY[0x181EEF8A0](a1: v12, a2: v11, a3: v40);
    a3 = (unsigned __int64)v41;
    v41[4] = (unsigned __int64)(result - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = v44;
      v18 = v43;
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    else
    {
      v17 = v44;
      v18 = v43;
    }
LABEL_12:
    if ( v18 != 0 )
    {
      v19 = *(unsigned int *)(a3 + v17);
      v20 = *(_DWORD *)(v7 + 8 * v19 + 28);
      if ( v20 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v19 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v19 + 28) = v20 - 1;
      }
      if ( v20 != 1 )
        goto LABEL_16;
      v24 = *(unsigned int *)(v7 + 8 * v19 + 4);
      if ( (_DWORD)v24 == 0 )
        goto LABEL_16;
      v25 = *(unsigned int *)(v7 + 8 * v24 + 8);
      if ( (_DWORD)v25 == 0 || *(_DWORD *)(v7 + 8 * v25 + 16) == 0 )
        goto LABEL_16;
      v29 = 1;
    }
    else
    {
      v29 = 0xFFFFFFFFLL;
    }
    v40 = result;
    MEMORY[0x18208CCA0](a1: v12, a2: v11, a3, a4: a3, a5: v29);
    result = v40;
    a3 = (unsigned __int64)v41;
LABEL_16:
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v40 = result;
      MEMORY[0x18277F280](a1: v12, a2: v11, a3);
      return v40;
    }
    return result;
  }
  v21 = v7 + 8 * v14;
  if ( v43 != 0 )
  {
    v22 = *(unsigned int *)(a3 + v44);
    v23 = *(_DWORD *)(v7 + 8 * v22 + 28);
    if ( v23 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v22 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v22 + 28) = v23 - 1;
    }
    if ( v23 != 1 )
      goto LABEL_24;
    v26 = *(unsigned int *)(v7 + 8 * v22 + 4);
    if ( (_DWORD)v26 == 0 )
      goto LABEL_24;
    v27 = *(unsigned int *)(v7 + 8 * v26 + 8);
    if ( (_DWORD)v27 == 0 || *(_DWORD *)(v7 + 8 * v27 + 16) == 0 )
      goto LABEL_24;
    v30 = 1;
  }
  else
  {
    v30 = 0xFFFFFFFFLL;
  }
  v40 = v21;
  MEMORY[0x18208CCA0](a1: v12, a2: v11, a3: v41, a4: v21, a5: v30);
  v21 = v40;
  a3 = (unsigned __int64)v41;
LABEL_24:
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v40 = v21;
    MEMORY[0x18277F280](a1: v12, a2: v11, a3);
    return v40;
  }
  return v21;
}
