// sub_277A120
// rva 0x0277a120  size 93  section .text  group text
// window base 0x18277a120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A120(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  char v11; // [rsp+0h] [rbp-18h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  v12 = a3;
  v8 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v8 != 0 )
  {
    if ( *(_BYTE *)(v6 + 8 * v8 + 32) != 0 )
    {
      sub_277A1E0();
      a3 = v12;
    }
    v9 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v9 != 0 )
    {
      *(_DWORD *)(v6 + 8 * v9 + 28) = 5;
      __faststorefence();
      return sub_277A0A0(a1, a2, a3: v7, a4, a5: a3, a6: 1);
    }
  }
  else
  {
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v11);
  }
  sub_276EFE0(a1, a2, a3, a4, a5: v9, a6, a7: v11);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_277A180();
}
