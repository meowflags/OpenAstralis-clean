// sub_184F45D20
// rva 0x04f45d20  size 433  section .text  group text
// window base 0x184f45d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F45D20(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r13d
  _DWORD *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rsi
  _DWORD v19[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)v19 <= *(_QWORD *)(v14 + 8) )
    JUMPOUT(0x184F45EA7LL);
  if ( a3 == v13 )
    JUMPOUT(0x184F45EB1LL);
  if ( (unsigned __int16)v13[2 * v13[2 * (*a3 >> 3) + 5]
                           + 3
                           + (v13[2 * (*a3 >> 3) + 11] & (0x568u >> HIBYTE(v13[2 * (*a3 >> 3) + 11])))] != 1384 )
    JUMPOUT(0x184F45EBALL);
  v19[12] = a5;
  v15 = *a3 >> 3;
  v16 = &v13[2 * v13[2 * v15 + 5]];
  v17 = v13[2 * v15 + 11] & (0x568u >> HIBYTE(v13[2 * v15 + 11]));
  return sub_184F45DB7(
           a1: (_DWORD)v16,
           a2: v17,
           (_DWORD)a3,
           a4: v12 + (unsigned int)*(_QWORD *)((char *)&v13[2 * v15] + HIWORD(v16[v17 + 3])),
           a5: a5 - 1,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
