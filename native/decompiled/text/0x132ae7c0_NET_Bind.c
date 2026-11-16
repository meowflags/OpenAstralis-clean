// NET_Bind
// rva 0x132ae7c0  size 52  section .text  group text
// window base 0x1932ae7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_Bind(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi

  v5 = MEMORY[0x79920](a1, a2, a3, a4, a5);
  if ( v5 == -1 && (unsigned int)MEMORY[0x79958](a1: v6, a2: v7) == 10013 )
    MEMORY[0x79A40](a1: v9, a2: v10, a3: v8, a4: 10048);
  return v5;
}
