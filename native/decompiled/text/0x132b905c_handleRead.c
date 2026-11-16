// handleRead
// rva 0x132b905c  size 71  section .text  group text
// window base 0x1932b905c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall handleRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // rdi

  a7 = 0;
  if ( a4 == -1 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)MEMORY[0x79670](a1, a2, a3, a4, a5, a6: &a7) != 0 )
    return a7;
  return (unsigned int)-((unsigned int)MEMORY[0x79758](a1: v7) != 109);
}
