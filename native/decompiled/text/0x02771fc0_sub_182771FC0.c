// sub_182771FC0
// rva 0x02771fc0  size 166  section .text  group text
// window base 0x182771fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_182771FC0(
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
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm8
  __m128i v20; // xmm9
  __m128i v21; // xmm10
  __m128i v22; // xmm11
  __m128i v23; // xmm12
  __m128i v24; // xmm13
  __m128i v25; // xmm14
  __m128i v26; // xmm15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r11
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // r8
  __m128i v38; // xmm7
  __m128i v39; // xmm6
  __m128i v40; // xmm5
  __m128i v41; // xmm4
  __m128i v42; // xmm3
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // [rsp-8h] [rbp-190h] BYREF
  __int64 v53; // [rsp+0h] [rbp-188h]
  __int64 v54; // [rsp+8h] [rbp-180h]
  __m128i v55; // [rsp+10h] [rbp-178h]
  __m128i v56; // [rsp+20h] [rbp-168h]
  __m128i v57; // [rsp+30h] [rbp-158h]
  __m128i v58; // [rsp+40h] [rbp-148h]
  __m128i v59; // [rsp+50h] [rbp-138h]
  __m128i v60; // [rsp+60h] [rbp-128h]
  __m128i v61; // [rsp+70h] [rbp-118h]
  __m128i v62; // [rsp+80h] [rbp-108h]
  __m128i v63; // [rsp+90h] [rbp-F8h]
  __m128i v64; // [rsp+A0h] [rbp-E8h]
  __m128i v65; // [rsp+B0h] [rbp-D8h]
  __m128i v66; // [rsp+C0h] [rbp-C8h]
  __m128i v67; // [rsp+D0h] [rbp-B8h]
  __m128i v68; // [rsp+E0h] [rbp-A8h]
  __m128i v69; // [rsp+F0h] [rbp-98h]
  __m128i v70; // [rsp+100h] [rbp-88h]
  __int64 v71; // [rsp+110h] [rbp-78h]
  __int64 v72; // [rsp+118h] [rbp-70h]
  __int64 v73; // [rsp+120h] [rbp-68h]
  __int64 v74; // [rsp+128h] [rbp-60h]
  __int64 v75; // [rsp+130h] [rbp-58h]
  __int64 v76; // [rsp+138h] [rbp-50h]
  __int64 v77; // [rsp+140h] [rbp-48h]
  __int64 v78; // [rsp+148h] [rbp-40h]
  __int64 v79; // [rsp+150h] [rbp-38h]
  __int64 v80; // [rsp+158h] [rbp-30h]
  __int64 v81; // [rsp+160h] [rbp-28h]
  __int64 v82; // [rsp+168h] [rbp-20h]
  char v83; // [rsp+170h] [rbp-18h]
  _BYTE v84[12]; // [rsp+178h] [rbp-10h] BYREF
  int v85; // [rsp+184h] [rbp-4h]

  if ( (_DWORD)a3 == 0 )
    goto LABEL_9;
  v27 = *(unsigned int *)(v17 + 376668216);
  if ( (_DWORD)v27 == 47076562 )
    v28 = v17 + 35127280;
  else
    v28 = v17 + 8 * v27;
  if ( v28 != v17 )
  {
    a4 = *(_DWORD *)v28 >> 3;
    if ( (_DWORD)a4 != 4261917 )
      goto LABEL_17;
  }
  if ( v28 == v17 )
    goto LABEL_15;
  if ( *(_BYTE *)(v28 + 4) == 0 )
  {
LABEL_9:
    if ( *(int *)(v18 + 316) < 1 && *(_DWORD *)(v18 + 20) == 1 || v18 == *(_QWORD *)(v17 + 376613408) )
      return;
    v85 = a3;
    MEMORY[0x1828C1C40](a1, a2, a3: v17 + 369911904);
LABEL_15:
    v85 = a3;
    sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v83);
  }
  v85 = a3;
  *(double *)a7.m128_u64 = MEMORY[0x1828C1C40](a1, a2, a3: v17 + 372000144);
LABEL_17:
  v29 = sub_18276EAE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v83);
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
  v82 = v15;
  v71 = v16;
  v72 = v34;
  v73 = v35;
  v74 = v36;
  v75 = v37;
  v76 = v32;
  v77 = v33;
  v78 = v14;
  v79 = v30;
  v80 = v31;
  v81 = v29;
  v55 = v26;
  v56 = v25;
  v57 = v24;
  v58 = v23;
  v59 = v22;
  v60 = v21;
  v61 = v20;
  v62 = v19;
  v63 = v38;
  v64 = v39;
  v65 = v40;
  v66 = v41;
  v67 = v42;
  v68 = v43;
  v69 = v44;
  v70 = v45;
  if ( (unsigned __int64)&v52 > *(_QWORD *)(v18 + 8) )
  {
    v54 = v30;
    v46 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v46 + 40) > *(_QWORD *)(v18 + 32) )
    {
      v46 = MEMORY[0x181EAA920](a1: v32, a2: v33, a3: 36206872);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v46 + 40;
      *(_DWORD *)v46 = 36206872;
      *(_DWORD *)(v46 + 4) = 0;
      *(_QWORD *)(v46 + 8) = 0;
      *(_QWORD *)(v46 + 16) = 0;
      *(_QWORD *)(v46 + 24) = 0;
      *(_QWORD *)(v46 + 32) = 0;
    }
    *(_DWORD *)(v46 + 20) = 46923644;
    *(_DWORD *)(v46 + 16) = *(_DWORD *)(v17 + 374343896);
    *(_DWORD *)(v46 + 12) = (unsigned __int64)(v46 - v17) >> 3;
    v53 = v46;
    MEMORY[0x18503B9A0](a1: v32, a2: v33, a3: v46, a4: v31, a5: 0);
    v50 = v53;
    *(_DWORD *)(v53 + 8) = (unsigned __int64)(v54 - v17) >> 3;
    if ( (*(_DWORD *)v50 & 2) != 0 )
      goto LABEL_22;
    while ( 1 )
    {
      v50 = sub_1827697E0(a1: v48, a2: v49, a3: (_DWORD *)v50, a4: v47, a5: (__int64)v84);
LABEL_22:
      v47 = v50 & 0xFFFFFFFFFFF80000LL;
      v51 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v51) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v51) >> 9) + 0x38) = 0;
    }
  }
  MEMORY[0x181EB84E0]();
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
  sub_182772280();
}
