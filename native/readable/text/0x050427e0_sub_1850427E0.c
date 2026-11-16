// sub_50427E0
// rva 0x050427e0  size 277  section .text  group text
// window base 0x1850427e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50427E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (*v6)(void); // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v5 + 8) )
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
    return sub_5042900();
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - v4) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v8 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v8) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v8) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v4 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v9 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
    }
    v6 = (__int64 (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*(_DWORD *)a3 >> 3) + 112));
    v11[2] = a3;
    result = v6();
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
