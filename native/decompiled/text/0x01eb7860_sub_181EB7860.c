// sub_181EB7860
// rva 0x01eb7860  size 49  section .text  group text
// window base 0x181eb7860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7860()
{
  __int64 v0; // r14
  __int64 v1; // rdi
  __int64 v2; // rsi

  MEMORY[0x18283B040]();
  MEMORY[0x18277CAC0]();
  if ( *(_QWORD *)(v0 + 376612208) == 1 )
    sub_181EBDA00();
  return MEMORY[0x182783AA0](a1: v1, a2: v2, a3: v0 + 376658176);
}
