// sub_181E9F840
// rva 0x01e9f840  size 16  section .text  group text
// window base 0x181e9f840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_181E9F840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a3 + 8);
  *result = a5;
  return result;
}
