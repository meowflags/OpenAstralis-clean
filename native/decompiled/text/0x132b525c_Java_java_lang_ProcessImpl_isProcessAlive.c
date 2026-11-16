// Java_java_lang_ProcessImpl_isProcessAlive
// rva 0x132b525c  size 28  section .text  group text
// window base 0x1932b525c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
bool __fastcall Java_java_lang_ProcessImpl_isProcessAlive(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return (unsigned int)MEMORY[0x795D0](a1, a2, a3: 0, a4: a5) == 258;
}
