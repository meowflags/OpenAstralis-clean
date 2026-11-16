// sub_181E25B20
// rva 0x01e25b20  size 1289  section .text  group text
// window base 0x181e25b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E25B20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  double v23; // xmm0_8
  double v24; // xmm1_8
  double v25; // xmm2_8
  double v26; // xmm3_8
  double v27; // xmm4_8
  double v28; // xmm5_8
  double v29; // xmm6_8
  double v30; // xmm7_8

  if ( a4 == 0 )
  {
    MEMORY[0x181EB6CE0](a1, a2, a3: 2, a4: 0, a5: 292992560);
    v22 = a2;
    v21 = a1;
    v29 = a13;
    v30 = a14;
    goto LABEL_5;
  }
  MEMORY[0x181EB6D20]();
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a4 + 20), 3, 1) != 3 )
LABEL_5:
    MEMORY[0x18277F4A0](
      a1: v21,
      a2: v22,
      a3: 1,
      a4: v20,
      a5: 0,
      a6: v23,
      a7: v24,
      a8: v25,
      a9: v26,
      a10: v27,
      a11: v28,
      a12: v29,
      a13: v30);
  MEMORY[0x18207C2A0](a1: a6, a2: a19, a3: a4, a4: v20, a5: a3, a6: a5);
  return MEMORY[0x1828390C0]();
}
