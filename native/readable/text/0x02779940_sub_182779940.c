// sub_2779940
// rva 0x02779940  size 273  section .text  group text
// window base 0x182779940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _DWORD *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 result; // rax
  __int64 v20; // rcx
  char v21; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v15 + 8) )
  {
    v23 = a13;
    v25 = a3;
    *(double *)a4.m128_u64 = sub_1EB84E0();
    goto LABEL_18;
  }
  v16 = *(unsigned int *)(v15 + 72);
  if ( (_DWORD)v16 != 0 )
  {
    v17 = (unsigned int)v14[2 * v16 + 18];
    if ( (_DWORD)v17 != 0 )
      v18 = &v14[2 * v17];
    else
      v18 = &v14[2 * v16];
  }
  else
  {
    v18 = v14;
  }
  if ( v18 != v14 && *v18 >> 3 != 5067607 )
    goto LABEL_19;
  if ( v18 == v14 )
  {
LABEL_18:
    v23 = a13;
    v25 = a3;
    sub_2771080(
      a1,
      a2,
      a3,
      a4: (__int64)v18,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v21);
LABEL_19:
    sub_276FC00(
      a1,
      a2,
      a3: v18,
      a4: (__int64)v18,
      a5: v14 + 10135214,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v21);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2779A60();
  }
  result = (unsigned int)v18[29];
  if ( (_DWORD)result != 0 )
  {
    v23 = a13;
    v25 = a3;
    v22 = &v14[2 * result];
    result = sub_277AE40(a1, a2, a3: v22, a4: v22, a5: 0);
    if ( result != 0 )
    {
      v24 = result;
      result = sub_2773240(a1, a2, a3: v25, a4: v20, a5: result, a6: v23);
    }
  }
  else
  {
    v22 = &v14[2 * result];
    v23 = a13;
    v25 = a3;
  }
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_277F280(a1, a2, a3);
  return result;
}
