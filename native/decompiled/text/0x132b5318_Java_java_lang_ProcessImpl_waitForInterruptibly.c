// Java_java_lang_ProcessImpl_waitForInterruptibly
// rva 0x132b5318  size 72  section .text  group text
// window base 0x1932b5318: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessImpl_waitForInterruptibly(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  int v9; // edi
  int v10; // esi
  int v11; // r8d
  int v12; // r9d
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = a5;
  v13[1] = sub_1932C88F0();
  result = MEMORY[0x794C8](a1: v6, a2: v7, a3: v13, a4: 2, a5: 0, a6: 0xFFFFFFFFLL);
  if ( (_DWORD)result == -1 )
    return sub_1932B5824(a1: v9, a2: v10, a3: 544360, a4, a5: v11, a6: v12);
  return result;
}
