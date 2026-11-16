// sub_278B240
// rva 0x0278b240  size 467  section .text  group text
// window base 0x18278b240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278B240(
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
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r9
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r9
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __m128 v46; // xmm2
  __m128 v47; // xmm3
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __m128 v50; // xmm6
  __m128 v51; // xmm7
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 result; // rax
  char v57; // [rsp+0h] [rbp-38h] BYREF
  __int64 v58; // [rsp+8h] [rbp-30h]
  __int64 v59; // [rsp+10h] [rbp-28h]
  __int64 v60; // [rsp+18h] [rbp-20h]
  __int64 v61; // [rsp+20h] [rbp-18h]
  unsigned int v62; // [rsp+28h] [rbp-10h]
  unsigned int v63; // [rsp+2Ch] [rbp-Ch]
  unsigned int v64; // [rsp+30h] [rbp-8h]
  int v65; // [rsp+34h] [rbp-4h]

  v61 = a3;
  v60 = a5;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a5 != v14 )
  {
    v65 = sub_27B6940(a1, a2, a3: a5);
    if ( v65 < 1 )
    {
      v38 = 0;
      result = 0;
      goto LABEL_17;
    }
    v19 = sub_278EF20(a1: v17, a2: v18, a3: v60);
    v32 = v61;
    v33 = *(unsigned int *)(v61 + 40);
    if ( (_DWORD)v33 == 0 )
      goto LABEL_23;
    v34 = *(unsigned int *)(v14 + 8 * v33 + 24);
    if ( (_DWORD)v34 == 0 )
    {
LABEL_24:
      v39 = sub_2771080(
              a1: v21,
              a2: v22,
              a3: v32,
              a4: v20,
              a5: v34,
              a6: v23,
              a7: v24,
              a8: v25,
              a9: v26,
              a10: v27,
              a11: v28,
              a12: v29,
              a13: v30,
              a14: v31,
              a15: v57);
      goto LABEL_25;
    }
    v59 = v14 + 365146176;
    v64 = v19;
    v35 = sub_27BC2C0(a1: v21, a2: v22, a3: v14 + 8 * v34, a4: v14 + 365146176, a5: v19, a6: v14 + 365146176);
    v58 = v14 + 376669784;
    if ( v14 + 376669784 != v35 )
      JUMPOUT(0x304ED42E7LL);
    v16 = 0;
    if ( v35 != v14 )
      JUMPOUT(0x304ED42F2LL);
    v64 = 0;
    v36 = v65;
    v37 = v60;
    v38 = 1;
    while ( v36 > (int)v38 )
    {
      v63 = v38;
      v39 = sub_278EF20(a1: v17, a2: v18, a3: v37);
      v52 = v61;
      v53 = *(unsigned int *)(v61 + 40);
      if ( (_DWORD)v53 == 0 )
      {
LABEL_25:
        v62 = v39;
        v39 = sub_2771080(
                a1: v41,
                a2: v42,
                a3: v52,
                a4: v40,
                a5: v53,
                a6: v43,
                a7: v44,
                a8: v45,
                a9: v46,
                a10: v47,
                a11: v48,
                a12: v49,
                a13: v50,
                a14: v51,
                a15: v57);
        goto LABEL_26;
      }
      v54 = *(unsigned int *)(v14 + 8 * v53 + 24);
      if ( (_DWORD)v54 != 0 )
      {
        v62 = v39;
        v55 = sub_27BC2C0(a1: v41, a2: v42, a3: v14 + 8 * v54, a4: v40, a5: v39, a6: v59);
        v38 = v63 + 1;
        if ( v55 == v14 )
        {
          v36 = v65;
          v37 = v60;
        }
        else
        {
          v16 = v58;
          if ( v58 != v55 )
            goto LABEL_27;
          v64 |= 0x20000u;
          v36 = v65;
          v37 = v60;
        }
      }
      else
      {
LABEL_26:
        sub_2771080(
          a1: v41,
          a2: v42,
          a3: v63,
          a4: v39,
          a5: v54,
          a6: v43,
          a7: v44,
          a8: v45,
          a9: v46,
          a10: v47,
          a11: v48,
          a12: v49,
          a13: v50,
          a14: v51,
          a15: v57);
LABEL_27:
        v36 = v65;
        v37 = v60;
      }
    }
    result = v64;
LABEL_17:
    if ( *(int *)(v15 + 16) <= 0 )
      return sub_277F280(a1: v17, a2: v18, a3: v16, a4: v38);
    return result;
  }
  v19 = sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v57);
LABEL_23:
  v64 = v19;
  sub_2771080(
    a1: v21,
    a2: v22,
    a3: v32,
    a4: v20,
    a5: v33,
    a6: v23,
    a7: v24,
    a8: v25,
    a9: v26,
    a10: v27,
    a11: v28,
    a12: v29,
    a13: v30,
    a14: v31,
    a15: v57);
  goto LABEL_24;
}
