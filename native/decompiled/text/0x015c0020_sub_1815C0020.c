// sub_1815C0020
// rva 0x015c0020  size 1157  section .text  group text
// window base 0x1815c0020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C0020(
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
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  double v22; // xmm0_8
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __m128 v34; // xmm6
  __m128 v35; // xmm7
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64); // rsi
  _DWORD *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 (__fastcall *v44)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  _DWORD *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  double v58; // xmm0_8
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // xmm1_8
  __int64 v62; // xmm2_8
  __int64 v63; // xmm3_8
  __int64 result; // rax
  unsigned __int64 j; // rdx
  bool v66; // bl
  __int64 v67; // rsi
  char v68; // cl
  int v69; // xmm4_4
  __int64 v70; // rbp
  _DWORD *v71; // r9
  __int64 v72; // rdx
  __int64 i; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // [rsp+0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+8h] [rbp-60h]
  __int64 v80; // [rsp+10h] [rbp-58h]
  __int64 v81; // [rsp+18h] [rbp-50h]
  __int64 v82; // [rsp+20h] [rbp-48h]
  _DWORD *v83; // [rsp+28h] [rbp-40h]
  __int64 v84; // [rsp+30h] [rbp-38h]
  __int64 v85; // [rsp+38h] [rbp-30h]
  __int64 v86; // [rsp+40h] [rbp-28h]
  __int64 v87; // [rsp+48h] [rbp-20h]
  __int64 v88; // [rsp+50h] [rbp-18h]
  int v89; // [rsp+5Ch] [rbp-Ch]
  BOOL v90; // [rsp+60h] [rbp-8h]
  unsigned int v91; // [rsp+64h] [rbp-4h]

  v85 = a3;
  v84 = a5;
  v83 = (_DWORD *)a6;
  if ( (unsigned __int64)&v78 <= *(_QWORD *)(v17 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v16 + 376615978) != 0 )
    goto LABEL_40;
  while ( 1 )
  {
    v82 = MEMORY[0x188D03BE0]();
    v21 = v16 + 376275056;
    *(_QWORD *)&v22 = MEMORY[0x123F3C3C];
    if ( v83 != (_DWORD *)v16 )
      break;
LABEL_39:
    *(double *)a7.m128_u64 = MEMORY[0x182771080](a1: v19, a2: v20, a3: v18, a4: v21, a5: v22);
LABEL_40:
    sub_1815ACE20(a1, a2, a3: v16 + 35839696, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
  v81 = v16 + 376275056;
  v91 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, float))(v15 + *(_QWORD *)(v16 + 8LL * (*v83 >> 3) + 232)))(
          a1: v19,
          a2: v20,
          a3: v83,
          a4: MEMORY[0x123F3C3C]);
  if ( *(_BYTE *)(v16 + 376394442) != 0 )
    goto LABEL_42;
  while ( 1 )
  {
    v36 = *(unsigned int *)(v16 + 374420328);
    if ( (_DWORD)v36 != 0 )
      break;
    *(double *)v28.m128_u64 = MEMORY[0x182771080]();
LABEL_42:
    sub_1815ACE20(
      a1: v24,
      a2: v25,
      a3: v16 + 34253200,
      a4: v23,
      a5: v26,
      a6: v27,
      a7: v28,
      a8: v29,
      a9: v30,
      a10: v31,
      a11: v32,
      a12: v33,
      a13: v34,
      a14: v35);
  }
  v37 = v16 + 8LL * *(unsigned int *)(v16 + 8 * v36 + 272);
  if ( v37 == v84 )
    v38 = v16 + 376275080;
  else
    v38 = v81;
  v80 = v38;
  v90 = v37 == v84;
  if ( *(_BYTE *)(v16 + 376359946) != 0 )
  {
    sub_1815ACE20(
      a1: v24,
      a2: v25,
      a3: v16 + 34099920,
      a4: v37,
      a5: v26,
      a6: v27,
      a7: v28,
      a8: v29,
      a9: v30,
      a10: v31,
      a11: v32,
      a12: v33,
      a13: v34,
      a14: v35);
    v37 = v77;
  }
  v39 = *(unsigned int *)(v16 + 374416812);
  if ( (_DWORD)v39 == 0 )
  {
    for ( i = MEMORY[0x18276BEE0](a1: v24, a2: v25, a3: v37);
          ;
          i = MEMORY[0x182769900](a1: v75, a2: v76, a3: i, a4: v74, a5: &a15) )
    {
LABEL_37:
      ;
    }
  }
  v81 = v37;
  v40 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))(v15
                                                         + *(_QWORD *)(v16
                                                                     + 8LL * (*(_DWORD *)(v16 + 8 * v39) >> 3)
                                                                     + 152));
  v41 = (_DWORD *)v40(a1: v24, a2: v40, a3: v16 + 8 * v39);
  if ( v41 != (_DWORD *)v16 )
  {
    v44 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v15
                                                                              + *(_QWORD *)(v16 + 8LL * (*v41 >> 3) + 192));
    v79 = v16 + 35839320;
    v45 = (_DWORD *)v44(a1: v42, a2: v43, a3: v41, a4: v44, a5: v16 + 35839320);
    if ( v45 != (_DWORD *)v16 )
    {
      v49 = *v45 >> 3;
      if ( *(__int16 *)(v16 + 8 * v49 + 62) < 3
        || *(_DWORD *)(v16 + 8LL * *(unsigned int *)(v16 + 8 * v49 + 16) + 20) != 75346 )
      {
        v45 = (_DWORD *)MEMORY[0x18276FC00](a1: v47, a2: v48, a3: v45, a4: v46, a5: v79);
      }
    }
    if ( v45 != (_DWORD *)v16 )
    {
      v50 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v15
                                                                          + *(_QWORD *)(v16 + 8LL * (*v45 >> 3) + 352)))(
                        a1: v47,
                        a2: v48,
                        a3: v45);
      if ( v50 != (_DWORD *)v16 )
      {
        v53 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v15
                                                                            + *(_QWORD *)(v16 + 8LL * (*v50 >> 3) + 232)))(
                          a1: v51,
                          a2: v52,
                          a3: v50);
        if ( v53 != (_DWORD *)v16 )
        {
          v54 = *v53 >> 3;
          if ( (_DWORD)v54 != 4279946 )
            goto LABEL_46;
        }
        if ( v53 == (_DWORD *)v16 )
        {
          v53 = (_DWORD *)MEMORY[0x182771080]();
LABEL_46:
          *(float *)&v58 = MEMORY[0x18276FC00](a1: v56, a2: v57, a3: v53, a4: v55, a5: v16 + 34239568);
          goto LABEL_47;
        }
        *(_QWORD *)&v58 = (unsigned int)v53[1];
        *(float *)&v58 = *(float *)&v58 / MEMORY[0x123F3C40];
        if ( v81 != v84 )
        {
          v59 = v84;
          if ( v84 != v16 )
          {
            v60 = *(unsigned int *)(v84 + 20);
            if ( (_DWORD)v60 != 0 )
            {
              v61 = *(_QWORD *)(v16 + 8 * v60 + 16);
              v62 = *(_QWORD *)(v16 + 8 * v60 + 24);
              v63 = *(_QWORD *)(v16 + 8 * v60 + 8);
              goto LABEL_24;
            }
            goto LABEL_48;
          }
LABEL_47:
          v89 = LODWORD(v58);
          MEMORY[0x182771080]();
LABEL_48:
          i = MEMORY[0x182771080](a1: v56, a2: v80, a3: v54, a4: v91, a5: v58);
          goto LABEL_37;
        }
        v59 = v84;
        v61 = 0;
        v63 = 0;
        v62 = 0;
LABEL_24:
        result = *(_QWORD *)(v17 + 40);
        if ( (unsigned __int64)(result + 120) > *(_QWORD *)(v17 + 32) )
        {
          v88 = v63;
          v87 = v62;
          v86 = v61;
          v89 = LODWORD(v58);
          result = MEMORY[0x181EAA920](a1: v56, a2: v57, a3: 35838944);
          v63 = v88;
          v62 = v87;
          v61 = v86;
          LODWORD(v58) = v89;
          v66 = v90;
          v67 = v80;
          v68 = v91;
          v69 = MEMORY[0x123F3C3C];
          v70 = v82;
          v71 = v83;
          v59 = v84;
        }
        else
        {
          *(_QWORD *)(v17 + 40) = result + 120;
          *(_DWORD *)result = 35838944;
          *(_DWORD *)(result + 4) = 0;
          for ( j = 8; j < 0x78; j += 8LL )
            *(_QWORD *)(result + j) = 0;
          v66 = v90;
          v67 = v80;
          v68 = v91;
          v69 = MEMORY[0x123F3C3C];
          v70 = v82;
          v71 = v83;
        }
        v72 = v85;
        *(_QWORD *)(result + 80) = v63;
        *(_DWORD *)(result + 68) = ((unsigned __int64)v71 - v16) >> 3;
        *(_DWORD *)(result + 64) = (unsigned __int64)(v59 - v16) >> 3;
        *(_BYTE *)(result + 61) = v66;
        *(_BYTE *)(result + 60) = v68;
        *(_DWORD *)(result + 52) = v69;
        *(_DWORD *)(result + 48) = LODWORD(v58);
        *(_QWORD *)(result + 40) = v62;
        *(_QWORD *)(result + 32) = v61;
        *(_DWORD *)(result + 20) = (unsigned __int64)(v70 - v16) >> 3;
        *(_DWORD *)(result + 16) = (unsigned __int64)(v67 - v16) >> 3;
        *(_DWORD *)(result + 12) = (unsigned __int64)(v72 - v16) >> 3;
        *(_DWORD *)(result + 8) = 47038095;
        if ( *(int *)(v17 + 16) <= 0 )
        {
          v89 = LODWORD(v58);
          return MEMORY[0x18277F280]();
        }
        return result;
      }
    }
  }
  i = MEMORY[0x18276BEE0]();
  goto LABEL_37;
}
