// sub_1EB7820
// rva 0x01eb7820  size 56  section .text  group text
// window base 0x181eb7820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EB7820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15

  *(_DWORD *)(v5 + 20) = 3;
  __faststorefence();
  *(_QWORD *)(a5 + 208) = a3;
  *(_BYTE *)(a5 + 152) = 1;
  *(_QWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 320) = 2130640638;
}
