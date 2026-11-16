// Java_java_lang_ProcessImpl_getExitCodeProcess
// rva 0x132b5214  size 52  section .text  group text
// window base 0x1932b5214: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessImpl_getExitCodeProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d

  if ( (unsigned int)MEMORY[0x79698](a1, a2, a3: &a10, a4: a5) == 0 )
    sub_1932B5824(a1: v11, a2: v12, a3: 544320, a4, a5: v13, a6: v14);
  return a10;
}
