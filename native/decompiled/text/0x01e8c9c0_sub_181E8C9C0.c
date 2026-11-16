// sub_181E8C9C0
// rva 0x01e8c9c0  size 1382  section .text  group text
// window base 0x181e8c9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8C9C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 *v3; // rdx
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  __int64 v7; // rdi
  __int64 v8; // rsi
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 i; // rdx
  __int64 v17; // r8
  __int64 *v18; // rdx
  __int64 result; // rax
  double v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rax
  double v23; // xmm1_8
  __int64 v24; // rdx
  __int64 j; // rdx
  __int64 v26; // r8
  __int64 *v27; // rdx
  double v28; // xmm0_8
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-30h]
  _BYTE v33[16]; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall *v34)(__int64, __int64, __int64 *, __int64 *); // [rsp+50h] [rbp-18h]
  void (__fastcall *v35)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+58h] [rbp-10h]
  __int64 *v36; // [rsp+60h] [rbp-8h]

  v3 = (__int64 *)v33;
  v36 = (__int64 *)v33;
  v4 = *(double *)(v2 + 376178920);
  v5 = 0.0;
  v6 = MEMORY[0x11B12928];
  v35 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703C40];
  if ( v4 == 0.0 )
  {
    MEMORY[0x11703C40](a1, a2, a3: v33, a4: v33, a5: v4, a6: 0.0, a7: MEMORY[0x11B12928]);
    v3 = v36;
    v4 = (double)*v36;
    v6 = MEMORY[0x11B12928];
    v5 = MEMORY[0x11B12928] / v4;
    *(double *)(v2 + 376178920) = MEMORY[0x11B12928] / v4;
  }
  v34 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x11703170];
  MEMORY[0x11703170](a1, a2, a3: v3, a4: v3, a5: v4, a6: v5, a7: v6);
  v9 = (double)*v36 * *(double *)(v2 + 376178920);
  v10 = (__int64)v9;
  if ( (__int64)v9 == MEMORY[0x11B12930] )
  {
    if ( __builtin_isnan(v9) )
    {
      v10 = 0;
    }
    else if ( v9 > 0.0 )
    {
      v10 = ~v10;
    }
  }
  *(_QWORD *)(v2 + 376655968) = v10;
  *(_BYTE *)(v2 + 376655992) = 1;
  *(_QWORD *)(v2 + 376655976) = 0;
  v11 = sub_181EBC100(a1: v7, a2: v8, a3: v2 + 376614152);
  v32 = v11;
  if ( v11 != v2 )
  {
    v15 = *(unsigned int *)(v11 + 4);
    if ( (*(_DWORD *)(v2 + 8 * v15) & 1) == 0 )
    {
      sub_181E8CF40(a1: v12, a2: v13, a3: v2 + 376654936, a4: v2 + 376654936, a5: v2 + 8 * v15);
      v11 = v32;
    }
    for ( i = v2 + 8LL * *(unsigned int *)(v11 + 8); i != v2; i = v2 + 8LL * *(unsigned int *)(i + 8) )
    {
      v17 = *(unsigned int *)(i + 4);
      if ( (*(_DWORD *)(v2 + 8 * v17) & 1) == 0 )
      {
        v30 = i;
        sub_181E8CF40(a1: v12, a2: v13, a3: v2 + 376654936, a4: v2 + 376654936, a5: v2 + 8 * v17);
        i = v30;
      }
    }
  }
  if ( *(_BYTE *)(v2 + 376654992) != 0 )
  {
    v18 = (__int64 *)v33;
    v36 = (__int64 *)v33;
    if ( *(double *)(v2 + 376178920) == 0.0 )
    {
      v35(a1: v12, a2: v13, a3: v33, a4: v33);
      v18 = v36;
      *(double *)(v2 + 376178920) = MEMORY[0x11B12928] / (double)*v36;
    }
    result = v34(a1: v12, a2: v13, a3: v18, a4: v18);
    v20 = (double)*v36 * *(double *)(v2 + 376178920);
    v21 = (__int64)v20;
    if ( (__int64)v20 == MEMORY[0x11B12930] )
    {
      if ( __builtin_isnan(v20) )
      {
        v21 = 0;
      }
      else if ( v20 > 0.0 )
      {
        v21 = ~v21;
      }
    }
    *(_QWORD *)(v2 + 376655976) = v21;
    *(_QWORD *)(v2 + 376655984) += v21 - *(_QWORD *)(v2 + 376655968);
  }
  else
  {
    v22 = v32;
    v23 = 0.0;
    if ( v32 != v2 )
    {
      v24 = *(unsigned int *)(v32 + 4);
      if ( (*(_DWORD *)(v2 + 8 * v24) & 1) == 0 )
      {
        sub_181E8EB00(a1: v12, a2: v13, a3: v2 + 376654936, a4: v2 + 376654936, a5: v2 + 8 * v24, a6: v14, a7: 0.0);
        v22 = v32;
      }
      for ( j = v2 + 8LL * *(unsigned int *)(v22 + 8); j != v2; j = v2 + 8LL * *(unsigned int *)(j + 8) )
      {
        v26 = *(unsigned int *)(j + 4);
        if ( (*(_DWORD *)(v2 + 8 * v26) & 1) == 0 )
        {
          v31 = j;
          sub_181E8EB00(a1: v12, a2: v13, a3: v2 + 376654936, a4: v2 + 376654936, a5: v2 + 8 * v26, a6: v14, a7: v23);
          j = v31;
        }
      }
    }
    v27 = (__int64 *)v33;
    v36 = (__int64 *)v33;
    if ( *(double *)(v2 + 376178920) == 0.0 )
    {
      v35(a1: v12, a2: v13, a3: v33, a4: v33);
      v27 = v36;
      *(double *)(v2 + 376178920) = MEMORY[0x11B12928] / (double)*v36;
    }
    v34(a1: v12, a2: v13, a3: v27, a4: v27);
    v28 = (double)*v36 * *(double *)(v2 + 376178920);
    v29 = (__int64)v28;
    if ( (__int64)v28 == MEMORY[0x11B12930] )
    {
      if ( __builtin_isnan(v28) )
      {
        v29 = 0;
      }
      else if ( v28 > 0.0 )
      {
        v29 = ~v29;
      }
    }
    *(_QWORD *)(v2 + 376655976) = v29;
    result = *(_QWORD *)(v2 + 376655984) + v29 - *(_QWORD *)(v2 + 376655968);
    *(_QWORD *)(v2 + 376655984) = result;
  }
  return result;
}
