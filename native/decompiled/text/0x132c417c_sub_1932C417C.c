// sub_1932C417C
// rva 0x132c417c  size 115  section .text  group text
// window base 0x1932c417c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C417C(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // zf

  result = sub_1932C66CC(a1: *(_QWORD *)(a4 + 40), a2: a4, a3, a4: *(_QWORD *)(a4 + 40));
  if ( *(_DWORD *)(v5 + 40) > *(_DWORD *)(v6 + 24) )
    JUMPOUT(0x32651E1A9LL);
  v7 = *(_DWORD *)(v5 + 40);
  if ( v7 != 0 )
  {
    result = sub_1932CA15B(a1: v5, a2: v6, a3: *(_QWORD *)(v5 + 32), a4: *(_QWORD *)(v6 + 16), a5: v7);
    *(_QWORD *)(v9 + 16) += v7;
    *(_QWORD *)(v8 + 32) += v7;
    *(_DWORD *)(v9 + 28) += v7;
    *(_DWORD *)(v9 + 24) -= v7;
    v10 = *(_DWORD *)(v8 + 40) == v7;
    *(_DWORD *)(v8 + 40) -= v7;
    if ( v10 )
    {
      result = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 32) = result;
    }
  }
  return result;
}
