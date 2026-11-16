// sub_132C8C70
// rva 0x132c8c70  size 37  section .text  group text
// window base 0x1932c8c70: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_132C8C70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]

  v3 = __imp_api-ms-win-crt-stdio-l1-1-0.dll!__acrt_iob_func(a1, a2, a3, a4: 2);
  sub_1329DCC0(a1: v4, a2: v5, a3: 560672, a4: v3, a5: v6, a6: v7, a7: v8, a8: v9, a9: v10, a10: v11);
  __imp_api-ms-win-crt-runtime-l1-1-0.dll!abort();
}
