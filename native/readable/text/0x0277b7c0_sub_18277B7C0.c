// sub_277B7C0
// rva 0x0277b7c0  size 170  section .text  group text
// window base 0x18277b7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277B7C0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d

  sub_2781160();
  *(_DWORD *)(v11 + 336) |= 2u;
  if ( a3 < *(_DWORD *)(v10 + 376668436) )
    return sub_18277B810(a1: v13, a2: v14, a3, a4: v12, a5: v15, a6: v16, a7, a8, a9, a10);
  *(_DWORD *)(v11 + 336) &= ~2u;
  return sub_207FC60(a1: v13, a2: v14, a3: v10 + 376668448);
}
