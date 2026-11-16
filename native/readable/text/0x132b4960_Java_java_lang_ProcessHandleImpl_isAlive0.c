// Java_java_lang_ProcessHandleImpl_isAlive0
// rva 0x132b4960  size 93  section .text  group text
// window base 0x1932b4960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_isAlive0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d

  v9 = -1;
  v10 = __imp_KERNEL32.dll!OpenProcess(a1, a2, a3: 0, a4: 4160);
  if ( v10 != 0 )
  {
    __imp_KERNEL32.dll!GetExitCodeProcess(a1: v10, a2: v11, a3: &a9, a4: v10);
    if ( a9 == 259 )
      v9 = sub_132B4C98(a1: v13, a2: v14, a3: v12, a4: v13, a5: v15, a6: v16);
    __imp_KERNEL32.dll!CloseHandle(a1: v13, a2: v14, a3: v12, a4: v13);
  }
  return v9;
}
