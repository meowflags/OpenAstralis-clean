// sub_184F2AC80
// rva 0x04f2ac80  size 770  section .text  group text
// window base 0x184f2ac80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2AC80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // r8d
  __int64 result; // rax
  _DWORD *v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  __int64 i; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // [rsp+0h] [rbp-28h] BYREF
  __int64 v38; // [rsp+8h] [rbp-20h]
  _DWORD *v39; // [rsp+10h] [rbp-18h]
  unsigned int v40; // [rsp+1Ch] [rbp-Ch]
  __int64 v41; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_35;
  }
  v39 = a3;
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  if ( v9 == 0 )
    goto LABEL_24;
  v10 = *(unsigned int *)((char *)a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_24;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
    {
      v41 = (int)v9;
      v40 = v9;
      goto LABEL_8;
    }
    goto LABEL_24;
  }
  if ( v12 != v11 || (v21 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_24:
    v41 = (int)v9;
    v40 = v9;
    MEMORY[0x18208CC20]();
    a3 = v39;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v21;
  v41 = (int)v9;
  v40 = v9;
LABEL_8:
  v13 = a3[2];
  if ( v13 >= a3[3] )
  {
    result = 0xFFFFFFFFLL;
    goto LABEL_10;
  }
  a3[2] = v13 + 1;
  v18 = (unsigned int)a3[1];
  if ( (_DWORD)v18 == 0 )
  {
LABEL_35:
    v31 = v41;
    i = MEMORY[0x18276BEE0](a1: v12, a2: v11, a3, a4: v40);
    if ( (_DWORD)v25 != 0 )
    {
      v33 = *(unsigned int *)(v32 + v31);
      v25 = *(unsigned int *)(v7 + 8 * v33 + 28);
      if ( (_DWORD)v25 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v33 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v33 + 28) = v25 - 1;
      }
      if ( (_DWORD)v25 != 1 )
        goto LABEL_30;
      v34 = *(unsigned int *)(v7 + 8 * v33 + 4);
      if ( (_DWORD)v34 == 0 )
        goto LABEL_30;
      v35 = *(unsigned int *)(v7 + 8 * v34 + 8);
      if ( (_DWORD)v35 == 0 || *(_DWORD *)(v7 + 8 * v35 + 16) == 0 )
        goto LABEL_30;
      v36 = 1;
    }
    else
    {
      v36 = 0xFFFFFFFFLL;
    }
    v38 = i;
    MEMORY[0x18208CCA0](a1: v26, a2: v27, a3: v32, a4: v25, a5: v36);
    for ( i = v38; ; i = v38 )
    {
      do
      {
        do
        {
LABEL_30:
          i = MEMORY[0x182769900](a1: v26, a2: v27, a3: i, a4: v25, a5: &a7);
          v29 = *(unsigned int *)(v7 + 8 * v28 + 4);
        }
        while ( (_DWORD)v29 == 0 );
        v30 = *(unsigned int *)(v7 + 8 * v29 + 8);
      }
      while ( (_DWORD)v30 == 0 || *(_DWORD *)(v7 + 8 * v30 + 16) == 0 );
      v38 = i;
      MEMORY[0x18208CCA0](a1: v26, a2: v27, a3: v24, a4: v25, a5: 1);
    }
  }
  result = (unsigned __int8)MEMORY[0x184FEBC20](a1: v12, a2: v11, a3: v7 + 8 * v18);
LABEL_10:
  if ( v40 == 0 )
  {
    v22 = 0xFFFFFFFFLL;
    v40 = result;
    v15 = v39;
    goto LABEL_28;
  }
  v15 = v39;
  v16 = *(unsigned int *)((char *)v39 + v41);
  v17 = *(_DWORD *)(v7 + 8 * v16 + 28);
  if ( v17 == 1 )
  {
    *(_QWORD *)(v7 + 8 * v16 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v7 + 8 * v16 + 28) = v17 - 1;
  }
  if ( v17 == 1 )
  {
    v19 = *(unsigned int *)(v7 + 8 * v16 + 4);
    if ( (_DWORD)v19 != 0 )
    {
      v20 = *(unsigned int *)(v7 + 8 * v19 + 8);
      if ( (_DWORD)v20 != 0 && *(_DWORD *)(v7 + 8 * v20 + 16) != 0 )
      {
        v22 = 1;
        v40 = result;
LABEL_28:
        MEMORY[0x18208CCA0](a1: v12, a2: v11, a3: v15, a4: v15, a5: v22);
        result = v40;
      }
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v40 = result;
    return MEMORY[0x18277F280]();
  }
  return result;
}
