// JVM_RaiseSignal
// rva 0x132c8990  size 17  section .text  group text
// window base 0x1932c8990: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char JVM_RaiseSignal()
{
  MEMORY[0x79B00]();
  return 1;
}
