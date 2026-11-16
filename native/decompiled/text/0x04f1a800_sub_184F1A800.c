// sub_184F1A800
// rva 0x04f1a800  size 724  section .text  group text
// window base 0x184f1a800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1A800(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rbx
  _DWORD *v34; // rax
  __int64 v35; // rbp
  __int64 v36; // r8
  int v37; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v38; // [rsp+8h] [rbp-20h]
  _DWORD *v39; // [rsp+10h] [rbp-18h]
  unsigned int v40; // [rsp+1Ch] [rbp-Ch]
  __int64 v41; // [rsp+20h] [rbp-8h]

  v39 = a3;
  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_43;
  }
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_22;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_22;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v41 = (int)v10;
      v40 = v10;
      goto LABEL_8;
    }
    goto LABEL_22;
  }
  if ( v13 != v12 || (v26 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_22:
    v41 = (int)v10;
    v40 = v10;
    MEMORY[0x18208CC20]();
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v26;
  v41 = (int)v10;
  v40 = v10;
LABEL_8:
  sub_184F1A6E0(a1: v13, a2: v12, a3: (__int64)v39, a4: v10, a5, a6, a7: v37);
  v16 = (__int64)v39;
  v17 = (unsigned int)v39[1];
  if ( (_DWORD)v17 != 0 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v17) >> 3) + 120)))(
      a1: v14,
      a2: v15,
      a3: v8 + 8 * v17);
    v20 = v40;
    goto LABEL_10;
  }
LABEL_43:
  v33 = v41;
  v34 = (_DWORD *)MEMORY[0x18276BEE0](a1: v14, a2: v15, a3: v16, a4: v40);
  v30 = *v34 >> 3;
  if ( *(__int16 *)(v8 + 8 * v30 + 62) >= 4
    && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v30 + 16) + 24) == 81613 )
  {
    goto LABEL_33;
  }
  v28 = (__int64)v39;
  if ( (_DWORD)v20 != 0 )
  {
    v29 = *(unsigned int *)((char *)v39 + v33);
    v20 = *(unsigned int *)(v8 + 8 * v29 + 28);
    if ( (_DWORD)v20 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v29 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v33 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v8 + 8 * v29 + 28) = v33;
    }
    if ( (_DWORD)v20 != 1 )
      goto LABEL_32;
    v31 = *(unsigned int *)(v8 + 8 * v29 + 4);
    if ( (_DWORD)v31 == 0 )
      goto LABEL_32;
    v32 = *(unsigned int *)(v8 + 8 * v31 + 8);
    if ( (_DWORD)v32 == 0 )
      goto LABEL_32;
    v20 = *(unsigned int *)(v8 + 8 * v32 + 16);
    if ( (_DWORD)v20 == 0 )
      goto LABEL_32;
    v35 = v28;
    v36 = (_DWORD)v20 != 0;
    v38 = v34;
  }
  else
  {
    v36 = 0xFFFFFFFFLL;
    v38 = v34;
    v35 = (__int64)v39;
  }
  MEMORY[0x18208CCA0](a1: v18, a2: v19, a3: v35, a4: v20, a5: v36);
  v34 = v38;
LABEL_32:
  MEMORY[0x182769900](a1: v18, a2: v19, a3: v34, a4: v20, a5: &a7);
LABEL_33:
  *((_BYTE *)v39 + 14) = 1;
  v41 = v33;
LABEL_10:
  if ( (_DWORD)v20 == 0 )
  {
    v27 = 0xFFFFFFFFLL;
    v21 = (__int64)v39;
    goto LABEL_26;
  }
  v21 = (__int64)v39;
  v22 = *(unsigned int *)((char *)v39 + v41);
  result = *(unsigned int *)(v8 + 8 * v22 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v22 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v20 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v22 + 28) = v20;
  }
  if ( (_DWORD)result == 1 )
  {
    v24 = *(unsigned int *)(v8 + 8 * v22 + 4);
    if ( (_DWORD)v24 != 0 )
    {
      v25 = *(unsigned int *)(v8 + 8 * v24 + 8);
      if ( (_DWORD)v25 != 0 && *(_DWORD *)(v8 + 8 * v25 + 16) != 0 )
      {
        v27 = 1;
LABEL_26:
        result = MEMORY[0x18208CCA0](a1: v18, a2: v19, a3: v21, a4: v20, a5: v27);
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
