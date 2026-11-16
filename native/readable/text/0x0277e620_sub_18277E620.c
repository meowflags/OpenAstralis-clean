// sub_277E620
// rva 0x0277e620  size 42  section .text  group text
// window base 0x18277e620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277E620(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15

  *(_DWORD *)(v3 + 336) &= ~2u;
  return sub_207FC60(a1, a2, a3: v2 + 376668448);
}
