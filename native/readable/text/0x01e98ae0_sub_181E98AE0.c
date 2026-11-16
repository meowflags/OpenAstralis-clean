// sub_1E98AE0
// rva 0x01e98ae0  size 700  section .text  group text
// window base 0x181e98ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E98AE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22)
{
  __int64 v22; // r14
  __int64 v23; // r15
  _QWORD v25[13]; // [rsp+0h] [rbp-68h] BYREF

  v25[12] = a5;
  v25[11] = a1;
  v25[10] = a2;
  HIDWORD(v25[9]) = a4;
  if ( (unsigned __int64)v25 <= *(_QWORD *)(v23 + 8) )
    JUMPOUT(0x181E98D4ELL);
  if ( a3 == v22 )
    JUMPOUT(0x181E98D65LL);
  return sub_181E98B2F(
           a1,
           a2,
           a3,
           a4,
           a5: (int)v22 + 350200504,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22);
}
