// sub_277AE40
// rva 0x0277ae40  size 326  section .text  group text
// window base 0x18277ae40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277AE40(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // eax
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x18277AF5DLL);
  if ( a3 == v12 )
    JUMPOUT(0x18277AF6CLL);
  v14 = *(_DWORD *)(a3 + 40);
  if ( v14 == 0 )
    JUMPOUT(0x18277AEC7LL);
  return sub_18277AE8B(a1, a2, a3: (int)v12 + 8 * v14, a4: (int)v12 + 8 * v14, a5, a6, a7, a8, a9, a10, a11, a12);
}
