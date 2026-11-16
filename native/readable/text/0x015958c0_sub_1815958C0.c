// sub_15958C0
// rva 0x015958c0  size 523  section .text  group text
// window base 0x1815958c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_15958C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  unsigned __int64 result; // rax
  char v17; // cl
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  unsigned __int64 v24; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 i; // rdx
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]

  result = a5 ^ a3;
  v17 = ((a5 ^ a3) - 1) & ~(a5 ^ a3);
  if ( (v17 & 7) != 0 )
  {
    v18 = v17 & 7;
    v28 = v18;
    v19 = v18 & ((~v18 & (a3 + v18)) - a3);
    if ( v19 > a6 )
      v19 &= a6;
    v27 = ~v18;
    sub_1596540(a1: a3, a2: v18 + 1, a3, a4: v18, a5, a6: v19);
    v24 = v19 + ((a6 - v19) & v27);
    if ( v28 != 7 )
    {
      if ( v28 == 3 )
      {
        for ( i = v19; v24 > i; i += 4LL )
          *(_DWORD *)(a5 + i) = *(_DWORD *)(a3 + i);
      }
      else
      {
        for ( j = v19; v24 > j; j += 2LL )
          *(_WORD *)(a5 + j) = *(_WORD *)(a3 + j);
      }
      JUMPOUT(0x181595A39LL);
    }
    return sub_1815959F5(
             a1: v21,
             a2: v22,
             a3: (int)a6 - (int)v19,
             a4: v20,
             a5: v23,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  }
  else if ( a6 != 0 )
  {
    *(_BYTE *)a5 = *(_BYTE *)a3;
    for ( result = 1; a6 > result; ++result )
      *(_BYTE *)(a5 + result) = *(_BYTE *)(a3 + result);
  }
  return result;
}
