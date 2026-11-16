// sub_181E8E3E0
// rva 0x01e8e3e0  size 783  section .text  group text
// window base 0x181e8e3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8E3E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 *v4; // rdx
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  __int64 v8; // rdi
  __int64 v9; // rsi
  double v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // rdx
  double v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+28h] [rbp-30h]
  _BYTE v19[16]; // [rsp+30h] [rbp-28h] BYREF
  void (__fastcall *v20)(__int64, __int64, __int64 *, __int64 *); // [rsp+40h] [rbp-18h]
  void (__fastcall *v21)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+48h] [rbp-10h]
  __int64 *v22; // [rsp+50h] [rbp-8h]

  if ( *(_BYTE *)(v2 + 376654992) != 0 )
    v3 = v2 + 376656368;
  else
    v3 = v2 + 376656416;
  v18 = v3;
  v4 = (__int64 *)v19;
  v22 = (__int64 *)v19;
  v5 = *(double *)(v2 + 376178920);
  v6 = 0.0;
  v7 = MEMORY[0x11B12940];
  v21 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703C40];
  if ( v5 == 0.0 )
  {
    MEMORY[0x11703C40](a1, a2, a3: v19, a4: v19, a5: v5, a6: 0.0, a7: MEMORY[0x11B12940]);
    v4 = v22;
    v5 = (double)*v22;
    v7 = MEMORY[0x11B12940];
    v6 = MEMORY[0x11B12940] / v5;
    *(double *)(v2 + 376178920) = MEMORY[0x11B12940] / v5;
  }
  v20 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x11703170];
  MEMORY[0x11703170](a1, a2: MEMORY[0x11703170], a3: v4, a4: v4, a5: v5, a6: v6, a7: v7);
  v10 = (double)*v22 * *(double *)(v2 + 376178920);
  v11 = (__int64)v10;
  if ( (__int64)v10 == MEMORY[0x11B12948] )
  {
    if ( __builtin_isnan(v10) )
    {
      v11 = 0;
    }
    else if ( v10 > 0.0 )
    {
      v11 = ~v11;
    }
  }
  *(_QWORD *)(v18 + 8) = v11;
  *(_BYTE *)(v18 + 32) = 1;
  *(_QWORD *)(v18 + 16) = 0;
  sub_181E8E700(a1: v8, a2: v9, a3: v2 + 376654936);
  v14 = (__int64 *)v19;
  v22 = (__int64 *)v19;
  if ( *(double *)(v2 + 376178920) == 0.0 )
  {
    v21(a1: v12, a2: v13, a3: v19, a4: v19);
    v14 = v22;
    *(double *)(v2 + 376178920) = MEMORY[0x11B12940] / (double)*v22;
  }
  v20(a1: v12, a2: v13, a3: v14, a4: v14);
  v15 = (double)*v22 * *(double *)(v2 + 376178920);
  v16 = (__int64)v15;
  if ( (__int64)v15 == MEMORY[0x11B12948] )
  {
    if ( __builtin_isnan(v15) )
    {
      v16 = 0;
    }
    else if ( v15 > 0.0 )
    {
      v16 = ~v16;
    }
  }
  *(_QWORD *)(v18 + 16) = v16;
  result = *(_QWORD *)(v18 + 24) + v16 - *(_QWORD *)(v18 + 8);
  *(_QWORD *)(v18 + 24) = result;
  return result;
}
