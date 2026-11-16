// sub_1EC51A0
// rva 0x01ec51a0  size 63  section .text  group text
// window base 0x181ec51a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC51A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    return sub_1EC51E0();
  }
  else
  {
    v11 = a3;
    v10 = a5;
    result = sub_2848B60(a1, a2, a3: v6 + 52423576);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
