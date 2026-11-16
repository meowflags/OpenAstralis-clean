// sub_181E9F320
// rva 0x01e9f320  size 140  section .text  group text
// window base 0x181e9f320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9F320(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // al
  BOOL v8; // ecx

  if ( (*(_DWORD *)a3 & 6) == 6 )
    return 1;
  if ( *(_BYTE *)(v3 + 376654992) != 0 )
    return 0;
  if ( a3 == v3 )
    JUMPOUT(0x303D2935BLL);
  if ( (*(_DWORD *)a3 & 1) != 0 )
    v5 = a3 - *(_QWORD *)(a3 - 8);
  else
    v5 = a3 & 0xFFFFFFFFFFF80000LL;
  v6 = *(unsigned int *)(v5 + 40);
  if ( (_DWORD)v6 != 0 )
  {
    v7 = *(_BYTE *)(v3 + 8 * v6 + 52);
    v8 = *(_DWORD *)(v3 + 8 * v6 + 48) == 16;
    if ( v7 != 0 )
      JUMPOUT(0x303D29391LL);
    return v8;
  }
  else
  {
    MEMORY[0x18276EFE0](a1, a2, a3, a4: v3 + 8 * v6);
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
    return sub_181E9F3C0();
  }
}
