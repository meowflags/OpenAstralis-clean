// sub_1815C0EE0
// rva 0x015c0ee0  size 1016  section .text  group text
// window base 0x1815c0ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C0EE0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        double a16,
        double a17)
{
  __int64 v15; // r15
  double v16; // xmm5_8
  double v17; // xmm7_8
  double v18; // xmm6_8
  double v19; // xmm9_8
  double v20; // xmm8_8
  double v21; // xmm10_8
  double v22; // xmm11_8
  double v23; // xmm4_8
  __int64 result; // rax
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  double v26; // [rsp+8h] [rbp-50h]
  double v27; // [rsp+10h] [rbp-48h]
  double v28; // [rsp+18h] [rbp-40h]
  double v29; // [rsp+20h] [rbp-38h]
  double v30; // [rsp+28h] [rbp-30h]
  double v31; // [rsp+30h] [rbp-28h]
  double v32; // [rsp+38h] [rbp-20h]
  double v33; // [rsp+40h] [rbp-18h]
  double v34; // [rsp+48h] [rbp-10h]
  double v35; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v15 + 8) )
  {
    MEMORY[0x181EB84E0](a1: a3, a2: a4, a3: a5, a4: a6, a5: a7, a6: a8, a7: a16);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C12E0();
  }
  else
  {
    if ( __builtin_isnan(a3) )
    {
      v16 = a3;
    }
    else if ( a6 < a3 )
    {
      v16 = a6;
    }
    else
    {
      v16 = a3;
    }
    if ( __builtin_isnan(a4) )
    {
      v17 = a4;
      v18 = a16;
    }
    else
    {
      v18 = a16;
      if ( a16 < a4 )
        v17 = a16;
      else
        v17 = a4;
    }
    if ( __builtin_isnan(a5) )
    {
      v19 = a5;
      v20 = a17;
    }
    else
    {
      v20 = a17;
      if ( a17 < a5 )
        v19 = a17;
      else
        v19 = a5;
    }
    if ( __builtin_isnan(a3) )
    {
      v21 = a3;
    }
    else if ( a3 < a6 )
    {
      v21 = a6;
    }
    else
    {
      v21 = a3;
    }
    if ( __builtin_isnan(a4) )
    {
      v22 = a4;
    }
    else if ( a4 < v18 )
    {
      v22 = v18;
    }
    else
    {
      v22 = a4;
    }
    if ( __builtin_isnan(a5) )
    {
      v23 = a5;
    }
    else if ( a5 < v20 )
    {
      v23 = v20;
    }
    else
    {
      v23 = a5;
    }
    result = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(result + 64) > *(_QWORD *)(v15 + 32) )
    {
      v35 = v23;
      v34 = v22;
      v33 = v21;
      v32 = v19;
      v31 = v17;
      v30 = v16;
      v29 = a6;
      v28 = a5;
      v27 = a4;
      v26 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35839968, a4: a3, a5: a4, a6: a5, a7: a6, a8: v23, a9: v16, a10: v18);
      v23 = v35;
      v22 = v34;
      v21 = v33;
      v19 = v32;
      v17 = v31;
      v16 = v30;
      v18 = a16;
      a6 = v29;
      a5 = v28;
      a4 = v27;
      a3 = v26;
    }
    else
    {
      *(_QWORD *)(v15 + 40) = result + 64;
      *(_DWORD *)result = 35839968;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
    }
    *(double *)(result + 48) = v23;
    *(double *)(result + 40) = v22;
    *(double *)(result + 32) = v21;
    *(double *)(result + 24) = v19;
    *(double *)(result + 16) = v17;
    *(double *)(result + 8) = v16;
    if ( *(int *)(v15 + 16) <= 0 )
    {
      v29 = a6;
      v28 = a5;
      v27 = a4;
      v26 = a3;
      return MEMORY[0x18277F280](a1: a3, a2: a4, a3: a5, a4: a6, a5: v23, a6: v16, a7: v18);
    }
  }
  return result;
}
