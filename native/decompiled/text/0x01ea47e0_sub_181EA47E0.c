// sub_181EA47E0
// rva 0x01ea47e0  size 176  section .text  group text
// window base 0x181ea47e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA47E0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = *(unsigned int *)(v1 + 376654972);
  if ( (_DWORD)v2 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_6;
  }
  v4 = *(_DWORD *)(v1 + 8 * v2) >> 3;
  v5 = *(_DWORD *)(v1 + 8 * v4 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v1 + 8 * v4 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 8 * v4 + 20) + 4 * v5 + 12) != 519 )
  {
LABEL_6:
    MEMORY[0x18276EDE0]();
    goto LABEL_7;
  }
  v6 = *(unsigned int *)(v1 + 8 * v2 + 8);
  if ( (_DWORD)v6 != 0 )
  {
    v3 = *(_QWORD *)(v1 + 376653752) + (*(_QWORD *)(v1 + 376653760) << 19) + 0x80000LL;
    return v3 <= sub_181E9F640(a1, a2: v5, a3: v1 + 8 * v6);
  }
LABEL_7:
  MEMORY[0x18276EFE0]();
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
  return sub_181EA48A0();
}
