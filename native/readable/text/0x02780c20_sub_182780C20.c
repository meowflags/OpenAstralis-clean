// sub_2780C20
// rva 0x02780c20  size 146  section .text  group text
// window base 0x182780c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2780C20()
{
  __int64 v0; // r14
  __int64 v1; // r15
  signed __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rtt
  __int64 v5; // rtt
  signed __int64 v6; // rax

  v2 = *(_QWORD *)(v0 + 376181352);
  if ( (v2 & 0x4000000000000000LL) == 0 && (v2 & 0x3FFFFFFF80000000LL) == 0 )
  {
    v4 = *(_QWORD *)(v0 + 376181352);
    result = __sync_val_compare_and_swap((volatile signed __int64 *)(v0 + 376181352), v2, v2 + 1);
    if ( v4 == result )
      goto LABEL_3;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v0 + 376181352);
      if ( (v6 & 0x4000000000000000LL) != 0 || (v6 & 0x3FFFFFFF80000000LL) != 0 )
        break;
      v5 = *(_QWORD *)(v0 + 376181352);
      result = __sync_val_compare_and_swap((volatile signed __int64 *)(v0 + 376181352), v6, v6 + 1);
      if ( v5 == result )
        goto LABEL_3;
    }
  }
  result = sub_2780D60();
LABEL_3:
  *(_DWORD *)(v1 + 336) |= 1u;
  return result;
}
