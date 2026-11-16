// sub_1932C9FEC
// rva 0x132c9fec  size 43  section .text  group text
// window base 0x1932c9fec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1932C9FEC(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  *a4 = 561104;
  if ( (a3 & 1) != 0 )
    sub_1932C97D0(a1, a2, a3: 24, a4);
  return a4;
}
