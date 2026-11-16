// Java_java_lang_ProcessHandleImpl_waitForProcessExit0
// rva 0x132b4adc  size 160  section .text  group text
// window base 0x1932b4adc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_waitForProcessExit0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  int v17; // r8d

  a9 = 0xFFFFFFFF;
  v9 = __imp_KERNEL32.dll!OpenProcess(a1: a4, a2, a3: 0, a4: 1052672);
  v12 = v9;
  if ( v9 != 0 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetExitCodeProcess(a1: v10, a2: v11, a3: &a9, a4: v9) != 0 )
    {
      if ( a9 != 259 )
        goto LABEL_9;
      if ( (unsigned int)__imp_KERNEL32.dll!WaitForSingleObject(a1: v14, a2: v15, a3: 0xFFFFFFFFLL, a4: v12) == -1 )
      {
        v17 = 544048;
LABEL_8:
        JNU_ThrowByNameWithLastError(a1: v14, a2: v15, a3: 544016, a4: v14, a5: v17, a6: v16);
        goto LABEL_9;
      }
      if ( (unsigned int)__imp_KERNEL32.dll!GetExitCodeProcess(a1: v14, a2: v15, a3: &a9, a4: v12) != 0 )
      {
LABEL_9:
        __imp_KERNEL32.dll!CloseHandle(a1: v14, a2: v15, a3: v13, a4: v12);
        return a9;
      }
    }
    v17 = 543992;
    goto LABEL_8;
  }
  return a9;
}
