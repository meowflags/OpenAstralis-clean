// sub_1815AE9E0
// rva 0x015ae9e0  size 215  section .text  group text
// window base 0x1815ae9e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1815AE9E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rbp

  if ( *(_BYTE *)(a3 + 32) == 0 )
    return;
  v4 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v4 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_12;
  }
  *(_BYTE *)(v3 + 8 * v4 + 8) = 0;
  v5 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_12:
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
    sub_1815AEAC0();
    return;
  }
  v6 = MEMORY[0x181DF3780](
         a1: v3 + 8 * v4,
         a2: v3 + 8LL * *(unsigned int *)(a3 + 16),
         a3: *(unsigned __int8 *)(v3 + 8 * v5 + 20),
         a4: v3 + 376614808,
         a5: v3 + 8LL * *(unsigned int *)(a3 + 4),
         a6: *(_QWORD *)(a3 + 24));
  *(_DWORD *)(a3 + 20) = (unsigned __int64)(v6 - v3) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v7 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v7) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v7) >> 9) + 0x38) = 0;
  }
  if ( v6 == v3 )
    *(_BYTE *)(a3 + 32) = 0;
}
