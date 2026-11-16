// Java_java_util_zip_Deflater_end
// rva 0x132c0dc8  size 66  section .text  group text
// window base 0x1932c0dc8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_end(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]

  if ( (unsigned int)sub_1932C3208(a1: a4, a2, a3, a4: a5, a5, a6, a7: v12, a8: v13, a9: v14) == -2 )
    return sub_1932B15B0(a1: v8, a2: v9, a3: 548456, a4: v8, a5: v10);
  else
    return MEMORY[0x79AE0](a1: v8, a2: v9, a3: v7, a4: a5);
}
