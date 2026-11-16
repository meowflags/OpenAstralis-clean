// sub_1E91320
// rva 0x01e91320  size 335  section .text  group text
// window base 0x181e91320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E91320(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 *v12; // rbx
  double v13; // xmm0_8
  double v14; // xmm1_8
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // ecx
  double v19; // xmm1_8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  _BYTE v26[16]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v24);
    goto LABEL_16;
  }
  v25 = a3;
  v12 = (__int64 *)v26;
  v27 = (__int64 *)v26;
  v13 = *(double *)(v10 + 376178920);
  v14 = 0.0;
  if ( v13 == 0.0 )
  {
    MEMORY[0x11703c40]/* 0x11703c40 */(a1, a2, a3, a4: v26, a5: v13, a6: 0.0, a7: a9);
    v12 = v27;
    v13 = (double)*v27;
    v14 = MEMORY[0x11b12968]/* 0x11b12968 */ / v13;
    *(double *)(v10 + 376178920) = MEMORY[0x11b12968]/* 0x11b12968 */ / v13;
  }
  MEMORY[0x11703170]/* 0x11703170 */(a1, a2, a3, a4: v12, a5: v13, a6: v14, a7: a9);
  v17 = v25;
  v18 = *(_DWORD *)(v25 + 24);
  v9 = *(unsigned int *)(v25 + 4);
  v19 = (double)*v27 * *(double *)(v10 + 376178920);
  v20 = (__int64)v19;
  if ( (__int64)v19 == MEMORY[0x11b12960]/* 0x11b12960 */ )
    goto LABEL_20;
  while ( v18 >= 32 )
  {
    if ( (_DWORD)v9 == 0 )
      goto LABEL_17;
    v21 = *(unsigned int *)(v17 + 12);
    if ( (unsigned int)v21 < *(_DWORD *)(v10 + 8 * v9 + 8) )
    {
      v22 = *(_QWORD *)(v10 + 8 * v9 + 8 * v21 + 16);
      goto LABEL_9;
    }
LABEL_19:
    v20 = sub_276F0E0();
LABEL_20:
    if ( __builtin_isnan(v19) )
    {
      v20 = 0;
    }
    else if ( v19 > 0.0 )
    {
      v20 = ~v20;
    }
  }
  if ( (_DWORD)v9 == 0 )
  {
LABEL_16:
    sub_276EFE0();
LABEL_17:
    sub_276EFE0();
LABEL_18:
    sub_276F0E0();
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v10 + 8 * v9 + 8) == 0 )
    goto LABEL_18;
  v22 = *(_QWORD *)(v10 + 8 * v9 + 16);
LABEL_9:
  if ( *(int *)(v11 + 16) <= 0 )
    v20 = sub_277F280(a1: v15, a2: v16, a3: v17, a4: v22);
  return v20 - v22;
}
