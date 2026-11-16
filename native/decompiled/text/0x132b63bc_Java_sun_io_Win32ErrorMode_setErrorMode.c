// Java_sun_io_Win32ErrorMode_setErrorMode
// rva 0x132b63bc  size 20  section .text  group text
// window base 0x1932b63bc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_io_Win32ErrorMode_setErrorMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  return (unsigned int)MEMORY[0x794E8](a1, a2, a3, a4: a5);
}
