// sub_15A85E0
// rva 0x015a85e0  size 176  section .text  group text
// window base 0x1815a85e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A85E0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( v3 + (*a3 & 0xFFFFFFF8) != 0 )
    JUMPOUT(0x302B345FALL);
  sub_276EFE0();
  sub_276EAE0(a1: v4, a2: v5);
  sub_276EFE0(a1: v6, a2: v7);
  sub_276EAE0();
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
  return sub_15A86A0();
}
