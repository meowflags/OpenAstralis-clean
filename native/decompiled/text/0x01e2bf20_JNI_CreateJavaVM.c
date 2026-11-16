// JNI_CreateJavaVM
// rva 0x01e2bf20  size 947  section .text  group text
// window base 0x181e2bf20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNI_CreateJavaVM(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi

  result = MEMORY[0x18207DD40](a1, a2, a3: a4, a4, a5: a3, a6: a5);
  if ( (_DWORD)result == 0 )
  {
    MEMORY[0x18207E240](a1: v7, a2: v8, a3: a4, a4: v6, a5: a3, a6: a5);
    MEMORY[0x1828390C0]();
    return 0;
  }
  return result;
}
