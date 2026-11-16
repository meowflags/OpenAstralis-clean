// sub_181E9AAE0
// rva 0x01e9aae0  size 62  section .text  group text
// window base 0x181e9aae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_181E9AAE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v6; // [rsp+14h] [rbp-4h]

  MEMORY[0x18207FB60](a1, a2, a3: v2 + 376656712);
  v6 = *(_DWORD *)(v2 + 376613812) != 0;
  MEMORY[0x18207FC60](a1: v3, a2: v4, a3: v2 + 376656712);
  return v6;
}
