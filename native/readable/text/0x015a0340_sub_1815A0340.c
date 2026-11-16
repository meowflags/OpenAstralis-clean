// sub_15A0340
// rva 0x015a0340  size 89  section .text  group text
// window base 0x1815a0340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0340(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax

  if ( *(_BYTE *)(v2 + 376612331) == 0
    && *(_QWORD *)(v2 + 376612216) == 1
    && (*(_BYTE *)(v2 + 376612335) != 0 || *(_QWORD *)(v2 + 376612248) == 1) )
  {
    result = __sync_val_compare_and_swap((volatile signed __int64 *)0x120010E8, 0, 1);
    if ( result == 0 )
      return sub_27881E0(a1, a2, a3: v2 + 376613976);
  }
  return result;
}
