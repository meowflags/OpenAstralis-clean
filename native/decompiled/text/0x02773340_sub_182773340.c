// sub_182773340
// rva 0x02773340  size 109  section .text  group text
// window base 0x182773340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v9; // [rsp+0h] [rbp-A8h]
  int v10; // [rsp+8h] [rbp-A0h]
  __int64 v13[14]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v14; // [rsp+90h] [rbp-18h]
  __int64 v15; // [rsp+98h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp-8h]

  v16 = a5;
  v15 = a3;
  v14 = v13;
  sub_182773080(a1, a2, a3: (__int64)v13, a4: v15, a5: v15, a6: a5);
  return sub_182772A60(
           a1,
           a2: v7,
           a3: v14,
           a4: v6,
           a5: v15,
           a6,
           a7: v9,
           a8: v10,
           a9: a1,
           a10: (int)a6,
           a11: v13[0],
           a12: v13[1],
           a13: v13[2],
           a14: v13[3]);
}
