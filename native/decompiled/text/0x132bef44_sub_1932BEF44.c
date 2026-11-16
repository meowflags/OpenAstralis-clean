// sub_1932BEF44
// rva 0x132bef44  size 120  section .text  group text
// window base 0x1932bef44: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BEF44(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi

  if ( a3 != nullptr )
    *a3 = 0;
  result = sub_1932BED10(a1: a4, a2: a6, a3, a4, a5: a6);
  if ( result == 0 && a3 != nullptr && *a3 == 0 )
  {
    v11 = sub_1932BE5D8(a1: v9, a2: v10, a3: a5, a4: v9);
    return sub_1932BEFBC(a1: v12, a2: v13, a3: v11, a4: v12, a5: a3, a6: v13);
  }
  return result;
}
