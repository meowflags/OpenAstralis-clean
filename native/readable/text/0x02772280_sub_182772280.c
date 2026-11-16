// sub_2772280
// rva 0x02772280  size 49  section .text  group text
// window base 0x182772280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_2772280(
        int a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  unsigned __int64 result; // rax

  result = *(_QWORD *)(v8 + 56);
  if ( result != 0 && a3 > result )
    return sub_182772297(a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}
