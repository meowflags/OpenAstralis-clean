// sub_182773280
// rva 0x02773280  size 112  section .text  group text
// window base 0x182773280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773280(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v10; // [rsp+0h] [rbp-A8h]
  int v11; // [rsp+8h] [rbp-A0h]
  __int64 v14[14]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v15; // [rsp+90h] [rbp-18h]
  __int64 v16; // [rsp+98h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp-8h]

  v6 = *(_QWORD *)(v5 + 56);
  v17 = a3;
  v16 = a5;
  v15 = v14;
  sub_182772F00(a1: a5, a2: 0, a3: (__int64)v14, a4: v6, a5: v5, a6: a3);
  return sub_182772A60(
           a1: a2,
           a2: v8,
           a3: v15,
           a4: v7,
           a5: v5,
           a6: a1,
           a7: v10,
           a8: v11,
           a9: a2,
           a10: (int)a1,
           a11: v14[0],
           a12: v14[1],
           a13: v14[2],
           a14: v14[3]);
}
