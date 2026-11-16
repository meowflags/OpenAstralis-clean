// sub_277A0A0
// rva 0x0277a0a0  size 125  section .text  group text
// window base 0x18277a0a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A0A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  char v8; // [rsp+0h] [rbp-28h]

  if ( *(_DWORD *)(a3 + 72) != 0 )
  {
    sub_28C1C40(a1, a2, a3: v6 + 352801584);
  }
  else if ( a5 != v6 )
  {
    *(_QWORD *)(a3 + 64) = *(_QWORD *)(a5 + 80);
    result = (unsigned __int64)(a5 - v6) >> 3;
    *(_DWORD *)(a3 + 72) = result;
    *(_QWORD *)(a5 + 56) = a3;
    if ( a6 != 0 )
      return sub_2780500(a1, a2, a3: v6 + 376658360, a4: a3, a5: a3, a6: a5);
    return result;
  }
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v8);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_277A120();
}
