// sub_1815A0240
// rva 0x015a0240  size 114  section .text  group text
// window base 0x1815a0240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_1815A0240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax

  v5 = *(_QWORD *)(a3 + 232);
  return v5 != 0
      && (v5 & 0x7FFFF) == 0
      && *(_QWORD *)(v5 + 376181088) == 0x123456789ABCDEFLL
      && sub_1815A01C0(a1, a2, a3: v5, a4: 0x123456789ABCDEFLL, a5);
}
