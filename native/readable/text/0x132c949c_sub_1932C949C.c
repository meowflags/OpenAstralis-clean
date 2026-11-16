// sub_132C949C
// rva 0x132c949c  size 52  section .text  group text
// window base 0x1932c949c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char sub_132C949C()
{
  int v0; // edx
  int v1; // ecx
  int v2; // edi
  int v3; // esi
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi

  if ( (unsigned int)sub_1932C9DF0() != 0 )
  {
    sub_132C9B58(a1: v2, a2: v3, a3: v0, a4: v1, a5: v4, a6: v5);
  }
  else
  {
    v6 = Java_sun_nio_ch_Net_pollerrValue();
    if ( (unsigned int)sub_1932CA299(a1: v8, a2: v9, a3: v7, a4: v6) != 0 )
      return 0;
    sub_1932CA29F();
  }
  return 1;
}
