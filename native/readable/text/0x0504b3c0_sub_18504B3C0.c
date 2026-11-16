// sub_504B3C0
// rva 0x0504b3c0  size 278  section .text  group text
// window base 0x18504b3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned int *__fastcall sub_504B3C0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int *result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
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
    return (unsigned int *)sub_504B4E0();
  }
  else
  {
    a3[3] = ((unsigned __int64)a3 - v4) >> 3;
    if ( (*a3 & 2) != 0 )
    {
      a4 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) = 0;
    }
    a3[4] = *(_DWORD *)(v4 + 374343896);
    if ( (*a3 & 2) != 0 )
    {
      a4 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) = 0;
    }
    a3[5] = 46923644;
    if ( (*a3 & 2) != 0 )
    {
      a4 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - a4) >> 9) + 0x38) = 0;
    }
    v7[2] = a3;
    result = sub_503B9A0(a1, a2, a3, a4, a5: 0);
    if ( *(int *)(v5 + 16) <= 0 )
      return (unsigned int *)sub_277F280();
  }
  return result;
}
