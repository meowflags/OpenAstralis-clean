// sub_1932C95CC
// rva 0x132c95cc  size 58  section .text  group text
// window base 0x1932c95cc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932C95CC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi

  if ( a4 == 0 )
    MEMORY[0x337DC0] = 1;
  sub_1932C9B58(a1, a2, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_1932A3074(a1: v8, a2: v9, a3: v6, a4: v7) == 0 )
    return 0;
  if ( (unsigned __int8)sub_1932A3074(a1: v12, a2: v13, a3: v10, a4: v11) == 0 )
  {
    sub_1932A3074(a1: v16, a2: v17, a3: v15, a4: 0);
    return 0;
  }
  return 1;
}
