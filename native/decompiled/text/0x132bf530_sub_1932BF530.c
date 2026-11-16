// sub_1932BF530
// rva 0x132bf530  size 95  section .text  group text
// window base 0x1932bf530: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BF530(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // eax

  if ( a3 <= 9 )
    JUMPOUT(0x32651954BLL);
  v4 = sub_1932C32EC(a1, a2, a3: -1, a4, a5: 8, a6: 31);
  if ( v4 == -4 )
    return 548048;
  else
    return -(__int64)(v4 != 0) & 0x85CF0;
}
