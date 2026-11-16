// sub_132C9270
// rva 0x132c9270  size 157  section .text  group text
// window base 0x1932c9270: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9270(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD a5,
        _DWORD a6,
        unsigned int a7)
{
  int v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  a7 = a4;
  if ( (unsigned int)__imp_KERNEL32.dll!IsProcessorFeaturePresent(a1, a2, a3, a4: 23) != 0 )
    __fastfail(a7);
  sub_132C9310(a1: v8, a2: v9, a3: v7, a4: 3373280, a5: v10, a6: v11);
  MEMORY[0x3379d8]/* 0x3379d8 */ = retaddr;
  MEMORY[0x337978]/* 0x337978 */ = &a7;
  MEMORY[0x337850]/* 0x337850 */ = retaddr;
  MEMORY[0x337840]/* 0x337840 */ = -1073740791;
  MEMORY[0x337844]/* 0x337844 */ = 1;
  MEMORY[0x337858]/* 0x337858 */ = 1;
  MEMORY[0x337860]/* 0x337860 */ = a7;
  return sub_132C9154(a1: v12, a2: v13, a3: a7, a4: 560936);
}
