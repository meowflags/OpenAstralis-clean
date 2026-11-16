// sub_15C6D00
// rva 0x015c6d00  size 333  section .text  group text
// window base 0x1815c6d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C6D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C6E60();
  }
  else
  {
    v16 = a3;
    v15 = a5;
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v7 + 40) > *(_QWORD *)(v6 + 32) )
    {
      v7 = sub_1EAA920(a1, a2, a3: 34088704);
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v7 + 40;
      *(_DWORD *)v7 = 34088704;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 32) = 0;
    }
    *(_DWORD *)(v7 + 20) = 46923644;
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(v5 + 374343896);
    v8 = (unsigned __int64)(v7 - v5) >> 3;
    *(_DWORD *)(v7 + 12) = v8;
    v14 = (_DWORD *)v7;
    sub_503B9A0(a1, a2, a3: v7, a4: v8, a5: 0);
    v9 = (unsigned __int64)v14;
    v14[2] = (unsigned __int64)(v16 - v5) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v11 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v11) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v9 + 28) = (unsigned __int64)(v15 - v5) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v12 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v12) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
    return v9;
  }
}
