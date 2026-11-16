// sub_15C75C0
// rva 0x015c75c0  size 570  section .text  group text
// window base 0x1815c75c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C75C0(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  char *v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C7800();
  }
  else
  {
    v24 = a3;
    v23 = a5;
    v22 = a6;
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v9 = sub_1EAA920(a1, a2, a3: 35850456);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 48;
      *(_DWORD *)v9 = 35850456;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) = 0;
    }
    *(_DWORD *)(v9 + 20) = 46923644;
    *(_DWORD *)(v9 + 16) = *((_DWORD *)v7 + 93585974);
    v10 = (unsigned __int64)(v9 - (_QWORD)v7) >> 3;
    *(_DWORD *)(v9 + 12) = v10;
    v21 = (_DWORD *)v9;
    sub_503B9A0(a1, a2, a3: v9, a4: v10, a5: 0);
    if ( v24 == v7 )
      v13 = (__int64)v7;
    else
      v13 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v6
                                                                      + *(_QWORD *)&v7[8 * (*(_DWORD *)v24 >> 3) + 192]))(
              a1: v11,
              a2: v12,
              a3: v24,
              a4: v24);
    v14 = (unsigned __int64)v21;
    v21[2] = (unsigned __int64)(v13 - (_QWORD)v7) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v16 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v14 + 12) = (unsigned __int64)(v24 - v7) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v19 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v19) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v14 + 28) = (unsigned __int64)(v22 - (_QWORD)v7) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v17 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v17) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v14 + 32) = (unsigned __int64)(v23 - (_QWORD)v7) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v18 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v14;
  }
}
