// sub_278E760
// rva 0x0278e760  size 792  section .text  group text
// window base 0x18278e760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278E760(
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
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned __int64 i; // rax
  __int64 v23; // rbp
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __m128 v38; // xmm6
  __m128 v39; // xmm7
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // ebp
  int v45; // edx
  int v46; // ecx
  int v47; // edi
  int v48; // esi
  int v49; // r8d
  int v50; // r9d
  char v51; // [rsp+0h] [rbp-38h] BYREF
  __int64 v52; // [rsp+8h] [rbp-30h]
  __int64 v53; // [rsp+10h] [rbp-28h]
  __int64 v54; // [rsp+18h] [rbp-20h]
  unsigned int v55; // [rsp+24h] [rbp-14h]
  int v56; // [rsp+28h] [rbp-10h]
  unsigned int v57; // [rsp+2Ch] [rbp-Ch]
  unsigned int v58; // [rsp+30h] [rbp-8h]
  unsigned int v59; // [rsp+34h] [rbp-4h]

  v54 = a3;
  v53 = a5;
  if ( (unsigned __int64)&v51 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a5 != v15 )
  {
    v17 = *(_QWORD *)(v16 + 40);
    v18 = *(_QWORD *)(v16 + 32);
    v19 = *(unsigned int *)(a5 + 8);
    v59 = v19;
    v20 = (4LL * (unsigned int)v19 + 19) & 0x7FFFFFFF8LL;
    v21 = 34089120;
    if ( v20 >= 0x20000 || (a1 = v17 + v20, v17 + v20 > v18) )
    {
      v17 = sub_1EAA840(a1, a2: 34089120, a3: 34089120, a4: v19, a5: (unsigned int)v19);
      v19 = v59;
      a5 = v53;
      a3 = v54;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = a1;
      *(_QWORD *)v17 = 34089120;
      *(_DWORD *)(v17 + 8) = v19;
      *(_DWORD *)(v17 + 12) = 0;
      if ( v20 - 16 >= 0x800 )
      {
        memset((void *)(v17 + 16), 0, v20 - 16);
        a1 = v17 + v20;
        v19 = v59;
      }
      else
      {
        for ( i = 16; v20 > i; i += 8LL )
          *(_QWORD *)(v17 + i) = 0;
      }
    }
    v52 = v17;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
LABEL_10:
      v58 = v23;
      if ( (int)v19 <= (int)v23 )
      {
        if ( *(int *)(v16 + 16) <= 0 )
          sub_277F280(a1, a2: v21, a3, a4: v19);
        return 0;
      }
      if ( (unsigned int)v19 <= (unsigned int)v23 )
        goto LABEL_41;
      v21 = (unsigned int)(v23 + 1);
      v57 = v23 + 1;
      if ( *(_DWORD *)(v17 + 4 * v23 + 12) == 0 )
        break;
      if ( *(int *)(v16 + 16) <= 0 )
      {
        v24 = sub_277F280(a1, a2: v21, a3, a4: v19);
        v23 = v57;
        a3 = v54;
      }
      else
      {
        v23 = (unsigned int)v21;
      }
    }
    v25 = v24 + 1;
    *(_DWORD *)(v17 + 4 * v23 + 12) = v25;
    v26 = *(unsigned int *)(a5 + 4 * v23 + 12);
    if ( (_DWORD)v26 == 0 )
      goto LABEL_42;
    v56 = v25;
    a1 = *(unsigned int *)(v15 + 8 * v26 + 8);
    while ( 1 )
    {
      if ( (_DWORD)a1 == 0 )
      {
        v43 = v56;
        v17 = v52;
        a5 = v53;
        if ( *(int *)(v16 + 16) <= 0 )
        {
          sub_277F280(a1, a2: v57, a3, a4: v19);
          v24 = v43;
          a3 = v54;
          v23 = (unsigned int)v21;
        }
        else
        {
          v24 = v56;
          a3 = v54;
          v23 = v57;
        }
        goto LABEL_10;
      }
      v27 = *(unsigned int *)(a3 + 24);
      if ( (_DWORD)v27 == 0 )
        goto LABEL_43;
      v55 = a1;
      v28 = sub_27B7E00(a1, a2: v21, a3: v15 + 8 * v27, a4: v19, a5: (unsigned int)a1);
      v40 = sub_278E1C0(
              a1: v30,
              a2: v31,
              a3: v54,
              a4: v29,
              a5: v53,
              a6: v28,
              a7: v32,
              a8: v33,
              a9: v34,
              a10: v35,
              a11: v36,
              a12: v37,
              a13: v38,
              a14: v39,
              a15: v51);
      if ( (int)v40 < 0 )
      {
        v23 = v57;
        v24 = v56;
        v17 = v52;
        v19 = v59;
        a5 = v53;
        a3 = v54;
        goto LABEL_10;
      }
      v19 = v59;
      if ( v59 <= (unsigned int)v40 )
        goto LABEL_44;
      v17 = v52;
      v41 = *(unsigned int *)(v52 + 4 * v40 + 12);
      if ( (_DWORD)v41 == v56 )
        break;
      if ( (_DWORD)v41 != 0 )
      {
        v23 = v57;
        v24 = v56;
        a5 = v53;
        a3 = v54;
        goto LABEL_10;
      }
      a5 = v53;
      *(_DWORD *)(v52 + 4 * v40 + 12) = v56;
      v42 = *(unsigned int *)(a5 + 4 * v40 + 12);
      if ( (_DWORD)v42 == 0 )
        goto LABEL_45;
      a1 = *(unsigned int *)(v15 + 8 * v42 + 8);
      a3 = v54;
    }
    if ( *(int *)(v16 + 16) <= 0 )
      sub_277F280(a1, a2: v21, a3: v41, a4: v59);
    return 1;
  }
  sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v51);
LABEL_41:
  sub_2771220(a1, a2: v21, a3: v58, a4: v19, a5: v59, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v51);
LABEL_42:
  sub_2771080(a1: v26, a2: v21, a3, a4: v19, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v51);
LABEL_43:
  v55 = a1;
  LODWORD(v40) = sub_2771080(a1, a2: v21, a3, a4: v19, a5, a6: v27, a7, a8, a9, a10, a11, a12, a13, a14, a15: v51);
LABEL_44:
  sub_2771220(
    a1,
    a2: v21,
    a3: (unsigned int)v40,
    a4: v19,
    a5: (unsigned int)v19,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15: v51);
LABEL_45:
  sub_2771080(a1: v55, a2: v21, a3: v54, a4: v58, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v51);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_278EA80(a1: v47, a2: v48, a3: v45, a4: v46, a5: v49, a6: v50, a7: a15);
}
