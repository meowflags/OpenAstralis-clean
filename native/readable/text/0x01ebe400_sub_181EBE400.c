// sub_1EBE400
// rva 0x01ebe400  size 685  section .text  group text
// window base 0x181ebe400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBE400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // [rsp+0h] [rbp-18h] BYREF
  __int64 v34; // [rsp+8h] [rbp-10h]
  __int64 v35; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v8 + 8) )
  {
    v26 = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v33);
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 8 * v32 + 16) != 0 )
      {
        v34 = v26;
        sub_208CCA0(a1: v28, a2: v29, a3: v35, a4: v35, a5: 1);
        v26 = v34;
      }
      do
      {
        do
        {
          v26 = sub_2769900(a1: v28, a2: v29, a3: v26, a4: v27, a5: &a7);
          v31 = *(unsigned int *)(v7 + 8 * v30 + 4);
        }
        while ( (_DWORD)v31 == 0 );
        v32 = *(unsigned int *)(v7 + 8 * v31 + 8);
      }
      while ( (_DWORD)v32 == 0 );
    }
  }
  if ( *(_QWORD *)(v7 + 376612208) != 1 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  v10 = *(unsigned int *)(v7 + 376658380);
  v11 = v7 + 376658376;
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_33;
  v12 = *(_QWORD *)(v8 + 64);
  v13 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v13 != 0 )
  {
    if ( v13 == v12 )
    {
      v25 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1;
      if ( v25 >= 0 )
      {
        *(_DWORD *)(v7 + 8 * v10 + 28) = v25;
        v35 = v7 + 376658376;
        goto LABEL_11;
      }
    }
    goto LABEL_33;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v12) != 0 )
  {
LABEL_33:
    v35 = v7 + 376658376;
    sub_208CC20(a1, a2, a3: v7 + 376658376);
    goto LABEL_11;
  }
  v35 = v7 + 376658376;
LABEL_11:
  if ( *(_BYTE *)(v7 + 376242779) != 0 || sub_1E9AAE0(a1, a2) )
  {
    sub_208B5E0(a1, a2, a3: v7 + 376381032, a4: v11, a5: v35, a6: 0);
    v17 = *(unsigned int *)(v7 + 376658380);
    v18 = *(_DWORD *)(v7 + 8 * v17 + 28);
    if ( v18 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v17 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v17 + 28) = v18 - 1;
    }
    if ( v18 == 1 )
    {
      v21 = *(unsigned int *)(v7 + 8 * v17 + 4);
      if ( (_DWORD)v21 != 0 )
      {
        v22 = *(unsigned int *)(v7 + 8 * v21 + 8);
        if ( (_DWORD)v22 != 0 && *(_DWORD *)(v7 + 8 * v22 + 16) != 0 )
          sub_208CCA0(a1: v15, a2: v16, a3: v35, a4: v14, a5: 1);
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  else
  {
    v19 = *(unsigned int *)(v7 + 376658380);
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
    if ( v20 == 1 )
    {
      v23 = *(unsigned int *)(v7 + 8 * v19 + 4);
      if ( (_DWORD)v23 != 0 )
      {
        v24 = *(unsigned int *)(v7 + 8 * v23 + 8);
        if ( (_DWORD)v24 != 0 && *(_DWORD *)(v7 + 8 * v24 + 16) != 0 )
          sub_208CCA0(a1, a2, a3: v35, a4: v11, a5: 1);
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
}
