// sub_1815AF440
// rva 0x015af440  size 139  section .text  group text
// window base 0x1815af440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AF440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v4 == 0 )
  {
    MEMORY[0x18276EFE0]();
LABEL_8:
    MEMORY[0x18276F0E0]();
    goto LABEL_9;
  }
  v5 = *(unsigned int *)(a3 + 12);
  v6 = *(_DWORD *)(v3 + 8 * v4 + 8);
  if ( v6 <= (int)v5 )
    return v3;
  *(_DWORD *)(a3 + 12) = v5 + 1;
  if ( v6 <= (unsigned int)v5 )
    goto LABEL_8;
  v8 = *(unsigned int *)(v3 + 8 * v4 + 4 * v5 + 12);
  v9 = v3 + 8 * v8;
  if ( (_DWORD)v8 != 0 )
  {
    *(_DWORD *)(v3 + 8 * v8 + 4) = 0;
    *(_DWORD *)(v3 + 8 * v8 + 8) = 0;
    *(_BYTE *)(v3 + 8 * v8 + 24) = 0;
    *(_QWORD *)(v3 + 8 * v8 + 16) = 0;
    *(_DWORD *)(v3 + 8 * v8 + 12) = 0;
    return v3 + 8 * v8;
  }
LABEL_9:
  MEMORY[0x18276EFE0](a1, a2, a3, a4: v9);
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
  return sub_1815AF4E0();
}
