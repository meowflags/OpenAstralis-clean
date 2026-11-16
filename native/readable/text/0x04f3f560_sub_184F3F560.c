// sub_4F3F560
// rva 0x04f3f560  size 373  section .text  group text
// window base 0x184f3f560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3F560(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  void (*v8)(void); // rax
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F3F6E0();
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v6 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
    }
    v17 = a5;
    v8 = (void (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)a3 >> 3) + 112));
    v16 = (unsigned int *)a3;
    v8();
    v9 = (unsigned __int64)v16;
    v16[2] = (unsigned __int64)(v17 - v6) >> 3;
    result = *(unsigned int *)v9;
    if ( (result & 2) != 0 )
    {
      v14 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v9 - v14) >> 9;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v14) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
