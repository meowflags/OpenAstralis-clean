// sub_1ECFD80
// rva 0x01ecfd80  size 1532  section .text  group text
// window base 0x181ecfd80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1ECFD80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // cl
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 i; // rax
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rcx
  int v80; // edx
  int v81; // ecx
  int v82; // edi
  int v83; // esi
  int v84; // r8d
  int v85; // r9d
  char v86; // [rsp+0h] [rbp-68h] BYREF
  __int64 v87; // [rsp+10h] [rbp-58h]
  __int64 v88; // [rsp+18h] [rbp-50h]
  __int64 v89; // [rsp+20h] [rbp-48h]
  __int64 v90; // [rsp+28h] [rbp-40h]
  __int64 v91; // [rsp+30h] [rbp-38h]
  __int64 v92; // [rsp+38h] [rbp-30h]
  unsigned int v93; // [rsp+44h] [rbp-24h]
  __int64 v94; // [rsp+48h] [rbp-20h]
  __int64 v95; // [rsp+50h] [rbp-18h]
  __int64 v96; // [rsp+58h] [rbp-10h]
  unsigned int v97; // [rsp+60h] [rbp-8h]
  unsigned int v98; // [rsp+64h] [rbp-4h]

  v96 = a3;
  if ( (unsigned __int64)&v86 <= *(_QWORD *)(v10 + 8) )
  {
    v95 = a6;
    v94 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v86);
    goto LABEL_56;
  }
  v11 = *(unsigned int *)(v9 + 376660144);
  if ( (_DWORD)v11 == 47076562 )
    v12 = v9 + 35127280;
  else
    v12 = v9 + 8 * v11;
  if ( v12 != v9 && *(_DWORD *)v12 >> 3 != 4261917 )
    goto LABEL_57;
  if ( v12 == v9 )
  {
LABEL_56:
    v95 = a6;
    v94 = a5;
    sub_2771080();
LABEL_57:
    v95 = a6;
    v94 = a5;
    sub_276FC00(a1, a2, a3: v12, a4: v12, a5: v9 + 34095336);
LABEL_58:
    v95 = a6;
    v94 = a5;
    sub_2771080();
    goto LABEL_59;
  }
  v13 = *(_BYTE *)(v12 + 4);
  v14 = *(unsigned int *)(a6 + 28);
  v93 = *(_DWORD *)(a6 + 28);
  if ( v13 == 0 )
  {
    v95 = a6;
    v94 = a5;
    goto LABEL_16;
  }
  if ( (_DWORD)v14 == 0 )
    goto LABEL_58;
  v15 = *(unsigned int *)(v9 + 8 * v14 + 60);
  v7 = v9 + 8 * v15;
  if ( (_DWORD)v15 == 0 )
  {
LABEL_59:
    v92 = v7;
    v95 = a6;
    v94 = a5;
    sub_2771080();
    goto LABEL_60;
  }
  v16 = *(_DWORD *)(v9 + 8 * v15) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v9
                                   + 8LL * *(unsigned int *)(v9 + 8 * v16 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v9 + 8 * v16 + 44)
                                    & (0x1839u >> HIBYTE(*(_DWORD *)(v9 + 8 * v16 + 44))))
                                   + 12) != 6201 )
  {
LABEL_60:
    v95 = a6;
    v94 = a5;
    sub_2770780();
LABEL_61:
    sub_2771080();
    goto LABEL_62;
  }
  v95 = a6;
  v94 = a5;
  v17 = *(_DWORD *)(v9 + 8 * v15) >> 3;
  v18 = *(unsigned int *)(v9 + 8 * v17 + 44);
  v19 = v9 + 8LL * *(unsigned int *)(v9 + 8 * v17 + 20);
  v20 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                          + *(_QWORD *)(v9
                                                                      + 8 * v17
                                                                      + HIWORD(*(_DWORD *)(v19
                                                                                         + 4LL
                                                                                         * ((unsigned int)v18
                                                                                          & (0x843u >> HIBYTE(*(_DWORD *)(v9 + 8 * v17 + 44))))
                                                                                         + 12))
                                                                      + 72));
  v92 = v7;
  v21 = v20(a1: v19, a2: v18, a3: v7);
  v23 = *(unsigned int *)(v96 + 8);
  v24 = v9 + 8 * v23;
  if ( (_DWORD)v23 != 0 )
    v25 = v9 + 8 * v23;
  else
    v25 = v9 + 372410864;
  v26 = *(_QWORD *)(v10 + 40);
  v27 = v26 + 16;
  if ( (unsigned __int64)(v26 + 16) > *(_QWORD *)(v10 + 32) )
  {
    v91 = v25;
    v90 = v24;
    v89 = v21;
    v28 = sub_1EAA840(a1: v27, a2: v22, a3: 34087104, a4: v24, a5: 1u);
    v25 = v91;
    v21 = v89;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v27;
    *(_QWORD *)v26 = 34087104;
    *(_DWORD *)(v26 + 8) = 1;
    *(_DWORD *)(v26 + 12) = 0;
    v28 = v26;
  }
  *(_DWORD *)(v28 + 12) = 44885279;
  v89 = v21;
  v91 = v25;
  v90 = v9 + 376612880;
  v29 = sub_1ED0380(a1: v28, a2: v22, a3: v21, a4: (int)v9 + 376612880, a5: v94, a6: v25, a7: v86);
  sub_2084840(a1: v31, a2: v32, a3: v90, a4: v30, a5: v29);
  sub_20841E0(a1: v33, a2: v34, a3: v90);
LABEL_16:
  v35 = *(_DWORD *)(v9 + 376660176);
  if ( v35 == 47076562 || v35 == 0 )
    goto LABEL_18;
  if ( v93 == 0 )
    goto LABEL_61;
  v36 = *(unsigned int *)(v9 + 8LL * v93 + 60);
  if ( (_DWORD)v36 == 0 )
  {
LABEL_62:
    sub_2771080();
    goto LABEL_63;
  }
  v37 = *(_DWORD *)(v9 + 8 * v36) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v9
                                   + 8LL * *(unsigned int *)(v9 + 8 * v37 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v9 + 8 * v37 + 44)
                                    & (0x1839u >> HIBYTE(*(_DWORD *)(v9 + 8 * v37 + 44))))
                                   + 12) != 6201 )
  {
LABEL_63:
    sub_2770780();
LABEL_64:
    sub_2771080();
LABEL_65:
    v91 = v43;
    sub_2771080();
LABEL_66:
    v91 = v43;
    sub_276FC00(a1, a2, a3: v43, a4: v41, a5: v9 + 34082680);
    goto LABEL_67;
  }
  v38 = *(_DWORD *)(v9 + 8 * v36) >> 3;
  v39 = *(_DWORD *)(v9 + 8 * v38 + 44) & (0x843u >> HIBYTE(*(_DWORD *)(v9 + 8 * v38 + 44)));
  v40 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                           + *(_QWORD *)(v9
                                                                       + 8 * v38
                                                                       + HIWORD(*(_DWORD *)(v9
                                                                                          + 8LL
                                                                                          * *(unsigned int *)(v9 + 8 * v38 + 20)
                                                                                          + 4 * v39
                                                                                          + 12))
                                                                       + 72)))(
          a1,
          a2: v39,
          a3: v9 + 8 * v36);
  v92 = v40;
  v42 = *(unsigned int *)(v9 + 376660176);
  if ( (_DWORD)v42 == 47076562 )
    v43 = v9;
  else
    v43 = v9 + 8 * v42;
  if ( v43 != v9 && *(_DWORD *)v43 >> 3 != 4260335 )
    goto LABEL_66;
  if ( v43 == v9 )
    goto LABEL_64;
  if ( v9 + 372665376 == v43 )
  {
    v91 = v43;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v43 + 12) != 0 )
  {
    v91 = v43;
    goto LABEL_40;
  }
  v44 = *(unsigned int *)(v43 + 4);
  if ( (_DWORD)v44 == 0 )
    goto LABEL_65;
  if ( *(_DWORD *)(v9 + 8 * v44 + 8) == 1 )
  {
    v91 = v43;
    if ( (unsigned int)sub_282F960(a1: 12, a2: 1, a3: v9 + 376660192, a4: v41, a5: 12, a6: v9 + 8 * v44) != 0 )
      goto LABEL_35;
    v40 = v92;
  }
  else
  {
    v91 = v43;
  }
LABEL_40:
  if ( v40 == v9 )
  {
LABEL_67:
    sub_2771080();
    goto LABEL_68;
  }
  if ( (unsigned int)sub_4FECF20(a1, a2, a3: v40, a4: v41, a5: v91) == 0 )
  {
LABEL_18:
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280(a1, a2);
    return;
  }
LABEL_35:
  v89 = v9 + 376612880;
  sub_2084840(a1, a2, a3: v9 + 376612880, a4: v41, a5: v9 + 365374600);
  v48 = sub_2084840(a1: v46, a2: v47, a3: v89, a4: v45, a5: v92);
  sub_20841E0(a1: v49, a2: v50, a3: v48);
  v57 = sub_1ECE260(a1: v53, a2: v54, a3: v51, a4: v52, a5: v55, a6: v56);
  v90 = v57;
  v58 = *(unsigned int *)(v57 + 8);
  v98 = v58;
  if ( (_DWORD)v58 == 0 )
    goto LABEL_18;
  v59 = *(unsigned int *)(v57 + 12);
  v88 = v9 + 365374680;
  v87 = v9 + 8 * v59;
  v93 = v59;
  sub_2084840(a1, a2: v87, a3: v89, a4: v58, a5: v9 + 365374680);
  if ( v93 != 0 )
  {
    v62 = sub_4FCEC60(a1: v60, a2: v61, a3: v87);
    v66 = sub_2084840(a1: v64, a2: v65, a3: v89, a4: v63, a5: v62);
    sub_20841E0(a1: v67, a2: v68, a3: v66);
    for ( i = 1; ; i = v97 + 1 )
    {
      a2 = v88;
      v79 = v98;
      if ( (int)v98 <= (int)i )
        break;
      if ( v98 <= (unsigned int)i )
        goto LABEL_69;
      v70 = *(unsigned int *)(v90 + 4 * i + 12);
      v97 = i;
      v87 = v9 + 8 * v70;
      v93 = v70;
      sub_2084840(a1: v70, a2: v88, a3: v89, a4: v98, a5: v88);
      if ( v93 == 0 )
        goto LABEL_70;
      v72 = sub_4FCEC60(a1: v93, a2: v71, a3: v87);
      v76 = sub_2084840(a1: v74, a2: v75, a3: v89, a4: v73, a5: v72);
      sub_20841E0(a1: v77, a2: v78, a3: v76);
    }
    goto LABEL_18;
  }
LABEL_68:
  LODWORD(i) = sub_2771080(a1: v60, a2: v87);
LABEL_69:
  v97 = i;
  sub_2771220(a1, a2, a3: (unsigned int)i, a4: v79, a5: v98);
LABEL_70:
  sub_2771080(a1: v95, a2: v96, a3: v97, a4: v98, a5: v94, a6: v87);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  sub_1ED0380(a1: v82, a2: v83, a3: v80, a4: v81, a5: v84, a6: v85, a7);
}
