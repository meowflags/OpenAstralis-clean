// Java_sun_net_spi_DefaultProxySelector_init
// rva 0x132ade08  size 69  section .text  group text
// window base 0x1932ade08: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall Java_sun_net_spi_DefaultProxySelector_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // edi
  int v8; // esi
  int v9; // r8d
  int v10; // r9d

  v5 = __imp_WINHTTP.dll!WinHttpOpen(a1, a2, a3: 0, a4: 538952, a5: 0, a6: 0);
  MEMORY[0x337518]/* 0x337518 */ = v5;
  if ( v5 != 0 )
    LOBYTE(v5) = (unsigned int)sub_132AF070(a1: v7, a2: v8, a3: v6, a4, a5: v9, a6: v10) != 0;
  return v5;
}
