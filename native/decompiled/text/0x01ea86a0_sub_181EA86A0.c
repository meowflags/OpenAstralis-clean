// sub_181EA86A0
// rva 0x01ea86a0  size 114  section .text  group text
// window base 0x181ea86a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA86A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+18h] [rbp-20h]

  if ( a6 == 0 )
    return 1;
  if ( a1 == a5 )
  {
    v6 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    v8 = a1;
    MEMORY[0x182839120](a1, a2, a3: a5, a4, a5: a1);
    a1 = v8;
    v6 = v8 & 0xFFFFFFFFFFF80000LL;
  }
  *(_QWORD *)(v6 + 32) = a1 + a6 - v6;
  return 1;
}
