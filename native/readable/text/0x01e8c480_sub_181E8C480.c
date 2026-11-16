// sub_1E8C480
// rva 0x01e8c480  size 1167  section .text  group text
// window base 0x181e8c480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8C480(
        unsigned int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // r14
  __int64 v19; // r15
  _QWORD v21[11]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-4h]

  v22 = a1;
  v21[7] = v18 + 376654936;
  if ( (unsigned __int64)v21 <= *(_QWORD *)(v19 + 8) )
    JUMPOUT(0x181E8C86CLL);
  *(_BYTE *)(v18 + 376654992) = MEMORY[0x11af8784]/* 0x11af8784 */ & a1;
  return sub_181E8C4D0(
           a1,
           a2,
           a3: (int)v18 + 376652616,
           a4: (int)v18 + 376652616,
           a5: MEMORY[0x11af8784]/* 0x11af8784 */ & a1,
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
           a18);
}
