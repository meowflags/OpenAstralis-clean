// sub_2780140
// rva 0x02780140  size 178  section .text  group text
// window base 0x182780140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2780140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rcx

  if ( (unsigned int)sub_2778A40(a1, a2, a3, a4, a5: 12) == 0 )
  {
    while ( (unsigned int)sub_2778A40(a1: v5, a2: v6, a3, a4: v4, a5: 12) == 0 )
      ;
  }
  result = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = result - 1;
  if ( *(_BYTE *)(a3 + 24) != 0 )
  {
    if ( result == 1 )
      result = sub_277FF60(a1: v5, a2: v6, a3, a4: result - 1, a5: v7, a6: v8);
    v10 = a3;
  }
  else
  {
    v10 = a3;
  }
  *(_DWORD *)(v10 + 12) = 0;
  __faststorefence();
  return result;
}
