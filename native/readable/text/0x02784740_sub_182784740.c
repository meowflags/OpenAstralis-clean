// sub_2784740
// rva 0x02784740  size 34  section .text  group text
// window base 0x182784740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2784740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rax

  v6 = 8LL * *(unsigned int *)(a3 + a5);
  if ( v6 != 0 )
    v6 += v5;
  if ( v6 != 0 )
    JUMPOUT(0x304ECD75DLL);
  return v5;
}
