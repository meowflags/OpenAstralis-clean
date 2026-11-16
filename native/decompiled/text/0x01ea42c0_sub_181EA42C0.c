// sub_181EA42C0
// rva 0x01ea42c0  size 102  section .text  group text
// window base 0x181ea42c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA42C0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r15
  __int64 result; // rax

  ++*(_DWORD *)(v12 + 344);
  result = a6 + a3;
  if ( a5 > a6 + a3 )
    return sub_181EA42F9(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  *(_QWORD *)(v12 + 24) = a3;
  *(_QWORD *)(v12 + 40) = a5;
  *(_QWORD *)(v12 + 32) = result;
  *(_QWORD *)(v12 + 192) = *(_QWORD *)(v12 + 184) >> 6;
  return result;
}
