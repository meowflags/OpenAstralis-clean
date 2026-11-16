// sub_18277E660
// rva 0x0277e660  size 2845  section .text  group text
// window base 0x18277e660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277E660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 *v8; // rbx
  double v9; // xmm0_8
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm6
  __m128 v18; // xmm7
  __m128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r10
  int v24; // eax
  unsigned int v25; // r11d
  int v26; // r11d
  int v27; // eax
  __int64 v28; // r10
  unsigned int v29; // eax
  unsigned int v30; // r11d
  int v31; // edx
  int v32; // ebx
  __m128 v33; // xmm1
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r10
  __int64 v38; // r10
  __int64 *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  double v42; // xmm0_8
  double v43; // xmm1_8
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 *v46; // rdx
  double v47; // xmm0_8
  __int64 v48; // rdx
  __int64 *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 *v119; // rdx
  double v120; // xmm0_8
  __int64 v121; // rax
  int v123; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v124; // [rsp+20h] [rbp-D8h]
  __int64 v125; // [rsp+28h] [rbp-D0h]
  char v126[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v127; // [rsp+38h] [rbp-C0h]
  __int64 v128; // [rsp+40h] [rbp-B8h]
  int v129; // [rsp+48h] [rbp-B0h]
  int v130; // [rsp+4Ch] [rbp-ACh]
  __int64 *v131; // [rsp+50h] [rbp-A8h]
  __int64 v132; // [rsp+58h] [rbp-A0h]
  __int64 *v133; // [rsp+60h] [rbp-98h]
  __int64 v134; // [rsp+68h] [rbp-90h]
  __int64 v135; // [rsp+70h] [rbp-88h]
  unsigned int v136; // [rsp+7Ch] [rbp-7Ch]
  int i; // [rsp+80h] [rbp-78h]
  unsigned int v138; // [rsp+84h] [rbp-74h]
  int v139; // [rsp+88h] [rbp-70h]
  unsigned int v140; // [rsp+8Ch] [rbp-6Ch]
  __int64 v141; // [rsp+90h] [rbp-68h]
  int v142; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v143; // [rsp+A0h] [rbp-58h]
  unsigned int v144; // [rsp+A4h] [rbp-54h]
  unsigned int v145; // [rsp+A8h] [rbp-50h]
  unsigned int v146; // [rsp+ACh] [rbp-4Ch]
  __int64 v147; // [rsp+B0h] [rbp-48h]
  __int64 v148; // [rsp+B8h] [rbp-40h]
  __int64 *v149; // [rsp+C0h] [rbp-38h]
  unsigned int v150; // [rsp+CCh] [rbp-2Ch]
  void (__fastcall *v151)(__int64, __int64, __int64 *, __int64 *); // [rsp+D0h] [rbp-28h]
  void (__fastcall *v152)(__int64, __int64, char *, char *); // [rsp+D8h] [rbp-20h]
  __int64 *v153; // [rsp+E0h] [rbp-18h]
  __int64 v154; // [rsp+E8h] [rbp-10h]
  __int64 v155; // [rsp+F0h] [rbp-8h]

  v125 = a3;
  if ( (unsigned __int64)&v123 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_98;
  v8 = (__int64 *)v126;
  v153 = (__int64 *)v126;
  v9 = *(double *)(v6 + 376178920);
  LODWORD(v3) = (_DWORD)MEMORY[0x10E44C40];
  v152 = (void (__fastcall *)(__int64, __int64, char *, char *))MEMORY[0x10E44C40];
  if ( v9 == 0.0 )
  {
    MEMORY[0x10E44C40](a1, a2, a3, a4: v126, a5: v9);
    v8 = v153;
    *(double *)(v6 + 376178920) = MEMORY[0x11253A38] / (double)*v153;
  }
  v151 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x10E44170];
  MEMORY[0x10E44170](a1, a2, a3: MEMORY[0x10E44170], a4: v8);
  *(double *)v19.m128_u64 = (double)*v153 * *(double *)(v6 + 376178920);
  v20 = (__int64)*(double *)v19.m128_u64;
  if ( (__int64)*(double *)v19.m128_u64 == MEMORY[0x11253A40] )
  {
    if ( __builtin_isnan(*(double *)v19.m128_u64) )
    {
      v20 = 0;
    }
    else if ( *(double *)v19.m128_u64 > 0.0 )
    {
      v20 = ~v20;
    }
  }
  v153 = (__int64 *)v20;
  v150 = 1;
  v21 = -1;
  v22 = -1;
  v149 = (__int64 *)v20;
  while ( 2 )
  {
    v33.m128_i128 = 0;
    if ( *(int *)(v7 + 336) < 1 )
    {
      v148 = v21;
      v147 = v22;
      MEMORY[0x1828C1C40](a1: v21, a2: v10, a3: v6 + 368616744, a4: *(double *)v19.m128_u64, a5: 0.0);
LABEL_98:
      MEMORY[0x181EB83C0]();
      goto LABEL_99;
    }
    v23 = *(_QWORD *)(v6 + 376178832);
    if ( v23 == 0 )
    {
      v30 = 0;
      v146 = 0;
      v145 = 0;
      v144 = 0;
      goto LABEL_40;
    }
    if ( v23 == v7 )
    {
      v4 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v24 = *(_DWORD *)(v23 + 20);
      v25 = *(_DWORD *)(v23 + 324);
      if ( v25 == 1 )
      {
        v4 = 0;
        v26 = 0;
        v27 = 1;
      }
      else if ( v25 == 2 )
      {
        v4 = 1;
        v26 = 0;
        v27 = 0;
      }
      else
      {
        switch ( v24 )
        {
          case 1:
          case 4:
            if ( *(int *)(v23 + 16) >= 1 )
            {
              *(_DWORD *)(v23 + 16) = 0;
              __faststorefence();
            }
            v4 = 0;
            v26 = 0;
            v27 = 1;
            break;
          case 2:
            v4 = 0;
            v26 = 1;
            v27 = 0;
            break;
          case 3:
            v4 = 0;
            if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v23 + 20), 3, 2) == 3 )
            {
              v26 = 1;
              v27 = 0;
            }
            else
            {
              v26 = 0;
              v27 = 1;
            }
            break;
          default:
            goto LABEL_103;
        }
      }
    }
    v28 = *(_QWORD *)(v23 + 256);
    LODWORD(v3) = 1;
    v136 = v27;
    v29 = v26;
    v30 = v136;
    while ( v28 != 0 )
    {
      LODWORD(v3) = v3 + 1;
      if ( v28 == v7 )
        goto LABEL_29;
      v31 = *(_DWORD *)(v28 + 20);
      v32 = *(_DWORD *)(v28 + 324);
      v10 = v30 + 1;
      if ( v32 == 1 )
      {
        ++v30;
        goto LABEL_29;
      }
      if ( v32 == 2 )
      {
        ++v4;
        goto LABEL_29;
      }
      v136 = *(_DWORD *)(v28 + 324);
      if ( v31 != 1 )
      {
        if ( v31 == 2 )
        {
          ++v29;
          goto LABEL_29;
        }
        if ( v31 == 3 )
        {
          v11 = v29;
          if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v28 + 20), 3, 2) == 3 )
            ++v29;
          else
            ++v30;
          goto LABEL_29;
        }
        if ( v31 != 4 )
          goto LABEL_105;
      }
      if ( *(int *)(v28 + 16) >= 1 )
      {
        *(_DWORD *)(v28 + 16) = 0;
        __faststorefence();
      }
      ++v30;
LABEL_29:
      v20 = *(_QWORD *)(v28 + 256);
      if ( *(int *)(v7 + 16) <= 0 )
      {
        v29 = sub_18277F280(a1: v21, a2: v10, a3: v20);
        v28 = v20;
      }
      else
      {
        v28 = *(_QWORD *)(v28 + 256);
      }
    }
    v146 = v4;
    v145 = v29;
    v144 = v3;
LABEL_40:
    if ( v30 == 0 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        goto LABEL_97;
      return v144;
    }
    v136 = v30;
    if ( v22 == -1 || v21 == -1 )
    {
      v34 = *(unsigned int *)(v6 + 376668800);
      v35 = v6 + 52423880;
      if ( (_DWORD)v34 == 47076562 )
        v36 = v6 + 52423880;
      else
        v36 = v6 + 8 * v34;
      if ( v36 != v6 && *(_DWORD *)v36 >> 3 != 4260452 )
        goto LABEL_101;
      if ( v36 != v6 )
      {
        v22 = *(_QWORD *)(v36 + 8);
        v37 = *(unsigned int *)(v6 + 376668832);
        if ( (_DWORD)v37 == 47076562 )
          v38 = v6 + 52423880;
        else
          v38 = v6 + 8 * v37;
        if ( v38 == v6 || (_DWORD)(v35 = *(_DWORD *)v38 >> 3) == 4260452 )
        {
          if ( v38 != v6 )
          {
            v135 = *(_QWORD *)(v38 + 8);
            goto LABEL_53;
          }
LABEL_100:
          v148 = v21;
          sub_18276EFE0(a1: v21, a2: v10, a3: v35, a4: v22, a5: v11, a6: v12, a7: v123);
LABEL_101:
          v148 = v21;
          v147 = v22;
          sub_18276EAE0(
            a1: v21,
            a2: v10,
            a3: v35,
            a4: v22,
            a5: v11,
            a6: v12,
            a7: v19,
            a8: v33,
            a9: v13,
            a10: v14,
            a11: v15,
            a12: v16,
            a13: v17,
            a14: v18,
            a15: v123);
        }
        v148 = v21;
        v24 = sub_18276EAE0(
                a1: v21,
                a2: v10,
                a3: v35,
                a4: v22,
                a5: v11,
                a6: v12,
                a7: v19,
                a8: v33,
                a9: v13,
                a10: v14,
                a11: v15,
                a12: v16,
                a13: v17,
                a14: v18,
                a15: v123);
LABEL_103:
        v143 = v25;
        v142 = v24;
        v141 = v23;
        v140 = 0;
        v139 = 0;
        v138 = 0;
        for ( i = 1; ; i = v3 )
        {
          v148 = v21;
          v147 = v22;
          v29 = MEMORY[0x1828C1C40](
                  a1: v21,
                  a2: v10,
                  a3: v6 + 366372264,
                  a4: *(double *)v19.m128_u64,
                  a5: *(double *)v33.m128_u64);
LABEL_105:
          v154 = v5;
          v143 = v136;
          v142 = v31;
          v141 = v28;
          v140 = v30;
          v139 = v4;
          v138 = v29;
        }
      }
LABEL_99:
      v148 = v21;
      v147 = v22;
      sub_18276EFE0(a1: v21, a2: v10, a3: v35, a4: v22, a5: v11, a6: v12, a7: v123);
      goto LABEL_100;
    }
    v135 = v21;
LABEL_53:
    v134 = v22;
    v39 = (__int64 *)v126;
    v133 = (__int64 *)v126;
    if ( *(double *)v33.m128_u64 == *(double *)(v6 + 376178920) )
    {
      LODWORD(v3) = (_DWORD)v152;
      v152(a1: v21, a2: v10, a3: v126, a4: v126);
      v39 = v133;
      *(double *)(v6 + 376178920) = MEMORY[0x11253A38] / (double)*v133;
    }
    v151(a1: v21, a2: v10, a3: v39, a4: v39);
    v42 = *(double *)(v6 + 376178920);
    v43 = (double)*v133 * v42;
    v44 = (__int64)v43;
    if ( (__int64)v43 == MEMORY[0x11253A40] )
    {
      if ( __builtin_isnan(v43) )
      {
        v44 = 0;
      }
      else if ( v43 > 0.0 )
      {
        v44 = ~v44;
      }
    }
    v45 = v44 - (_QWORD)v153;
    if ( v134 < 1 && v135 < 1 )
    {
      v155 = v5;
      v133 = v149;
      v132 = v45;
      goto LABEL_70;
    }
    v46 = (__int64 *)v126;
    v131 = (__int64 *)v126;
    v132 = v45;
    if ( v42 == 0.0 )
    {
      v152(a1: v40, a2: v41, a3: v126, a4: v126);
      v46 = v131;
      *(double *)(v6 + 376178920) = MEMORY[0x11253A38] / (double)*v131;
    }
    v151(a1: v40, a2: v41, a3: v46, a4: v46);
    v47 = (double)*v131 * *(double *)(v6 + 376178920);
    v48 = (__int64)v47;
    if ( (__int64)v47 == MEMORY[0x11253A40] )
    {
      if ( __builtin_isnan(v47) )
      {
        v48 = 0;
      }
      else if ( v47 > 0.0 )
      {
        v48 = ~v48;
      }
    }
    v49 = (__int64 *)(v48 - (_QWORD)v149);
    v3 = v135 - v132;
    if ( v134 < 1 || v134 - (__int64)v49 >= 0 )
    {
      if ( v135 < 1 )
      {
        v155 = v5;
        v133 = v149;
      }
      else
      {
        if ( v3 < 0 )
          goto LABEL_62;
        v155 = v5;
        v133 = v149;
      }
      goto LABEL_70;
    }
LABEL_62:
    v131 = v49;
    if ( v134 >= 1 )
      JUMPOUT(0x304EC7AF1LL);
    if ( v135 >= 1 )
      JUMPOUT(0x304EC7B0ALL);
    v130 = 0;
    v129 = 0;
    v128 = v135 - v132;
    v124 = v6 + 376612880;
    MEMORY[0x182084840](a1: 0, a2: v6 + 376612880, a3: v6 + 376612880, a4: 0, a5: v6 + 365427216);
    v53 = MEMORY[0x182084840](a1: v51, a2: v52, a3: v124, a4: v50, a5: v125);
    v57 = MEMORY[0x182084840](a1: v55, a2: v56, a3: v53, a4: v54, a5: v6 + 372668240);
    v61 = MEMORY[0x1820845C0](a1: v59, a2: v60, a3: v57, a4: v58, a5: v134);
    v65 = MEMORY[0x182084840](a1: v63, a2: v64, a3: v61, a4: v62, a5: v6 + 372901904);
    v69 = MEMORY[0x182084840](a1: v67, a2: v68, a3: v65, a4: v66, a5: v6 + 366594360);
    v73 = MEMORY[0x1820845C0](a1: v71, a2: v72, a3: v69, a4: v70, a5: v132);
    v77 = MEMORY[0x182084840](a1: v75, a2: v76, a3: v73, a4: v74, a5: v6 + 372901952);
    MEMORY[0x1820841E0](a1: v78, a2: v79, a3: v77);
    MEMORY[0x182084840](a1: v81, a2: v82, a3: v124, a4: v80, a5: v6 + 373046512);
    v86 = MEMORY[0x182084560](a1: v84, a2: v85, a3: v124, a4: v83, a5: v150);
    v90 = MEMORY[0x182084840](a1: v88, a2: v89, a3: v86, a4: v87, a5: v6 + 373046776);
    v94 = MEMORY[0x182084560](a1: v92, a2: v93, a3: v90, a4: v91, a5: v145);
    v98 = MEMORY[0x182084840](a1: v96, a2: v97, a3: v94, a4: v95, a5: v6 + 373046664);
    v102 = MEMORY[0x182084560](a1: v100, a2: v101, a3: v98, a4: v99, a5: v146);
    v106 = MEMORY[0x182084840](a1: v104, a2: v105, a3: v102, a4: v103, a5: v6 + 373045912);
    v110 = MEMORY[0x182084560](a1: v108, a2: v109, a3: v106, a4: v107, a5: v136);
    v114 = MEMORY[0x182084840](a1: v112, a2: v113, a3: v110, a4: v111, a5: v6 + 365347544);
    MEMORY[0x1820841E0](a1: v115, a2: v116, a3: v114);
    v119 = (__int64 *)v126;
    v127 = (__int64 *)v126;
    if ( *(double *)(v6 + 376178920) == 0.0 )
    {
      v152(a1: v117, a2: v118, a3: v126, a4: v126);
      v119 = v127;
      *(double *)(v6 + 376178920) = MEMORY[0x11253A38] / (double)*v127;
    }
    v151(a1: v117, a2: v118, a3: v119, a4: v119);
    v120 = (double)*v127 * *(double *)(v6 + 376178920);
    v121 = (__int64)v120;
    if ( (__int64)v120 == MEMORY[0x11253A40] )
    {
      if ( __builtin_isnan(v120) )
      {
        v121 = 0;
      }
      else if ( v120 > 0.0 )
      {
        v121 = ~v121;
      }
    }
    if ( v135 < 1 )
    {
      v133 = (__int64 *)v121;
LABEL_70:
      sub_18277F220(a1: v40, a2: v41, a3: v132);
      ++v150;
      v21 = v135;
      v22 = v134;
      v155 = v5;
      v149 = v133;
      continue;
    }
    break;
  }
  LODWORD(v3) = v128;
  if ( v128 >= 0 )
  {
    v133 = (__int64 *)v121;
    goto LABEL_70;
  }
  v128 = v121;
  MEMORY[0x1828C1C40](a1: v40, a2: v41, a3: v6 + 367380880);
LABEL_97:
  sub_18277F280(a1: v21, a2: v10, a3: v20);
  return v144;
}
