// sub_184F1B780
// rva 0x04f1b780  size 860  section .text  group text
// window base 0x184f1b780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1B780(__int64 a1, signed __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64, signed __int64, _DWORD *); // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbp
  signed __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // r8
  __int64 result; // rax
  int v27; // r8d
  __int64 v28; // r8
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r8
  _DWORD *v40; // rbp
  __int64 v41; // r8
  int v42; // [rsp+0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+10h] [rbp-38h]
  unsigned int v44; // [rsp+1Ch] [rbp-2Ch]
  __int64 v45; // [rsp+20h] [rbp-28h]
  _DWORD *v46; // [rsp+28h] [rbp-20h]
  _DWORD *v47; // [rsp+30h] [rbp-18h]
  unsigned int v48; // [rsp+3Ch] [rbp-Ch]
  __int64 v49; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v9 + 8) )
  {
    v46 = a5;
    v35 = MEMORY[0x181EB84E0]();
    while ( 1 )
    {
      *(_DWORD *)(v8 + 8 * v34 + 28) = v32 - 1;
      while ( 1 )
      {
        if ( (_DWORD)v32 == 1 )
        {
          v38 = *(unsigned int *)(v8 + 8 * v34 + 4);
          if ( (_DWORD)v38 != 0 )
          {
            v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
            if ( (_DWORD)v39 != 0 )
            {
              v32 = *(unsigned int *)(v8 + 8 * v39 + 16);
              if ( (_DWORD)v32 != 0 )
              {
                v40 = v33;
                v41 = (_DWORD)v32 != 0;
                v43 = v35;
                goto LABEL_51;
              }
            }
          }
        }
        while ( 1 )
        {
          v35 = MEMORY[0x182769900](a1: v36, a2: v37, a3: v35, a4: v32, a5: &a7);
          v32 = v48;
          if ( v48 != 0 )
            break;
          v41 = 0xFFFFFFFFLL;
          v43 = v35;
          v40 = v47;
LABEL_51:
          MEMORY[0x18208CCA0](a1: v36, a2: v37, a3: v40, a4: v32, a5: v41);
          v35 = v43;
        }
        v33 = v47;
        v34 = *(unsigned int *)((char *)v47 + v49);
        v32 = *(unsigned int *)(v8 + 8 * v34 + 28);
        if ( (_DWORD)v32 != 1 )
          break;
        *(_QWORD *)(v8 + 8 * v34 + 16) = 0;
        __faststorefence();
      }
    }
  }
  v47 = a3;
  if ( a5 == (_DWORD *)v8 )
  {
    v46 = a5;
    v11 = v8 + 353301280;
  }
  else
  {
    v10 = (__int64 (__fastcall *)(__int64, signed __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*a5 >> 3) + 104));
    v46 = a5;
    v11 = v10(a1, a2, a3: a5);
  }
  if ( *v47 >> 3 == 4265946 )
  {
    if ( v11 == v8 )
      v27 = v8 + 353301280;
    else
      v27 = v11;
    v45 = v11;
    result = sub_184F1CD80(a1: v11, a2, a3: (_DWORD)v47, a4: (_DWORD)v47, a5: v27, a6, a7: v42);
    goto LABEL_15;
  }
  v12 = *v47 >> 3;
  v13 = *(unsigned int *)(v8 + 8 * v12 + 48);
  if ( (_DWORD)v13 == 0 )
  {
    v49 = 0;
    v48 = 0;
    v44 = v12;
    v45 = v11;
LABEL_29:
    MEMORY[0x18208CC20](a1, a2, a3: v47);
    v12 = v44;
    goto LABEL_11;
  }
  v14 = *(unsigned int *)((char *)v47 + (int)v13);
  if ( (_DWORD)v14 == 0 )
  {
    v49 = (int)v13;
    v48 = v13;
    v44 = v12;
    v45 = v11;
    goto LABEL_29;
  }
  if ( v9 == *(_QWORD *)(v8 + 376351704) )
  {
    v49 = (int)v13;
    v48 = v13;
    v44 = v12;
    v45 = v11;
    goto LABEL_29;
  }
  a2 = *(_QWORD *)(v9 + 64);
  a1 = *(_QWORD *)(v8 + 8 * v14 + 16);
  if ( a1 != 0 )
  {
    v45 = v11;
    if ( a1 == a2 )
    {
      v30 = *(_DWORD *)(v8 + 8 * v14 + 28) + 1;
      if ( v30 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * v14 + 28) = v30;
        v49 = (int)v13;
        v48 = v13;
        goto LABEL_11;
      }
      v49 = (int)v13;
      v48 = v13;
      v44 = v12;
    }
    else
    {
      v49 = (int)v13;
      v48 = v13;
      v44 = v12;
    }
    goto LABEL_29;
  }
  a1 = v11;
  v15 = __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v14 + 16), 0, a2);
  v49 = (int)v13;
  v48 = v13;
  if ( v15 != 0 )
  {
    v44 = v12;
    v45 = a1;
    goto LABEL_29;
  }
  v45 = a1;
LABEL_11:
  ((void (__fastcall *)(__int64, signed __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8 * v12 + 352)))(
    a1,
    a2,
    a3: v47,
    a4: v13,
    a5: v45);
  sub_184F1B000(a1: v17, a2: v18, a3: v47, a4: v16, a5: v19, a6: v20, a7: v42);
  v23 = v48;
  if ( v48 == 0 )
  {
    v31 = 0xFFFFFFFFLL;
    v24 = v47;
    goto LABEL_34;
  }
  v24 = v47;
  v25 = *(unsigned int *)((char *)v47 + v49);
  result = *(unsigned int *)(v8 + 8 * v25 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v25 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v23 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v25 + 28) = v23;
  }
  if ( (_DWORD)result == 1 )
  {
    v28 = *(unsigned int *)(v8 + 8 * v25 + 4);
    if ( (_DWORD)v28 != 0 )
    {
      v29 = *(unsigned int *)(v8 + 8 * v28 + 8);
      if ( (_DWORD)v29 != 0 && *(_DWORD *)(v8 + 8 * v29 + 16) != 0 )
      {
        v31 = 1;
LABEL_34:
        result = MEMORY[0x18208CCA0](a1: v21, a2: v22, a3: v24, a4: v23, a5: v31);
      }
    }
  }
LABEL_15:
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
