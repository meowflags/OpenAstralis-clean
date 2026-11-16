// sub_181EBE840
// rva 0x01ebe840  size 107  section .text  group text
// window base 0x181ebe840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EBE840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi

  if ( a3 == v6 )
    JUMPOUT(0x303D48861LL);
  MEMORY[0x182839460](a1, a2, a3: a6, a4: (unsigned int)a1, a5: a3 + 32, a6: (unsigned int)a1);
  *(_QWORD *)(a3 + 16) = a5;
  *(_QWORD *)(a3 + 24) = a6;
  return sub_181EABBC0(a1: v7, a2: v8, a3: v6 + 376654616, a4: a3, a5: (char *)a3);
}
