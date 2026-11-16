// sub_277C380
// rva 0x0277c380  size 1533  section .text  group text
// window base 0x18277c380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277C380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        __int64 a15)
{
  __int64 *v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm6
  __m128 v30; // xmm7
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm2
  __m128 v44; // xmm3
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __m128 v47; // xmm6
  __m128 v48; // xmm7
  __int64 result; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rbx
  double v54; // xmm0_8
  __int64 v55; // rcx
  __int64 v56; // r9
  __m128 v57; // xmm1
  __m128 v58; // xmm2
  __m128 v59; // xmm3
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  __m128 v62; // xmm6
  __m128 v63; // xmm7
  __m128 v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // r9
  __m128 v67; // xmm0
  __m128 v68; // xmm1
  __m128 v69; // xmm2
  __m128 v70; // xmm3
  __m128 v71; // xmm4
  __m128 v72; // xmm5
  __m128 v73; // xmm6
  __m128 v74; // xmm7
  unsigned int v75; // eax
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 i; // r8
  __int64 v79; // rcx
  __int64 *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  _DWORD *v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // r8
  __int64 v90; // r9
  __m128 v91; // xmm0
  __m128 v92; // xmm1
  __m128 v93; // xmm2
  __m128 v94; // xmm3
  __m128 v95; // xmm4
  __m128 v96; // xmm5
  __m128 v97; // xmm6
  __m128 v98; // xmm7
  __int64 v99; // rcx
  int v100; // [rsp+0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+28h] [rbp-70h]
  unsigned int v102; // [rsp+44h] [rbp-54h]
  __int64 v103; // [rsp+48h] [rbp-50h]
  _BYTE v104[16]; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v105; // [rsp+60h] [rbp-38h]
  __int64 *v106; // [rsp+68h] [rbp-30h]
  void (__fastcall *v107)(__int64, __int64, __int64 *, __int64 *); // [rsp+70h] [rbp-28h]
  int v108; // [rsp+7Ch] [rbp-1Ch]
  void (__fastcall *v109)(__int64, __int64, _BYTE *, _BYTE *, double); // [rsp+80h] [rbp-18h]
  __int64 *v110; // [rsp+88h] [rbp-10h]
  __int64 v111; // [rsp+90h] [rbp-8h]

  v111 = a3;
  if ( (unsigned __int64)&v100 <= *(_QWORD *)(v17 + 8) )
    goto LABEL_41;
  sub_2782AE0(a1, a2, a3: v16 + 365427656);
  v31 = *(unsigned int *)(v17 + 72);
  v32 = v16 + 8 * v31;
  if ( (_DWORD)v31 == 0 )
    goto LABEL_42;
  v33 = *(unsigned int *)(v16 + 8 * v31 + 64);
  v15 = (__int64 *)(v16 + 8 * v33);
  if ( (_DWORD)v33 != 0 )
  {
    v18 = *(_DWORD *)(v16 + 8 * v33) >> 3;
    if ( (_DWORD)v18 != 4573776 )
      goto LABEL_45;
  }
  if ( (_DWORD)v33 == 0 )
    goto LABEL_43;
  v102 = *(_DWORD *)(v17 + 72);
  v34 = *(unsigned int *)(v16 + 8 * v33 + 8);
  v35 = v16 + 8 * v34;
  if ( (_DWORD)v34 == 0 )
    return sub_18277C438(a1: v19, a2: v35, a3: 0, a4: v32, a5: v21, a6: v22, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v103 = v16 + 8 * v31;
  v101 = v16 + 8 * v34;
  if ( v35 == v16 )
  {
    while ( 1 )
    {
      sub_2771080(
        a1: v19,
        a2: v35,
        a3: v34,
        a4: v111,
        a5: v21,
        a6: v22,
        a7: v23,
        a8: v24,
        a9: v25,
        a10: v26,
        a11: v27,
        a12: v28,
        a13: v29,
        a14: v30,
        a15: v100);
LABEL_45:
      v103 = v32;
      v86 = (_DWORD *)sub_276FC00(
                        a1: v19,
                        a2: v20,
                        a3: v15,
                        a4: v111,
                        a5: (_DWORD *)(v16 + 36590208),
                        a6: v22,
                        a7: v23,
                        a8: v24,
                        a9: v25,
                        a10: v26,
                        a11: v27,
                        a12: v28,
                        a13: v29,
                        a14: v30,
                        a15: v100);
      v99 = v111;
      v15 = v106;
      v85 = *(unsigned int *)(v16 + 8LL * v102 + 12);
      if ( (_DWORD)v85 == 0 )
        goto LABEL_50;
      *(_DWORD *)(v16 + 8 * v85 + 28) = v108;
      __faststorefence();
      sub_2769900(
        a1: v87,
        a2: v88,
        a3: v86,
        a4: v99,
        a5: (__int64)&a7,
        a6: v90,
        a7: v91,
        a8: v92,
        a9: v93,
        a10: v94,
        a11: v95,
        a12: v96,
        a13: v97,
        a14: v98);
LABEL_41:
      *(double *)v23.m128_u64 = sub_1EB84E0(a1, a2, a3, a4: a3);
LABEL_42:
      v103 = v32;
      sub_2771080(
        a1: v19,
        a2: v20,
        a3: v18,
        a4: v111,
        a5: v21,
        a6: v22,
        a7: v23,
        a8: v24,
        a9: v25,
        a10: v26,
        a11: v27,
        a12: v28,
        a13: v29,
        a14: v30,
        a15: v100);
LABEL_43:
      v103 = v32;
      sub_2771080(
        a1: v19,
        a2: v20,
        a3: v18,
        a4: v111,
        a5: v21,
        a6: v22,
        a7: v23,
        a8: v24,
        a9: v25,
        a10: v26,
        a11: v27,
        a12: v28,
        a13: v29,
        a14: v30,
        a15: v100);
    }
  }
  sub_2787600(a1: v19, a2: v35, a3: v16 + 8 * v34, a4: v32, a5: v21, a6: v22, a7: v100);
  __faststorefence();
  result = v102;
  if ( *(_BYTE *)(v16 + 8LL * v102 + 100) == 0 )
  {
    v50 = *(unsigned int *)(v16 + 8LL * v102 + 12);
    if ( (_DWORD)v50 != 0 )
    {
      v51 = *(unsigned int *)(v16 + 8 * v50 + 28);
      v52 = *(unsigned int *)(v16 + 8LL * v102 + 12);
      if ( (_DWORD)v52 != 0 )
      {
        *(_DWORD *)(v16 + 8 * v52 + 28) = 225;
        __faststorefence();
        v53 = (__int64 *)v104;
        v110 = (__int64 *)v104;
        v54 = *(double *)(v16 + 376178920);
        v109 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *, double))MEMORY[0x10e44c40]/* 0x10e44c40 */;
        v108 = v51;
        if ( v54 == 0.0 )
        {
          MEMORY[0x10e44c40]/* 0x10e44c40 */(a1: v37, a2: v38, a3: v51, a4: v104, a5: MEMORY[0x11253a20]/* 0x11253a20 */);
          v53 = v110;
          *(double *)(v16 + 376178920) = MEMORY[0x11253a20]/* 0x11253a20 */ / (double)*v110;
        }
        v107 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x10e44170]/* 0x10e44170 */;
        MEMORY[0x10e44170]/* 0x10e44170 */(a1: v37, a2: v38, a3: MEMORY[0x10e44170]/* 0x10e44170 */, a4: v53);
        *(double *)v64.m128_u64 = (double)*v110 * *(double *)(v16 + 376178920);
        v65 = (__int64)*(double *)v64.m128_u64;
        if ( (__int64)*(double *)v64.m128_u64 == MEMORY[0x11253a18]/* 0x11253a18 */ )
          goto LABEL_51;
        while ( 1 )
        {
          v110 = (__int64 *)v65;
          if ( v111 < 1 )
          {
            i = v111;
          }
          else
          {
            sub_2787220(a1: v37, a2: v38, a3: v101, a4: v55, a5: 0, a6: v111);
            v75 = v102;
            if ( *(_BYTE *)(v16 + 8LL * v102 + 100) != 0 )
            {
              v76 = v111;
LABEL_19:
              v36 = v75;
              v77 = v111;
              result = *(unsigned int *)(v16 + 8LL * v75 + 12);
              if ( (_DWORD)result != 0 )
              {
                *(_DWORD *)(v16 + 8 * result + 28) = v108;
                __faststorefence();
                if ( *(int *)(v17 + 16) <= 0 )
                  return sub_277F280(a1: v37, a2: v38, a3: v36);
                return result;
              }
              goto LABEL_49;
            }
            v80 = (__int64 *)v104;
            v106 = (__int64 *)v104;
            if ( *(double *)(v16 + 376178920) == 0.0 )
            {
              v109(a1: v37, a2: v38, a3: v104, a4: v104, a5: MEMORY[0x11253a20]/* 0x11253a20 */);
              v80 = v106;
              *(double *)(v16 + 376178920) = MEMORY[0x11253a20]/* 0x11253a20 */ / (double)*v106;
            }
            v107(a1: v37, a2: v38, a3: v80, a4: v80);
            *(double *)v64.m128_u64 = (double)*v106 * *(double *)(v16 + 376178920);
            v82 = (__int64)*(double *)v64.m128_u64;
            if ( (__int64)*(double *)v64.m128_u64 == MEMORY[0x11253a18]/* 0x11253a18 */ )
            {
              if ( __builtin_isnan(*(double *)v64.m128_u64) )
              {
                v82 = 0;
              }
              else
              {
                v57.m128_i128 = 0;
                if ( *(double *)v64.m128_u64 > 0.0 )
                  v82 = ~v82;
              }
            }
            for ( i = v111 - (v82 - (_QWORD)v110); ; i = v111 - (v84 - (_QWORD)v110) )
            {
              v38 = v101;
              if ( i < 1 )
                break;
              v106 = (__int64 *)i;
              sub_2787220(a1: v37, a2: v101, a3: v101, a4: v81, a5: 0, a6: i);
              v75 = v102;
              if ( *(_BYTE *)(v16 + 8LL * v102 + 100) != 0 )
              {
                v76 = (__int64)v106;
                goto LABEL_19;
              }
              v83 = (__int64 *)v104;
              v105 = (__int64 *)v104;
              if ( *(double *)(v16 + 376178920) == 0.0 )
              {
                v109(a1: v37, a2: v38, a3: v104, a4: v104, a5: MEMORY[0x11253a20]/* 0x11253a20 */);
                v83 = v105;
                *(double *)(v16 + 376178920) = MEMORY[0x11253a20]/* 0x11253a20 */ / (double)*v105;
              }
              v107(a1: v37, a2: v38, a3: v83, a4: v83);
              *(double *)v64.m128_u64 = (double)*v105 * *(double *)(v16 + 376178920);
              v84 = (__int64)*(double *)v64.m128_u64;
              if ( (__int64)*(double *)v64.m128_u64 == MEMORY[0x11253a18]/* 0x11253a18 */ )
              {
                if ( __builtin_isnan(*(double *)v64.m128_u64) )
                {
                  v84 = 0;
                }
                else
                {
                  v57.m128_i128 = 0;
                  if ( *(double *)v64.m128_u64 > 0.0 )
                    v84 = ~v84;
                }
              }
              v81 = v111;
            }
          }
          v36 = v102;
          v79 = v111;
          result = *(unsigned int *)(v16 + 8LL * v102 + 12);
          if ( (_DWORD)result != 0 )
          {
            *(_DWORD *)(v16 + 8 * result + 28) = v108;
            __faststorefence();
            if ( *(int *)(v17 + 16) <= 0 )
              return sub_277F280(a1: v37, a2: v38, a3: v36);
            return result;
          }
LABEL_48:
          sub_2771080(
            a1: v37,
            a2: v38,
            a3: v36,
            a4: v79,
            a5: i,
            a6: v56,
            a7: v64,
            a8: v57,
            a9: v58,
            a10: v59,
            a11: v60,
            a12: v61,
            a13: v62,
            a14: v63,
            a15: v100);
LABEL_49:
          sub_2771080(
            a1: v37,
            a2: v38,
            a3: v36,
            a4: v77,
            a5: v76,
            a6: v66,
            a7: v67,
            a8: v68,
            a9: v69,
            a10: v70,
            a11: v71,
            a12: v72,
            a13: v73,
            a14: v74,
            a15: v100);
LABEL_50:
          v65 = sub_2771080(
                  a1: v87,
                  a2: v101,
                  a3: v103,
                  a4: v99,
                  a5: v89,
                  a6: v90,
                  a7: v91,
                  a8: v92,
                  a9: v93,
                  a10: v94,
                  a11: v95,
                  a12: v96,
                  a13: v97,
                  a14: v98,
                  a15: v100);
LABEL_51:
          if ( __builtin_isnan(*(double *)v64.m128_u64) )
          {
            v65 = 0;
          }
          else
          {
            v57.m128_i128 = 0;
            if ( *(double *)v64.m128_u64 > 0.0 )
              v65 = ~v65;
          }
        }
      }
    }
    else
    {
      sub_2771080(
        a1: v37,
        a2: v38,
        a3: v36,
        a4: v111,
        a5: v39,
        a6: v40,
        a7: v41,
        a8: v42,
        a9: v43,
        a10: v44,
        a11: v45,
        a12: v46,
        a13: v47,
        a14: v48,
        a15: v100);
    }
    sub_2771080(
      a1: v37,
      a2: v38,
      a3: v51,
      a4: v111,
      a5: v39,
      a6: v40,
      a7: v41,
      a8: v42,
      a9: v43,
      a10: v44,
      a11: v45,
      a12: v46,
      a13: v47,
      a14: v48,
      a15: v100);
    goto LABEL_48;
  }
  if ( *(int *)(v17 + 16) <= 0 )
    return sub_277F280(a1: v37, a2: v38, a3: v36);
  return result;
}
