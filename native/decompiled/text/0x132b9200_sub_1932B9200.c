// sub_1932B9200
// rva 0x132b9200  size 36  section .text  group text
// window base 0x1932b9200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B9200(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi

  if ( (unsigned int)MEMORY[0x79790](a1, a2, a3, a4) != 0 )
    return 0;
  else
    return (unsigned int)-((unsigned int)MEMORY[0x79758](a1: v4) != 5);
}
