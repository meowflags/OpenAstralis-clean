// sub_4F345C0
// rva 0x04f345c0  size 871  section .text  group text
// window base 0x184f345c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F345C0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // [rsp+0h] [rbp-38h] BYREF
  __int64 v38; // [rsp+10h] [rbp-28h]
  __int64 v39; // [rsp+18h] [rbp-20h]
  _DWORD *v40; // [rsp+20h] [rbp-18h]
  __int64 v41; // [rsp+28h] [rbp-10h]
  int v42; // [rsp+30h] [rbp-8h]
  int v43; // [rsp+34h] [rbp-4h]

  v40 = (_DWORD *)a3;
  v43 = a5;
  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_49;
  }
  v10 = *(unsigned int *)(a3 + 8);
  v11 = v8 + 8 * v10;
  v39 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_49:
    sub_2771080();
    goto LABEL_50;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  v42 = v12;
  v41 = v12;
  if ( v12 == 0 )
    goto LABEL_27;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_27;
  a1 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, a1) == 0 )
      goto LABEL_8;
    goto LABEL_27;
  }
  if ( v13 != a1 || (v27 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_27:
    sub_208CC20(a1, a2, a3: v11);
    a3 = (unsigned __int64)v40;
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v27;
LABEL_8:
  v14 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v14 != 0 )
  {
    v15 = v8 + 8 * v14;
  }
  else
  {
    v22 = *(_QWORD *)(v9 + 40);
    v23 = v22 + 2064;
    if ( (unsigned __int64)(v22 + 2064) > *(_QWORD *)(v9 + 32) )
    {
      v22 = sub_1EAA840(a1, a2, a3: 34089376, a4: v23, a5: 1024);
      a3 = (unsigned __int64)v40;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v23;
      *(_QWORD *)v22 = 34089376;
      *(_DWORD *)(v22 + 8) = 1024;
      *(_DWORD *)(v22 + 12) = 0;
      memset((void *)(v22 + 16), 0, 0x800u);
      a1 = v22 + 2064;
    }
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(v22 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      a1 = a3 & 0xFFFFFFFFFFF80000LL;
      v26 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v26) >> 9) + 0x38) = 0;
      v15 = v22;
    }
    else
    {
      v15 = v22;
    }
  }
  if ( *(_DWORD *)(v15 + 8) == 0 )
  {
LABEL_50:
    v32 = sub_276CFE0(a1, a2, a3: 0, a4: v15, a5: 0);
    if ( v42 != 0 )
    {
      v29 = v39;
      v30 = *(unsigned int *)(v39 + v41);
      v31 = *(_DWORD *)(v8 + 8 * v30 + 28);
      if ( v31 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v30 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v30 + 28) = v31 - 1;
      }
      if ( v31 == 1 )
        goto LABEL_43;
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = sub_2769900(a1: v33, a2: v34, a3: v32, a4: v29, a5: &a7);
LABEL_43:
          v35 = *(unsigned int *)(v8 + 8 * v30 + 4);
          if ( (_DWORD)v35 != 0 )
          {
            v36 = *(unsigned int *)(v8 + 8 * v35 + 8);
            if ( (_DWORD)v36 != 0 && *(_DWORD *)(v8 + 8 * v36 + 16) != 0 )
              break;
          }
        }
        v38 = v32;
LABEL_52:
        sub_208CCA0(a1: v33, a2: v34, a3: v29);
        v32 = v38;
        v29 = v39;
      }
    }
    v38 = v32;
    v29 = v39;
    goto LABEL_52;
  }
  *(_WORD *)(v15 + 12) = v43;
  result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64, __int64, _QWORD))(v7
                                                                                                 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)a3 >> 3) + 208)))(
             a1: 1,
             a2,
             a3,
             a4: v15,
             a5: v15,
             a6: 0);
  if ( v42 == 0 )
  {
    v28 = 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  v17 = v39;
  v20 = *(unsigned int *)(v39 + v41);
  v21 = *(_DWORD *)(v8 + 8 * v20 + 28);
  if ( v21 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v20 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v21 - 1);
    *(_DWORD *)(v8 + 8 * v20 + 28) = result;
  }
  if ( v21 == 1 )
  {
    v24 = *(unsigned int *)(v8 + 8 * v20 + 4);
    if ( (_DWORD)v24 != 0 )
    {
      v25 = *(unsigned int *)(v8 + 8 * v24 + 8);
      if ( (_DWORD)v25 != 0 )
      {
        result = *(unsigned int *)(v8 + 8 * v25 + 16);
        if ( (_DWORD)result != 0 )
        {
          v28 = 1;
LABEL_35:
          result = sub_208CCA0(a1: v18, a2: v19, a3: v39, a4: v17, a5: v28);
        }
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
