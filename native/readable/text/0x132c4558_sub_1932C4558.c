// sub_132C4558
// rva 0x132c4558  size 5596  section .text  group text
// window base 0x1932c4558: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C4558()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  int v2; // ecx
  unsigned int v3; // ecx

  if ( (unsigned int)sub_1932C5EA0() == 0
    && *(_QWORD *)(v0 + 16) != 0
    && (*(_QWORD *)v0 != 0 || *(_DWORD *)(v0 + 8) == 0) )
  {
    v1 = *(_QWORD *)(v0 + 40);
    v2 = *(_DWORD *)(v1 + 8);
    if ( v2 == 16191 )
    {
      *(_DWORD *)(v1 + 8) = 16192;
      v2 = 16192;
    }
    v3 = v2 - 16180;
    if ( v3 <= 0x1F )
      __asm { jmp     rcx; switch jump }
  }
  return 4294967294LL;
}
