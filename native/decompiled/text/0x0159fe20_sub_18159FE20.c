// sub_18159FE20
// rva 0x0159fe20  size 106  section .text  group text
// window base 0x18159fe20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159FE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx

  v6 = *(_QWORD *)(a5 + 152);
  v7 = *(_QWORD *)(a5 + 248);
  *(_DWORD *)(v5 + 324) = 1;
  __faststorefence();
  *(_QWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 320) = 2130640638;
  return sub_18159FEA0(a1: a5, a2: 1, a3: v6, a4: v7, a5: v7, a6: a3);
}
