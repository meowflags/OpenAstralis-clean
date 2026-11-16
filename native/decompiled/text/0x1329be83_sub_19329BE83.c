// sub_19329BE83
// rva 0x1329be83  size 149  section .text  group text
// window base 0x19329be83: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_19329BE83(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD v9[11]; // [rsp-58h] [rbp-58h] BYREF

  if ( (v6 & 8) != 0 )
    v7 = v9[5] + v6;
  else
    v7 = v9[6] ^ v6;
  if ( (v7 & 3) == 0 )
    sub_19329BC00(a1, a2, a3, a4: v7 ^ 0x6F44DA781361762DLL, a5);
  return sub_1932C8DE0(a1, a2, a3, a4: (unsigned __int64)v9 ^ v9[8], a5, a6);
}
