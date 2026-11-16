// sub_184F2C5C0
// rva 0x04f2c5c0  size 721  section .text  group text
// window base 0x184f2c5c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2C5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  signed __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rbp
  int v34; // ebx
  int v35; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+10h] [rbp-38h]
  __int64 v37; // [rsp+18h] [rbp-30h]
  __int64 v38; // [rsp+20h] [rbp-28h]
  __int64 v39; // [rsp+28h] [rbp-20h]
  unsigned int v40; // [rsp+30h] [rbp-18h]
  int v41; // [rsp+34h] [rbp-14h]
  __int64 v42; // [rsp+38h] [rbp-10h]
  unsigned int v43; // [rsp+40h] [rbp-8h]
  unsigned int v44; // [rsp+44h] [rbp-4h]

  v39 = a3;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v9 + 8) )
  {
    v44 = a1;
    v43 = a6;
    v37 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_39;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = v8 + 8 * v10;
  v38 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_39:
    v44 = a1;
    v43 = a6;
    v37 = a5;
    MEMORY[0x182771080]();
    goto LABEL_40;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  if ( v12 == 0 )
    goto LABEL_22;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_22;
  v13 = *(_QWORD *)(v9 + 64);
  v14 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v14 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, v13) == 0 )
    {
      v42 = v12;
      v41 = v12;
      v44 = a1;
      v43 = a6;
      v37 = a5;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
  if ( v14 != v13 || (v24 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_22:
    v42 = v12;
    v41 = v12;
    v44 = a1;
    v43 = a6;
    v37 = a5;
    MEMORY[0x18208CC20](a1, a2, a3: v11);
    a3 = v39;
    goto LABEL_9;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v24;
  v42 = v12;
  v41 = v12;
  v44 = a1;
  v43 = a6;
  v37 = a5;
LABEL_9:
  v15 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_40:
    v33 = v42;
    v34 = v41;
    v28 = MEMORY[0x18276BEE0]();
    if ( v34 != 0 )
    {
      v25 = v38;
      v26 = *(unsigned int *)(v38 + v33);
      v27 = *(_DWORD *)(v8 + 8 * v26 + 28);
      if ( v27 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v26 + 28) = v27 - 1;
      }
      if ( v27 == 1 )
        goto LABEL_33;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = MEMORY[0x182769900](a1: v29, a2: v30, a3: v28, a4: v25, a5: &a7);
LABEL_33:
          v31 = *(unsigned int *)(v8 + 8 * v26 + 4);
          if ( (_DWORD)v31 != 0 )
          {
            v32 = *(unsigned int *)(v8 + 8 * v31 + 8);
            if ( (_DWORD)v32 != 0 && *(_DWORD *)(v8 + 8 * v32 + 16) != 0 )
              break;
          }
        }
        v36 = v28;
LABEL_42:
        MEMORY[0x18208CCA0](a1: v29, a2: v30, a3: v25);
        v28 = v36;
        v25 = v38;
      }
    }
    v36 = v28;
    v25 = v38;
    goto LABEL_42;
  }
  result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(v7
                                                                                       + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v15) >> 3) + 160)))(
             a1: v44,
             a2,
             a3: v8 + 8 * v15,
             a4: v11,
             a5: v37,
             a6: v43);
  if ( v41 == 0 )
  {
    v40 = result;
    v19 = v38;
    goto LABEL_26;
  }
  v19 = v38;
  v20 = *(unsigned int *)(v38 + v42);
  v21 = *(_DWORD *)(v8 + 8 * v20 + 28);
  if ( v21 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v20 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v20 + 28) = v21 - 1;
  }
  if ( v21 == 1 )
  {
    v22 = *(unsigned int *)(v8 + 8 * v20 + 4);
    if ( (_DWORD)v22 != 0 )
    {
      v23 = *(unsigned int *)(v8 + 8 * v22 + 8);
      if ( (_DWORD)v23 != 0 && *(_DWORD *)(v8 + 8 * v23 + 16) != 0 )
      {
        v40 = result;
LABEL_26:
        MEMORY[0x18208CCA0](a1: v17, a2: v18, a3: v19);
        result = v40;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
  {
    v40 = result;
    return MEMORY[0x18277F280]();
  }
  return result;
}
