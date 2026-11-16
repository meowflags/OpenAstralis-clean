// sub_182789F00
// rva 0x02789f00  size 396  section .text  group text
// window base 0x182789f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182789F00(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  if ( a3 == -1 )
    return 0;
  if ( a6 != 0 )
    return sub_182789F23(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
  return 1;
}
