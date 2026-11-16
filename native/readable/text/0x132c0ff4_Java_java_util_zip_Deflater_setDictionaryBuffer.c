// Java_java_util_zip_Deflater_setDictionaryBuffer
// rva 0x132c0ff4  size 89  section .text  group text
// window base 0x1932c0ff4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_setDictionaryBuffer(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8

  result = sub_132C37CC(a1: a5, a2, a3: a6, a4: a5, a5: a11, a6);
  if ( (_DWORD)result == -2 )
    return JNU_ThrowIllegalArgumentException(a1: v13, a2: v14, a3: 0, a4);
  if ( (_DWORD)result != 0 )
  {
    if ( *(_QWORD *)(v13 + 32) == 0 )
      JUMPOUT(0x32651B031LL);
    return JNU_ThrowInternalError(a1: v13, a2: v14, a3: *(_QWORD *)(v13 + 32), a4, a5: v15);
  }
  return result;
}
