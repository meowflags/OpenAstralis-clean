// sub_181E8CF40
// rva 0x01e8cf40  size 157  section .text  group text
// window base 0x181e8cf40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8CF40(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx

  if ( a5 == v10 )
    JUMPOUT(0x303D16F4ELL);
  v11 = a5 & 0xFFFFFFFFFFF80000LL;
  v12 = v10 + 8LL * *(unsigned int *)((a5 & 0xFFFFFFFFFFF80000LL) + 0x28);
  if ( *(_BYTE *)(v10 + 376654992) != 0 )
    return MEMORY[0x181E84940](a1: v12, a2, a3: v10 + 376654168, a4: v12, a5, a6: v11);
  else
    return sub_181E8CF95(a1, a2, a3: v11, a4: v12, a5, a6, a7, a8, a9, a10);
}
