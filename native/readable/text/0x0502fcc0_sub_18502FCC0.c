// sub_502FCC0
// rva 0x0502fcc0  size 77  section .text  group text
// window base 0x18502fcc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502FCC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v10 = a3;
  sub_277B3E0();
  sub_277DA60(a1: v4, a2: v5, a3: v10);
  result = sub_277E380(a1: v6, a2: v7, a3: v10);
  if ( *(int *)(v3 + 16) <= 0 )
    return sub_277F280();
  return result;
}
