// sub_132C8AA0
// rva 0x132c8aa0  size 69  section .text  group text
// window base 0x1932c8aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi

  a9 = a5;
  a10 = a6;
  v11 = (_QWORD *)sub_19329DC40(a1: a3, a2: &a9);
  return __imp_api-ms-win-crt-stdio-l1-1-0.dll!__stdio_common_vfprintf(a1: v12, a2: v13, a3: a4, a4: *v11, a5: v12, a6: 0);
}
