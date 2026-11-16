// sub_1592220
// rva 0x01592220  size 146  section .text  group text
// window base 0x181592220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1592220(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 i; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *a3 != 0 )
  {
    for ( i = 1; a3[i] != 0; ++i )
      ;
  }
  else
  {
    i = 0;
  }
  v4 = i + 1;
  v10 = v4;
  if ( v4 == 0 )
    JUMPOUT(0x302B1E265LL);
  v5 = MEMORY[0x12001060]/* 0x12001060 */(a1, a2, a3, a4: v4);
  if ( v5 == 0 )
    return 0;
  v9 = v5;
  sub_2839120(a1: v6, a2: v7, a3, a4: a3, a5: v5, a6: v10);
  return v9;
}
