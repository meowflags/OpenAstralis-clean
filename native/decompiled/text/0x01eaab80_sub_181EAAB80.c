// sub_181EAAB80
// rva 0x01eaab80  size 143  section .text  group text
// window base 0x181eaab80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAAB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _QWORD *v5; // rcx
  signed __int64 v7; // r9
  char *v8; // r9

  v5 = *(_QWORD **)(a3 + 8);
  if ( v5 == nullptr )
    return sub_181EAAC20(a1, a2, a3, a4: v5, a5, a6: v5);
  v7 = v5[4];
  if ( a5 > *v5 - v7 )
    return sub_181EAAC20(a1, a2, a3, a4: v5, a5, a6: v5);
  while ( v7 != __sync_val_compare_and_swap(v5 + 4, v7, v7 + a5) )
  {
    v7 = v5[4];
    if ( a5 > *v5 - v7 )
      return sub_181EAAC20(a1, a2, a3, a4: v5, a5, a6: v5);
  }
  v8 = (char *)v5 + v7;
  if ( v8 == nullptr )
    return sub_181EAAC20(a1, a2, a3, a4: v5, a5, a6: v5);
  return (__int64)v8;
}
