// JNI_GetDefaultJavaVMInitArgs
// rva 0x01e2c4e0  size 475  section .text  group text
// window base 0x181e2c4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNI_GetDefaultJavaVMInitArgs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MEMORY[0x18207E2C0](a1, a2, a3: a4);
}
