// sub_184F1BAE0
// rva 0x04f1bae0  size 734  section .text  group text
// window base 0x184f1bae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1BAE0(int a1, int a2, _DWORD *a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  signed __int64 v18; // rsi
  __int64 v19; // rdi
  signed __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // r8
  __int64 i; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  _DWORD *v40; // rbp
  __int64 v41; // r8
  int v42; // [rsp+0h] [rbp-38h] BYREF
  __int64 v43; // [rsp+8h] [rbp-30h]
  unsigned int v44; // [rsp+14h] [rbp-24h]
  __int64 v45; // [rsp+18h] [rbp-20h]
  _DWORD *v46; // [rsp+20h] [rbp-18h]
  unsigned int v47; // [rsp+2Ch] [rbp-Ch]
  __int64 v48; // [rsp+30h] [rbp-8h]

  v46 = a3;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v9 + 8) )
  {
    v45 = a5;
    for ( i = MEMORY[0x181EB84E0](); ; i = MEMORY[0x182769900](a1: v33, a2: v34, a3: i, a4: v35, a5: &a7) )
    {
      v35 = v47;
      if ( v47 == 0 )
        break;
      v36 = v46;
      v37 = *(unsigned int *)((char *)v46 + v48);
      v35 = *(unsigned int *)(v8 + 8 * v37 + 28);
      if ( (_DWORD)v35 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v37 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v37 + 28) = v35 - 1;
      }
      if ( (_DWORD)v35 == 1 )
      {
        v38 = *(unsigned int *)(v8 + 8 * v37 + 4);
        if ( (_DWORD)v38 != 0 )
        {
          v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
          if ( (_DWORD)v39 != 0 )
          {
            v35 = *(unsigned int *)(v8 + 8 * v39 + 16);
            if ( (_DWORD)v35 != 0 )
            {
              v40 = v36;
              v41 = (_DWORD)v35 != 0;
              v43 = i;
LABEL_46:
              MEMORY[0x18208CCA0](a1: v33, a2: v34, a3: v40, a4: v35, a5: v41);
              i = v43;
              continue;
            }
          }
        }
      }
    }
    v41 = 0xFFFFFFFFLL;
    v43 = i;
    v40 = v46;
    goto LABEL_46;
  }
  if ( *a3 >> 3 == 4265946 )
  {
    if ( a5 == v8 )
      v10 = v8 + 353301280;
    else
      v10 = a5;
    v45 = a5;
    result = sub_184F1CD80(a1, a2, (_DWORD)a3, a4: (_DWORD)a3, a5: v10, a6, a7: v42);
    v14 = v46;
    goto LABEL_6;
  }
  v45 = a5;
  v15 = *a3 >> 3;
  v16 = *(unsigned int *)(v8 + 8 * v15 + 48);
  if ( (_DWORD)v16 == 0 )
  {
    v48 = 0;
    v47 = 0;
    v44 = v15;
    goto LABEL_25;
  }
  v17 = *(unsigned int *)((char *)a3 + (int)v16);
  if ( (_DWORD)v17 == 0 )
  {
    v48 = (int)v16;
    v47 = v16;
    v44 = v15;
    goto LABEL_25;
  }
  if ( v9 == *(_QWORD *)(v8 + 376351704) )
  {
    v48 = (int)v16;
    v47 = v16;
    v44 = v15;
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v9 + 64);
  v19 = *(_QWORD *)(v8 + 8 * v17 + 16);
  if ( v19 == 0 )
  {
    v44 = *a3 >> 3;
    v20 = __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v17 + 16), 0, v18);
    v48 = (int)v16;
    v47 = v16;
    if ( v20 == 0 )
      goto LABEL_14;
    goto LABEL_25;
  }
  v44 = *a3 >> 3;
  if ( v19 != v18 )
  {
    v48 = (int)v16;
    v47 = v16;
LABEL_25:
    MEMORY[0x18208CC20]();
    goto LABEL_14;
  }
  v30 = *(_DWORD *)(v8 + 8 * v17 + 28) + 1;
  if ( v30 < 0 )
  {
    v48 = (int)v16;
    v47 = v16;
    goto LABEL_25;
  }
  *(_DWORD *)(v8 + 8 * v17 + 28) = v30;
  v48 = (int)v16;
  v47 = v16;
LABEL_14:
  ((void (__fastcall *)(__int64, signed __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v44 + 352)))(
    a1: v19,
    a2: v18,
    a3: v46,
    a4: v16,
    a5: v45);
  sub_184F1B000(a1: v22, a2: v23, a3: v46, a4: v21, a5: v24, a6: v25, a7: v42);
  v26 = v47;
  if ( v47 == 0 )
  {
    v31 = 0xFFFFFFFFLL;
    v14 = v46;
    goto LABEL_31;
  }
  v14 = v46;
  v27 = *(unsigned int *)((char *)v46 + v48);
  result = *(unsigned int *)(v8 + 8 * v27 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v27 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v26 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v27 + 28) = v26;
  }
  if ( (_DWORD)result == 1 )
  {
    v28 = *(unsigned int *)(v8 + 8 * v27 + 4);
    if ( (_DWORD)v28 != 0 )
    {
      v29 = *(unsigned int *)(v8 + 8 * v28 + 8);
      if ( (_DWORD)v29 != 0 && *(_DWORD *)(v8 + 8 * v29 + 16) != 0 )
      {
        v31 = 1;
LABEL_31:
        result = MEMORY[0x18208CCA0](a1: v12, a2: v13, a3: v14, a4: v26, a5: v31);
        v14 = v46;
      }
    }
  }
LABEL_6:
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v14);
  return result;
}
