// sub_1850313E0
// rva 0x050313e0  size 119  section .text  group text
// window base 0x1850313e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1850313E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_10:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185031460();
  }
  *(_DWORD *)(v5 + 8 * v7 + 12) = (unsigned __int64)(a5 - v5) >> 3;
  result = v5 + 8 * v7;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v9 = result & 0xFFFFFFFFFFF80000LL;
    result = (result - ((result & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v9 + result + 56) != 0 )
      *(_BYTE *)(v9 + result + 56) = 0;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
