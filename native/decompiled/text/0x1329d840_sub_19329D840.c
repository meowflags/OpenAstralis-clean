// sub_19329D840
// rva 0x1329d840  size 101  section .text  group text
// window base 0x19329d840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329D840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 i; // [rsp+20h] [rbp-18h]

  for ( i = 0; i < 0x45; ++i )
  {
    if ( (unsigned int)sub_1932CA1F7(a1, a2, a3: *(_QWORD *)(16 * i + 0x81F30), a4) == 0 )
      return *(_QWORD *)(16 * i + 0x81F38);
  }
  return 0;
}
