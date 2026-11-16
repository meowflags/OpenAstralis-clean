// JVM_CurrentTimeMillis
// rva 0x132c87d0  size 75  section .text  group text
// window base 0x1932c87d0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JVM_CurrentTimeMillis(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  MEMORY[0x79538](a1, a2, a3, a4: &a9);
  return (a9 - 116444736000000000LL) / 10000;
}
