// sub_1815A0860
// rva 0x015a0860  size 109  section .text  group text
// window base 0x1815a0860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A0860(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
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
    return sub_1815A08E0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 20);
    *(_DWORD *)(a3 + 20) = (unsigned __int64)(a5 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    result = v7 + 8 * v9;
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
