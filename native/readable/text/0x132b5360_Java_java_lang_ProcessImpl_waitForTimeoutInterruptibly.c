// Java_java_lang_ProcessImpl_waitForTimeoutInterruptibly
// rva 0x132b5360  size 83  section .text  group text
// window base 0x1932b5360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessImpl_waitForTimeoutInterruptibly(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  int v10; // edi
  int v11; // esi
  int v12; // r8d
  int v13; // r9d
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = a5;
  v14[1] = sub_132C88F0(a1: a4);
  result = __imp_KERNEL32.dll!WaitForMultipleObjects(a1: v7, a2: v8, a3: v14, a4: 2, a5: 0, a6);
  if ( (_DWORD)result == -1 )
    return sub_132B5824(a1: v10, a2: v11, a3: 544360, a4: v10, a5: v12, a6: v13);
  return result;
}
