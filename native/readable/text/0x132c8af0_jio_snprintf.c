// jio_snprintf
// rva 0x132c8af0  size 138  section .text  group text
// window base 0x1932c8af0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall jio_snprintf(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi

  if ( a3 <= 0 )
    return 0xFFFFFFFFLL;
  v7 = (_QWORD *)sub_19329DC40(a1: a4, a2: a5);
  if ( (int)__imp_api-ms-win-crt-stdio-l1-1-0.dll!__stdio_common_vsprintf(a1: v8, a2: v9, a3: v8, a4: *v7 | 2LL, a5: a3, a6: v9) >= 0 )
    JUMPOUT(0x326522B58LL);
  *(_BYTE *)(v10 + a3 - 1) = 0;
  return 0xFFFFFFFFLL;
}
