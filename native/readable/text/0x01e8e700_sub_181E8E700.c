// sub_1E8E700
// rva 0x01e8e700  size 185  section .text  group text
// window base 0x181e8e700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8E700(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v17; // [rsp+0h] [rbp-28h]
  int v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-10h]

  v19 = v2 + 376654936;
  sub_1E88E40(a1, a2, a3: v2 + 376654936);
  sub_1E8C9C0(a1: v3, a2: v4);
  if ( *(_BYTE *)(v2 + 376654992) == 0 )
    sub_1E88E80(a1: v5, a2: v6, a3: v19);
  sub_1E894C0(a1: v5, a2: v6, a3: v19);
  sub_1E8A4E0(a1: v8, a2: v9, a3: v19, a4: v7, a5: v10, a6: v11, a7: v17);
  sub_1E891A0(a1: v12, a2: v13, a3: v19);
  sub_1EABDA0(
    a1: 0,
    a2: v2 + 376654920,
    a3: v2 + 376654616,
    a4: v2 + 376654896,
    a5: *(_QWORD *)(v2 + 376654568),
    a6: *(_QWORD *)(v2 + 376654584),
    a7: v18,
    a8: *(unsigned __int8 *)(v2 + 376654992));
  return sub_1E8E7C0(a1: v14, a2: v15, a3: v19);
}
