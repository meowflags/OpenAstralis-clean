// sub_2785A40
// rva 0x02785a40  size 111  section .text  group text
// window base 0x182785a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2785A40(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  if ( MEMORY[0x10e44898]/* 0x10e44898 */ == 1 )
    return sub_182785A5C(a1, a2, a3, a4: 1, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return MEMORY[0x10e44898]/* 0x10e44898 */;
}
