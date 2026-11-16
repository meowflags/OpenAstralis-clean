// sub_1932AFFFC
// rva 0x132afffc  size 79  section .text  group text
// window base 0x1932afffc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AFFFC(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 result; // rax

  v4 = a3;
  if ( a3 != nullptr && *a3 != 0 )
  {
    result = MEMORY[0x337578](a1: a3);
    *v4 = 0;
  }
  if ( a4 != nullptr && *a4 != 0 )
  {
    result = MEMORY[0x337558](a1: v4);
    *a4 = 0;
  }
  return result;
}
