// sub_4F349E0
// rva 0x04f349e0  size 1182  section .text  group text
// window base 0x184f349e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F349E0(
        unsigned __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  signed __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 i; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  unsigned __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // [rsp+0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+18h] [rbp-30h]
  __int64 v39; // [rsp+20h] [rbp-28h]
  _DWORD *v40; // [rsp+28h] [rbp-20h]
  __int64 v41; // [rsp+30h] [rbp-18h]
  int v42; // [rsp+3Ch] [rbp-Ch]
  unsigned int v43; // [rsp+40h] [rbp-8h]
  unsigned int v44; // [rsp+44h] [rbp-4h]

  v40 = a3;
  v39 = a5;
  v44 = a1;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v9 + 8) )
  {
    v43 = a6;
    sub_1EB84E0();
    goto LABEL_62;
  }
  v10 = (unsigned int)a3[2];
  v11 = v8 + 8 * v10;
  v38 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_62:
    v43 = a6;
    sub_2771080();
    goto LABEL_63;
  }
  v12 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 48);
  v42 = v12;
  v41 = v12;
  if ( v12 == 0 )
    goto LABEL_38;
  a2 = *(unsigned int *)(v11 + v12);
  if ( (_DWORD)a2 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_38;
  v13 = *(_QWORD *)(v9 + 64);
  v14 = *(_QWORD *)(v8 + 8 * a2 + 16);
  if ( v14 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * a2 + 16), 0, v13) == 0 )
    {
      v43 = a6;
      goto LABEL_9;
    }
    goto LABEL_38;
  }
  if ( v14 != v13 || (v26 = *(_DWORD *)(v8 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_38:
    v43 = a6;
    sub_208CC20(a1, a2, a3: v11);
    goto LABEL_9;
  }
  *(_DWORD *)(v8 + 8 * a2 + 28) = v26;
  v43 = a6;
LABEL_9:
  i = 34089376;
  if ( (int)v44 < 1025 )
  {
    v18 = (unsigned int)v40[1];
    if ( (_DWORD)v18 != 0 )
    {
      v19 = v39;
      v16 = v8 + 8 * v18;
    }
    else
    {
      v25 = (unsigned __int64)v40;
      v16 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v16 + 2064) > *(_QWORD *)(v9 + 32) )
      {
        v16 = sub_1EAA840(a1, a2, a3: 34089376, a4: 34089376, a5: 1024);
        v25 = (unsigned __int64)v40;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v16 + 2064;
        *(_QWORD *)v16 = 34089376;
        *(_DWORD *)(v16 + 8) = 1024;
        *(_DWORD *)(v16 + 12) = 0;
        memset((void *)(v16 + 16), 0, 0x800u);
        a1 = v16 + 2064;
        i = 0;
      }
      *(_DWORD *)(v25 + 4) = (unsigned __int64)(v16 - v8) >> 3;
      if ( (*(_DWORD *)v25 & 2) != 0 )
      {
        i = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - i) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - i) >> 9) + 0x38) = 0;
        v19 = v39;
      }
      else
      {
        v19 = v39;
      }
    }
  }
  else
  {
    v16 = *(_QWORD *)(v9 + 40);
    a1 = (2LL * v44 + 19) & 0x3FFFFFFF8LL;
    if ( a1 >= 0x20000 || v16 + a1 > *(_QWORD *)(v9 + 32) )
    {
      v16 = sub_1EAA840(a1, a2, a3: 34089376, a4: 34089376, a5: v44);
      v19 = v39;
    }
    else
    {
      v17 = v44;
      *(_QWORD *)(v9 + 40) = v16 + a1;
      *(_QWORD *)v16 = 34089376;
      *(_QWORD *)(v16 + 8) = v17;
      if ( a1 - 16 >= 0x800 )
      {
        memset((void *)(v16 + 16), 0, a1 - 16);
        a1 += v16;
        i = 0;
      }
      else
      {
        for ( i = 16; a1 > i; i += 8LL )
          *(_QWORD *)(v16 + i) = 0;
      }
      v19 = v39;
    }
  }
  if ( v19 == v8 )
  {
LABEL_63:
    v31 = sub_276BEE0(a1, a2, a3: v16, a4: i);
    if ( v42 != 0 )
    {
      v28 = v38;
      v29 = *(unsigned int *)(v38 + v41);
      v30 = *(_DWORD *)(v8 + 8 * v29 + 28);
      if ( v30 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v29 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v29 + 28) = v30 - 1;
      }
      if ( v30 == 1 )
        goto LABEL_56;
      while ( 1 )
      {
        while ( 1 )
        {
          v31 = sub_2769900(a1: v32, a2: v33, a3: v31, a4: v28, a5: &a7);
LABEL_56:
          v34 = *(unsigned int *)(v8 + 8 * v29 + 4);
          if ( (_DWORD)v34 != 0 )
          {
            v35 = *(unsigned int *)(v8 + 8 * v34 + 8);
            if ( (_DWORD)v35 != 0 && *(_DWORD *)(v8 + 8 * v35 + 16) != 0 )
              break;
          }
        }
        v37 = v31;
LABEL_65:
        sub_208CCA0(a1: v32, a2: v33, a3: v28);
        v31 = v37;
        v28 = v38;
      }
    }
    v37 = v31;
    v28 = v38;
    goto LABEL_65;
  }
  v37 = v16;
  sub_4FF3680(a1: v16, a2: 0, a3: v19, a4: i, a5: v43, a6: v44 + v43);
  ((void (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v7
                                                                             + *(_QWORD *)(v8 + 8LL * (*v40 >> 3) + 208)))(
    a1: v44,
    a2: v20,
    a3: v40,
    a4: v40,
    a5: v37,
    a6: 0);
  if ( v42 == 0 )
  {
    v27 = 0xFFFFFFFFLL;
    goto LABEL_46;
  }
  v21 = v38;
  result = *(unsigned int *)(v38 + v41);
  v22 = *(unsigned int *)(v8 + 8 * result + 28);
  if ( (_DWORD)v22 == 1 )
  {
    *(_QWORD *)(v8 + 8 * result + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * result + 28) = v22 - 1;
  }
  if ( (_DWORD)v22 == 1 )
  {
    result = *(unsigned int *)(v8 + 8 * result + 4);
    if ( (_DWORD)result != 0 )
    {
      result = *(unsigned int *)(v8 + 8 * result + 8);
      if ( (_DWORD)result != 0 )
      {
        result = *(unsigned int *)(v8 + 8 * result + 16);
        if ( (_DWORD)result != 0 )
        {
          v27 = 1;
LABEL_46:
          result = sub_208CCA0(a1: v22, a2: v23, a3: v38, a4: v21, a5: v27);
        }
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
