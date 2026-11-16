// sub_181EB79A0
// rva 0x01eb79a0  size 50  section .text  group text
// window base 0x181eb79a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB79A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // eax
  __int64 v4; // rcx

  v3 = *(_DWORD *)(v2 + 320);
  v4 = v3 - 1;
  *(_DWORD *)(v2 + 320) = v4;
  sub_181EB82C0(a1, a2, a3: v3, a4: v4, a5: (unsigned int)v4);
  return 0;
}
