// sub_1932C9F54
// rva 0x132c9f54  size 66  section .text  group text
// window base 0x1932c9f54: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9F54(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  __int64 v5; // rdi
  __int64 v6; // rsi

  *a4 = 560968;
  v4 = a3;
  sub_1932CA1A9(a1: a4, a2, a3, a4: a4 + 1);
  if ( (v4 & 1) != 0 )
    sub_1932C97D0(a1: v5, a2: v6, a3: 24, a4: v5);
  return v5;
}
