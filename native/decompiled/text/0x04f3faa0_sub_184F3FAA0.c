// sub_184F3FAA0
// rva 0x04f3faa0  size 405  section .text  group text
// window base 0x184f3faa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3FAA0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F3FC40();
  }
  else
  {
    if ( a5 != 0 )
      v8 = v6 + 350970688;
    else
      v8 = v6 + 361697768;
    v18 = v8;
    *(_DWORD *)(a3 + 12) = (a3 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v6 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
    }
    v19 = a5;
    v9 = *(_QWORD *)(v6 + 8LL * (*(_DWORD *)a3 >> 3) + 112);
    v17 = (_DWORD *)a3;
    ((void (*)(void))(v5 + v9))();
    result = v18;
    v11 = (unsigned __int64)v17;
    v17[2] = (unsigned __int64)(v18 - v6) >> 3;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v13 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
