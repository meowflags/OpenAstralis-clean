// sub_1932A1064
// rva 0x132a1064  size 83  section .text  group text
// window base 0x1932a1064: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1932A1064(_DWORD a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v6; // edi
  int v7; // esi
  int v8; // r9d

  if ( a3 < 0 )
  {
    if ( (unsigned int)MEMORY[0x79958](a1: a5, a2) == 10042 )
      sub_1932B12F8(a1: v6, a2: v7, a3: 533984, a4, a5: 533952, a6: v8);
    else
      sub_1932B1338(a1: v6, a2: v7, a3: 534024, a4, a5: v6, a6: v8);
  }
}
