// sub_132C9964
// rva 0x132c9964  size 27  section .text  group text
// window base 0x1932c9964: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_132C9964(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *result; // rax

  v2 = (_QWORD *)sub_19329DC40(a1, a2);
  *v2 |= 0x24uLL;
  result = (_QWORD *)sub_19329F4F0(a1: v3, a2: v4);
  *result |= 2uLL;
  return result;
}
