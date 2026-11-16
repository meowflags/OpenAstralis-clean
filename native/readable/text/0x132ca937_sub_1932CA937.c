// sub_132CA937
// rva 0x132ca937  size 54  section .text  group text
// window base 0x1932ca937: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA937(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  __int64 v5; // [rsp+0h] [rbp-38h]
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]
  int v8; // [rsp+18h] [rbp-20h]

  return sub_132C9528(
           a1,
           a2,
           a3: *(_DWORD *)(a3 + 104),
           a4: *(_QWORD *)(a3 + 96),
           a5: *(_QWORD *)(a3 + 112),
           a6: (__int64)sub_132C8E00,
           a7: v5,
           a8: v6,
           a9: v7,
           a10: v8,
           a11: **a4,
           a12: (__int64)a4);
}
