// sub_2778477
// rva 0x02778477  size 61  section .text  group text
// window base 0x182778477: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778477(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  __int64 (*v9)(void); // rcx

  if ( a8 == v8 )
    JUMPOUT(0x1827784D1LL);
  v9 = (__int64 (*)(void))a8[5];
  a8[5] = 0;
  a8[4] = 0;
  a8[6] = 0;
  return v9();
}
