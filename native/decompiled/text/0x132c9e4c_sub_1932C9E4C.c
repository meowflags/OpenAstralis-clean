// sub_1932C9E4C
// rva 0x132c9e4c  size 60  section .text  group text
// window base 0x1932c9e4c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9E4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)a4 = 560968;
  *(_OWORD *)(a4 + 8) = 0;
  sub_1932CA1A3(a1, a2, a3: a4 + 8, a4: a3 + 8);
  *(_QWORD *)a4 = 561016;
  return a4;
}
