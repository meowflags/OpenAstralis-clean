// sub_277A1E0
// rva 0x0277a1e0  size 139  section .text  group text
// window base 0x18277a1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A1E0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rsi

  sub_2781160();
  *(_DWORD *)(v1 + 336) |= 2u;
  __sync_fetch_and_add((volatile signed __int32 *)(v0 + 376668436), 0xFFFFFFFF);
  sub_207F840(a1: v2, a2: v3, a3: v0 + 376668480);
  *(_DWORD *)(v1 + 336) &= ~2u;
  return sub_207FC60(a1: v4, a2: v5, a3: v0 + 376668448);
}
