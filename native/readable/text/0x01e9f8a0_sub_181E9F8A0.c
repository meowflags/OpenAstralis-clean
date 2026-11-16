// sub_1E9F8A0
// rva 0x01e9f8a0  size 20  section .text  group text
// window base 0x181e9f8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9F8A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(result + 128) = a5;
  return result;
}
