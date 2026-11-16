// sub_1E8AA00
// rva 0x01e8aa00  size 348  section .text  group text
// window base 0x181e8aa00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8AA00(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  double v11; // xmm2_8
  __int64 *v12; // rdx
  double v13; // xmm0_8
  double v14; // xmm1_8
  char v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  _BYTE v18[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-Ch]
  __int64 v21; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v15);
  }
  else
  {
    v17 = v6 + 376654936;
    v21 = a6;
    v20 = a1;
    v16 = a5;
    result = sub_1E8C000(a1, a2: 0, a3: v6 + 376654936);
    if ( (_DWORD)result == 0 )
      goto LABEL_7;
    *(_BYTE *)(v6 + 376654993) = 1;
    v12 = (__int64 *)v18;
    v19 = (__int64 *)v18;
    v13 = *(double *)(v6 + 376178920);
    v14 = 0.0;
    if ( v13 == 0.0 )
    {
      MEMORY[0x11703c40]/* 0x11703c40 */(a1: v9, a2: v10, a3: v18, a4: v18, a5: v13, a6: 0.0, a7: v11);
      v12 = v19;
      v13 = (double)*v19;
      v14 = MEMORY[0x11b128d0]/* 0x11b128d0 */ / v13;
      *(double *)(v6 + 376178920) = MEMORY[0x11b128d0]/* 0x11b128d0 */ / v13;
    }
    MEMORY[0x11703170]/* 0x11703170 */(a1: v9, a2: v10, a3: v12, a4: v12, a5: v13, a6: v14, a7: v11);
  }
  result = sub_1E8C000(a1: 1, a2: 1, a3: v17);
  *(_BYTE *)(v6 + 376654993) = 0;
LABEL_7:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
