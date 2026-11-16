// sub_132AEBA4
// rva 0x132aeba4  size 77  section .text  group text
// window base 0x1932aeba4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AEBA4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-1D8h] BYREF
  _BYTE v12[416]; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v13; // [rsp+1C0h] [rbp-18h]

  sub_132C97B8(a1, a2, a3, a4: &sub_1932AEFFC);
  __imp_WS2_32.dll!#115(a1: v3, a2: v4, a3: v12, a4: 514);
  return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v11 ^ v13, a5: v8, a6: v9);
}
