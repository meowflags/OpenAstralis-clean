// sub_185045820
// rva 0x05045820  size 24  section .text  group text
// window base 0x185045820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_185045820(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_DWORD *)(a3 + 136) == 99;
}
