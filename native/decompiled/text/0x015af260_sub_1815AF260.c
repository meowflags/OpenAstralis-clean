// sub_1815AF260
// rva 0x015af260  size 171  section .text  group text
// window base 0x1815af260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AF260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax

  *(_QWORD *)(a3 + 24) = a5;
  *(_DWORD *)(a3 + 20) = 0;
  v7 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v7 != 0 )
  {
    *(_QWORD *)(v6 + 8 * v7 + 8) = 0;
    *(_QWORD *)(v6 + 8 * v7 + 16) = -1;
    v8 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v8 != 0 )
    {
      *(_QWORD *)(v6 + 8 * v8 + 8) = 0;
      *(_BYTE *)(v6 + 8 * v8 + 20) = 0;
      *(_BYTE *)(v6 + 8 * v8 + 21) = 1;
      *(_BYTE *)(v6 + 8 * v8 + 22) = 0;
      *(_DWORD *)(v6 + 8 * v8 + 4) = -1;
      *(_DWORD *)(v6 + 8 * v8 + 16) = -1;
      result = sub_1815AEAC0(a1, a2, a3, a4, a5: a6, a6: a1);
      *(_BYTE *)(a3 + 32) = result;
      return result;
    }
  }
  else
  {
    MEMORY[0x18276EFE0]();
  }
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1815AF320();
}
