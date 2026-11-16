// sub_181596600
// rva 0x01596600  size 368  section .text  group text
// window base 0x181596600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596600(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 i; // rbp
  unsigned __int64 j; // rbp
  __int64 v14; // [rsp+28h] [rbp-20h]
  unsigned __int64 v15; // [rsp+38h] [rbp-10h]

  v15 = a5;
  v14 = 0x101010101010101LL * a6;
  v6 = (8 - (_BYTE)a3) & 7;
  if ( ((8 - (_BYTE)a3) & 7) != 0 )
  {
    if ( v6 > a5 )
      v6 &= a5;
    sub_1815967C0(a1, a2, a3, a4: 0x101010101010101LL * a6, a5: 0x101010101010101LL * a6, a6: v6);
    a5 = v15;
  }
  v7 = a3 + v6;
  v8 = (a5 - v6) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 < 0x20 )
  {
    v11 = 0;
    v9 = v14;
    result = a3;
  }
  else
  {
    v9 = v14;
    result = a3;
    *(_QWORD *)(a3 + v6) = v14;
    *(_QWORD *)(a3 + v6 + 8) = v14;
    *(_QWORD *)(a3 + v6 + 16) = v14;
    *(_QWORD *)(a3 + v6 + 24) = v14;
    v11 = 32;
    for ( i = 64; i <= v8; i += 32LL )
    {
      *(_QWORD *)(v7 + v11) = v14;
      *(_QWORD *)(v7 + v11 + 8) = v14;
      *(_QWORD *)(v7 + v11 + 16) = v14;
      *(_QWORD *)(v7 + v11 + 24) = v14;
      v11 = i;
    }
  }
  if ( v8 > v11 )
  {
    *(_QWORD *)(v7 + v11) = v9;
    for ( j = v11 + 8; v8 > j; j += 8LL )
      *(_QWORD *)(v7 + j) = v9;
  }
  if ( v6 + v8 != a5 )
    return sub_181596800(a1: a5 - (v6 + v8), a2: v11, a3: result + v6 + v8, a4: v9, a5: v9, a6: a5 - (v6 + v8));
  return result;
}
