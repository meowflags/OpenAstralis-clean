// sub_181E9F880
// rva 0x01e9f880  size 20  section .text  group text
// window base 0x181e9f880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9F880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 result; // rax

  result = *(_QWORD *)(v5 + 376652936);
  *(_QWORD *)(result + 120) = a5;
  return result;
}
