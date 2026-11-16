// sub_1E9F500
// rva 0x01e9f500  size 17  section .text  group text
// window base 0x181e9f500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9F500(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)(a3 + 8) + 40LL);
}
