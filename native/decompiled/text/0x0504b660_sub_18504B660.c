// sub_18504B660
// rva 0x0504b660  size 454  section .text  group text
// window base 0x18504b660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504B660(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18504B840();
  }
  else
  {
    a3[3] = ((unsigned __int64)a3 - v6) >> 3;
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v10 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v10) >> 9) + 0x38) = 0;
    }
    a3[4] = *(_DWORD *)(v6 + 374343896);
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v11 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v11) >> 9) + 0x38) = 0;
    }
    a3[5] = 46923644;
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v13 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v13) >> 9) + 0x38) = 0;
    }
    v18 = a6;
    v17 = a5;
    v16 = a3;
    sub_18503B9A0(a1, a2, a3, a4, a5: 0);
    v8 = (unsigned __int64)v16;
    v16[2] = (unsigned __int64)(v17 - v6) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v14 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v14) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v8 + 12) = (unsigned __int64)(v18 - v6) >> 3;
    result = *(unsigned int *)v8;
    if ( (result & 2) != 0 )
    {
      v12 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v8 - v12) >> 9;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v12) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
