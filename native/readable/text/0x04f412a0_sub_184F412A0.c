// sub_4F412A0
// rva 0x04f412a0  size 454  section .text  group text
// window base 0x184f412a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F412A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  void (*v9)(void); // rax
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  __int64 v20; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F41480();
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v7 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
    }
    v20 = a6;
    v19 = a5;
    v9 = (void (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*(_DWORD *)a3 >> 3) + 112));
    v18 = (unsigned int *)a3;
    v9();
    v10 = (unsigned __int64)v18;
    v18[2] = (unsigned __int64)(v19 - v7) >> 3;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v16 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v16) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v20 - v7) >> 3;
    result = *(unsigned int *)v10;
    if ( (result & 2) != 0 )
    {
      v14 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v10 - v14) >> 9;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v14) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
