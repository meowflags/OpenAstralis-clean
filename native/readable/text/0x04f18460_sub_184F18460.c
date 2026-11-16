// sub_4F18460
// rva 0x04f18460  size 628  section .text  group text
// window base 0x184f18460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F18460(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  char *v23; // [rsp+18h] [rbp-10h]
  _DWORD *v24; // [rsp+20h] [rbp-8h]

  v24 = (_DWORD *)a3;
  v23 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(a5 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    v10 = *(_DWORD *)a5 >> 3;
    if ( *(__int16 *)&v8[8 * v10 + 62] < 4 )
    {
      v11 = (__int64)(v8 + 376359568);
    }
    else if ( *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v10 + 16] + 24] == 87998 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v7 + *(_QWORD *)&v8[8 * (*(_DWORD *)a5 >> 3) + 240]))(
              a1,
              a2,
              a3: a5);
    }
    else
    {
      v11 = (__int64)(v8 + 376359568);
    }
    v12 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v22 = v11;
      v12 = sub_1EAA920(a1, a2, a3: 36879792);
      v11 = v22;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v12 + 48;
      *(_DWORD *)v12 = 36879792;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
    }
    v22 = v11;
    v21 = v12;
    sub_C8B98C0(a1: v11, a2, a3: v12, a4: v24, a5: v23, a6: v24);
    result = (__int64)v24;
    v24[3] = (unsigned __int64)(v21 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v15 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v15) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v16 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v16 + 48) > *(_QWORD *)(v9 + 32) )
    goto LABEL_24;
  *(_QWORD *)(v9 + 40) = v16 + 48;
  *(_DWORD *)v16 = 34101256;
  *(_DWORD *)(v16 + 4) = 0;
  *(_QWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v16 + 20) = 46923644;
    *(_DWORD *)(v16 + 16) = *((_DWORD *)v8 + 93585974);
    *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - (_QWORD)v8) >> 3;
    v22 = v16;
    sub_503B9A0(a1, a2, a3: v16, a4, a5: 0);
    sub_2769900(a1: v18, a2: v19, a3: v22, a4: v17, a5: &a7);
LABEL_24:
    v16 = sub_1EAA920(a1, a2, a3: 34101256);
  }
}
