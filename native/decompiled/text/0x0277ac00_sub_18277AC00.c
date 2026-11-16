// sub_18277AC00
// rva 0x0277ac00  size 555  section .text  group text
// window base 0x18277ac00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18277AC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __m128 v27; // xmm6
  __m128 v28; // xmm7
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  _DWORD *result; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r9
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  __m128 v42; // xmm3
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  __m128 v45; // xmm6
  __m128 v46; // xmm7
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // r8
  char v54; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v55; // [rsp+14h] [rbp-14h]
  __int64 v56; // [rsp+18h] [rbp-10h]
  _DWORD *v57; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v11 + 8) )
  {
    *(double *)v21.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_25;
  }
  v12 = (unsigned int)v10[94160763];
  v13 = v10 + 94160762;
  if ( (_DWORD)v12 == 0 )
    return (_DWORD *)sub_18277AD6B(a1, a2, a3: 0, a4: (_DWORD)v13, a5, a6, a7, a8, a9, a10);
  v57 = &v10[2 * v12];
  v14 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v11 + 32) )
  {
    v14 = MEMORY[0x181EAA920](a1, a2, a3: 40541680, a4: v13);
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v14 + 40;
    *(_DWORD *)v14 = 40541680;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
  }
  v56 = v14;
  *(_DWORD *)(v14 + 4) = 47083566;
  v15 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v11 + 32) )
  {
    v15 = MEMORY[0x181EAA920](a1, a2, a3: 34161576, a4: v13);
    v14 = v56;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v15 + 24;
    *(_DWORD *)v15 = 34161576;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
  }
  *(_DWORD *)(v15 + 8) = 47045786;
  *(_DWORD *)(v14 + 24) = (unsigned __int64)(v15 - (_QWORD)v10) >> 3;
  if ( (*(_DWORD *)v14 & 2) != 0 )
  {
    v48 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v48) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v48) >> 9) + 0x38) = 0;
  }
  sub_1827829A0(a1, a2, a3: (_DWORD)v10 + 376656272, a4: (_DWORD)v13, a5: v14, a6: 0, a7: v54);
  v29 = v56;
  v30 = *(unsigned int *)(v56 + 24);
  if ( (_DWORD)v30 == 0 )
  {
LABEL_25:
    sub_182771080(
      a1: v17,
      a2: v18,
      a3: v29,
      a4: v16,
      a5: v19,
      a6: v20,
      a7: v21,
      a8: v22,
      a9: v23,
      a10: v24,
      a11: v25,
      a12: v26,
      a13: v27,
      a14: v28,
      a15: v54);
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
    return (_DWORD *)sub_18277AE40(a1: v51, a2: v52, a3: v49, a4: v50, a5: v53);
  }
  v31 = *(_QWORD *)(v11 + 40);
  v32 = v31 + 16;
  if ( (unsigned __int64)(v31 + 16) > *(_QWORD *)(v11 + 32) )
  {
    v55 = *(_DWORD *)(v56 + 24);
    MEMORY[0x181EAA840](a1: v17, a2: v18, a3: 40469904, a4: v32, a5: 0);
    v30 = v55;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v32;
    *(_QWORD *)v31 = 40469904;
    *(_DWORD *)(v31 + 8) = 0;
    *(_DWORD *)(v31 + 12) = 0;
  }
  result = (_DWORD *)MEMORY[0x18578E980](a1: v17, a2: v18, a3: &v10[2 * v30]);
  if ( result != v10 )
  {
    v47 = *result >> 3;
    if ( SHIWORD(v10[2 * v47 + 15]) < 3 || (v34 = (unsigned int)v10[2 * v47 + 4], v10[2 * v34 + 5] != 85404) )
      result = (_DWORD *)sub_18276FC00(
                           a1: v36,
                           a2: v37,
                           a3: result,
                           a4: v35,
                           a5: v10 + 10117476,
                           a6: v38,
                           a7: v39,
                           a8: v40,
                           a9: v41,
                           a10: v42,
                           a11: v43,
                           a12: v44,
                           a13: v45,
                           a14: v46,
                           a15: v54);
  }
  if ( *(int *)(v11 + 16) <= 0 )
    return (_DWORD *)sub_18277F280(a1: v36, a2: v37, a3: v34);
  return result;
}
