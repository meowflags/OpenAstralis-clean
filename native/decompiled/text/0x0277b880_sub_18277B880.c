// sub_18277B880
// rva 0x0277b880  size 678  section .text  group text
// window base 0x18277b880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277B880(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rbx
  BOOL v11; // ebp
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __m128 v25; // xmm6
  __m128 v26; // xmm7
  __int64 v27; // rdx
  __int64 v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __m128 v48; // xmm6
  __m128 v49; // xmm7
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  __m128 v57; // xmm2
  __m128 v58; // xmm3
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  __m128 v61; // xmm6
  __m128 v62; // xmm7
  __int64 v63; // rsi
  __int64 v64; // r9
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __m128 v67; // xmm2
  __m128 v68; // xmm3
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __m128 v71; // xmm6
  __m128 v72; // xmm7
  int v73; // [rsp+0h] [rbp-48h] BYREF
  __int64 v74; // [rsp+10h] [rbp-38h]
  unsigned int v75; // [rsp+1Ch] [rbp-2Ch]
  __int64 v76; // [rsp+20h] [rbp-28h]
  unsigned int v77; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v78; // [rsp+30h] [rbp-18h]
  BOOL v79; // [rsp+34h] [rbp-14h]
  __int64 v80; // [rsp+38h] [rbp-10h]
  unsigned int v81; // [rsp+44h] [rbp-4h]

  v81 = a3;
  v80 = a5;
  if ( (unsigned __int64)&v73 <= *(_QWORD *)(v13 + 8) )
  {
    *(double *)v19.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_27;
  }
  sub_182782AE0(a1, a2, a3: v12 + 365427776);
  v27 = *(unsigned int *)(v13 + 72);
  if ( (_DWORD)v27 == 0 )
  {
LABEL_27:
    sub_182771080(
      a1: v15,
      a2: v16,
      a3: v27,
      a4: v14,
      a5: v17,
      a6: v18,
      a7: v19,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26,
      a15: v73);
LABEL_28:
    sub_182771080(
      a1: v15,
      a2: v16,
      a3: v27,
      a4: (__int64)v29,
      a5: v17,
      a6: v18,
      a7: v19,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26,
      a15: v73);
LABEL_29:
    sub_182771080(
      a1: v15,
      a2: v16,
      a3: v30,
      a4: (__int64)v29,
      a5: v17,
      a6: v18,
      a7: v19,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26,
      a15: v73);
    goto LABEL_30;
  }
  v28 = *(unsigned int *)(v12 + 8 * v27 + 64);
  v29 = (_DWORD *)(v12 + 8 * v28);
  if ( (_DWORD)v28 != 0 )
  {
    v27 = *(_DWORD *)(v12 + 8 * v28) >> 3;
    if ( (_DWORD)v27 != 4573776 )
      goto LABEL_31;
  }
  if ( (_DWORD)v28 == 0 )
    goto LABEL_28;
  v30 = *(unsigned int *)(v12 + 8 * v28 + 4);
  v10 = v12 + 8 * v30;
  if ( (_DWORD)v30 == 0 )
    return sub_18277B921(a1: v15, a2: v16, a3: 0, a4: (_DWORD)v29, a5: v17, a6: v18, a7, a8, a9, a10);
  if ( v10 == v12 )
    goto LABEL_29;
  result = *(unsigned int *)(v13 + 72);
  v32 = v12 + 8 * result;
  if ( (_DWORD)result == 0 )
  {
LABEL_30:
    v74 = v32;
    v76 = v10;
    sub_182771080(
      a1: v15,
      a2: v16,
      a3: v30,
      a4: v32,
      a5: v17,
      a6: v18,
      a7: v19,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26,
      a15: v73);
LABEL_31:
    sub_18276FC00(
      a1: v15,
      a2: v16,
      a3: v29,
      a4: (__int64)v29,
      a5: (_DWORD *)(v12 + 36590208),
      a6: v18,
      a7: v19,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26,
      a15: v73);
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v12 + 8 * result + 100) == 0 )
  {
    v33 = v80;
    if ( v80 < 0 || (v30 = v81, v81 != 0) && v80 == 0 )
    {
      v74 = v12 + 8 * result;
      v76 = v10;
      if ( *(int *)(v13 + 16) > 0 )
        return result;
      return sub_18277F280(a1: v15, a2: v16, a3: v30);
    }
    v75 = *(_DWORD *)(v13 + 72);
    v34 = *(unsigned int *)(v12 + 8 * result + 12);
    v11 = v80 != 0;
    if ( (_DWORD)v34 != 0 )
    {
      v74 = v12 + 8 * result;
      v76 = v10;
      v35 = *(unsigned int *)(v12 + 8 * v34 + 28);
      v36 = v12 + 8LL * *(unsigned int *)(v13 + 72);
      v79 = v80 != 0;
      v78 = v35;
      v37 = MEMORY[0x18208C520](a1: v12 + 376381032, a2: v35, a3: v12 + 376381032, a4: v32, a5: v36, a6: v80 != 0);
      v50 = v75;
      v51 = *(unsigned int *)(v12 + 8LL * v75 + 12);
      if ( (_DWORD)v51 != 0 )
      {
        *(_DWORD *)(v12 + 8 * v51 + 28) = v37;
        __faststorefence();
        v77 = v37;
        sub_182787220(a1: v38, a2: v39, a3: v76, a4: v50, a5: v81, a6: v80);
        v30 = v75;
        result = *(unsigned int *)(v12 + 8LL * v75 + 12);
        if ( (_DWORD)result != 0 )
        {
          v16 = v78;
          *(_DWORD *)(v12 + 8 * result + 28) = v78;
          __faststorefence();
          if ( *(int *)(v13 + 16) > 0 )
            return result;
          return sub_18277F280(a1: v15, a2: v16, a3: v30);
        }
LABEL_34:
        sub_182771080(
          a1: v15,
          a2: v78,
          a3: v30,
          a4: v52,
          a5: v53,
          a6: v54,
          a7: v55,
          a8: v56,
          a9: v57,
          a10: v58,
          a11: v59,
          a12: v60,
          a13: v61,
          a14: v62,
          a15: v73);
        sub_182771080(
          a1: v76,
          a2: v63,
          a3: v74,
          a4: v77,
          a5: v80,
          a6: v64,
          a7: v65,
          a8: v66,
          a9: v67,
          a10: v68,
          a11: v69,
          a12: v70,
          a13: v71,
          a14: v72,
          a15: v73);
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
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_18277BB40();
      }
LABEL_33:
      v77 = v37;
      sub_182771080(
        a1: v38,
        a2: v78,
        a3: v51,
        a4: v50,
        a5: v40,
        a6: v41,
        a7: v42,
        a8: v43,
        a9: v44,
        a10: v45,
        a11: v46,
        a12: v47,
        a13: v48,
        a14: v49,
        a15: v73);
      goto LABEL_34;
    }
LABEL_32:
    v79 = v11;
    v74 = v32;
    v76 = v10;
    v37 = sub_182771080(
            a1: v15,
            a2: v16,
            a3: v30,
            a4: v32,
            a5: v33,
            a6: v34,
            a7: v19,
            a8: v20,
            a9: v21,
            a10: v22,
            a11: v23,
            a12: v24,
            a13: v25,
            a14: v26,
            a15: v73);
    goto LABEL_33;
  }
  if ( *(int *)(v13 + 16) <= 0 )
  {
    v74 = v12 + 8 * result;
    v76 = v12 + 8 * v30;
    return sub_18277F280(a1: v15, a2: v16, a3: v30);
  }
  return result;
}
