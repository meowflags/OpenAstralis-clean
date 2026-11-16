// Java_java_lang_ProcessHandleImpl_00024Info_info0
// rva 0x132b4428  size 109  section .text  group text
// window base 0x1932b4428: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_00024Info_info0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // esi
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // edi
  int v12; // esi
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi

  result = __imp_KERNEL32.dll!OpenProcess(a1: a3, a2: a4, a3: 0, a4: 4160);
  v8 = result;
  if ( result != 0 )
  {
    sub_132B4D00(a1: v5, a2: v6, a3: result, a4: v6, a5: v5, a6: v7);
    sub_132B4B7C(a1: v9, a2: v10, a3: v8, a4: v10, a5: v9);
    sub_132B4E24(a1: v11, a2: v12, a3: v8, a4: v12, a5: v11, a6: v13);
    return __imp_KERNEL32.dll!CloseHandle(a1: v15, a2: v16, a3: v14, a4: v8);
  }
  return result;
}
