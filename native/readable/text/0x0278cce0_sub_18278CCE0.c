// sub_278CCE0
// rva 0x0278cce0  size 1076  section .text  group text
// window base 0x18278cce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278CCE0(
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
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
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
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r9
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __m128 v46; // xmm6
  __m128 v47; // xmm7
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r8d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  unsigned __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rdi
  unsigned __int64 v60; // r8
  __int64 v61; // rdx
  _DWORD *v62; // rax
  __int64 v63; // rdx
  char v64; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v65; // [rsp+10h] [rbp-38h]
  int v66; // [rsp+1Ch] [rbp-2Ch]
  __int64 v67; // [rsp+20h] [rbp-28h]
  __int64 v68; // [rsp+28h] [rbp-20h]
  __int64 v69; // [rsp+30h] [rbp-18h]
  __int64 v70; // [rsp+38h] [rbp-10h]
  int v71; // [rsp+40h] [rbp-8h]
  int v72; // [rsp+44h] [rbp-4h]

  v70 = a3;
  v69 = a6;
  if ( (unsigned __int64)&v64 <= *(_QWORD *)(v16 + 8) )
  {
    v72 = a5;
    sub_1EB84E0();
  }
  else if ( *(_DWORD *)(a3 + 8) == 0 )
  {
    v17 = *(unsigned int *)(a3 + 40);
    if ( (_DWORD)v17 == 0 )
      goto LABEL_38;
    v18 = *(unsigned int *)(v15 + 8 * v17 + 12);
    if ( (_DWORD)v18 == 0 )
      goto LABEL_39;
    v72 = a5;
    v19 = sub_27B6300(a1, a2, a3: v15 + 8 * v18);
    v68 = v19;
    v32 = v70;
    v33 = *(unsigned int *)(v70 + 40);
    if ( (_DWORD)v33 == 0 )
      goto LABEL_40;
    v34 = *(unsigned int *)(v15 + 8 * v33 + 12);
    if ( (_DWORD)v34 == 0 )
      goto LABEL_41;
    v35 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v35 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v35 = sub_1EAA920(a1: v21, a2: v22, a3: 40470016);
      v19 = v68;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v35 + 24;
      *(_DWORD *)v35 = 40470016;
      *(_DWORD *)(v35 + 4) = 0;
      *(_QWORD *)(v35 + 8) = 0;
      *(_QWORD *)(v35 + 16) = 0;
    }
    v67 = v35;
    sub_27B6000(a1: v21, a2: v22, a3: v35, a4: v20, a5: v19, a6: v15);
    v48 = v70;
    v49 = *(unsigned int *)(v70 + 40);
    if ( (_DWORD)v49 == 0 )
      goto LABEL_42;
    if ( *(_BYTE *)(v15 + 8 * v49 + 44) != 0 || *(_BYTE *)(v15 + 8 * v49 + 46) != 0 )
    {
      v50 = v69;
      if ( v69 == v15 )
        goto LABEL_43;
      v51 = *(_DWORD *)(v69 + 8);
      switch ( v51 )
      {
        case 0:
          v52 = sub_278C8A0(
                  a1: v37,
                  a2: v38,
                  a3: v70,
                  a4: v36,
                  a5: v67,
                  a6: v69,
                  a7: v40,
                  a8: v41,
                  a9: v42,
                  a10: v43,
                  a11: v44,
                  a12: v45,
                  a13: v46,
                  a14: v47);
          break;
        case 1:
          v52 = sub_278C6C0(
                  a1: v37,
                  a2: v38,
                  a3: v70,
                  a4: v36,
                  a5: v67,
                  a6: v69,
                  a7: v40,
                  a8: v41,
                  a9: v42,
                  a10: v43,
                  a11: v44,
                  a12: v45,
                  a13: v46,
                  a14: v47);
          break;
        case 2:
          v52 = sub_278B240(
                  a1: v37,
                  a2: v38,
                  a3: v70,
                  a4: v36,
                  a5: v67,
                  a6: v69,
                  a7: v40,
                  a8: v41,
                  a9: v42,
                  a10: v43,
                  a11: v44,
                  a12: v45,
                  a13: v46,
                  a14: v47);
          break;
        default:
          while ( 1 )
          {
            v63 = *(_QWORD *)(v16 + 40);
            if ( (unsigned __int64)(v63 + 40) > *(_QWORD *)(v16 + 32) )
            {
              v63 = sub_1EAA920(a1: v37, a2: v38, a3: 35317296);
            }
            else
            {
              *(_QWORD *)(v16 + 40) = v63 + 40;
              *(_DWORD *)v63 = 35317296;
              *(_DWORD *)(v63 + 4) = 0;
              *(_QWORD *)(v63 + 8) = 0;
              *(_QWORD *)(v63 + 16) = 0;
              *(_QWORD *)(v63 + 24) = 0;
              *(_QWORD *)(v63 + 32) = 0;
            }
            *(_DWORD *)(v63 + 20) = 46923644;
            *(_DWORD *)(v63 + 16) = *(_DWORD *)(v15 + 374343896);
            *(_DWORD *)(v63 + 12) = (unsigned __int64)(v63 - v15) >> 3;
            v65 = (_DWORD *)v63;
            sub_503B9A0(a1: v37, a2: v38, a3: v63, a4: v36, a5: 0);
            v62 = v65;
LABEL_37:
            a7.m128_i128 = (__int128)sub_2769900(
                                       a1,
                                       a2,
                                       a3: v62,
                                       a4,
                                       a5: (__int64)&a15,
                                       a6,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       a11,
                                       a12,
                                       a13,
                                       a14);
LABEL_38:
            v72 = a5;
            sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v64);
LABEL_39:
            v72 = a5;
            sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v64);
LABEL_40:
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
              a15: v64);
LABEL_41:
            sub_2771080(
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
              a15: v64);
LABEL_42:
            sub_2771080(
              a1: v37,
              a2: v38,
              a3: v48,
              a4: v36,
              a5: v49,
              a6: v39,
              a7: v40,
              a8: v41,
              a9: v42,
              a10: v43,
              a11: v44,
              a12: v45,
              a13: v46,
              a14: v47,
              a15: v64);
LABEL_43:
            sub_2771080(
              a1: v37,
              a2: v38,
              a3: v48,
              a4: v36,
              a5: v49,
              a6: v50,
              a7: v40,
              a8: v41,
              a9: v42,
              a10: v43,
              a11: v44,
              a12: v45,
              a13: v46,
              a14: v47,
              a15: v64);
          }
      }
    }
    else
    {
      v52 = 0;
    }
    v53 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v53 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v71 = v52;
      v53 = sub_1EAA920(a1: v37, a2: v38, a3: 40544184);
      v52 = v71;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v53 + 24;
      *(_DWORD *)v53 = 40544184;
      *(_DWORD *)(v53 + 4) = 0;
      *(_QWORD *)(v53 + 8) = 0;
      *(_QWORD *)(v53 + 16) = 0;
    }
    v54 = v68;
    v55 = v70;
    *(_DWORD *)(v53 + 8) = (unsigned __int64)(v68 - v15) >> 3;
    *(_DWORD *)(v53 + 4) = 47082465;
    v56 = (unsigned __int64)(v53 - v15) >> 3;
    *(_DWORD *)(v55 + 8) = v56;
    if ( (*(_DWORD *)v55 & 2) != 0 )
    {
      v60 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v60) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v60) >> 9) + 0x38) = 0;
    }
    v57 = *(_QWORD *)(v16 + 40);
    v58 = v57 + 24;
    if ( (unsigned __int64)(v57 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v66 = (unsigned __int64)(v53 - v15) >> 3;
      v65 = (_DWORD *)v53;
      v71 = v52;
      v57 = sub_1EAA920(a1: v58, a2: v57, a3: 40544336);
      LODWORD(v56) = v66;
      v53 = (__int64)v65;
      v52 = v71;
      v54 = v68;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v58;
      *(_DWORD *)v57 = 40544336;
      *(_DWORD *)(v57 + 4) = 0;
      *(_QWORD *)(v57 + 8) = 0;
      *(_QWORD *)(v57 + 16) = 0;
    }
    *(_DWORD *)(v57 + 8) = v52;
    *(_DWORD *)(v57 + 4) = v56;
    if ( *(int *)(v16 + 16) <= 0 )
      sub_277F280(a1: v58, a2: v57, a3: v53, a4: v54);
    return v57;
  }
  v72 = a5;
  v61 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v61 + 40) > *(_QWORD *)(v16 + 32) )
  {
    v61 = sub_1EAA920(a1, a2, a3: 40470128);
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v61 + 40;
    *(_DWORD *)v61 = 40470128;
    *(_DWORD *)(v61 + 4) = 0;
    *(_QWORD *)(v61 + 8) = 0;
    *(_QWORD *)(v61 + 16) = 0;
    *(_QWORD *)(v61 + 24) = 0;
    *(_QWORD *)(v61 + 32) = 0;
  }
  *(_DWORD *)(v61 + 20) = 46923644;
  *(_DWORD *)(v61 + 16) = *(_DWORD *)(v15 + 374343896);
  *(_DWORD *)(v61 + 12) = (unsigned __int64)(v61 - v15) >> 3;
  *(_DWORD *)(v61 + 8) = 46385583;
  v62 = (_DWORD *)v61;
  goto LABEL_37;
}
