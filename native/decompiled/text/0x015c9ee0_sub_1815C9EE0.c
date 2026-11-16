// sub_1815C9EE0
// rva 0x015c9ee0  size 1671  section .text  group text
// window base 0x1815c9ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C9EE0(
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
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __m128 v36; // xmm6
  __m128 v37; // xmm7
  __int64 v38; // rcx
  __int64 v39; // rbx
  _DWORD *v40; // rdx
  unsigned __int64 i; // r8
  __int64 v42; // rbp
  __int64 v43; // rdi
  int v44; // r9d
  unsigned int v45; // esi
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // r10
  __int64 v51; // r11
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // [rsp+0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+8h] [rbp-60h]
  __int64 v66; // [rsp+10h] [rbp-58h]
  __int64 v67; // [rsp+18h] [rbp-50h]
  __int64 v68; // [rsp+20h] [rbp-48h]
  int v69; // [rsp+2Ch] [rbp-3Ch]
  __int64 v70; // [rsp+30h] [rbp-38h]
  unsigned int v71; // [rsp+3Ch] [rbp-2Ch]
  __int64 v72; // [rsp+40h] [rbp-28h]
  __int64 v73; // [rsp+48h] [rbp-20h]
  __int64 v74; // [rsp+50h] [rbp-18h]
  int v75; // [rsp+5Ch] [rbp-Ch]
  unsigned int v76; // [rsp+60h] [rbp-8h]
  int v77; // [rsp+64h] [rbp-4h]

  v74 = a3;
  v73 = a5;
  if ( (unsigned __int64)&v64 <= *(_QWORD *)(v17 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v16 )
  {
    if ( *(_BYTE *)(v16 + 376361858) != 0 )
      goto LABEL_47;
    while ( 1 )
    {
      v18 = *(unsigned int *)(a3 + 196);
      if ( (_DWORD)v18 != 0 )
        break;
LABEL_46:
      *(double *)a7.m128_u64 = MEMORY[0x182771080]();
LABEL_47:
      sub_1815ACE20(a1, a2, a3: v16 + 34109672, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
      a3 = v74;
    }
    v19 = *(_DWORD *)(v16 + 8 * v18);
    v71 = *(_DWORD *)(v16 + 374391004);
    v77 = *(_DWORD *)(a3 + 164);
    v20 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v15 + *(_QWORD *)(v16 + 8LL * (v19 >> 3) + 176));
    v72 = v16 + 8LL * v71;
    v76 = v20(a1, a2: v72, a3: v16 + 8 * v18);
    v23 = *(unsigned int *)(v74 + 196);
    if ( (_DWORD)v23 != 0 )
    {
      v24 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v15
                                                               + *(_QWORD *)(v16
                                                                           + 8LL * (*(_DWORD *)(v16 + 8 * v23) >> 3)
                                                                           + 192)))(
              a1: v21,
              a2: v22,
              a3: v16 + 8 * v23);
      if ( *(_BYTE *)(v16 + 376593138) == 0 )
        goto LABEL_7;
    }
    else
    {
      *(double *)v30.m128_u64 = MEMORY[0x182771080]();
    }
    v75 = v24;
    v24 = sub_1815ACE20(
            a1: v26,
            a2: v27,
            a3: v16 + 35587856,
            a4: v25,
            a5: v28,
            a6: v29,
            a7: v30,
            a8: v31,
            a9: v32,
            a10: v33,
            a11: v34,
            a12: v35,
            a13: v36,
            a14: v37);
LABEL_7:
    v38 = *(unsigned int *)(v16 + 374385044);
    v39 = v16 + 8 * v38;
    if ( *(_BYTE *)(v16 + 376616074) != 0 )
    {
      v70 = v16 + 8 * v38;
      v69 = v38;
      v75 = v24;
      v24 = sub_1815ACE20(
              a1: v26,
              a2: v27,
              a3: v16 + 35860688,
              a4: v38,
              a5: v28,
              a6: v29,
              a7: v30,
              a8: v31,
              a9: v32,
              a10: v33,
              a11: v34,
              a12: v35,
              a13: v36,
              a14: v37);
      v39 = v70;
      LODWORD(v38) = v69;
    }
    v40 = *(_DWORD **)(v17 + 40);
    if ( (unsigned __int64)(v40 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v70 = v39;
      v69 = v38;
      v75 = v24;
      v42 = MEMORY[0x181EAA920](a1: v26, a2: v27, a3: 35859168);
      v39 = v70;
      LODWORD(v38) = v69;
      v24 = v75;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v40 + 24;
      *v40 = 35859168;
      v40[1] = 0;
      for ( i = 2; i < 24; i += 2LL )
        *(_QWORD *)&v40[i] = 0;
      v42 = (__int64)v40;
    }
    v43 = v76;
    v44 = v77;
    v45 = v71;
    v46 = v73;
    *(_DWORD *)(v42 + 84) = (unsigned __int64)(v74 - v16) >> 3;
    *(_DWORD *)(v42 + 80) = (unsigned __int64)(v46 - v16) >> 3;
    *(_DWORD *)(v42 + 76) = 24;
    *(_DWORD *)(v42 + 60) = v45;
    *(_BYTE *)(v42 + 46) = 1;
    *(_BYTE *)(v42 + 38) = 1;
    *(_BYTE *)(v42 + 37) = 1;
    *(_DWORD *)(v42 + 28) = v24;
    *(_DWORD *)(v42 + 20) = v43;
    *(_DWORD *)(v42 + 16) = v44;
    *(_DWORD *)(v42 + 12) = 1065353216;
    *(_DWORD *)(v42 + 4) = v38;
    v47 = *(_QWORD *)(v17 + 40);
    v48 = v47 + 32;
    if ( (unsigned __int64)(v47 + 32) > *(_QWORD *)(v17 + 32) )
    {
      v68 = v42;
      v70 = v39;
      v75 = v24;
      v47 = MEMORY[0x181EAA920](a1: v43, a2: v48, a3: 35587264);
      v42 = v68;
      v39 = v70;
      v24 = v75;
      v43 = v76;
      v46 = v73;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v48;
      *(_DWORD *)v47 = 35587264;
      *(_DWORD *)(v47 + 4) = 0;
      *(_QWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = 0;
      *(_QWORD *)(v47 + 24) = 0;
    }
    *(_DWORD *)(v47 + 8) = 4718589;
    v49 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v49 + 40) > *(_QWORD *)(v17 + 32) )
    {
      v67 = v47;
      v68 = v42;
      v70 = v39;
      v75 = v24;
      v49 = MEMORY[0x181EAA920](a1: v43, a2: v49, a3: 35860688);
      v47 = v67;
      v42 = v68;
      v39 = v70;
      v24 = v75;
      v43 = v76;
      v46 = v73;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v49 + 40;
      *(_DWORD *)v49 = 35860688;
      *(_DWORD *)(v49 + 4) = 0;
      *(_QWORD *)(v49 + 8) = 0;
      *(_QWORD *)(v49 + 16) = 0;
      *(_QWORD *)(v49 + 24) = 0;
      *(_QWORD *)(v49 + 32) = 0;
    }
    *(_BYTE *)(v49 + 28) = 1;
    *(_DWORD *)(v49 + 24) = 12;
    *(_DWORD *)(v49 + 20) = 32;
    *(_DWORD *)(v49 + 16) = 6;
    *(_DWORD *)(v49 + 12) = *(_DWORD *)(v16 + 374384056);
    *(_DWORD *)(v49 + 4) = *(_DWORD *)(v16 + 374384052);
    v50 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v50 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v66 = v49;
      v67 = v47;
      v68 = v42;
      v70 = v39;
      v75 = v24;
      v50 = MEMORY[0x181EAA920](a1: v43, a2: v49, a3: 35860824, a4: v47, a5: v46);
      v49 = v66;
      v47 = v67;
      v42 = v68;
      v39 = v70;
      v24 = v75;
      v43 = v76;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v50 + 24;
      *(_DWORD *)v50 = 35860824;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = 0;
    }
    *(_DWORD *)(v50 + 12) = (unsigned __int64)(v42 - v16) >> 3;
    v51 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v51 + 24) > *(_QWORD *)(v17 + 32) )
    {
      v65 = v50;
      v66 = v49;
      v67 = v47;
      v68 = v42;
      v70 = v39;
      v75 = v24;
      v51 = MEMORY[0x181EAA920](a1: v43, a2: v49, a3: 34161576);
      v50 = v65;
      v49 = v66;
      v47 = v67;
      v42 = v68;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v51 + 24;
      *(_DWORD *)v51 = 34161576;
      *(_DWORD *)(v51 + 4) = 0;
      *(_QWORD *)(v51 + 8) = 0;
      *(_QWORD *)(v51 + 16) = 0;
    }
    *(_DWORD *)(v51 + 8) = 47045786;
    v52 = (unsigned __int64)(v47 - v16) >> 3;
    *(_DWORD *)(v42 + 8) = v52;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v52 = v42 & 0xFFFFFFFFFFF80000LL;
      v59 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v59) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v59) >> 9) + 0x38) = 0;
    }
    v53 = (unsigned __int64)(v49 - v16) >> 3;
    *(_DWORD *)(v42 + 40) = v53;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v52 = v42 & 0xFFFFFFFFFFF80000LL;
      v58 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v58) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v58) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v42 + 64) = (unsigned __int64)(v50 - v16) >> 3;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v52 = v42 & 0xFFFFFFFFFFF80000LL;
      v55 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v55) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v55) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v50 + 8) = (unsigned __int64)(v51 - v16) >> 3;
    if ( (*(_DWORD *)v50 & 2) != 0 )
    {
      v56 = v50 & 0xFFFFFFFFFFF80000LL;
      v52 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
      v57 = (v50 - v52) >> 9;
      if ( *(_BYTE *)(v56 + v57 + 56) != 0 )
        *(_BYTE *)(v56 + v57 + 56) = 0;
    }
    v68 = v42;
    MEMORY[0x18718A700](a1: v43, a2: v53, a3: v42, a4: v52, a5: v16 + 373281248);
    if ( *(int *)(v17 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v68;
  }
  v60 = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(v60 + 48) > *(_QWORD *)(v17 + 32) )
  {
    v60 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v60 + 48;
    *(_DWORD *)v60 = 34101256;
    *(_DWORD *)(v60 + 4) = 0;
    *(_QWORD *)(v60 + 8) = 0;
    *(_QWORD *)(v60 + 16) = 0;
    *(_QWORD *)(v60 + 24) = 0;
    *(_QWORD *)(v60 + 32) = 0;
    *(_QWORD *)(v60 + 40) = 0;
  }
  *(_DWORD *)(v60 + 20) = 46923644;
  *(_DWORD *)(v60 + 16) = *(_DWORD *)(v16 + 374343896);
  *(_DWORD *)(v60 + 12) = (unsigned __int64)(v60 - v16) >> 3;
  v72 = v60;
  MEMORY[0x18503B9A0](a1, a2, a3: v60, a4, a5: 0);
  MEMORY[0x182769900](a1: v62, a2: v63, a3: v72, a4: v61, a5: &a15);
  goto LABEL_46;
}
