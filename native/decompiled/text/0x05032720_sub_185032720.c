// sub_185032720
// rva 0x05032720  size 104  section .text  group text
// window base 0x185032720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185032720(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  int v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  *(_DWORD *)(a3 + 44) = (unsigned __int64)(a5 - v5) >> 3;
  __faststorefence();
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v8 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v8) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v8) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
