// sub_50295E0
// rva 0x050295e0  size 114  section .text  group text
// window base 0x1850295e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50295E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( (unsigned int *)a5 != v6 )
  {
    *(_DWORD *)(a5 + 12) = (unsigned __int64)(a6 - (_QWORD)v6) >> 3;
    result = *(unsigned int *)a5;
    if ( (result & 2) != 0 )
    {
      v9 = (a5 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (a5 - v9) >> 9;
      if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v9) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  return sub_5029660();
}
