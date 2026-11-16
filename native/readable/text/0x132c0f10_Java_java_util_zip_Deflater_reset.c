// Java_java_util_zip_Deflater_reset
// rva 0x132c0f10  size 42  section .text  group text
// window base 0x1932c0f10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_reset(int a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8

  result = sub_132C3704(a1, a2, a3, a4: a5, a5, a6);
  if ( (_DWORD)result != 0 )
    return JNU_ThrowInternalError(a1: v8, a2: v9, a3: 548432, a4, a5: v10);
  return result;
}
