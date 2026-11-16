// sub_277A180
// rva 0x0277a180  size 86  section .text  group text
// window base 0x18277a180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A180(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r9
  char v9; // [rsp+0h] [rbp-18h]

  if ( a5 == v6 )
  {
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v9);
  }
  else
  {
    v7 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v7 != 0 )
    {
      *(_DWORD *)(v6 + 8 * v7 + 28) = 5;
      __faststorefence();
      return sub_277A0A0(a1, a2, a3, a4: a5, a5, a6: 0);
    }
  }
  sub_276EFE0(a1, a2, a3, a4, a5, a6: v7, a7: v9);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_277A1E0();
}
