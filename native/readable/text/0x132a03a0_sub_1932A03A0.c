// sub_132A03A0
// rva 0x132a03a0  size 150  section .text  group text
// window base 0x1932a03a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 sub_132A03A0()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v5; // [rsp+0h] [rbp-38h]
  int v6; // [rsp+0h] [rbp-38h]
  int v7; // [rsp+8h] [rbp-30h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+10h] [rbp-28h]
  int v10; // [rsp+10h] [rbp-28h]
  int v11; // [rsp+18h] [rbp-20h]
  int v12; // [rsp+18h] [rbp-20h]

  v0 = __imp_KERNEL32.dll!GetUserDefaultLCID();
  if ( (((unsigned __int16)__imp_KERNEL32.dll!GetUserDefaultUILanguage() ^ (unsigned __int16)v0) & 0x3FF) != 0 )
    JUMPOUT(0x3264FA3F9LL);
  sub_132A0140(
    a1: v0,
    a2: v1,
    a3: (__int64 *)0x3370C0,
    a4: v0,
    a5: 3371208,
    a6: (__int64 *)0x3370D0,
    a7: v5,
    a8: v7,
    a9: v9,
    a10: v11,
    a11: (__int64 *)0x3370D8);
  sub_132A0140(
    a1: v2,
    a2: v3,
    a3: (__int64 *)0x3370E0,
    a4: v2,
    a5: 3371240,
    a6: (__int64 *)0x3370F0,
    a7: v6,
    a8: v8,
    a9: v10,
    a10: v12,
    a11: (__int64 *)0x3370F8);
  return 1;
}
