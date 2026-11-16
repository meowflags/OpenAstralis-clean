// sub_19329D157
// rva 0x1329d157  size 132  section .text  group text
// window base 0x19329d157: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_19329D157(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  char v7; // al
  _QWORD v9[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( (v6 & 8) != 0 )
    v7 = LOBYTE(v9[1]) + v6;
  else
    v7 = LOBYTE(v9[2]) ^ v6;
  if ( (v7 & 3) != 0 && (v7 & 3) == 1 )
    a3 = 0xE7185995670D81A3LL;
  return sub_1932C8DE0(a1, a2, a3, a4: (unsigned __int64)v9 ^ v9[4], a5, a6);
}
