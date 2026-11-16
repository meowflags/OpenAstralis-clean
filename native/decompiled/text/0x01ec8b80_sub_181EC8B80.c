// sub_181EC8B80
// rva 0x01ec8b80  size 435  section .text  group text
// window base 0x181ec8b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC8B80(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  _QWORD v17[8]; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-8h]
  int v19; // [rsp+44h] [rbp-4h]

  v17[6] = a3;
  v19 = a5;
  v17[5] = a6;
  v17[4] = a1;
  if ( (unsigned __int64)v17 <= *(_QWORD *)(v15 + 8) )
    JUMPOUT(0x181EC8D07LL);
  if ( a6 == v14 )
    JUMPOUT(0x181EC8D0CLL);
  v18 = *(_DWORD *)(a6 + 8);
  if ( v18 == 0 )
    JUMPOUT(0x181EC8CDBLL);
  if ( a5 != 0 )
    JUMPOUT(0x181EC8CE2LL);
  return sub_181EC8BDF(
           a1,
           a2,
           a3,
           a4: a3,
           a5: (int)v14 + 8 * *(_DWORD *)(a6 + 12),
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
