// sub_1815C7800
// rva 0x015c7800  size 464  section .text  group text
// window base 0x1815c7800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C7800(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // r13
  char *v5; // r14
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v17; // [rsp+8h] [rbp-10h]
  char *v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C79E0();
  }
  else
  {
    v18 = a3;
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v7 + 48) > *(_QWORD *)(v6 + 32) )
    {
      v7 = MEMORY[0x181EAA920](a1, a2, a3: 35850456);
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v7 + 48;
      *(_DWORD *)v7 = 35850456;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) = 0;
    }
    *(_DWORD *)(v7 + 20) = 46923644;
    *(_DWORD *)(v7 + 16) = *((_DWORD *)v5 + 93585974);
    *(_DWORD *)(v7 + 12) = (unsigned __int64)(v7 - (_QWORD)v5) >> 3;
    v17 = (_DWORD *)v7;
    MEMORY[0x18503B9A0](a1, a2, a3: v7, a4, a5: 0);
    if ( v18 == v5 )
      v10 = (__int64)v5;
    else
      v10 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v4
                                                                      + *(_QWORD *)&v5[8 * (*(_DWORD *)v18 >> 3) + 192]))(
              a1: v8,
              a2: v9,
              a3: v18,
              a4: v18);
    v11 = (unsigned __int64)v17;
    v17[2] = (unsigned __int64)(v10 - (_QWORD)v5) >> 3;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v13 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v18 - v5) >> 3;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v15 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v15) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 6552901;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v14 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v14) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v11;
  }
}
