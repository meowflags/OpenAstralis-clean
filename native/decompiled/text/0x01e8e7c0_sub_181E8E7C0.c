// sub_181E8E7C0
// rva 0x01e8e7c0  size 815  section .text  group text
// window base 0x181e8e7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8E7C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v16; // r14
  double v17; // xmm0_8
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  double v21; // xmm0_8
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 *v25; // rdx
  double v26; // xmm0_8
  __int64 v27; // rax
  __int64 result; // rax
  _BYTE v29[16]; // [rsp+30h] [rbp-28h] BYREF
  void (__fastcall *v30)(__int64, __int64, __int64 *, __int64 *); // [rsp+40h] [rbp-18h]
  void (__fastcall *v31)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+48h] [rbp-10h]
  __int64 *v32; // [rsp+50h] [rbp-8h]

  v32 = (__int64 *)v29;
  v17 = *(double *)(v16 + 376178920);
  if ( v17 == 0.0 )
    return sub_181E8E90A(a1, a2, a3: (unsigned int)v29, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  v31 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703C40];
  v30 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x11703170];
  MEMORY[0x11703170](a1, a2, a3: v29, a4: v29, a5: v17, a6: 0.0, a7: MEMORY[0x11B12950]);
  v21 = (double)*v32 * *(double *)(v16 + 376178920);
  v22 = (__int64)v21;
  if ( (__int64)v21 == MEMORY[0x11B12958] )
  {
    if ( __builtin_isnan(v21) )
    {
      v22 = 0;
    }
    else if ( v21 > 0.0 )
    {
      v22 = ~v22;
    }
  }
  *(_QWORD *)(v16 + 376656472) = v22;
  *(_BYTE *)(v16 + 376656496) = 1;
  *(_QWORD *)(v16 + 376656480) = 0;
  if ( *(_BYTE *)(v16 + 376654992) != 0 )
    MEMORY[0x181E84FA0](a1: v19, a2: v20, a3: v16 + 376654168, a4: v18, a5: 1);
  else
    sub_181E8C920(a1: v19, a2: v20);
  v25 = (__int64 *)v29;
  v32 = (__int64 *)v29;
  if ( *(double *)(v16 + 376178920) == 0.0 )
  {
    v31(a1: v23, a2: v24, a3: v29, a4: v29);
    v25 = v32;
    *(double *)(v16 + 376178920) = MEMORY[0x11B12950] / (double)*v32;
  }
  v30(a1: v23, a2: v24, a3: v25, a4: v25);
  v26 = (double)*v32 * *(double *)(v16 + 376178920);
  v27 = (__int64)v26;
  if ( (__int64)v26 == MEMORY[0x11B12958] )
  {
    if ( __builtin_isnan(v26) )
    {
      v27 = 0;
    }
    else if ( v26 > 0.0 )
    {
      v27 = ~v27;
    }
  }
  *(_QWORD *)(v16 + 376656480) = v27;
  result = *(_QWORD *)(v16 + 376656488) + v27 - *(_QWORD *)(v16 + 376656472);
  *(_QWORD *)(v16 + 376656488) = result;
  return result;
}
