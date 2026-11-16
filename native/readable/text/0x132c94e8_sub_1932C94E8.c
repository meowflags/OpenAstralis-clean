// sub_132C94E8
// rva 0x132c94e8  size 40  section .text  group text
// window base 0x1932c94e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132C94E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi

  if ( (unsigned __int8)Java_sun_nio_ch_Net_shouldShutdownWriteBeforeClose0(a1, a2, a3, a4) == 0 )
    return 0;
  if ( (unsigned __int8)Java_sun_nio_ch_Net_shouldShutdownWriteBeforeClose0(a1: v6, a2: v7, a3: v4, a4: v5) == 0 )
  {
    Java_sun_nio_ch_Net_shouldShutdownWriteBeforeClose0(a1: v11, a2: v12, a3: v9, a4: v10);
    return 0;
  }
  return 1;
}
