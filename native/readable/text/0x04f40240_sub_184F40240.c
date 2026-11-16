// sub_4F40240
// rva 0x04f40240  size 405  section .text  group text
// window base 0x184f40240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40240(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  _DWORD *v18; // [rsp+18h] [rbp-10h]
  unsigned int v19; // [rsp+24h] [rbp-4h]

  v18 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F403E0();
  }
  else
  {
    v19 = a5;
    v8 = sub_4F8C700(a1, a2, a3: a5);
    v9 = (unsigned __int64)v18;
    v18[3] = ((unsigned __int64)v18 - v6) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v12 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v6 + 374343896);
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v13 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v9 + 20) = 46923644;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v14 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v14) >> 9) + 0x38) = 0;
    }
    v17 = v8;
    ((void (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)v9 >> 3) + 112)))();
    result = v17;
    v11 = (unsigned __int64)v18;
    v18[2] = (unsigned __int64)(v17 - v6) >> 3;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v15 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v15) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
