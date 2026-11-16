// sub_50492E0
// rva 0x050492e0  size 523  section .text  group text
// window base 0x1850492e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50492E0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  int v12; // r14d
  __int64 v13; // r15
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  int v16; // [rsp+1Ch] [rbp-1Ch]
  __int64 v17; // [rsp+20h] [rbp-18h]

  v17 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x1850494D4LL);
  v16 = *(_DWORD *)(a3 + 116);
  if ( v16 == 0 )
    JUMPOUT(0x1850494D9LL);
  return sub_185049324(a1, a2, a3: v12 + 8 * v16, a4: v16, a5: v12 + 8 * v16, a6, a7, a8, a9, a10, a11, a12);
}
