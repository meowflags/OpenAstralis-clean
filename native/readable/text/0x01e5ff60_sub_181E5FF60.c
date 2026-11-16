// sub_1E5FF60
// rva 0x01e5ff60  size 36  section .text  group text
// window base 0x181e5ff60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E5FF60(__int64 a1, __int64 a2, __int64 a3)
{
  return *(unsigned __int8 *)((int)(*(_QWORD *)(a3 + 16))++ + *(_QWORD *)(a3 + 8) + 12LL);
}
