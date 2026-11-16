// sub_1932B8EBC
// rva 0x132b8ebc  size 78  section .text  group text
// window base 0x1932b8ebc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B8EBC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // ebx

  v7 = 0xFFFFFFFF;
  a7 = 0;
  if ( a4 != -1 && (unsigned int)MEMORY[0x795C0](a1, a2, a3, a4, a5, a6: &a7) != 0 )
    return a7;
  return v7;
}
