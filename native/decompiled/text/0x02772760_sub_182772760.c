// sub_182772760
// rva 0x02772760  size 65  section .text  group text
// window base 0x182772760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182772760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( *(_BYTE *)(a3 + 32) != 0 )
    return sub_1827727C0(a1, a2, a3, a4: a5);
  else
    return sub_182773100(a1, a2, a3, a4: a5);
}
