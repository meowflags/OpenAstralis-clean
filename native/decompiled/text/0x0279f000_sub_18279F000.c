// sub_18279F000
// rva 0x0279f000  size 218  section .text  group text
// window base 0x18279f000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18279F000(
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
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r9
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __m128 v26; // xmm6
  __m128 v27; // xmm7
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v36; // [rsp+0h] [rbp-28h] BYREF
  __int64 v37; // [rsp+10h] [rbp-18h]
  __int64 v38; // [rsp+18h] [rbp-10h]
  int v39; // [rsp+20h] [rbp-8h]
  unsigned int v40; // [rsp+24h] [rbp-4h]

  v38 = a3;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v15 + 8) )
  {
    v37 = a5;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v16 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_11:
    v37 = a5;
    sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v36);
    goto LABEL_12;
  }
  v37 = a5;
  v40 = MEMORY[0x1827B6940](a1, a2, a3: v14 + 8 * v16);
  v28 = v38;
  v29 = *(unsigned int *)(v38 + 12);
  if ( (_DWORD)v29 == 0 )
  {
LABEL_12:
    sub_182771080(
      a1: v17,
      a2: v18,
      a3: v28,
      a4: v29,
      a5: v37,
      a6: v19,
      a7: v20,
      a8: v21,
      a9: v22,
      a10: v23,
      a11: v24,
      a12: v25,
      a13: v26,
      a14: v27,
      a15: v36);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18279F0E0();
  }
  v30 = MEMORY[0x1827B6940](a1: v17, a2: v18, a3: v14 + 8 * v29);
  v33 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v33 + 16) > *(_QWORD *)(v15 + 32) )
  {
    v39 = v30;
    v33 = MEMORY[0x181EAA920](a1: v31, a2: v32, a3: 40546168);
    LOWORD(v30) = v39;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v33 + 16;
    *(_DWORD *)v33 = 40546168;
    *(_DWORD *)(v33 + 4) = 0;
    *(_QWORD *)(v33 + 8) = 0;
  }
  v34 = v40;
  *(_WORD *)(v33 + 6) = v30;
  *(_WORD *)(v33 + 4) = v34;
  if ( *(int *)(v15 + 16) <= 0 )
    sub_18277F280(a1: v31, a2: v32, a3: v33, a4: v34);
  return v33;
}
