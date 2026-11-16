// sub_1EB79E0
// rva 0x01eb79e0  size 53  section .text  group text
// window base 0x181eb79e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB79E0()
{
  __int64 v0; // r15

  *(_DWORD *)(v0 + 324) = 1;
  __faststorefence();
  *(_QWORD *)(v0 + 8) = 1;
  *(_DWORD *)(v0 + 320) = 2130640638;
  sub_1EB7A20();
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
  return sub_1EB7A20();
}
