// sub_181EABEE0
// rva 0x01eabee0  size 83  section .text  group text
// window base 0x181eabee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EABEE0(__int64 a1, __int64 a2, __int64 a3)
{
  return MEMORY[0x182839540](
           a1,
           a2,
           a3: a3 + 48,
           a4: a3,
           a5: *(_QWORD *)(a3 + 32) - ((((*(_QWORD *)(a3 + 32) - 56LL) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL) - 56,
           a6: 1);
}
