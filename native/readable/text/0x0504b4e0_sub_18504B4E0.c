// sub_504B4E0
// rva 0x0504b4e0  size 373  section .text  group text
// window base 0x18504b4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504B4E0(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

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
    return sub_504B660();
  }
  else
  {
    a3[3] = ((unsigned __int64)a3 - v5) >> 3;
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v9 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v9) >> 9) + 0x38) = 0;
    }
    a3[4] = *(_DWORD *)(v5 + 374343896);
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v10 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v10) >> 9) + 0x38) = 0;
    }
    a3[5] = 46923644;
    if ( (*a3 & 2) != 0 )
    {
      a4 = (unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL;
      v11 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v11) >> 9) + 0x38) = 0;
    }
    v15 = a5;
    v14 = a3;
    sub_503B9A0(a1, a2, a3, a4, a5: 0);
    v7 = (unsigned __int64)v14;
    v14[2] = (unsigned __int64)(v15 - v5) >> 3;
    result = *(unsigned int *)v7;
    if ( (result & 2) != 0 )
    {
      v12 = (v7 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v7 - v12) >> 9;
      if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - v12) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
