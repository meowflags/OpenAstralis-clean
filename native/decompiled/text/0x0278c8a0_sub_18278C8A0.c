// sub_18278C8A0
// rva 0x0278c8a0  size 1083  section .text  group text
// window base 0x18278c8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278C8A0(
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
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r9
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm6
  __m128 v30; // xmm7
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r9
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __m128 v48; // xmm6
  __m128 v49; // xmm7
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rdx
  char v56; // [rsp+0h] [rbp-38h] BYREF
  __int64 v57; // [rsp+10h] [rbp-28h]
  __int64 v58; // [rsp+18h] [rbp-20h]
  __int64 v59; // [rsp+20h] [rbp-18h]
  unsigned int v60; // [rsp+28h] [rbp-10h]
  unsigned int v61; // [rsp+2Ch] [rbp-Ch]
  unsigned int v62; // [rsp+30h] [rbp-8h]
  int v63; // [rsp+34h] [rbp-4h]

  v59 = a3;
  v58 = a5;
  if ( (unsigned __int64)&v56 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v14 )
  {
    v63 = MEMORY[0x1827B6940](a1, a2, a3: a5);
    if ( v63 < 1 )
    {
      v36 = 0;
      v54 = 0;
      goto LABEL_61;
    }
    v18 = sub_18278EF20(a1: v16, a2: v17, a3: v58);
    v31 = v59;
    v32 = *(unsigned int *)(v59 + 40);
    if ( (_DWORD)v32 == 0 )
      goto LABEL_75;
    v33 = *(unsigned int *)(v14 + 8 * v32 + 24);
    if ( (_DWORD)v33 == 0 )
    {
LABEL_76:
      v37 = sub_182771080(
              a1: v20,
              a2: v21,
              a3: v31,
              a4: v19,
              a5: v33,
              a6: v22,
              a7: v23,
              a8: v24,
              a9: v25,
              a10: v26,
              a11: v27,
              a12: v28,
              a13: v29,
              a14: v30,
              a15: v56);
      goto LABEL_77;
    }
    v57 = v14 + 365146176;
    v62 = v18;
    v34 = MEMORY[0x1827BC2C0](a1: v20, a2: v21, a3: v14 + 8 * v33, a4: v14 + 365146176, a5: v18, a6: v14 + 365146176);
    if ( v34 != v14 && v14 + 376670024 == v34 )
    {
      v35 = 0x40000;
    }
    else if ( v34 != v14 && v14 + 376670048 == v34 )
    {
      v35 = 0x100000;
    }
    else if ( v34 != v14 && v14 + 376670072 == v34 )
    {
      v35 = 0x100000;
    }
    else if ( v34 != v14 && v14 + 376670096 == v34 )
    {
      v35 = 0x80000;
    }
    else if ( v34 != v14 && v14 + 376670120 == v34 )
    {
      v35 = 0x80000;
    }
    else if ( v34 != v14 && v14 + 376670144 == v34 )
    {
      v35 = 0x20000;
    }
    else if ( v34 != v14 && v14 + 376670168 == v34 )
    {
      v35 = 0x20000;
    }
    else if ( v34 != v14 && v14 + 376670192 == v34 )
    {
      v35 = 0x400000;
    }
    else
    {
      if ( v14 + 376670216 != v34 )
        JUMPOUT(0x304ED59F6LL);
      if ( v34 != v14 )
        JUMPOUT(0x304ED5A01LL);
      v35 = 0;
    }
    v62 = v35;
    v36 = 1;
    while ( v63 > (int)v36 )
    {
      v61 = v36;
      v37 = sub_18278EF20(a1: v16, a2: v17, a3: v58);
      v50 = *(unsigned int *)(v59 + 40);
      if ( (_DWORD)v50 == 0 )
      {
LABEL_77:
        v60 = v37;
        sub_182771080(
          a1: v39,
          a2: v40,
          a3: v62,
          a4: v38,
          a5: v50,
          a6: v41,
          a7: v42,
          a8: v43,
          a9: v44,
          a10: v45,
          a11: v46,
          a12: v47,
          a13: v48,
          a14: v49,
          a15: v56);
        goto LABEL_78;
      }
      v51 = *(unsigned int *)(v14 + 8 * v50 + 24);
      if ( (_DWORD)v51 != 0 )
      {
        v60 = v37;
        v52 = MEMORY[0x1827BC2C0](a1: v39, a2: v40, a3: v14 + 8 * v51, a4: v38, a5: v37, a6: v57);
        v36 = v61 + 1;
        if ( v52 != v14 && v14 + 376670024 == v52 )
        {
          v62 |= 0x40000u;
        }
        else
        {
          v53 = v62;
          if ( v52 != v14 && v14 + 376670048 == v52 )
          {
            v62 |= 0x100000u;
          }
          else if ( v52 != v14 && v14 + 376670072 == v52 )
          {
            v62 |= 0x100000u;
          }
          else if ( v52 != v14 && v14 + 376670096 == v52 )
          {
            v62 |= 0x80000u;
          }
          else if ( v52 != v14 && v14 + 376670120 == v52 )
          {
            v62 |= 0x80000u;
          }
          else if ( v52 != v14 && v14 + 376670144 == v52 )
          {
            v62 |= 0x20000u;
          }
          else if ( v52 != v14 && v14 + 376670168 == v52 )
          {
            v62 |= 0x20000u;
          }
          else if ( v52 != v14 && v14 + 376670192 == v52 )
          {
            v62 |= 0x400000u;
          }
          else if ( v52 != v14 && v14 + 376670240 == v52 )
          {
            v62 |= 0x400000u;
          }
          else if ( v52 != v14 )
          {
            if ( v14 + 376670216 != v52 )
              goto LABEL_79;
            v62 |= 0x200000u;
          }
        }
      }
      else
      {
LABEL_78:
        sub_182771080(
          a1: v39,
          a2: v40,
          a3: v62,
          a4: v61,
          a5: v51,
          a6: v41,
          a7: v42,
          a8: v43,
          a9: v44,
          a10: v45,
          a11: v46,
          a12: v47,
          a13: v48,
          a14: v49,
          a15: v56);
LABEL_79:
        v62 = v53;
      }
    }
    v54 = v62;
LABEL_61:
    if ( *(int *)(v15 + 16) <= 0 )
      sub_18277F280(a1: v16, a2: v17, a3: v54, a4: v36);
    return (unsigned int)v54;
  }
  v18 = sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v56);
LABEL_75:
  v62 = v18;
  sub_182771080(
    a1: v20,
    a2: v21,
    a3: v31,
    a4: v19,
    a5: v32,
    a6: v22,
    a7: v23,
    a8: v24,
    a9: v25,
    a10: v26,
    a11: v27,
    a12: v28,
    a13: v29,
    a14: v30,
    a15: v56);
  goto LABEL_76;
}
