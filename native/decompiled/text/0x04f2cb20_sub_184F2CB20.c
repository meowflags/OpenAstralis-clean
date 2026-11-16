// sub_184F2CB20
// rva 0x04f2cb20  size 613  section .text  group text
// window base 0x184f2cb20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2CB20(
        signed __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbp
  int v33; // ebx
  int v34; // [rsp+0h] [rbp-38h] BYREF
  __int64 v35; // [rsp+10h] [rbp-28h]
  __int64 v36; // [rsp+18h] [rbp-20h]
  __int64 v37; // [rsp+20h] [rbp-18h]
  int v38; // [rsp+2Ch] [rbp-Ch]
  __int64 v39; // [rsp+30h] [rbp-8h]

  v37 = a3;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_39;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = v8 + 8 * v10;
  v36 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_39:
    MEMORY[0x182771080]();
    goto LABEL_40;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  if ( v12 == 0 )
    goto LABEL_22;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_22;
  a1 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v39 = v12;
      v38 = v12;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
  if ( v13 != a1 || (v23 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_22:
    v39 = v12;
    v38 = v12;
    MEMORY[0x18208CC20](a1, a2, a3: v11);
    a3 = v37;
    goto LABEL_9;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v23;
  v39 = v12;
  v38 = v12;
LABEL_9:
  v14 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v14 == 0 )
  {
LABEL_40:
    v32 = v39;
    v33 = v38;
    v27 = MEMORY[0x18276BEE0]();
    if ( v33 != 0 )
    {
      v24 = v36;
      v25 = *(unsigned int *)(v36 + v32);
      v26 = *(_DWORD *)(v8 + 8 * v25 + 28);
      if ( v26 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v25 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v25 + 28) = v26 - 1;
      }
      if ( v26 == 1 )
        goto LABEL_33;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = MEMORY[0x182769900](a1: v28, a2: v29, a3: v27, a4: v24, a5: &a7);
LABEL_33:
          v30 = *(unsigned int *)(v8 + 8 * v25 + 4);
          if ( (_DWORD)v30 != 0 )
          {
            v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
            if ( (_DWORD)v31 != 0 && *(_DWORD *)(v8 + 8 * v31 + 16) != 0 )
              break;
          }
        }
        v35 = v27;
LABEL_42:
        MEMORY[0x18208CCA0](a1: v28, a2: v29, a3: v24);
        v27 = v35;
        v24 = v36;
      }
    }
    v35 = v27;
    v24 = v36;
    goto LABEL_42;
  }
  result = ((__int64 (__fastcall *)(signed __int64, __int64, __int64))(v7
                                                                     + *(_QWORD *)(v8
                                                                                 + 8LL
                                                                                 * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                                 + 192)))(
             a1,
             a2,
             a3: v8 + 8 * v14);
  if ( v38 == 0 )
  {
    v18 = v36;
LABEL_26:
    result = MEMORY[0x18208CCA0](a1: v16, a2: v17, a3: v18);
    goto LABEL_14;
  }
  v18 = v36;
  v19 = *(unsigned int *)(v36 + v39);
  v20 = *(_DWORD *)(v8 + 8 * v19 + 28);
  if ( v20 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v19 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v20 - 1);
    *(_DWORD *)(v8 + 8 * v19 + 28) = result;
  }
  if ( v20 == 1 )
  {
    v21 = *(unsigned int *)(v8 + 8 * v19 + 4);
    if ( (_DWORD)v21 != 0 )
    {
      v22 = *(unsigned int *)(v8 + 8 * v21 + 8);
      if ( (_DWORD)v22 != 0 && *(_DWORD *)(v8 + 8 * v22 + 16) != 0 )
        goto LABEL_26;
    }
  }
LABEL_14:
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
