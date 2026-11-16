// JNU_GetEnv
// rva 0x132b0b10  size 32  section .text  group text
// window base 0x1932b0b10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_GetEnv(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a4 + 48LL))(
    a1,
    a2,
    a3: &a7,
    a4,
    a5: a3);
  return a7;
}
