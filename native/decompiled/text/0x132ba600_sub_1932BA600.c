// sub_1932BA600
// rva 0x132ba600  size 100  section .text  group text
// window base 0x1932ba600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
bool __fastcall sub_1932BA600(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)MEMORY[0x79230](a1, a2, a3, a4: 0, a5: 0, a6: 0) == 1;
}
