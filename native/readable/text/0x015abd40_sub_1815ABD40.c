// sub_15ABD40
// rva 0x015abd40  size 2022  section .text  group text
// window base 0x1815abd40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15ABD40(
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
        __int64 a11)
{
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ebp
  __int64 v38; // rsi
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rsi
  int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rsi
  int v63; // r9d
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  int v77; // ebp
  __int64 v78; // rsi
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 i; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rsi
  int v96; // edx
  int v97; // ecx
  int v98; // edi
  int v99; // esi
  int v100; // r8d
  int v101; // r9d
  int v102; // [rsp+0h] [rbp-68h] BYREF
  __int64 v103; // [rsp+10h] [rbp-58h]
  __int64 v104; // [rsp+18h] [rbp-50h]
  __int64 v105; // [rsp+20h] [rbp-48h]
  __int64 v106; // [rsp+28h] [rbp-40h]
  __int64 v107; // [rsp+30h] [rbp-38h]
  int v108; // [rsp+3Ch] [rbp-2Ch]
  __int64 v109; // [rsp+40h] [rbp-28h]
  __int64 v110; // [rsp+48h] [rbp-20h]
  __int64 v111; // [rsp+50h] [rbp-18h]
  int v112; // [rsp+58h] [rbp-10h]
  unsigned int v113; // [rsp+5Ch] [rbp-Ch]
  __int64 v114; // [rsp+60h] [rbp-8h]

  v111 = a3;
  v110 = a5;
  if ( (unsigned __int64)&v102 <= *(_QWORD *)(v13 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_77;
  }
  result = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)result == 0 )
  {
LABEL_77:
    v89 = sub_2771080();
    goto LABEL_75;
  }
  if ( *(int *)(v12 + 8 * result + 8) >= 2 )
  {
    if ( *(int *)(v13 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v15 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v15 == 0 )
  {
    sub_2771080();
    goto LABEL_79;
  }
  v16 = *(unsigned int *)(v12 + 8 * v15 + 4);
  v17 = v12 + 8 * v15;
  if ( (_DWORD)v16 == 0 )
  {
LABEL_79:
    sub_2771080();
    goto LABEL_80;
  }
  v109 = v17;
  sub_5A9A080(a1, a2, a3: v12 + 8 * v16);
  v21 = v111;
  v22 = *(unsigned int *)(v111 + 16);
  if ( (_DWORD)v22 == 47076820 && v13 != *(_QWORD *)(v111 + 24) )
  {
    v27 = *(unsigned int *)(v111 + 12);
    v114 = 35802688;
    if ( (_DWORD)v27 != 0 )
    {
      v28 = v12 + 8 * v27;
    }
    else
    {
      v36 = *(unsigned int *)(v111 + 8);
      if ( (_DWORD)v36 == 0 )
        goto LABEL_80;
      v77 = *(_DWORD *)(v12 + 8 * v36 + 4);
      if ( v77 == 0 )
      {
LABEL_96:
        v93 = sub_276BEE0(a1: v19, a2: v20, a3: v111, a4: v12 + 8 * v36);
        goto LABEL_71;
      }
      v28 = *(_QWORD *)(v13 + 40);
      v78 = v28 + 24;
      if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v13 + 32) )
      {
        v108 = v77;
        v107 = v12 + 8 * v22;
        v28 = sub_1EAA920(a1: v19, a2: v78, a3: v114);
        v77 = v108;
        v21 = v111;
      }
      else
      {
        *(_QWORD *)(v13 + 40) = v78;
        *(_DWORD *)v28 = 35802688;
        *(_DWORD *)(v28 + 4) = 0;
        *(_QWORD *)(v28 + 8) = 0;
        *(_QWORD *)(v28 + 16) = 0;
      }
      *(_DWORD *)(v28 + 12) = v77;
      *(_DWORD *)(v21 + 12) = (unsigned __int64)(v28 - v12) >> 3;
      if ( (*(_DWORD *)v21 & 2) != 0 )
      {
        v80 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v80) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v80) >> 9) + 0x38) = 0;
      }
    }
    v29 = (_DWORD *)v28;
    if ( (unsigned __int16)*(_DWORD *)(v12
                                     + 8LL * *(unsigned int *)(v12 + 8LL * (*(_DWORD *)v28 >> 3) + 20)
                                     + 4LL
                                     * (*(_DWORD *)(v12 + 8LL * (*(_DWORD *)v28 >> 3) + 44)
                                      & (0x62Fu >> HIBYTE(*(_DWORD *)(v12 + 8LL * (*(_DWORD *)v28 >> 3) + 44))))
                                     + 12) != 1583 )
    {
LABEL_99:
      v93 = sub_276B120();
      goto LABEL_71;
    }
    while ( 1 )
    {
      v32 = *v29 >> 3;
      v33 = *(unsigned int *)(v12 + 8 * v32 + 44);
      v34 = v12 + 8LL * *(unsigned int *)(v12 + 8 * v32 + 20);
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                       + *(_QWORD *)(v12
                                                                   + 8 * v32
                                                                   + HIWORD(*(_DWORD *)(v34
                                                                                      + 4LL
                                                                                      * ((unsigned int)v33
                                                                                       & (0x62Fu >> HIBYTE(*(_DWORD *)(v12 + 8 * v32 + 44))))
                                                                                      + 12))
                                                                   + 24)))(
        a1: v34,
        a2: v33,
        a3: v29);
      v21 = v111;
      v35 = *(unsigned int *)(v111 + 16);
      if ( (_DWORD)v35 != 47076820 || v13 == *(_QWORD *)(v111 + 24) )
        break;
      v30 = *(unsigned int *)(v111 + 12);
      if ( (_DWORD)v30 != 0 )
      {
        v31 = v12 + 8 * v30;
      }
      else
      {
        v36 = *(unsigned int *)(v111 + 8);
        if ( (_DWORD)v36 == 0 )
          goto LABEL_80;
        v37 = *(_DWORD *)(v12 + 8 * v36 + 4);
        if ( v37 == 0 )
          goto LABEL_96;
        v31 = *(_QWORD *)(v13 + 40);
        v38 = v31 + 24;
        if ( (unsigned __int64)(v31 + 24) > *(_QWORD *)(v13 + 32) )
        {
          v108 = v37;
          v107 = v12 + 8 * v35;
          v31 = sub_1EAA920(a1: v19, a2: v38, a3: v114);
          v37 = v108;
          v21 = v111;
        }
        else
        {
          *(_QWORD *)(v13 + 40) = v38;
          *(_DWORD *)v31 = 35802688;
          *(_DWORD *)(v31 + 4) = 0;
          *(_QWORD *)(v31 + 8) = 0;
          *(_QWORD *)(v31 + 16) = 0;
        }
        *(_DWORD *)(v31 + 12) = v37;
        *(_DWORD *)(v21 + 12) = (unsigned __int64)(v31 - v12) >> 3;
        if ( (*(_DWORD *)v21 & 2) != 0 )
        {
          v39 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v39) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v39) >> 9) + 0x38) = 0;
        }
      }
      v29 = (_DWORD *)v31;
      if ( (unsigned __int16)*(_DWORD *)(v12
                                       + 8LL * *(unsigned int *)(v12 + 8LL * (*(_DWORD *)v31 >> 3) + 20)
                                       + 4LL
                                       * (*(_DWORD *)(v12 + 8LL * (*(_DWORD *)v31 >> 3) + 44)
                                        & (0x62Fu >> HIBYTE(*(_DWORD *)(v12 + 8LL * (*(_DWORD *)v31 >> 3) + 44))))
                                       + 12) != 1583 )
        goto LABEL_99;
    }
  }
  v23 = *(unsigned int *)(v21 + 16);
  if ( (_DWORD)v23 == 0 )
  {
LABEL_80:
    v93 = sub_276BEE0();
LABEL_71:
    v109 = v93;
    v81 = v111;
    v82 = *(unsigned int *)(v111 + 8);
    if ( (_DWORD)v82 != 0 )
    {
      v83 = *(unsigned int *)(v12 + 8 * v82 + 4);
      v84 = v12 + 8 * v82;
      if ( (_DWORD)v83 != 0 )
      {
        v107 = v84;
        sub_5A98320(a1: v94, a2: v95, a3: v12 + 8 * v83, a4: v12 + 8 * v83, a5: 1);
        for ( i = v109; ; i = v107 )
        {
          v89 = sub_2769900(a1: v86, a2: v87, a3: i, a4: v85, a5: &a7);
LABEL_75:
          v107 = v89;
          sub_15ACB80(a1: v91, a2: v92, a3: v111, a4: v90, a5: v12 + 376614520);
        }
      }
    }
    else
    {
      sub_2771080();
    }
    sub_2771080(a1: v94, a2: v95, a3: v81, a4: v110, a5: v84);
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
    return sub_15AC540(a1: v98, a2: v99, a3: v96, a4: v97, a5: v100, a6: v101, a7);
  }
  if ( *(int *)(v12 + 8 * v23 + 8) < 2 )
  {
    if ( *(_DWORD *)(v21 + 16) != 47076820 || v13 != *(_QWORD *)(v21 + 24) )
    {
      *(_DWORD *)(v21 + 16) = 47076820;
      __faststorefence();
      if ( (*(_DWORD *)v21 & 2) != 0 )
      {
        v79 = (v111 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v111 & 0xFFFFFFFFFFF80000LL) + ((v111 - v79) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v111 & 0xFFFFFFFFFFF80000LL) + ((v111 - v79) >> 9) + 0x38) = 0;
      }
      sub_15ACAE0(a1: v19, a2: v20, a3: v111);
      v43 = v111;
      v44 = *(unsigned int *)(v111 + 8);
      if ( (_DWORD)v44 != 0 )
      {
        v45 = *(unsigned int *)(v12 + 8 * v44 + 4);
        v46 = v12 + 8 * v44;
        if ( (_DWORD)v45 != 0 )
        {
          v107 = v46;
          sub_5A98320(a1: v41, a2: v42, a3: v12 + 8 * v45, a4: v40, a5: 1);
          if ( v110 != v12 )
          {
            v51 = *(unsigned int *)(v110 + 28);
            if ( (_DWORD)v51 != 0 )
            {
              v52 = *(unsigned int *)(v12 + 8 * v51 + 8);
              v53 = v12 + 8 * v52;
              if ( (_DWORD)v52 == 0 )
                return sub_1815AC244(a1: v48, a2: v49, a3: 0, a4: v47, a5: v110, a6: v50, a7, a8, a9, a10, a11);
              v54 = *(unsigned int *)(v12 + 8 * v52 + 28);
              if ( (_DWORD)v54 == 0 )
              {
                v106 = v53;
                v89 = sub_276BEE0();
                goto LABEL_75;
              }
              v55 = *(unsigned int *)(v12 + 8 * v54 + 44);
              v56 = v12 + 8 * v55;
              if ( (_DWORD)v55 == 0 )
              {
                v89 = sub_276BEE0(a1: v48, a2: v49, a3: v53, a4: v56);
                goto LABEL_75;
              }
              v106 = v53;
              v105 = v12 + 8 * v55;
              sub_15ABD40(a1: v48, a2: v49, a3: v12 + 8 * v55, a4: v56, a5: v53, a6: v50, a7: v102);
              v60 = sub_4F66F40(a1: v58, a2: v59, a3: v110, a4: v57, a5: 1);
              if ( v60 != v12 )
              {
                v105 = v60;
                v64 = *(unsigned int *)(v60 + 8);
                v113 = *(_DWORD *)(v60 + 8);
                v65 = 0;
                while ( (int)v64 > (int)v65 )
                {
                  if ( (unsigned int)v64 <= (unsigned int)v65 )
                  {
                    v112 = v65;
                    v89 = sub_276CFE0(a1: v61, a2: v62, a3: (unsigned int)v65, a4: v64, a5: v113);
                    goto LABEL_75;
                  }
                  v66 = *(unsigned int *)(v60 + 4 * v65 + 12);
                  v67 = v12 + 8 * v66;
                  if ( (_DWORD)v66 == 0 || (_DWORD)(v68 = *(unsigned int *)(v12 + 8 * v66 + 28)) == 0 )
                  {
                    v104 = v67;
                    v112 = v65;
                    v89 = sub_276BEE0();
                    goto LABEL_75;
                  }
                  v69 = *(unsigned int *)(v12 + 8 * v68 + 44);
                  v70 = v12 + 8 * v69;
                  if ( (_DWORD)v69 == 0 )
                  {
                    v89 = sub_276BEE0(a1: v61, a2: v70, a3: v60);
                    goto LABEL_75;
                  }
                  v112 = v65;
                  v104 = v67;
                  v103 = v12 + 8 * v69;
                  sub_15ABD40(a1: v61, a2: v70, a3: v12 + 8 * v69, a4: v64, a5: v67, a6: v63, a7: v102);
                  v65 = (unsigned int)(v112 + 1);
                  v64 = v113;
                  v60 = v105;
                }
                v112 = v65;
                sub_15ACA60(a1: v61, a2: v62, a3: v110);
                result = sub_15ACB80(a1: v72, a2: v73, a3: v111, a4: v71, a5: v12 + 376614584);
                if ( *(int *)(v13 + 16) <= 0 )
                  return sub_277F280();
                return result;
              }
            }
          }
LABEL_85:
          v89 = sub_276BEE0();
          goto LABEL_75;
        }
LABEL_84:
        sub_2771080(a1: v41, a2: v42, a3: v43, a4: v40, a5: v46);
        goto LABEL_85;
      }
LABEL_83:
      sub_2771080();
      goto LABEL_84;
    }
    v74 = *(unsigned int *)(v21 + 8);
    if ( (_DWORD)v74 != 0 )
    {
      v75 = *(unsigned int *)(v12 + 8 * v74 + 4);
      v76 = v12 + 8 * v74;
      if ( (_DWORD)v75 != 0 )
      {
        v107 = v76;
        result = sub_5A98320(a1: v19, a2: v20, a3: v12 + 8 * v75, a4: v18, a5: 1);
        if ( *(int *)(v13 + 16) <= 0 )
          return sub_277F280();
        return result;
      }
    }
    else
    {
      sub_2771080();
    }
    sub_2771080(a1: v19, a2: v20, a3: v21, a4: v18, a5: v76);
    goto LABEL_99;
  }
  v24 = *(unsigned int *)(v21 + 8);
  if ( (_DWORD)v24 == 0 )
  {
    sub_2771080();
    goto LABEL_82;
  }
  v25 = *(unsigned int *)(v12 + 8 * v24 + 4);
  v26 = v12 + 8 * v24;
  if ( (_DWORD)v25 == 0 )
  {
LABEL_82:
    sub_2771080(a1: v19, a2: v20, a3: v21, a4: v18, a5: v26);
    goto LABEL_83;
  }
  v109 = v26;
  result = sub_5A98320(a1: v19, a2: v20, a3: v12 + 8 * v25, a4: v18, a5: 1);
  if ( *(int *)(v13 + 16) <= 0 )
    return sub_277F280();
  return result;
}
