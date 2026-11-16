// sub_5046F80
// rva 0x05046f80  size 535  section .text  group text
// window base 0x185046f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5046F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, char a7)
{
  char *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // r9d
  int i; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // [rsp+0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+8h] [rbp-20h]
  _DWORD *v34; // [rsp+10h] [rbp-18h]
  char *v35; // [rsp+18h] [rbp-10h]
  int v36; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    v35 = a5;
    v34 = (_DWORD *)a3;
    sub_1EB84E0();
LABEL_13:
    v35 = a5;
    v34 = (_DWORD *)a3;
    v29 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v29 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v29 = sub_1EAA920(a1, a2, a3: 37751696);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v29 + 40;
      *(_DWORD *)v29 = 37751696;
      *(_DWORD *)(v29 + 4) = 0;
      *(_QWORD *)(v29 + 8) = 0;
      *(_QWORD *)(v29 + 16) = 0;
      *(_QWORD *)(v29 + 24) = 0;
      *(_QWORD *)(v29 + 32) = 0;
    }
    *(_DWORD *)(v29 + 20) = 46923644;
    *(_DWORD *)(v29 + 16) = *((_DWORD *)v7 + 93585974);
    *(_DWORD *)(v29 + 12) = (unsigned __int64)(v29 - (_QWORD)v7) >> 3;
    v33 = v29;
    sub_503B9A0(a1, a2, a3: (unsigned int *)v29, a4: v9, a5: 0);
    v30 = v33;
    *(_DWORD *)(v33 + 8) = 46527261;
    if ( (*(_DWORD *)v30 & 2) != 0 )
    {
      v20 = v30 & 0xFFFFFFFFFFF80000LL;
      v31 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v31) >> 9) + 0x38) = 0;
      v23 = v30;
    }
    else
    {
      v23 = v30;
    }
    goto LABEL_11;
  }
  v9 = 1;
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a3 + 136), 0, 1) != 0 )
    goto LABEL_13;
  *(_DWORD *)(a3 + 48) = (unsigned __int64)(a5 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v9 = a3 & 0xFFFFFFFFFFF80000LL;
    v19 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) = 0;
  }
  if ( a5 == v7 )
  {
    v35 = a5;
    v34 = (_DWORD *)a3;
    v33 = sub_276BEE0();
    for ( i = 0; ; i = 1 )
    {
      v36 = i;
      sub_5043880(a1: v25, a2: v26, a3: v34, a4: v24, a5: i, a6: v27, a7: v32, a8: v33);
      v23 = v33;
LABEL_11:
      v33 = sub_2769900(a1: v21, a2: v22, a3: v23, a4: v20, a5: &a7);
    }
  }
  v35 = a5;
  v34 = (_DWORD *)a3;
  sub_6362940(a1, a2, a3: a5, a4: v9, a5: a3);
  sub_502F7E0(a1: v11, a2: v12, a3: (__int64)v34, a4: v10, a5: v35);
  result = sub_5044AC0(
             a1: v14,
             a2: v15,
             a3: (__int64)v34,
             a4: v13,
             a5: v16,
             a6: v17,
             a7: v32,
             a8: v33,
             a9: (__int64)v34,
             a10: (__int64)v35);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
