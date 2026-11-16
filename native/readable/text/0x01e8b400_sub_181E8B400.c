// sub_1E8B400
// rva 0x01e8b400  size 3046  section .text  group text
// window base 0x181e8b400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8B400(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 *v9; // rdx
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  __int64 v13; // rdi
  __int64 v14; // rsi
  double v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  double v26; // xmm0_8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 *v31; // rdx
  double v32; // xmm0_8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rsi
  double v45; // xmm0_8
  __int64 v46; // rdx
  __int64 *v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rsi
  double v50; // xmm0_8
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 *v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rsi
  double v63; // xmm0_8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 result; // rax
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  double v75; // xmm0_8
  __int64 v76; // rax
  __int64 i; // rax
  _BYTE *v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 *v83; // rdx
  __int64 *v84; // rdx
  double v85; // xmm0_8
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rax
  char v90; // [rsp+0h] [rbp-88h] BYREF
  __int64 v91; // [rsp+20h] [rbp-68h]
  __int64 v92; // [rsp+28h] [rbp-60h]
  __int64 v93; // [rsp+30h] [rbp-58h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+40h] [rbp-48h]
  __int64 v96; // [rsp+48h] [rbp-40h]
  _BYTE v97[20]; // [rsp+50h] [rbp-38h] BYREF
  int v98; // [rsp+64h] [rbp-24h]
  void (__fastcall *v99)(__int64, __int64, __int64 *, __int64 *); // [rsp+68h] [rbp-20h]
  void (__fastcall *v100)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+70h] [rbp-18h]
  __int64 *v101; // [rsp+78h] [rbp-10h]

  if ( (unsigned __int64)&v90 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v90);
    v95 = v89;
    v84 = (__int64 *)v97;
    v101 = (__int64 *)v97;
    if ( *(double *)(v7 + 376178920) == 0.0 )
    {
      v100(a1: v87, a2: v88, a3: v97, a4: v97);
      v84 = v101;
      *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
    }
    v99(a1: v87, a2: v88, a3: v84, a4: v84);
    v85 = (double)*v101 * *(double *)(v7 + 376178920);
    v86 = (__int64)v85;
    if ( (__int64)v85 == MEMORY[0x11b12900]/* 0x11b12900 */ )
    {
      if ( __builtin_isnan(v85) )
      {
        v86 = 0;
      }
      else if ( v85 > 0.0 )
      {
        v86 = ~v86;
      }
    }
    *(_QWORD *)(v7 + 376655880) = v86;
    *(_QWORD *)(v7 + 376655888) += v86 - *(_QWORD *)(v7 + 376655872);
    for ( i = v95; ; i = v94 )
    {
      sub_2769900(a1: v73, a2: v74, a3: i, a4: v72, a5: &a7);
      v100(a1: v79, a2: v80, a3: v78, a4: v78);
      v83 = v101;
      *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
      v99(a1: v81, a2: v82, a3: v83, a4: v83);
      v75 = (double)*v101 * *(double *)(v7 + 376178920);
      v76 = (__int64)v75;
      if ( (__int64)v75 == MEMORY[0x11b12900]/* 0x11b12900 */ )
      {
        if ( __builtin_isnan(v75) )
        {
          v76 = 0;
        }
        else if ( v75 > 0.0 )
        {
          v76 = ~v76;
        }
      }
      *(_QWORD *)(v7 + 376655832) = v76;
      *(_QWORD *)(v7 + 376655840) += v76 - *(_QWORD *)(v7 + 376655824);
    }
  }
  v9 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  v10 = *(double *)(v7 + 376178920);
  v11 = 0.0;
  v12 = MEMORY[0x11b128f8]/* 0x11b128f8 */;
  v100 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703c40]/* 0x11703c40 */;
  if ( v10 == 0.0 )
  {
    MEMORY[0x11703c40]/* 0x11703c40 */(a1, a2, a3: v97, a4: v97, a5: v10, a6: 0.0, a7: MEMORY[0x11b128f8]/* 0x11b128f8 */);
    v9 = v101;
    v10 = (double)*v101;
    v12 = MEMORY[0x11b128f8]/* 0x11b128f8 */;
    v11 = MEMORY[0x11b128f8]/* 0x11b128f8 */ / v10;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / v10;
  }
  v96 = v7 + 376654936;
  v99 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x11703170]/* 0x11703170 */;
  MEMORY[0x11703170]/* 0x11703170 */(a1, a2, a3: v9, a4: v9, a5: v10, a6: v11, a7: v12);
  v15 = (double)*v101 * *(double *)(v7 + 376178920);
  v16 = (__int64)v15;
  if ( (__int64)v15 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v15) )
    {
      v16 = 0;
    }
    else if ( v15 > 0.0 )
    {
      v16 = ~v16;
    }
  }
  *(_QWORD *)(v7 + 376655824) = v16;
  *(_BYTE *)(v7 + 376655848) = 1;
  *(_QWORD *)(v7 + 376655832) = 0;
  sub_1E8E3E0(a1: v13, a2: v14, a3: v96);
  if ( *(_BYTE *)(v7 + 376654992) != 0 )
    v20 = v7 + 367269568;
  else
    v20 = v7 + 369902176;
  sub_1E9CE60(a1: v18, a2: v19, a3: *(_QWORD *)(v7 + 376654976), a4: v17, a5: v20, a6: 0);
  v23 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  if ( *(double *)(v7 + 376178920) == 0.0 )
  {
    v100(a1: v21, a2: v22, a3: v97, a4: v97);
    v23 = v101;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
  }
  v99(a1: v21, a2: v22, a3: v23, a4: v23);
  v26 = (double)*v101 * *(double *)(v7 + 376178920);
  v27 = (__int64)v26;
  if ( (__int64)v26 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v26) )
    {
      v27 = 0;
    }
    else if ( v26 > 0.0 )
    {
      v27 = ~v27;
    }
  }
  *(_QWORD *)(v7 + 376655832) = v27;
  *(_QWORD *)(v7 + 376655840) += v27 - *(_QWORD *)(v7 + 376655824);
  v98 = *(unsigned __int8 *)(v7 + 376654992);
  v95 = v7 + 376654816;
  if ( v98 != 0 )
  {
    v94 = v7 + 366946712;
    sub_1E87560(
      a1: v24,
      a2: v25,
      a3: v7 + 376654168,
      a4: v7 + 376654816,
      a5: v7 + 376655136,
      a6: v7 + 376654816);
    sub_1E9CE60(a1: v29, a2: v30, a3: *(_QWORD *)(v7 + 376654976), a4: v28, a5: v94, a6: 0);
  }
  v31 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  if ( *(double *)(v7 + 376178920) == 0.0 )
  {
    v100(a1: v24, a2: v25, a3: v97, a4: v97);
    v31 = v101;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
  }
  v99(a1: v24, a2: v25, a3: v31, a4: v31);
  v32 = (double)*v101 * *(double *)(v7 + 376178920);
  v33 = (__int64)v32;
  if ( (__int64)v32 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v32) )
    {
      v33 = 0;
    }
    else if ( v32 > 0.0 )
    {
      v33 = ~v33;
    }
  }
  *(_QWORD *)(v7 + 376655872) = v33;
  *(_BYTE *)(v7 + 376655896) = 1;
  *(_QWORD *)(v7 + 376655880) = 0;
  v93 = v7 + 367801296;
  v92 = sub_1E9EFE0();
  sub_1E9A4A0(a1: v35, a2: v36, a3: v7 + 376613784, a4: v34, a5: v92);
  sub_1E9CE60(a1: v38, a2: v39, a3: *(_QWORD *)(v7 + 376654976), a4: v37, a5: v93, a6: 0);
  v42 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  if ( *(double *)(v7 + 376178920) == 0.0 )
  {
    v100(a1: v40, a2: v41, a3: v97, a4: v97);
    v42 = v101;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
  }
  v99(a1: v40, a2: v41, a3: v42, a4: v42);
  v45 = (double)*v101 * *(double *)(v7 + 376178920);
  v46 = (__int64)v45;
  if ( (__int64)v45 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v45) )
    {
      v46 = 0;
    }
    else if ( v45 > 0.0 )
    {
      v46 = ~v46;
    }
  }
  *(_QWORD *)(v7 + 376655880) = v46;
  *(_QWORD *)(v7 + 376655888) += v46 - *(_QWORD *)(v7 + 376655872);
  if ( v98 == 0 )
  {
    v91 = v7 + 366946640;
    sub_1E91040(a1: v43, a2: v44, a3: v96);
    sub_1E9CE60(a1: v70, a2: v71, a3: *(_QWORD *)(v7 + 376654976), a4: v69, a5: v91, a6: 0);
  }
  v47 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  if ( *(double *)(v7 + 376178920) == 0.0 )
  {
    v100(a1: v43, a2: v44, a3: v97, a4: v97);
    v47 = v101;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
  }
  v99(a1: v43, a2: v44, a3: v47, a4: v47);
  v50 = (double)*v101 * *(double *)(v7 + 376178920);
  v51 = (__int64)v50;
  if ( (__int64)v50 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v50) )
    {
      v51 = 0;
    }
    else if ( v50 > 0.0 )
    {
      v51 = ~v51;
    }
  }
  *(_QWORD *)(v7 + 376655920) = v51;
  *(_BYTE *)(v7 + 376655944) = 1;
  *(_QWORD *)(v7 + 376655928) = 0;
  v52 = v96;
  v96 = v7 + 367642560;
  sub_1E8E180(a1: v48, a2: v49, a3: v52);
  sub_1E887E0(a1: v53, a2: v54, a3: v95, a4: v95, a5: 0);
  sub_1E9CE60(a1: v56, a2: v57, a3: *(_QWORD *)(v7 + 376654976), a4: v55, a5: v96, a6: 0);
  v60 = (__int64 *)v97;
  v101 = (__int64 *)v97;
  if ( *(double *)(v7 + 376178920) == 0.0 )
  {
    v100(a1: v58, a2: v59, a3: v97, a4: v97);
    v60 = v101;
    *(double *)(v7 + 376178920) = MEMORY[0x11b128f8]/* 0x11b128f8 */ / (double)*v101;
  }
  v99(a1: v58, a2: v59, a3: v60, a4: v60);
  v63 = (double)*v101 * *(double *)(v7 + 376178920);
  v64 = (__int64)v63;
  if ( (__int64)v63 == MEMORY[0x11b12900]/* 0x11b12900 */ )
  {
    if ( __builtin_isnan(v63) )
    {
      v64 = 0;
    }
    else if ( v63 > 0.0 )
    {
      v64 = ~v64;
    }
  }
  *(_QWORD *)(v7 + 376655928) = v64;
  *(_QWORD *)(v7 + 376655936) += v64 - *(_QWORD *)(v7 + 376655920);
  v95 = v7 + 366949440;
  sub_1EA7E80(a1: v61, a2: v62, a3: v7 + 376652784);
  result = sub_1E9CE60(a1: v66, a2: v67, a3: *(_QWORD *)(v7 + 376654976), a4: v65, a5: v95, a6: 0);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
