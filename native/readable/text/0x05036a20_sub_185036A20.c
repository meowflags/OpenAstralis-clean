// sub_5036A20
// rva 0x05036a20  size 728  section .text  group text
// window base 0x185036a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5036A20(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 result; // rax
  _QWORD v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[8] = a5;
  v19[7] = a6;
  if ( (unsigned __int64)v19 <= *(_QWORD *)(v16 + 8) )
    JUMPOUT(0x185036CCFLL);
  v17 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v17 == 0 )
    return sub_185036A7D(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v19[6] = a3;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v14
                                                              + *(_QWORD *)(v15
                                                                          + 8LL * (*(_DWORD *)(v15 + 8 * v17) >> 3)
                                                                          + 184)))(
             a1,
             a2: a6,
             a3: v15 + 8 * v17);
  if ( *(int *)(v16 + 16) <= 0 )
    JUMPOUT(0x185036CC5LL);
  return result;
}
