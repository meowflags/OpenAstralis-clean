// sub_181E9E8C0
// rva 0x01e9e8c0  size 248  section .text  group text
// window base 0x181e9e8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9E8C0(int a1, int a2, double *a3, int a4, int a5, int a6, double a7, double a8)
{
  __int64 v8; // r15
  double v9; // xmm3_8
  double v10; // xmm2_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm6_8
  double v14; // xmm8_8
  double v15; // xmm3_8
  double v16; // xmm8_8
  double v17; // xmm6_8
  __int64 result; // rax
  double v19; // xmm0_8
  char v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = sub_181EB83C0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v20);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E9E9C0(a1: v19);
  }
  else
  {
    v9 = a3[1];
    v10 = a3[2] * v9 + a8;
    a3[2] = v10;
    v11 = MEMORY[0x11B129C0];
    v12 = MEMORY[0x11B129C0] / a7 + v9 * a3[3];
    a3[3] = v12;
    v13 = a8 / a7 + v9 * a3[4];
    a3[4] = v13;
    v14 = v11 / (a7 * a7) + v9 * a3[5];
    a3[5] = v14;
    v15 = v9 * a3[6] + v11;
    a3[6] = v15;
    v16 = v14 * v15 - v12 * v12;
    if ( v16 != 0.0 )
    {
      v17 = (v13 * v15 - v10 * v12) / v16;
      a3[8] = v17;
      a3[7] = (v10 - v17 * v12) / v15;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
