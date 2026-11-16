// sub_1932A85AC
// rva 0x132a85ac  size 75  section .text  group text
// window base 0x1932a85ac: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A85AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD a5, _DWORD a6, char a7)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi

  if ( a4 == -1 )
  {
    sub_1932A85F8(a1, a2, a3, a4: 6);
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)MEMORY[0x793D0](a1, a2, a3: &a7) == 0 )
  {
    v9 = MEMORY[0x79758](a1: v8);
    v13 = sub_1932A8158(a1: v11, a2: v12, a3: v10, a4: v9);
    *(_DWORD *)MEMORY[0x79B48](a1: v16, a2: v17, a3: v14, a4: v15) = v13;
    return 0xFFFFFFFFLL;
  }
  return 0;
}
