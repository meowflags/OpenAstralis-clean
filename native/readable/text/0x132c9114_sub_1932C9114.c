// sub_132C9114
// rva 0x132c9114  size 61  section .text  group text
// window base 0x1932c9114: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9114(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  __int64 v8; // rsi

  v6 = a5;
  v8 = a4;
  if ( a3 == 1 )
    sub_132C9874(a1: a5, a2: a4, a3: 1, a4, a5, a6);
  return sub_132C8FEC(a1: v6, a2, a3, a4: v8, a5: v6, a6);
}
