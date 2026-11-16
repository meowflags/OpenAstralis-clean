// sub_1EAE700
// rva 0x01eae700  size 257  section .text  group text
// window base 0x181eae700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAE700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14

  if ( (unsigned int)a1 <= 5 )
    __asm { jmp     rax; switch jump }
  if ( (a5 & 0x10) != 0 )
  {
    sub_28C1C40(a1, a2, a3: v6 + 361300432);
    __halt();
  }
  return *(_QWORD *)(*(_QWORD *)(a6 + 128) + (a5 >> 5) + 8);
}
