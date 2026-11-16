// sub_1E8A4E0
// rva 0x01e8a4e0  size 998  section .text  group text
// window base 0x181e8a4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8A4E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 *v15; // rdx
  double v16; // xmm0_8
  double v17; // xmm1_8
  double v18; // xmm2_8
  __int64 v19; // rdi
  __int64 v20; // rsi
  double v21; // xmm0_8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *i; // rdx
  __int64 *v25; // rdx
  double v26; // xmm0_8
  __int64 v27; // rax
  __int64 result; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  _BYTE v35[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-28h]
  __int64 v37; // [rsp+58h] [rbp-20h]
  void (__fastcall *v38)(__int64, __int64, __int64 *, __int64 *); // [rsp+60h] [rbp-18h]
  void (__fastcall *v39)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+68h] [rbp-10h]
  __int64 *v40; // [rsp+70h] [rbp-8h]

  v15 = (__int64 *)v35;
  v40 = (__int64 *)v35;
  v16 = *(double *)(v13 + 376178920);
  v17 = 0.0;
  v18 = MEMORY[0x11b128b8]/* 0x11b128b8 */;
  v39 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703c40]/* 0x11703c40 */;
  if ( v16 == 0.0 )
  {
    MEMORY[0x11703c40]/* 0x11703c40 */(a1, a2, a3: v35, a4: v35, a5: v16, a6: 0.0, a7: MEMORY[0x11b128b8]/* 0x11b128b8 */);
    v15 = v40;
    v16 = (double)*v40;
    v18 = MEMORY[0x11b128b8]/* 0x11b128b8 */;
    v17 = MEMORY[0x11b128b8]/* 0x11b128b8 */ / v16;
    *(double *)(v13 + 376178920) = MEMORY[0x11b128b8]/* 0x11b128b8 */ / v16;
  }
  v38 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x11703170]/* 0x11703170 */;
  MEMORY[0x11703170]/* 0x11703170 */(a1, a2, a3: v15, a4: v15, a5: v16, a6: v17, a7: v18);
  v21 = (double)*v40 * *(double *)(v13 + 376178920);
  v22 = (__int64)v21;
  if ( (__int64)v21 == MEMORY[0x11b128c0]/* 0x11b128c0 */ )
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
  *(_QWORD *)(v13 + 376655584) = v22;
  *(_BYTE *)(v13 + 376655608) = 1;
  *(_QWORD *)(v13 + 376655592) = 0;
  if ( *(int *)(v14 + 336) < 1 )
  {
    sub_28C1C40(a1: v19, a2: v20, a3: v13 + 368616744);
    return sub_181E8A835(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7, a8, a9, a10, a11, a12, a13);
  }
  else
  {
    v23 = *(_QWORD *)(v13 + 376178832);
    if ( v23 != 0 )
    {
      v40 = (__int64 *)(v13 + 376654680);
      v37 = v13 + 376654696;
      v36 = v23;
      sub_1EBC500(
        a1: v13,
        a2: v13 + 376654696,
        a3: v23,
        a4: v13 + 376654680,
        a5: v13 + 376654696,
        a6: v13 + 376654896);
      for ( i = *(__int64 **)(v36 + 256); i != nullptr; i = (__int64 *)v40[32] )
      {
        v36 = v13 + 376654680;
        v37 = v13 + 376654696;
        v40 = i;
        sub_1EBC500(a1: v13, a2: i, a3: i, a4: v13 + 376654680, a5: v13 + 376654696, a6: v13 + 376654896);
      }
    }
    v25 = (__int64 *)v35;
    v40 = (__int64 *)v35;
    if ( *(double *)(v13 + 376178920) == 0.0 )
    {
      v39(a1: v19, a2: v20, a3: v35, a4: v35);
      v25 = v40;
      *(double *)(v13 + 376178920) = MEMORY[0x11b128b8]/* 0x11b128b8 */ / (double)*v40;
    }
    v38(a1: v19, a2: v20, a3: v25, a4: v25);
    v26 = (double)*v40 * *(double *)(v13 + 376178920);
    v27 = (__int64)v26;
    if ( (__int64)v26 == MEMORY[0x11b128c0]/* 0x11b128c0 */ )
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
    *(_QWORD *)(v13 + 376655592) = v27;
    result = *(_QWORD *)(v13 + 376655600) + v27 - *(_QWORD *)(v13 + 376655584);
    *(_QWORD *)(v13 + 376655600) = result;
  }
  return result;
}
