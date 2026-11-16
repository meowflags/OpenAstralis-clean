// sub_1EB6D80
// rva 0x01eb6d80  size 150  section .text  group text
// window base 0x181eb6d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB6D80(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r15
  __int64 result; // rax
  char v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v10 + 8) )
    return sub_181EB6DF6(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v13 = a3;
  result = sub_1EB6E20(a1, a2, a3, a4, a5, a6, a7: v12);
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
