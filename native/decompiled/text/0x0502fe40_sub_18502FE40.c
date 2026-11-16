// sub_18502FE40
// rva 0x0502fe40  size 52  section .text  group text
// window base 0x18502fe40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_18502FE40(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // rax

  v4 = *a3 >> 3;
  return *(__int16 *)(v3 + 8 * v4 + 62) >= 3
      && *(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v4 + 16) + 20) == 70129;
}
