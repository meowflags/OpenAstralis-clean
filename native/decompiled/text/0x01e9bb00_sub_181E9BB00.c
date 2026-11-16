// sub_181E9BB00
// rva 0x01e9bb00  size 340  section .text  group text
// window base 0x181e9bb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9BB00(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        char a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x181E9BBBALL);
  result = *(_QWORD *)(v12 + 376613824);
  if ( *(_BYTE *)(v12 + 376656972) == 0 )
    return sub_181E9BB3D(
             a1,
             a2,
             a3: (int)v12 + 376613784,
             a4: *(_QWORD *)(v12 + 376613832),
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  if ( *(int *)(v13 + 16) <= 0 )
    JUMPOUT(0x181E9BB9BLL);
  return result;
}
