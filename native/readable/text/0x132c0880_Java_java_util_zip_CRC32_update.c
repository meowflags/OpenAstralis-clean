// Java_java_util_zip_CRC32_update
// rva 0x132c0880  size 33  section .text  group text
// window base 0x1932c0880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_CRC32_update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  a10 = a6;
  return sub_1932C62D4(a1, a2, a3: &a10, a4: a5, a5: 1);
}
