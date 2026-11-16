// sub_1932B54D4
// rva 0x132b54d4  size 765  section .text  group text
// window base 0x1932b54d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B54D4(
        __int64 a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 *a18,
        char a19)
{
  __int64 v19; // r14
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 i; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm6
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // r8d
  int v43; // r9d
  __m128i v44; // xmm6
  double v45; // xmm0_8
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // r8d
  int v49; // r9d
  int v50; // ebx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  int v54; // edi
  int v55; // esi
  int v56; // r8d
  int v57; // r9d
  int v58; // ebx
  char *v59; // rsi
  __int64 *v60; // rdi
  __int64 v62[4]; // [rsp+0h] [rbp-100h] BYREF
  int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-D8h]
  __int64 v65; // [rsp+30h] [rbp-D0h]
  __int64 v66; // [rsp+38h] [rbp-C8h]
  int *v67; // [rsp+40h] [rbp-C0h]
  __int64 *v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v70; // [rsp+58h] [rbp-A8h]
  __int64 *v71; // [rsp+60h] [rbp-A0h]
  __int64 v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h]
  __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h]
  __int64 v78; // [rsp+98h] [rbp-68h]
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h] BYREF
  __m128i v81; // [rsp+B0h] [rbp-50h] BYREF
  int v82; // [rsp+C0h] [rbp-40h]
  __m128i v83; // [rsp+C8h] [rbp-38h] BYREF
  int v84; // [rsp+D8h] [rbp-28h]
  __m128i v85; // [rsp+E0h] [rbp-20h] BYREF
  int v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+110h] [rbp+10h] BYREF
  char v90[52]; // [rsp+118h] [rbp+18h] BYREF
  int v91; // [rsp+14Ch] [rbp+4Ch]
  __int64 v92; // [rsp+160h] [rbp+60h] BYREF
  __int64 v93; // [rsp+168h] [rbp+68h] BYREF
  __int64 v94; // [rsp+170h] [rbp+70h] BYREF
  __m128i v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v97; // [rsp+198h] [rbp+98h]
  __m128 v98; // [rsp+1A0h] [rbp+A0h]

  v98 = a13;
  v97 = (unsigned __int64)v62 ^ MEMORY[0x336F80];
  v73 = a5;
  v74 = a3;
  v19 = 0;
  v72 = a6;
  v70 = a18;
  v89 = 104;
  sub_1932CA161(a1, a2: a4, a3: 0, a4: v90, a5: 96);
  v20 = a18 + 2;
  v78 = *a18;
  v96 = 0;
  v71 = a18 + 1;
  v79 = a18[1];
  v80 = a18[2];
  v95 = 0;
  v75 = MEMORY[0x79730](a1: v22, a2: v23, a3: v21, a4: 4294967286LL);
  v76 = MEMORY[0x79730](a1: v25, a2: v26, a3: v24, a4: 4294967285LL);
  v27 = v76;
  v77 = MEMORY[0x79730](a1: v29, a2: v30, a3: v28, a4: 4294967284LL);
  for ( i = 0; i < 6; ++i )
  {
    v33 = *(&v75 + i);
    if ( v33 != -1 && (unsigned int)MEMORY[0x793D0](a1: v33, a2: v31, a3: &v69) != 0 && (v69 & 1) != 0 )
    {
      v95.m128i_i32[i] = 1;
      MEMORY[0x79628](a1: v33, a2: v31, a3: 1, a4: v33);
    }
  }
  v86 = 0;
  v85 = MEMORY[0x84EB0];
  if ( (unsigned int)sub_1932B53B4(a1: v33, a2: v31, a3: v70, a4: v31, a5: (__int64)&v85, a6: &v92) != 0 )
  {
    v84 = 1;
    v83 = v39;
    if ( (unsigned int)sub_1932B53B4(a1: v35, a2: v36, a3: v71, a4: v36, a5: (__int64)&v83, a6: &v93) == 0 )
    {
LABEL_24:
      sub_1932B57D4(a1: v40, a2: v41, a3: (unsigned int)&v85, a4: v19 == 0, a5: v42, a6: v43, a7: v62[0]);
      goto LABEL_25;
    }
    LOBYTE(v40) = a19;
    v45 = v44.m128i_i64[0];
    v82 = 1;
    v81 = v44;
    if ( a19 != 0 )
    {
      v94 = v93;
      *v20 = -1;
    }
    else if ( (unsigned int)sub_1932B53B4(a1: v40, a2: v41, a3: v20, a4: v41, a5: (__int64)&v81, a6: &v94) == 0 )
    {
LABEL_23:
      sub_1932B57D4(a1: v46, a2: v47, a3: (unsigned int)&v81, a4: v19 == 0, a5: v48, a6: v49, a7: v62[0]);
      sub_1932B57D4(a1: v54, a2: v55, a3: (unsigned int)&v83, a4: v19 == 0, a5: v56, a6: v57, a7: v62[0]);
      goto LABEL_24;
    }
    v50 = 134218752;
    if ( MEMORY[0x794E0](a1: v45) != 0 )
    {
      if ( v92 == v75 || v93 == v27 )
        goto LABEL_17;
      if ( (_BYTE)v51 == 0 )
        JUMPOUT(0x32650F6B9LL);
      if ( v94 == v27 )
LABEL_17:
        v50 = 1024;
    }
    v68 = &v87;
    v91 = 256;
    v67 = &v89;
    v66 = v72;
    v65 = v73;
    v64 = v50;
    v63 = 1;
    if ( (unsigned int)MEMORY[0x794D0](a1: v51, a2: v52, a3: v74, a4: 0, a5: 0, a6: 0) != 0 )
    {
      if ( v88 != -1 )
        MEMORY[0x797C8](a1: v46, a2: v47, a3: v53, a4: v88);
      v19 = v87;
    }
    else
    {
      sub_1932B5824(a1: v46, a2: v47, a3: 544288, a4: v47, a5: v48, a6: v49);
    }
    goto LABEL_23;
  }
LABEL_25:
  v58 = 5;
  v59 = (char *)&v96 + 4;
  v60 = &v80;
  do
  {
    if ( *v60 != -1 )
      MEMORY[0x79628](a1: v60, a2: v59, a3: 1, a4: *v60);
    --v60;
    v59 -= 4;
    --v58;
  }
  while ( v58 >= 0 );
  return sub_1932C8DE0(a1: v60, a2: v59, a3: v34, a4: (unsigned __int64)v62 ^ v97, a5: v37, a6: v38);
}
