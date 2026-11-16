// sub_1E99940
// rva 0x01e99940  size 317  section .text  group text
// window base 0x181e99940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E99940(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v27; // [rsp+68h] [rbp-20h]
  unsigned __int64 v29; // [rsp+78h] [rbp-10h]

  if ( MEMORY[0x11703b68]/* 0x11703b68 */ == 0 )
    return sub_181E99A01(
             a1,
             a2,
             a3,
             a4: 0,
             a5,
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
  v29 = MEMORY[0x11703b68]/* 0x11703b68 */
      * ((((a5
          + ((((((((unsigned __int64)(a5 + 511) >> 9) + 7) & 0xFFFFFFFFFFFFF8LL) + 55) & 0x1FFFFFFFFFFFFF8LL) + 15)
           & 0x3FFFFFFFFFFFFF8LL)
          + 7)
         & 0xFFFFFFFFFFFFFFF8LL)
        + MEMORY[0x11703b68]/* 0x11703b68 */
        - 1)
       / MEMORY[0x11703b68]/* 0x11703b68 */);
  v27 = sub_1E7EDE0(a1, a2, a3: v22 + 376612536, a4: MEMORY[0x11703b68]/* 0x11703b68 */, a5: v29);
  sub_1EA4760(a1: v24, a2: v25, a3: v27, a4: v23, a5: v29, a6: a5);
  return v27;
}
