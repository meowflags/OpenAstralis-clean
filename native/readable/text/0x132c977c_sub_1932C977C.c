// sub_132C977C
// rva 0x132c977c  size 58  section .text  group text
// window base 0x1932c977c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C977C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax

  if ( MEMORY[0x337dc8]/* 0x337dc8 */ == -1 )
    v5 = sub_1932CA2B7();
  else
    v5 = sub_1932CA2AB(a1, a2, a3: a4, a4: 3374536);
  if ( v5 != 0 )
    JUMPOUT(0x3265237ADLL);
  return a4;
}
