// sub_1EBD4C0
// rva 0x01ebd4c0  size 710  section .text  group text
// window base 0x181ebd4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBD4C0(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r15
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v12 + 8) )
    JUMPOUT(0x181EBD72BLL);
  return sub_181EBD4EE(a1, a2, a3, a4: (unsigned __int8)a5, a5, a6, a7, a8, a9, a10, a11, a12);
}
