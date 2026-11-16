// sub_5021C40
// rva 0x05021c40  size 91  section .text  group text
// window base 0x185021c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5021C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  char v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  unsigned int v10; // [rsp+10h] [rbp-8h]
  int v11; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5021CA0();
  }
  else
  {
    v11 = a6;
    v10 = a5;
    v9 = a3;
    sub_501CF00(a1, a2, a3: a5, a4, a5: a3, a6, a7: v8);
    result = (int)(2 * v10);
    *(_WORD *)(v9 + result + 12) = v11;
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
