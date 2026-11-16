// sub_132BF76C
// rva 0x132bf76c  size 209  section .text  group text
// window base 0x1932bf76c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BF76C(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v12[10]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v13; // [rsp+2Ah] [rbp-2Eh]
  __int64 v14; // [rsp+38h] [rbp-20h]

  if ( (unsigned int)sub_132C0524(a1: a4, a2: a3, a3: (unsigned int)v12, a4: *(_QWORD *)(a4 + 48), a5: 20, a6: a5 - 20) != -1
    && (unsigned int)sub_132C0524(
                       a1: v6,
                       a2: v7,
                       a3: v7,
                       a4: *(_QWORD *)(v6 + 48),
                       a5: 56,
                       a6: v12[8] | ((v12[9] | (v13 << 8)) << 8)) != -1 )
  {
    JUMPOUT(0x32651981BLL);
  }
  return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v11 ^ v14, a5: v8, a6: v9);
}
