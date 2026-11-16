// sub_1932AD1F4
// rva 0x132ad1f4  size 99  section .text  group text
// window base 0x1932ad1f4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AD1F4(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // edi
  int v12; // esi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi

  if ( (unsigned int)sub_1932AD2D4(a1: a3, a2, a3: (unsigned int)&a9, a4, a5: (unsigned int)&a10, a6) == 0 )
    return 0;
  v14 = sub_1932AD258(a1: v11, a2: v12, a3: v11, a4, a5: a9, a6: a10);
  MEMORY[0x792A0](a1: v15);
  MEMORY[0x792A0](a1: v16);
  return v14;
}
