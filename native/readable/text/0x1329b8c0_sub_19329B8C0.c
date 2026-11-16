// sub_1329B8C0
// rva 0x1329b8c0  size 29  section .text  group text
// window base 0x19329b8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329B8C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = __imp_api-ms-win-crt-environment-l1-1-0.dll!getenv(a1, a2, a3, a4: 545432);
  MEMORY[0x337780]/* 0x337780 */ = result;
  return result;
}
