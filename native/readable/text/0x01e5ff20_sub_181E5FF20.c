// sub_1E5FF20
// rva 0x01e5ff20  size 41  section .text  group text
// window base 0x181e5ff20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 sub_1E5FF20()
{
  unsigned __int64 v0; // rax

  v0 = sub_1E5FFC0();
  return -(__int64)(v0 & 1) ^ (v0 >> 1);
}
