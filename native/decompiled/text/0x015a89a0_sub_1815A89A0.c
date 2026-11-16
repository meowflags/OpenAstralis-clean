// sub_1815A89A0
// rva 0x015a89a0  size 28  section .text  group text
// window base 0x1815a89a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A89A0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 != 0 )
    return *(_QWORD *)(a3 + 208);
  else
    return 0;
}
