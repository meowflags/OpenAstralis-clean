// sub_18277FEA0
// rva 0x0277fea0  size 173  section .text  group text
// window base 0x18277fea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277FEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi

  for ( result = sub_182778A40(a1, a2, a3, a4, a5: 12);
        (_DWORD)result == 0;
        result = sub_182778A40(a1: v6, a2: v7, a3, a4: v5, a5: 12) )
  {
    ;
  }
  *(_BYTE *)(a3 + 24) = 1;
  if ( *(_QWORD *)(a3 + 16) == 0 )
    result = sub_18277FF60();
  *(_DWORD *)(a3 + 12) = 0;
  __faststorefence();
  return result;
}
