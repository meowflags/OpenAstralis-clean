// sub_184F1F880
// rva 0x04f1f880  size 707  section .text  group text
// window base 0x184f1f880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1F880(
        signed __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (__fastcall *v10)(signed __int64, __int64, _DWORD *); // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // r8
  void (__fastcall *v17)(signed __int64, __int64, _DWORD *, _DWORD *, __int64); // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rbx
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rcx
  _DWORD *v32; // rbx
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // [rsp+0h] [rbp-48h] BYREF
  __int64 v42; // [rsp+8h] [rbp-40h]
  unsigned int v43; // [rsp+14h] [rbp-34h]
  _DWORD *v44; // [rsp+18h] [rbp-30h]
  __int64 v45; // [rsp+20h] [rbp-28h]
  _DWORD *v46; // [rsp+28h] [rbp-20h]
  _DWORD *v47; // [rsp+30h] [rbp-18h]
  unsigned int v48; // [rsp+3Ch] [rbp-Ch]
  __int64 v49; // [rsp+40h] [rbp-8h]

  v47 = a3;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
  {
    v46 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_41;
  }
  if ( a5 == (_DWORD *)v8 )
  {
    v46 = a5;
    v11 = v8 + 353301280;
  }
  else
  {
    v10 = (__int64 (__fastcall *)(signed __int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*a5 >> 3) + 104));
    v46 = a5;
    v11 = v10(a1, a2, a3: a5);
  }
  v45 = v11;
  v12 = v47;
  v13 = (unsigned int)v47[2];
  v14 = v8 + 8 * v13;
  if ( (_DWORD)v13 == 0 )
  {
LABEL_41:
    v35 = MEMORY[0x182771080]();
LABEL_42:
    v40 = 0xFFFFFFFFLL;
    v42 = v35;
    v32 = v44;
    while ( 1 )
    {
      MEMORY[0x18208CCA0](a1: v36, a2: v37, a3: v32, a4: v31, a5: v40);
      v35 = v42;
      while ( 1 )
      {
        v35 = MEMORY[0x182769900](a1: v36, a2: v37, a3: v35, a4: v31, a5: &a7);
        v31 = v48;
        if ( v48 == 0 )
          goto LABEL_42;
        v32 = v44;
        v33 = *(unsigned int *)((char *)v44 + v49);
        v34 = *(_DWORD *)(v8 + 8 * v33 + 28);
        if ( v34 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v33 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v31 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v8 + 8 * v33 + 28) = v31;
        }
        if ( v34 == 1 )
        {
          v38 = *(unsigned int *)(v8 + 8 * v33 + 4);
          if ( (_DWORD)v38 != 0 )
          {
            v39 = *(unsigned int *)(v8 + 8 * v38 + 8);
            if ( (_DWORD)v39 != 0 )
            {
              v31 = *(unsigned int *)(v8 + 8 * v39 + 16);
              if ( (_DWORD)v31 != 0 )
                break;
            }
          }
        }
      }
      v40 = 1;
      v42 = v35;
    }
  }
  v44 = (_DWORD *)(v8 + 8 * v13);
  v15 = *(_DWORD *)(v8 + 8LL * (*v44 >> 3) + 48);
  if ( v15 == 0 )
    goto LABEL_24;
  a2 = *(unsigned int *)(v14 + (int)v15);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_24;
  a1 = *(_QWORD *)(v9 + 64);
  v16 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v16 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v49 = (int)v15;
      v48 = v15;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  if ( v16 != a1 || (v29 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_24:
    v49 = (int)v15;
    v48 = v15;
    MEMORY[0x18208CC20](a1, a2, a3: v14);
    v12 = v47;
    goto LABEL_11;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v29;
  v49 = (int)v15;
  v48 = v15;
LABEL_11:
  v17 = (void (__fastcall *)(signed __int64, __int64, _DWORD *, _DWORD *, __int64))(v7
                                                                                  + *(_QWORD *)(v8
                                                                                              + 8LL * (*v12 >> 3)
                                                                                              + 392));
  v43 = *v12 >> 3;
  v17(a1, a2, a3: v12, a4: v12, a5: v45);
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v43 + 424)))(
             a1: v18,
             a2: v19,
             a3: v47);
  v23 = v48;
  if ( v48 == 0 )
  {
    v30 = 0xFFFFFFFFLL;
    v24 = v44;
    goto LABEL_28;
  }
  v24 = v44;
  v25 = *(unsigned int *)((char *)v44 + v49);
  v26 = *(_DWORD *)(v8 + 8 * v25 + 28);
  if ( v26 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v25 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v26 - 1);
    *(_DWORD *)(v8 + 8 * v25 + 28) = result;
  }
  if ( v26 == 1 )
  {
    v27 = *(unsigned int *)(v8 + 8 * v25 + 4);
    if ( (_DWORD)v27 != 0 )
    {
      v28 = *(unsigned int *)(v8 + 8 * v27 + 8);
      if ( (_DWORD)v28 != 0 && *(_DWORD *)(v8 + 8 * v28 + 16) != 0 )
      {
        v30 = 1;
LABEL_28:
        result = MEMORY[0x18208CCA0](a1: v21, a2: v22, a3: v24, a4: v23, a5: v30);
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
