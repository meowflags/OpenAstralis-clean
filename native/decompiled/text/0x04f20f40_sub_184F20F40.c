// sub_184F20F40
// rva 0x04f20f40  size 962  section .text  group text
// window base 0x184f20f40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F20F40(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 i; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // [rsp+0h] [rbp-28h] BYREF
  __int64 v42; // [rsp+8h] [rbp-20h]
  _DWORD *v43; // [rsp+10h] [rbp-18h]
  unsigned int v44; // [rsp+1Ch] [rbp-Ch]
  __int64 v45; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_48;
  }
  v43 = a3;
  v10 = *(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( v10 == 0 )
    goto LABEL_30;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_30;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v45 = (int)v10;
      v44 = v10;
      goto LABEL_8;
    }
    goto LABEL_30;
  }
  if ( v13 != v12 || (v24 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_30:
    v45 = (int)v10;
    v44 = v10;
    MEMORY[0x18208CC20]();
    a3 = v43;
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v24;
  v45 = (int)v10;
  v44 = v10;
LABEL_8:
  if ( a3[1] != 0 )
  {
    v14 = (unsigned int)a3[1];
    if ( (_DWORD)v14 != 0 )
    {
      ((void (__fastcall *)(__int64, signed __int64, __int64))(v7
                                                             + *(_QWORD *)(v8
                                                                         + 8LL * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                         + 120)))(
        a1: v13,
        a2: v12,
        a3: v8 + 8 * v14);
      v15 = v44;
      a3 = v43;
      v43[1] = 0;
      __faststorefence();
      a3[2] = 0;
      if ( (_DWORD)v15 != 0 )
      {
        v16 = *(unsigned int *)((char *)a3 + v45);
        result = *(unsigned int *)(v8 + 8 * v16 + 28);
        if ( (_DWORD)result == 1 )
        {
          *(_QWORD *)(v8 + 8 * v16 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v15 = (unsigned int)(result - 1);
          *(_DWORD *)(v8 + 8 * v16 + 28) = v15;
        }
        if ( (_DWORD)result != 1
          || (_DWORD)(v22 = *(unsigned int *)(v8 + 8 * v16 + 4)) == 0
          || (_DWORD)(v23 = *(unsigned int *)(v8 + 8 * v22 + 8)) == 0
          || (_DWORD)(result = *(unsigned int *)(v8 + 8 * v23 + 16)) == 0 )
        {
LABEL_14:
          if ( *(int *)(v9 + 16) > 0 )
            return result;
          return MEMORY[0x18277F280](a1: v13, a2: v12, a3);
        }
        v26 = 1;
      }
      else
      {
        v26 = 0xFFFFFFFFLL;
      }
      result = MEMORY[0x18208CCA0](a1: v13, a2: v12, a3: v43, a4: v15, a5: v26);
      a3 = v43;
      goto LABEL_14;
    }
LABEL_48:
    v35 = v45;
    i = MEMORY[0x18276BEE0](a1: v13, a2: v12, a3, a4: v44);
    if ( (_DWORD)v29 != 0 )
    {
      v37 = *(unsigned int *)(v36 + v35);
      v29 = *(unsigned int *)(v8 + 8 * v37 + 28);
      if ( (_DWORD)v29 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v37 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v37 + 28) = v29 - 1;
      }
      if ( (_DWORD)v29 != 1 )
        goto LABEL_43;
      v38 = *(unsigned int *)(v8 + 8 * v37 + 4);
      if ( (_DWORD)v38 == 0 )
        goto LABEL_43;
      v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
      if ( (_DWORD)v39 == 0 || *(_DWORD *)(v8 + 8 * v39 + 16) == 0 )
        goto LABEL_43;
      v40 = 1;
    }
    else
    {
      v40 = 0xFFFFFFFFLL;
    }
    v42 = i;
    MEMORY[0x18208CCA0](a1: v30, a2: v31, a3: v36, a4: v29, a5: v40);
    for ( i = v42; ; i = v42 )
    {
      do
      {
        do
        {
LABEL_43:
          i = MEMORY[0x182769900](a1: v30, a2: v31, a3: i, a4: v29, a5: &a7);
          v33 = *(unsigned int *)(v8 + 8 * v32 + 4);
        }
        while ( (_DWORD)v33 == 0 );
        v34 = *(unsigned int *)(v8 + 8 * v33 + 8);
      }
      while ( (_DWORD)v34 == 0 || *(_DWORD *)(v8 + 8 * v34 + 16) == 0 );
      v42 = i;
      MEMORY[0x18208CCA0](a1: v30, a2: v31, a3: v28, a4: v29, a5: 1);
    }
  }
  v18 = v44;
  if ( v44 == 0 )
  {
    v25 = 0xFFFFFFFFLL;
    goto LABEL_38;
  }
  v19 = *(unsigned int *)((char *)a3 + v45);
  result = *(unsigned int *)(v8 + 8 * v19 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v19 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v18 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v19 + 28) = v18;
  }
  if ( (_DWORD)result == 1 )
  {
    v20 = *(unsigned int *)(v8 + 8 * v19 + 4);
    if ( (_DWORD)v20 != 0 )
    {
      v21 = *(unsigned int *)(v8 + 8 * v20 + 8);
      if ( (_DWORD)v21 != 0 && *(_DWORD *)(v8 + 8 * v21 + 16) != 0 )
      {
        v25 = 1;
LABEL_38:
        result = MEMORY[0x18208CCA0](a1: v13, a2: v12, a3, a4: v18, a5: v25);
        a3 = v43;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v13, a2: v12, a3);
  return result;
}
