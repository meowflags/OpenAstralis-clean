// sub_2776580
// rva 0x02776580  size 363  section .text  group text
// window base 0x182776580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2776580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20)
{
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __m128 v36; // xmm6
  __m128 v37; // xmm7
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 result; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  char v44; // [rsp+0h] [rbp-38h] BYREF
  __int64 v45; // [rsp+8h] [rbp-30h]
  __int64 v46; // [rsp+10h] [rbp-28h]
  __int64 v47; // [rsp+18h] [rbp-20h]
  __int64 v48; // [rsp+20h] [rbp-18h]
  unsigned int v49; // [rsp+2Ch] [rbp-Ch]
  unsigned int v50; // [rsp+30h] [rbp-8h]
  unsigned int v51; // [rsp+34h] [rbp-4h]

  v51 = a2;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v21 + 8) )
  {
    v50 = a4;
    v47 = a1;
    v46 = a6;
    v45 = a5;
    v49 = a3;
    *(double *)a7.m128_u64 = sub_1EB84E0();
LABEL_16:
    v50 = a4;
    v46 = a6;
    v45 = a5;
    v49 = a3;
    sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v44);
LABEL_17:
    sub_2771080(
      a1: v26,
      a2: v27,
      a3: v25,
      a4: v38,
      a5: v28,
      a6: v29,
      a7: v30,
      a8: v31,
      a9: v32,
      a10: v33,
      a11: v34,
      a12: v35,
      a13: v36,
      a14: v37,
      a15: v44);
    goto LABEL_18;
  }
  if ( (int)a16 < 0 )
    return sub_182776644(a1, a2, a3, a4, a5, a6, a7: a15, a8: a16, a9: a17, a10: a18, a11: a19, a12: a20);
  if ( a1 == v20 )
    goto LABEL_16;
  v22 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v22 == 0 )
  {
LABEL_18:
    sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v44);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_2776700)();
  }
  v50 = a4;
  v23 = (unsigned int)*(char *)(a1 + 12);
  if ( *(_DWORD *)(v20 + 8 * v22 + 8) >> *(_BYTE *)(a1 + 12) > (int)a16 )
  {
    v46 = a6;
    v45 = a5;
    v49 = a3;
    v47 = a1;
    v48 = sub_4FFD140(a1, a2, a3: a1, a4: v23, a5: 0, a6: (unsigned int)a16);
    a2 = v51;
  }
  else
  {
    v48 = a1;
    v47 = a1;
    v46 = a6;
    v45 = a5;
    v49 = a3;
  }
  if ( (_DWORD)a2 != 0 )
  {
    v24 = sub_2778160(a1, a2, a3: v49, a4: v23, a5: v45);
    v38 = v48;
    if ( v48 != v20 )
    {
      v39 = sub_4FFE180(a1: v26, a2: v27, a3: v48, a4: v48, a5: v24);
      goto LABEL_10;
    }
    goto LABEL_17;
  }
  v39 = v48;
LABEL_10:
  v48 = v39;
  result = sub_2776700(a1: 32, a2: 0xFFFFFFFFLL, a3: v46, a4: v39, a5: v39, a6: v50);
  if ( *(int *)(v21 + 16) <= 0 )
    return sub_277F280(a1: v42, a2: v43, a3: v41);
  return result;
}
