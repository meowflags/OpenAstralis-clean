// sub_181E60C20
// rva 0x01e60c20  size 179  section .text  group text
// window base 0x181e60c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E60C20(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        char a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  _DWORD v15[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x181E60CBFLL);
  v15[9] = a5;
  return sub_181E60C56(
           a1,
           a2,
           a3: *(_QWORD *)(v12 + 376650856),
           a4: *(_QWORD *)(v12 + 376650856),
           a5: -2 - a3,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
