// sub_1EA4760
// rva 0x01ea4760  size 102  section .text  group text
// window base 0x181ea4760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EA4760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 result; // rax

  *(_QWORD *)a3 = a5;
  result = (((((((unsigned __int64)(a6 + 511) >> 9) + 7) & 0xFFFFFFFFFFFFF8LL) + 55) & 0x1FFFFFFFFFFFFF8LL) + 15)
         & 0x3FFFFFFFFFFFFF8LL;
  *(_QWORD *)(a3 + 32) = a6 + result;
  *(_DWORD *)(a3 + 40) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(v6 + 376654976);
  *(_QWORD *)(a3 + result - 8) = result;
  return result;
}
