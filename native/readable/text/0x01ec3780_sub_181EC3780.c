// sub_1EC3780
// rva 0x01ec3780  size 1574  section .text  group text
// window base 0x181ec3780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC3780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        char a26)
{
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 result; // rax
  _QWORD v29[19]; // [rsp+0h] [rbp-98h] BYREF

  v29[16] = a3;
  v29[15] = a5;
  v29[14] = a6;
  if ( (unsigned __int64)v29 <= *(_QWORD *)(v27 + 8) )
    JUMPOUT(0x181EC387FLL);
  if ( a5 == v26 )
  {
    if ( *(int *)(v27 + 16) <= 0 )
      JUMPOUT(0x181EC383CLL);
  }
  else if ( a6 == v26 )
  {
    result = sub_1EC3DC0(a1, a2, a3: a5, a4, a5: a6);
    if ( *(int *)(v27 + 16) <= 0 )
      JUMPOUT(0x181EC3847LL);
  }
  else
  {
    if ( *(_DWORD *)(a5 + 28) != 0 )
      JUMPOUT(0x181EC382CLL);
    return sub_181EC3810(
             a1,
             a2,
             a3: a6,
             a4: *(_DWORD *)(a5 + 12),
             a5: (int)v26 + 8 * *(_DWORD *)(a5 + 12),
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
             a22,
             a23,
             a24,
             a25,
             a26);
  }
  return result;
}
