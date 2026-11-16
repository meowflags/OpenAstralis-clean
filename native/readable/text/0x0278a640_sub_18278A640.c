// sub_278A640
// rva 0x0278a640  size 566  section .text  group text
// window base 0x18278a640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278A640(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        int a28,
        int a29,
        int a30,
        __int64 a31,
        __int64 a32)
{
  __int64 v32; // r14
  __int64 result; // rax
  int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // r8d
  int v38; // r9d
  __int64 v41; // [rsp+88h] [rbp-10h]

  v41 = a14;
  if ( a13 != 0 )
  {
    if ( (unsigned int)sub_278A5A0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11: v32 + 376652416, a12, a13, a14) == 0 )
      return 0;
    a14 = v41;
  }
  if ( a14 == 0 )
    return 0;
  if ( a13 == 0 )
    return 0;
  if ( (unsigned int)MEMORY[0x10e444a0]/* 0x10e444a0 */(a1, a2, a3: a14, a4: a13, a5: 32770) == 0 )
    return 0;
  if ( MEMORY[0x10e44298]/* 0x10e44298 */ == (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))2989 )
    return sub_18278A792(
             a1: v35,
             a2: v36,
             a3: 283394712,
             a4: v34,
             a5: v37,
             a6: v38,
             a7: a15,
             a8: a16,
             a9: a17,
             a10: a18,
             a11: a19,
             a12: a20,
             a13: a21,
             a14: a22,
             a15: a23,
             a16: a24,
             a17: a25,
             a18: a26,
             a19: a27,
             a20: a28,
             a21: a29,
             a22: a30,
             a23: a31,
             a24: a32);
  if ( MEMORY[0x10e44298]/* 0x10e44298 */ == nullptr )
    JUMPOUT(0x18278A7F0LL);
  result = MEMORY[0x10e44298]/* 0x10e44298 */(a1: v35, a2: v36, a3: 0, a4: a1, a5: a13, a6: a2);
  if ( result == 0 )
    JUMPOUT(0x18278A7FALL);
  return result;
}
