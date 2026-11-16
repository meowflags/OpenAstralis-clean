// sub_182785700
// rva 0x02785700  size 60  section .text  group text
// window base 0x182785700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __spoils<> sub_182785700(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  int i; // eax

  if ( a5 >= 0 )
  {
    *a3 = 0;
    for ( i = 1; i <= a5; ++i )
      a3[i] = 0;
  }
}
