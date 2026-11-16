// sub_1932C8DE0
// rva 0x132c8de0  size 30  section .text  group text
// window base 0x1932c8de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C8DE0(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax

  if ( a4 == MEMORY[0x336F80] )
  {
    a4 = __builtin_rotateleft64(a4, 16);
    if ( (_WORD)a4 == 0 )
      return result;
    LODWORD(a4) = __builtin_rotateright64(a4, 16);
  }
  return sub_1932C9188(a1, a2, a3, a4, a5, a6, a7);
}
