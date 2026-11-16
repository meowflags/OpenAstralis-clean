// sub_1594F20
// rva 0x01594f20  size 271  section .text  group text
// window base 0x181594f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1594F20(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  double v8; // xmm0_8
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v3 + 8) )
  {
    v8 = sub_1EB84E0();
LABEL_8:
    if ( __builtin_isnan(v8) )
    {
      v9 = 0;
    }
    else if ( v8 > 0.0 )
    {
      v9 = ~v9;
    }
    goto LABEL_5;
  }
  v4 = (__int64 *)v12;
  v13 = (__int64 *)v12;
  if ( *(double *)(v2 + 376178920) == 0.0 )
  {
    MEMORY[0x12001c40]/* 0x12001c40 */(a1, a2, a3: v12, a4: v12);
    v4 = v13;
    *(double *)(v2 + 376178920) = MEMORY[0x1240e630]/* 0x1240e630 */ / (double)*v13;
  }
  MEMORY[0x12001170]/* 0x12001170 */(a1, a2, a3: v4, a4: v4);
  v8 = (double)*v13 * *(double *)(v2 + 376178920);
  v9 = (__int64)v8;
  if ( (__int64)v8 == MEMORY[0x1240e628]/* 0x1240e628 */ )
    goto LABEL_8;
LABEL_5:
  *(_QWORD *)(v2 + 376181320) = v9;
  result = sub_1EDF700(a1: v6, a2: v7, a3: 0, a4: v5, a5: 0);
  *(_QWORD *)(v2 + 376181328) = result;
  *(_BYTE *)(v2 + 376242781) = 1;
  if ( *(int *)(v3 + 16) <= 0 )
    return sub_277F280();
  return result;
}
