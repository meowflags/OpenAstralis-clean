// Java_java_lang_ProcessHandleImpl_getCurrentPid0
// rva 0x132b4630  size 17  section .text  group text
// window base 0x1932b4630: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 Java_java_lang_ProcessHandleImpl_getCurrentPid0()
{
  return (unsigned int)__imp_KERNEL32.dll!GetCurrentProcessId();
}
