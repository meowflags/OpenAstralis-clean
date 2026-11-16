// sub_182783660
// rva 0x02783660  size 81  section .text  group text
// window base 0x182783660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182783660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi

  MEMORY[0x10E445C0](a1, a2, a3, a4: a5 + 80);
  return MEMORY[0x10E45030](a1: v5, a2: v6, a3: *(_QWORD *)(a5 + 264), a4: *(_QWORD *)(a5 + 264));
}
