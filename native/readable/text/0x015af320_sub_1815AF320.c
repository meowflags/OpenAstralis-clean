// sub_15AF320
// rva 0x015af320  size 235  section .text  group text
// window base 0x1815af320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AF320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp

  if ( *(_BYTE *)(a3 + 8) != 0 )
    return v3;
  *(_BYTE *)(a3 + 8) = 1;
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 != 0 )
  {
    *(_DWORD *)(v3 + 8 * v5 + 4) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 8) = 46660156;
    v6 = v3 + 8 * v5;
    if ( (*(_DWORD *)v6 & 2) != 0 )
    {
      v7 = (v6 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v7) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v7) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v3 + 8 * v5 + 12) = -1;
    *(_QWORD *)(v3 + 8 * v5 + 16) = -1;
    *(_DWORD *)(v3 + 8 * v5 + 24) = 7679;
    *(_DWORD *)(v3 + 8 * v5 + 28) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 32) = 0;
    *(_BYTE *)(v3 + 8 * v5 + 56) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 36) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 40) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 52) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 44) = 0;
    *(_DWORD *)(v3 + 8 * v5 + 48) = 0;
    return v3 + 8 * v5;
  }
  else
  {
    sub_276EFE0();
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
    return sub_15AF420();
  }
}
