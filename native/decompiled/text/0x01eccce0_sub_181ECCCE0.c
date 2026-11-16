// sub_181ECCCE0
// rva 0x01eccce0  size 794  section .text  group text
// window base 0x181eccce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECCCE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 (*v11)(void); // rax
  _DWORD *v12; // rax
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  signed __int64 v16; // rbp
  _DWORD *v17; // rdi
  signed __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+10h] [rbp-48h]
  _DWORD *v38; // [rsp+18h] [rbp-40h]
  _DWORD *v39; // [rsp+20h] [rbp-38h]
  __int64 v40; // [rsp+28h] [rbp-30h]
  __int64 v41; // [rsp+30h] [rbp-28h]
  __int64 v42; // [rsp+38h] [rbp-20h]
  int v43; // [rsp+44h] [rbp-14h]
  __int64 v44; // [rsp+48h] [rbp-10h]
  int v45; // [rsp+50h] [rbp-8h]
  int v46; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v10 + 8) )
  {
    v42 = a4;
    v46 = a2;
    v45 = a1;
    v41 = a6;
    v40 = a5;
    v39 = a3;
    v28 = sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v36);
    v30 = (unsigned int)(v35 - 1);
    *(_DWORD *)(v9 + 8 * v29 + 28) = v30;
    if ( v35 == 1 )
      goto LABEL_32;
    while ( 1 )
    {
      v28 = MEMORY[0x182769900](a1: v31, a2: v32, a3: v28, a4: v30, a5: &a7);
LABEL_32:
      v33 = *(unsigned int *)(v9 + 8 * v29 + 4);
      if ( (_DWORD)v33 != 0 )
      {
        v34 = *(unsigned int *)(v9 + 8 * v33 + 8);
        if ( (_DWORD)v34 != 0 )
        {
          v30 = *(unsigned int *)(v9 + 8 * v34 + 16);
          if ( (_DWORD)v30 != 0 )
          {
            v37 = v28;
            MEMORY[0x18208CCA0](a1: v31, a2: v32, a3: v7, a4: v30, a5: (_DWORD)v30 != 0);
            v28 = v37;
            v7 = v38;
          }
        }
      }
    }
  }
  v42 = a4;
  v46 = a2;
  v45 = a1;
  v41 = a6;
  v40 = a5;
  v11 = (__int64 (*)(void))(v8 + *(_QWORD *)(v9 + 8LL * (*a3 >> 3) + 112));
  v39 = a3;
  v12 = (_DWORD *)v11();
  if ( v12 == (_DWORD *)v9 )
    v12 = v39;
  v38 = v12;
  v14 = *(_DWORD *)(v9 + 8LL * (*v12 >> 3) + 48);
  if ( v14 == 0 )
  {
    v44 = 0;
    v43 = 0;
    v17 = v12;
    goto LABEL_22;
  }
  v15 = *(unsigned int *)((char *)v12 + v14);
  if ( (_DWORD)v15 == 0 )
  {
    v44 = v14;
    v43 = v14;
    v17 = v12;
    goto LABEL_22;
  }
  if ( v10 == *(_QWORD *)(v9 + 376351704) )
  {
    v44 = v14;
    v43 = v14;
    v17 = v12;
    goto LABEL_22;
  }
  v16 = *(_QWORD *)(v10 + 64);
  v13 = *(_QWORD *)(v9 + 8 * v15 + 16);
  if ( v13 == 0 )
  {
    v17 = v12;
    v18 = __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v15 + 16), 0, v16);
    v44 = v14;
    v43 = v14;
    if ( v18 == 0 )
      goto LABEL_9;
    goto LABEL_22;
  }
  v17 = v12;
  if ( v13 != v16 )
  {
    v44 = v14;
    v43 = v14;
LABEL_22:
    MEMORY[0x18208CC20](a1: v17, a2: v13, a3: v17);
    goto LABEL_9;
  }
  v27 = *(_DWORD *)(v9 + 8 * v15 + 28) + 1;
  if ( v27 < 0 )
  {
    v44 = v14;
    v43 = v14;
    goto LABEL_22;
  }
  *(_DWORD *)(v9 + 8 * v15 + 28) = v27;
  v44 = v14;
  v43 = v14;
LABEL_9:
  result = sub_181ECD000(a1: v45, a2: v46, a3: (_DWORD)v39, a4: v42, a5: v40, a6: v41, a7: v36);
  if ( v43 == 0 )
  {
    v37 = result;
    v22 = v38;
    goto LABEL_27;
  }
  v22 = v38;
  v23 = *(unsigned int *)((char *)v38 + v44);
  v24 = *(_DWORD *)(v9 + 8 * v23 + 28);
  if ( v24 == 1 )
  {
    *(_QWORD *)(v9 + 8 * v23 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v9 + 8 * v23 + 28) = v24 - 1;
  }
  if ( v24 == 1 )
  {
    v25 = *(unsigned int *)(v9 + 8 * v23 + 4);
    if ( (_DWORD)v25 != 0 )
    {
      v26 = *(unsigned int *)(v9 + 8 * v25 + 8);
      if ( (_DWORD)v26 != 0 && *(_DWORD *)(v9 + 8 * v26 + 16) != 0 )
      {
        v37 = result;
LABEL_27:
        MEMORY[0x18208CCA0](a1: v20, a2: v21, a3: v22);
        result = v37;
      }
    }
  }
  if ( *(int *)(v10 + 16) <= 0 )
  {
    v37 = result;
    MEMORY[0x18277F280]();
    return v37;
  }
  return result;
}
