// sub_2774080
// rva 0x02774080  size 541  section .text  group text
// window base 0x182774080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2774080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  _QWORD v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v20[5] = a3;
  v20[8] = a5;
  v20[4] = a2;
  if ( (unsigned __int64)v20 <= *(_QWORD *)(v15 + 8) )
    JUMPOUT(0x182774254LL);
  v20[3] = a4;
  if ( *(int *)(a3 + 24) < 100000 )
    return sub_1827740F4(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( a4 == v14 )
    JUMPOUT(0x182774265LL);
  v20[7] = a1;
  v20[6] = a6;
  v16 = sub_2084840(a1, a2, a3: v14 + 376612120, a4, a5: v14 + 372583328);
  sub_20841E0(a1: v17, a2: v18, a3: v16);
  if ( *(int *)(v15 + 16) <= 0 )
    JUMPOUT(0x18277423BLL);
  return 0;
}
