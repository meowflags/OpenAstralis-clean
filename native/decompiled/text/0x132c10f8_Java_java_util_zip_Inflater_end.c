// Java_java_util_zip_Inflater_end
// rva 0x132c10f8  size 61  section .text  group text
// window base 0x1932c10f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_end(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8

  if ( (unsigned int)sub_1932C5B34(a1: a4, a2, a3, a4: a5, a5, a6) == -2 )
    return sub_1932B15B0(a1: v8, a2: v9, a3: 0, a4: v8, a5: v10);
  else
    return MEMORY[0x79AE0](a1: v8, a2: v9, a3: v7, a4: a5);
}
