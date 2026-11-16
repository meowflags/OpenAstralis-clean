// sub_5033040
// rva 0x05033040  size 55  section .text  group text
// window base 0x185033040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5033040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r15
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  *(_BYTE *)(a3 + 40) = MEMORY[0xe9691e0]/* 0xe9691e0 */ & a5;
  *(_BYTE *)(a3 + 41) = 1;
  if ( *(int *)(v5 + 16) <= 0 )
    sub_277F280();
  return a3;
}
