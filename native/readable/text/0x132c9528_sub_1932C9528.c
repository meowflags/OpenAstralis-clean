// sub_132C9528
// rva 0x132c9528  size 96  section .text  group text
// window base 0x1932c9528: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9528(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        unsigned int a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+30h] [rbp+8h]
  __int64 v22; // [rsp+38h] [rbp+10h]

  v21 = v12;
  v22 = v13;
  if ( (unsigned int)sub_1932C9DF0(a1: a6, a2: a5) == 0 && a3 == 1 )
    sub_132CA350(a1: v16, a2: v17, a3: 0, a4, a5: v17);
  return sub_1932CA293(a1: v16, a2, a3: a12, a4: a11, a5: v18, a6: v19, a7: v21, a8: v22, a9: a2);
}
