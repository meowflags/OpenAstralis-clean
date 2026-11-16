// sub_184F400A0
// rva 0x04f400a0  size 405  section .text  group text
// window base 0x184f400a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F400A0(float a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  _DWORD *v17; // [rsp+18h] [rbp-10h]
  float v18; // [rsp+24h] [rbp-4h]

  v17 = a4;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
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
    return sub_184F40240();
  }
  else
  {
    v18 = a1;
    v7 = MEMORY[0x18610D980]();
    v8 = (unsigned __int64)v17;
    v17[3] = ((unsigned __int64)v17 - v5) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v11 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v11) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(v5 + 374343896);
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v12 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v8 + 20) = 46923644;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v13 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v13) >> 9) + 0x38) = 0;
    }
    v16 = v7;
    ((void (*)(void))(v4 + *(_QWORD *)(v5 + 8LL * (*(_DWORD *)v8 >> 3) + 112)))();
    result = v16;
    v10 = (unsigned __int64)v17;
    v17[2] = (unsigned __int64)(v16 - v5) >> 3;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v14 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v14) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
