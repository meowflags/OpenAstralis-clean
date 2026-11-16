// Java_java_util_zip_Adler32_updateByteBuffer
// rva 0x132c07d8  size 37  section .text  group text
// window base 0x1932c07d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Adler32_updateByteBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  __int64 result; // rax

  result = a5;
  if ( a6 != 0 )
    return sub_1932C5FE4(a1, a2, a3: a6 + a11, a4: a5, a5: a12);
  return result;
}
