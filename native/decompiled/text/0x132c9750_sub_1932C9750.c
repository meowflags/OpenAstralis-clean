// sub_1932C9750
// rva 0x132c9750  size 41  section .text  group text
// window base 0x1932c9750: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932C9750(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi

  v4 = a4;
  if ( MEMORY[0x337DC0] == 0 || (_BYTE)a3 == 0 )
  {
    sub_1932A3074(a1, a2, a3, a4);
    LOBYTE(v5) = v4;
    sub_1932A3074(a1: v7, a2: v8, a3: v6, a4: v5);
  }
  return 1;
}
