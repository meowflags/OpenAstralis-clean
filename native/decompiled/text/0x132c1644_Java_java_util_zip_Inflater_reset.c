// Java_java_util_zip_Inflater_reset
// rva 0x132c1644  size 37  section .text  group text
// window base 0x1932c1644: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_reset(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8

  result = sub_1932C5C94(a1, a2, a3, a4: a5);
  if ( (_DWORD)result != 0 )
    return sub_1932B15B0(a1: v7, a2: v8, a3: 0, a4, a5: v9);
  return result;
}
