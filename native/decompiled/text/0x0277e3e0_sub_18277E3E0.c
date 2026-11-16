// sub_18277E3E0
// rva 0x0277e3e0  size 55  section .text  group text
// window base 0x18277e3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277E3E0()
{
  __int64 v0; // r15

  if ( (*(_DWORD *)(v0 + 336) & 2) != 0 )
    return 0;
  sub_182781160();
  *(_DWORD *)(v0 + 336) |= 2u;
  return 1;
}
