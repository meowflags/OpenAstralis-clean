// sub_503DB20
// rva 0x0503db20  size 5137  section .text  group text
// window base 0x18503db20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503DB20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        int a31,
        __int64 a32)
{
  int v32; // r13d
  _DWORD *v33; // r14
  __int64 v34; // r15
  __int64 v35; // rax
  _QWORD v37[27]; // [rsp+0h] [rbp-D8h] BYREF

  v37[15] = a3;
  v37[14] = a5;
  v37[13] = a6;
  v37[12] = a2;
  v37[11] = a4;
  if ( (unsigned __int64)v37 <= *(_QWORD *)(v34 + 8) )
    JUMPOUT(0x18503EE15LL);
  if ( a4 == v33 )
    JUMPOUT(0x18503EE1FLL);
  if ( (unsigned __int16)v33[2 * v33[2 * (*a4 >> 3) + 5]
                           + 3
                           + (v33[2 * (*a4 >> 3) + 11] & (0x1EFBu >> HIBYTE(v33[2 * (*a4 >> 3) + 11])))] != 7931 )
    JUMPOUT(0x18503EE29LL);
  v37[10] = a1;
  v35 = *a4 >> 3;
  return sub_18503DBD9(
           a1,
           a2,
           a3: (_DWORD)a4,
           a4: v32
         + (unsigned int)*(_QWORD *)((char *)&v33[2 * v35 + 6]
                                   + HIWORD(v33[2 * v33[2 * v35 + 5]
                                              + 3
                                              + (v33[2 * v35 + 11] & (0x1EFBu >> HIBYTE(v33[2 * v35 + 11])))])),
           a5: a3,
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
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32);
}
