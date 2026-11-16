// sub_1597CE0
// rva 0x01597ce0  size 1267  section .text  group text
// window base 0x181597ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1597CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  unsigned int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r9
  __int64 v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // rcx
  unsigned int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // [rsp+0h] [rbp-68h] BYREF
  __int64 v94; // [rsp+8h] [rbp-60h]
  __int64 v95; // [rsp+10h] [rbp-58h]
  __int64 v96; // [rsp+18h] [rbp-50h]
  __int64 v97; // [rsp+20h] [rbp-48h]
  __int64 v98; // [rsp+28h] [rbp-40h]
  __int64 v99; // [rsp+30h] [rbp-38h]
  __int64 v100; // [rsp+38h] [rbp-30h]
  __int64 v101; // [rsp+40h] [rbp-28h]
  __int64 v102; // [rsp+48h] [rbp-20h]
  __int64 v103; // [rsp+50h] [rbp-18h]
  unsigned int v104; // [rsp+5Ch] [rbp-Ch]
  unsigned int v105; // [rsp+60h] [rbp-8h]
  unsigned int v106; // [rsp+64h] [rbp-4h]

  v103 = a2;
  v102 = a4;
  if ( (unsigned __int64)&v93 <= *(_QWORD *)(v9 + 8) )
  {
    v101 = a1;
    v100 = a6;
    v99 = a5;
    v98 = a3;
    sub_1EB84E0();
    goto LABEL_21;
  }
  v10 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_21:
    v101 = a1;
    v100 = a6;
    v99 = a5;
    v98 = a3;
    v54 = sub_2771080();
    goto LABEL_22;
  }
  v97 = v8 + 373281248;
  if ( *(_DWORD *)(v8 + 8 * v10 + 8) != 0 )
    v11 = v8 + 373055288;
  else
    v11 = v8 + 373281248;
  v12 = *(char *)(a2 + 12);
  v13 = (unsigned int)*(char *)(a4 + 12);
  v106 = v13 | *(char *)(a6 + 12) | v12 | *(char *)(a5 + 12) | *(char *)(a3 + 12) | *(char *)(a1 + 12);
  v98 = a3;
  v99 = a5;
  v96 = v11;
  v100 = a6;
  v95 = v8 + 57135224;
  v101 = a1;
  v14 = sub_50132E0(a1, a2: v13, a3: 351, a4: v8 + 57135224, a5: v11);
  v18 = sub_50132E0(a1: v16, a2: v17, a3: v14, a4: v15, a5: v101);
  v22 = sub_50132E0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v98);
  v26 = sub_50132E0(a1: v24, a2: v25, a3: v22, a4: v23, a5: v99);
  v30 = sub_50132E0(a1: v28, a2: v29, a3: v26, a4: v27, a5: v103);
  v34 = sub_50132E0(a1: v32, a2: v33, a3: v30, a4: v31, a5: v95);
  v38 = sub_50132E0(a1: v36, a2: v37, a3: v34, a4: v35, a5: v95);
  v42 = sub_50132E0(a1: v40, a2: v41, a3: v38, a4: v39, a5: v100);
  v46 = sub_50132E0(a1: v44, a2: v45, a3: v42, a4: v43, a5: v95);
  v50 = sub_50132E0(a1: v48, a2: v49, a3: v46, a4: v47, a5: v95);
  v54 = sub_50132E0(a1: v52, a2: v53, a3: v50, a4: v51, a5: v102);
  v57 = v106;
  v7 = v54 << v106;
  if ( ((v54 << v106) & 0x80000000) != 0 )
  {
LABEL_22:
    v105 = v54;
    v88 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v88 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v104 = v7;
      v88 = sub_1EAA920(a1: v55, a2: v56, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v88 + 40;
      *(_DWORD *)v88 = 34082880;
      *(_DWORD *)(v88 + 4) = 0;
      *(_QWORD *)(v88 + 8) = 0;
      *(_QWORD *)(v88 + 16) = 0;
      *(_QWORD *)(v88 + 24) = 0;
      *(_QWORD *)(v88 + 32) = 0;
      v104 = v7;
    }
    *(_DWORD *)(v88 + 20) = 46923644;
    *(_DWORD *)(v88 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v88 + 12) = (unsigned __int64)(v88 - v8) >> 3;
    v94 = v88;
    sub_503B9A0(a1: v55, a2: v56, a3: v88, a4: v57, a5: 0);
    v92 = v94;
    *(_DWORD *)(v94 + 8) = 46004603;
    if ( (*(_DWORD *)v92 & 2) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v92 = sub_2769900(a1: v90, a2: v91, a3: v92, a4: v89, a5: &a7);
LABEL_26:
      v89 = (v92 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v92 & 0xFFFFFFFFFFF80000LL) + ((v92 - v89) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v92 & 0xFFFFFFFFFFF80000LL) + ((v92 - v89) >> 9) + 0x38) = 0;
    }
  }
  v58 = *(_QWORD *)(v9 + 40);
  v59 = (v7 + 19LL) & 0x1FFFFFFF8LL;
  if ( v59 >= 0x20000 || (v60 = v58 + v59) > *(_QWORD *)(v9 + 32) )
  {
    v105 = v54;
    v58 = sub_1EAA840(a1: 34082368, a2: v56, a3: 34082368, a4: v106, a5: v7);
    v54 = v105;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v60;
    *(_QWORD *)v58 = 34082368;
    *(_DWORD *)(v58 + 8) = v7;
  }
  v94 = v58;
  v105 = v54;
  if ( v106 != 0 )
    sub_4FF2C40(a1: 1, a2: v56, a3: v97, a4: v58, a5: v58, a6: v54);
  else
    sub_1EB4960(a1: v54, a2: 0, a3: v8 + 376351544, a4: v57, a5: 0, a6: v94);
  v62 = sub_5011A80(a1: v102, a2: v8 + 57669152, a3: v105, a4: v61, a5: v106, a6: v94);
  v64 = sub_5011A80(a1: v95, a2: v97, a3: v62, a4: v63, a5: v106, a6: v94);
  v66 = sub_5011A80(a1: v95, a2: v97, a3: v64, a4: v65, a5: v106, a6: v94);
  v68 = sub_5011A80(a1: v100, a2: v97, a3: v66, a4: v67, a5: v106, a6: v94);
  v70 = sub_5011A80(a1: v95, a2: v97, a3: v68, a4: v69, a5: v106, a6: v94);
  v72 = sub_5011A80(a1: v95, a2: v8 + 57669176, a3: v70, a4: v71, a5: v106, a6: v94);
  v74 = sub_5011A80(a1: v103, a2: v8 + 57669200, a3: v72, a4: v73, a5: v106, a6: v94);
  v76 = sub_5011A80(a1: v99, a2: v8 + 57669224, a3: v74, a4: v75, a5: v106, a6: v94);
  v78 = sub_5011A80(a1: v98, a2: v8 + 57669248, a3: v76, a4: v77, a5: v106, a6: v94);
  v80 = sub_5011A80(a1: v101, a2: v97, a3: v78, a4: v79, a5: v106, a6: v94);
  v82 = sub_5011A80(a1: v96, a2: v8 + 57669272, a3: v80, a4: v81, a5: v106, a6: v94);
  v85 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v85 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v104 = v82;
    v85 = sub_1EAA920(a1: v83, a2: v84, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v85 + 24;
    *(_DWORD *)v85 = 34082680;
    *(_DWORD *)(v85 + 4) = 0;
    *(_QWORD *)(v85 + 8) = 0;
    *(_QWORD *)(v85 + 16) = 0;
  }
  v86 = v94;
  *(_BYTE *)(v85 + 12) = v106;
  *(_DWORD *)(v85 + 4) = (unsigned __int64)(v86 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v83, a2: v84, a3: v85, a4: v86, a5: v86);
  return v85;
}
