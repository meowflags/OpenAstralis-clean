// sub_181EABC40
// rva 0x01eabc40  size 345  section .text  group text
// window base 0x181eabc40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EABC40(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rbx

  if ( a3 == v3 )
  {
    MEMORY[0x18276EFE0]();
  }
  else
  {
    v4 = (unsigned int)SLOBYTE(v3[2 * (*a3 >> 3) + 17]);
    if ( (unsigned int)v4 <= 6 )
      __asm { jmp     rsi; switch jump }
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v3 + 91594194);
  __halt();
}
