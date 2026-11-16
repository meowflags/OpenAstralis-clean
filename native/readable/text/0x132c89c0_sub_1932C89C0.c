// sub_132C89C0
// rva 0x132c89c0  size 144  section .text  group text
// window base 0x1932c89c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C89C0(
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
  __int64 v10; // rcx

  __imp_KERNEL32.dll!GetSystemTimeAsFileTime(a1, a2, a3, a4: &a9);
  v10 = (a9 - 116444736000000000LL) / 10000000 - a5;
  if ( (unsigned __int64)(v10 + 0xFFFFFFFFLL) > 0x1FFFFFFFELL )
    return -1;
  else
    return 100 * (a9 - 116444736000000000LL + 10000000 * (v10 - (a9 - 116444736000000000LL) / 10000000));
}
