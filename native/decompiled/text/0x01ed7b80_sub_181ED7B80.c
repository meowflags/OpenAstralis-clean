// sub_181ED7B80
// rva 0x01ed7b80  size 166  section .text  group text
// window base 0x181ed7b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED7B80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned __int64 v9; // rbx

  if ( *(_BYTE *)(a3 + 12) != 0 )
  {
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 368487080);
  }
  else if ( a6 != -5 )
  {
    v7 = *(_DWORD *)(a5 + 28);
    if ( v7 == 0 )
    {
LABEL_10:
      MEMORY[0x1828C1C40](a1, a2, a3: v6 + 369855784);
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
      return sub_181ED7C40();
    }
    *(_DWORD *)(a3 + 4) = v7;
    result = *(unsigned int *)a3;
    if ( (result & 2) != 0 )
    {
      v9 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (a3 - v9) >> 9;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 8) = a6;
    *(_BYTE *)(a3 + 12) = 1;
    return result;
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v6 + 371521448);
  goto LABEL_10;
}
