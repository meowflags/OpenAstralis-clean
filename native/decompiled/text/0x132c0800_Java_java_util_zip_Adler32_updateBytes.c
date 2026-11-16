// Java_java_util_zip_Adler32_updateBytes
// rva 0x132c0800  size 126  section .text  group text
// window base 0x1932c0800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Adler32_updateBytes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12)
{
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi

  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
          a1: a4,
          a2,
          a3: a6,
          a4,
          a5: 0);
  if ( v14 != 0 )
  {
    a5 = sub_1932C5FE4(a1: v15, a2: v14, a3: v14 + a11, a4: a5, a5: a12);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v16 + 1784LL))(
      a1: v16,
      a2: v17,
      a3: a6,
      a4: v16,
      a5: v17,
      a6: 0);
  }
  return a5;
}
