// sub_1EBDA00
// rva 0x01ebda00  size 62  section .text  group text
// window base 0x181ebda00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBDA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EBDA40();
  }
  else
  {
    *(_BYTE *)(v6 + 376656972) = 1;
    __faststorefence();
    result = sub_1E9BC60(a1, a2);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
