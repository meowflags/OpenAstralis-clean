// sub_27794E0
// rva 0x027794e0  size 622  section .text  group text
// window base 0x1827794e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27794E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r13
  _DWORD *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  int v20; // eax
  __int64 v21; // rdx
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __m128 v28; // xmm6
  __m128 v29; // xmm7
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __m128 v41; // xmm6
  __m128 v42; // xmm7
  __int64 result; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  int v47; // [rsp+0h] [rbp-38h] BYREF
  __int64 v48; // [rsp+10h] [rbp-28h]
  _DWORD *v49; // [rsp+18h] [rbp-20h]
  _DWORD *v50; // [rsp+20h] [rbp-18h]
  __int64 v51; // [rsp+28h] [rbp-10h]
  int v52; // [rsp+30h] [rbp-8h]
  unsigned int v53; // [rsp+34h] [rbp-4h]

  v51 = a3;
  v50 = a6;
  if ( (unsigned __int64)&v47 <= *(_QWORD *)(v16 + 8) )
  {
    v53 = a5;
    *(double *)a7.m128_u64 = sub_1EB84E0();
LABEL_31:
    sub_2771080(a1, a2, a3, a4, a5, (__int64)a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v47);
    goto LABEL_32;
  }
  if ( (_DWORD)a5 == 0 )
  {
    v53 = 0;
    if ( (_DWORD *)a3 != v15 )
    {
      *(_DWORD *)(a3 + 8) = 47045299;
      __faststorefence();
      result = *(unsigned int *)a3;
      if ( (result & 2) != 0 )
      {
        v44 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        result = (a3 - v44) >> 9;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v44) >> 9) + 0x38) = 0;
      }
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( a6 == v15 )
  {
LABEL_32:
    v53 = a5;
    sub_2771080(a1, a2, a3, a4, a5, (__int64)a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v47);
    goto LABEL_33;
  }
  v17 = (unsigned int)a6[5];
  v18 = (__int64)&v15[2 * v17];
  if ( (_DWORD)v17 != 0 )
  {
    v53 = a5;
    v19 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v14 + *(_QWORD *)&v15[2 * (v15[2 * v17] >> 3) + 28]);
    v49 = (_DWORD *)v18;
    v20 = v19(a1, a2, a3: v18);
    if ( v20 < 1 )
    {
      a6 = v50;
    }
    else
    {
      v21 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v16 + 32) )
      {
        v52 = v20;
        v21 = sub_1EAA920(a1, a2, a3: 40541312);
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v21 + 24;
        *(_DWORD *)v21 = 40541312;
        *(_DWORD *)(v21 + 4) = 0;
        *(_QWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = 0;
      }
      v48 = v21;
      sub_5036F80(a1, a2, a3: v21, a4: v21, a5: v49);
      v30 = v51;
      if ( (_DWORD *)v51 == v15 )
        goto LABEL_34;
      *(_DWORD *)(v51 + 20) = (unsigned __int64)(v48 - (_QWORD)v15) >> 3;
      if ( (*(_DWORD *)v30 & 2) != 0 )
      {
        v46 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v46) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v46) >> 9) + 0x38) = 0;
        a6 = v50;
      }
      else
      {
        a6 = v50;
      }
    }
  }
  else
  {
    v49 = &v15[2 * v17];
    v53 = a5;
  }
  v31 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v14 + *(_QWORD *)&v15[2 * (*a6 >> 3) + 44]))(
          a1,
          a2,
          a3: a6);
  a3 = v51;
  if ( (_DWORD *)v51 == v15 )
  {
LABEL_33:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v32,
      a5: v33,
      a6: v34,
      a7: v35,
      a8: v36,
      a9: v37,
      a10: v38,
      a11: v39,
      a12: v40,
      a13: v41,
      a14: v42,
      a15: v47);
LABEL_34:
    sub_2771080(
      a1,
      a2,
      a3: v30,
      a4: (__int64)v49,
      a5: v53,
      a6: (__int64)v50,
      a7: v22,
      a8: v23,
      a9: v24,
      a10: v25,
      a11: v26,
      a12: v27,
      a13: v28,
      a14: v29,
      a15: v47);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2779760();
  }
  *(_DWORD *)(v51 + 8) = (unsigned __int64)(v31 - (_QWORD)v15) >> 3;
  __faststorefence();
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v45 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v45) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v45) >> 9) + 0x38) = 0;
  }
LABEL_13:
  if ( *(int *)(v16 + 16) <= 0 )
    return sub_277F280(a1, a2, a3);
  return result;
}
