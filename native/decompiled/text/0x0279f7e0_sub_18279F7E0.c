// sub_18279F7E0
// rva 0x0279f7e0  size 1387  section .text  group text
// window base 0x18279f7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18279F7E0(
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
        char a15)
{
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __m128 v32; // xmm6
  __m128 v33; // xmm7
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  unsigned __int64 i; // rcx
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  __m128i v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __m128 v48; // xmm6
  __m128 v49; // xmm7
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rsi
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rdx
  __int64 v68; // rdx
  char v69; // [rsp+0h] [rbp-68h] BYREF
  __int64 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+10h] [rbp-58h]
  __int64 v72; // [rsp+18h] [rbp-50h]
  __int64 v73; // [rsp+20h] [rbp-48h]
  unsigned int v74; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v75; // [rsp+30h] [rbp-38h]
  unsigned int v76; // [rsp+34h] [rbp-34h]
  unsigned int v77; // [rsp+38h] [rbp-30h]
  unsigned int v78; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v79; // [rsp+40h] [rbp-28h]
  unsigned int v80; // [rsp+44h] [rbp-24h]
  __int64 v81; // [rsp+48h] [rbp-20h]
  unsigned int v82; // [rsp+54h] [rbp-14h]
  int v83; // [rsp+58h] [rbp-10h]
  unsigned int v84; // [rsp+5Ch] [rbp-Ch]
  __int64 v85; // [rsp+60h] [rbp-8h]

  v73 = a3;
  if ( (unsigned __int64)&v69 <= *(_QWORD *)(v18 + 8) )
  {
    v72 = a5;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_40;
  }
  v19 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v19 == 0 )
  {
LABEL_40:
    v72 = a5;
    sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v69);
    goto LABEL_41;
  }
  v72 = a5;
  v20 = MEMORY[0x1827B6940](a1, a2, a3: v17 + 8 * v19);
  v84 = v20;
  if ( v20 < 0 )
  {
LABEL_41:
    sub_182770E80(
      a1: v22,
      a2: v23,
      a3: v84,
      a4: v21,
      a5: v24,
      a6: v25,
      a7: v26,
      a8: v27,
      a9: v28,
      a10: v29,
      a11: v30,
      a12: v31,
      a13: v32,
      a14: v33,
      a15: v69);
LABEL_42:
    sub_182771080(
      a1: v22,
      a2: v23,
      a3: v34,
      a4: v38,
      a5: v24,
      a6: v25,
      a7: v26,
      a8: v27,
      a9: v28,
      a10: v29,
      a11: v30,
      a12: v31,
      a13: v32,
      a14: v33,
      a15: v69);
    goto LABEL_43;
  }
  v34 = *(_QWORD *)(v18 + 40);
  v35 = *(_QWORD *)(v18 + 32);
  v36 = (2LL * (unsigned int)v20 + 19) & 0x3FFFFFFF8LL;
  if ( v36 >= 0x20000 || (v23 = v34 + v36, v34 + v36 > v35) )
  {
    v71 = MEMORY[0x181EAA840](a1: v22, a2: v23, a3: 34089376, a4: v35, a5: v84);
    v20 = v84;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v23;
    *(_QWORD *)v34 = 34089376;
    *(_DWORD *)(v34 + 8) = v20;
    *(_DWORD *)(v34 + 12) = 0;
    if ( v36 - 16 >= 0x800 )
    {
      memset((void *)(v34 + 16), 0, v36 - 16);
      v22 = v34 + v36;
      i = 0;
      v20 = v84;
    }
    else
    {
      for ( i = 16; v36 > i; i += 8LL )
        *(_QWORD *)(v34 + i) = 0;
    }
    v71 = v34;
  }
  if ( v20 < 1 )
  {
    v83 = 0;
    goto LABEL_30;
  }
  v38 = v73;
  v15 = *(unsigned int *)(v73 + 12);
  if ( (_DWORD)v15 == 0 )
    goto LABEL_42;
  v15 = v17 + 8 * v15;
  v39 = MEMORY[0x1827B6940](a1: v22, a2: v23, a3: v15);
  v50 = v73;
  v51 = *(unsigned int *)(v73 + 24);
  if ( (_DWORD)v51 == 0 )
  {
LABEL_43:
    sub_182771080(
      a1: v22,
      a2: v23,
      a3: v50,
      a4: v40,
      a5: v51,
      a6: v41,
      a7: (__m128)v42.m128i_i128,
      a8: v43,
      a9: v44,
      a10: v45,
      a11: v46,
      a12: v47,
      a13: v48,
      a14: v49,
      a15: v69);
    goto LABEL_44;
  }
  v52 = *(unsigned int *)(v17 + 8 * v51 + 8);
  v53 = v17 + 8 * v51;
  if ( (_DWORD)v52 == 0 )
  {
LABEL_44:
    v39 = sub_182771080(
            a1: v22,
            a2: v23,
            a3: v50,
            a4: v52,
            a5: v53,
            a6: v41,
            a7: (__m128)v42.m128i_i128,
            a8: v43,
            a9: v44,
            a10: v45,
            a11: v46,
            a12: v47,
            a13: v48,
            a14: v49,
            a15: v69);
    goto LABEL_45;
  }
  v15 = 40470128;
  if ( (signed int)v39 >= *(_DWORD *)(v17 + 8 * v52 + 8) )
  {
LABEL_45:
    v75 = v39;
    v74 = 0;
    v81 = v15;
LABEL_46:
    v68 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v68 + 40) > *(_QWORD *)(v18 + 32) )
    {
      v68 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: v81);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v68 + 40;
      *(_DWORD *)v68 = 40470128;
      *(_DWORD *)(v68 + 4) = 0;
      *(_QWORD *)(v68 + 8) = 0;
      *(_QWORD *)(v68 + 16) = 0;
      *(_QWORD *)(v68 + 24) = 0;
      *(_QWORD *)(v68 + 32) = 0;
    }
    *(_DWORD *)(v68 + 20) = 46923644;
    *(_DWORD *)(v68 + 16) = *(_DWORD *)(v17 + 374343896);
    *(_DWORD *)(v68 + 12) = (unsigned __int64)(v68 - v17) >> 3;
    *(_DWORD *)(v68 + 8) = 46228293;
    goto LABEL_49;
  }
  if ( v39 == 0 )
    goto LABEL_50;
  v81 = 40470128;
  v80 = v39;
  v54 = MEMORY[0x1827B9BC0](a1: v22, a2: v23, a3: v53, a4: v52, a5: v39);
  v52 = v17 + 376671616;
  if ( v17 + 376671616 != v54 )
  {
    v85 = v16;
    v77 = v80;
    v76 = 0;
    goto LABEL_55;
  }
  v15 = v71;
  v70 = v17 + 376671616;
  *(_WORD *)(v71 + 12) = v80;
  v56 = v84;
  v57 = v73;
  i = 1;
  while ( v56 > (int)i )
  {
    v58 = *(unsigned int *)(v57 + 12);
    if ( (_DWORD)v58 == 0 )
    {
      sub_182771080(
        a1: v22,
        a2: (unsigned int)i,
        a3: v57,
        a4: i,
        a5: v55,
        a6: v41,
        a7: (__m128)v42.m128i_i128,
        a8: v43,
        a9: v44,
        a10: v45,
        a11: v46,
        a12: v47,
        a13: v48,
        a14: v49,
        a15: v69);
LABEL_62:
      v59 = sub_182771080(
              a1: v22,
              a2: v79,
              a3: v61,
              a4: v60,
              a5: v62,
              a6: v41,
              a7: (__m128)v42.m128i_i128,
              a8: v43,
              a9: v44,
              a10: v45,
              a11: v46,
              a12: v47,
              a13: v48,
              a14: v49,
              a15: v69);
LABEL_63:
      v15 = v59;
      v59 = sub_182771080(
              a1: v22,
              a2: v79,
              a3: v61,
              a4: v52,
              a5: v63,
              a6: v41,
              a7: (__m128)v42.m128i_i128,
              a8: v43,
              a9: v44,
              a10: v45,
              a11: v46,
              a12: v47,
              a13: v48,
              a14: v49,
              a15: v69);
LABEL_64:
      v75 = v59;
      v85 = v16;
      v74 = v79;
      goto LABEL_46;
    }
    v79 = i;
    v59 = MEMORY[0x1827B6940](a1: v22, a2: v17 + 8 * v58, a3: v17 + 8 * v58);
    v61 = v73;
    v62 = *(unsigned int *)(v73 + 24);
    if ( (_DWORD)v62 == 0 )
      goto LABEL_62;
    v52 = *(unsigned int *)(v17 + 8 * v62 + 8);
    v63 = v17 + 8 * v62;
    if ( (_DWORD)v52 == 0 )
      goto LABEL_63;
    if ( (signed int)v59 >= *(_DWORD *)(v17 + 8 * v52 + 8) )
      goto LABEL_64;
    if ( v59 == 0 )
    {
      v85 = v16;
      v82 = v79;
      goto LABEL_51;
    }
    v78 = v59;
    v64 = MEMORY[0x1827B9BC0](a1: v22, a2: v23, a3: v63, a4: v52, a5: v59);
    v52 = v70;
    if ( v70 != v64 )
    {
      v85 = v16;
      v77 = v78;
      v76 = v79;
LABEL_55:
      v68 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v68 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v68 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: v81);
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v68 + 40;
        *(_DWORD *)v68 = 40470128;
        *(_DWORD *)(v68 + 4) = 0;
        *(_QWORD *)(v68 + 8) = 0;
        *(_QWORD *)(v68 + 16) = 0;
        *(_QWORD *)(v68 + 24) = 0;
        *(_QWORD *)(v68 + 32) = 0;
      }
      *(_DWORD *)(v68 + 20) = 46923644;
      *(_DWORD *)(v68 + 16) = *(_DWORD *)(v17 + 374343896);
      *(_DWORD *)(v68 + 12) = (unsigned __int64)(v68 - v17) >> 3;
      for ( *(_DWORD *)(v68 + 8) = 46228304; ; *(_DWORD *)(v68 + 8) = 46228317 )
      {
LABEL_49:
        v42 = sub_182769900(
                a1: v22,
                a2: v23,
                a3: (_DWORD *)v68,
                a4: v52,
                a5: (__int64)&a15,
                a6: v41,
                a7: (__m128)v42.m128i_i128,
                a8: v43,
                a9: v44,
                a10: v45,
                a11: v46,
                a12: v47,
                a13: v48,
                a14: v49);
LABEL_50:
        v82 = 0;
        v81 = v15;
LABEL_51:
        v68 = *(_QWORD *)(v18 + 40);
        if ( (unsigned __int64)(v68 + 40) > *(_QWORD *)(v18 + 32) )
        {
          v68 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: v81, a4: *(double *)v42.m128i_i64);
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v68 + 40;
          *(_DWORD *)v68 = 40470128;
          *(_DWORD *)(v68 + 4) = 0;
          *(_QWORD *)(v68 + 8) = 0;
          *(_QWORD *)(v68 + 16) = 0;
          *(_QWORD *)(v68 + 24) = 0;
          *(_QWORD *)(v68 + 32) = 0;
        }
        *(_DWORD *)(v68 + 20) = 46923644;
        *(_DWORD *)(v68 + 16) = *(_DWORD *)(v17 + 374343896);
        *(_DWORD *)(v68 + 12) = (unsigned __int64)(v68 - v17) >> 3;
      }
    }
    v56 = v84;
    if ( v84 <= v79 )
    {
      sub_182771220(
        a1: v72,
        a2: v79,
        a3: v79,
        a4: v71,
        a5: v84,
        a6: v41,
        a7: (__m128)v42.m128i_i128,
        a8: v43,
        a9: v44,
        a10: v45,
        a11: v46,
        a12: v47,
        a13: v48,
        a14: v49,
        a15: v69);
      JUMPOUT(0x18279FD4BLL);
    }
    v15 = v78;
    v23 = v79;
    *(_WORD *)(v71 + 2LL * v79 + 12) = v78;
    i = (unsigned int)(v23 + 1);
    v57 = v73;
  }
  v83 = i;
LABEL_30:
  v65 = v71;
  v66 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v66 + 16) > *(_QWORD *)(v18 + 32) )
  {
    v66 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: 40546528);
    v65 = v71;
  }
  else
  {
    *(_QWORD *)(v18 + 40) = v66 + 16;
    *(_DWORD *)v66 = 40546528;
    *(_DWORD *)(v66 + 4) = 0;
    *(_QWORD *)(v66 + 8) = 0;
  }
  *(_DWORD *)(v66 + 4) = (unsigned __int64)(v65 - v17) >> 3;
  if ( *(int *)(v18 + 16) <= 0 )
    sub_18277F280(a1: v22, a2: v23, a3: v66, a4: i);
  return v66;
}
