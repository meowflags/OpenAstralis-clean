// sub_2782D80
// rva 0x02782d80  size 287  section .text  group text
// window base 0x182782d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_2782D80(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rcx

  if ( a2 == 0 )
    return sub_182782E1A(a1, a2: 0, a3, a4, a5, a6, a7: a15, a8: a16, a9: a17, a10: a18);
  sub_2781860(
    a1: a6,
    a2: a1,
    a3: v18 + 376613312,
    a4: *(unsigned int *)(v18 + 376351712),
    a5: v18 + 376669224,
    a6: a5,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14);
  ++*(_DWORD *)(v18 + 376351712);
  *(_QWORD *)(v18 + 376351704) = a1;
  *(_DWORD *)(v18 + 376351692) = (unsigned __int64)(a5 - v18) >> 3;
  result = v18 + 376351688;
  if ( (*(_DWORD *)(v18 + 376351688) & 2) != 0 )
  {
    v20 = result & 0xFFFFFFFFFFF80000LL;
    result = (result - ((result & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v20 + result + 56) != 0 )
      *(_BYTE *)(v20 + result + 56) = 0;
  }
  *(_QWORD *)(v18 + 376351696) = a6;
  return result;
}
