// sub_181EBC500
// rva 0x01ebc500  size 411  section .text  group text
// window base 0x181ebc500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBC500(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int *a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20)
{
  __int64 v20; // rsi
  __int64 result; // rax

  if ( *a5 != 0 )
  {
    v20 = 2LL * *a5;
    if ( &a5[v20 + 1] > a5 + 1 )
      return sub_181EBC52A(
               a1,
               a2: v20 * 4,
               a3,
               a4: (int)a5 + 4,
               (_DWORD)a5,
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
               a20);
  }
  return result;
}
