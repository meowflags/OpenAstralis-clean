// sub_2784A60
// rva 0x02784a60  size 210  section .text  group text
// window base 0x182784a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2784A60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 *v4; // rbx
  double v5; // xmm0_8
  double v6; // xmm0_8
  __int64 v7; // rax
  __int64 result; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-8h]

  v4 = (__int64 *)v10;
  v11 = (__int64 *)v10;
  v5 = *(double *)(v3 + 376178920);
  if ( v5 == 0.0 )
  {
    MEMORY[0x10e44c40]/* 0x10e44c40 */(a1, a2, a3, a4: v10, a5: v5);
    v4 = v11;
    *(double *)(v3 + 376178920) = MEMORY[0x11253a50]/* 0x11253a50 */ / (double)*v11;
  }
  MEMORY[0x10e44170]/* 0x10e44170 */(a1, a2, a3, a4: v4);
  v6 = (double)*v11 * *(double *)(v3 + 376178920);
  v7 = (__int64)v6;
  if ( (__int64)v6 == MEMORY[0x11253a48]/* 0x11253a48 */ )
  {
    if ( __builtin_isnan(v6) )
    {
      v7 = 0;
    }
    else if ( v6 > 0.0 )
    {
      v7 = ~v7;
    }
  }
  a3[2] = v7;
  result = a3[3] + v7 - a3[1];
  a3[3] = result;
  return result;
}
