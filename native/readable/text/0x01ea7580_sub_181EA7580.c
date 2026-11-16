// sub_1EA7580
// rva 0x01ea7580  size 693  section .text  group text
// window base 0x181ea7580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA7580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned int *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // r8

  sub_1EA0880(a1, a2, a3: (__int64)(v5 + 94163490), a4, a5);
  v9 = v5[94163509];
  if ( (_DWORD)v9 == 0 )
  {
    sub_276EFE0();
    goto LABEL_18;
  }
  sub_1EA0880(a1: v7, a2: v8, a3: (__int64)&v5[2 * v9], a4: v6, a5);
  v13 = v5[94163510];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_18:
    sub_276EFE0();
    goto LABEL_19;
  }
  sub_1EA0880(a1: v11, a2: v12, a3: (__int64)&v5[2 * v13], a4: v10, a5);
  v17 = v5[94163511];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_19:
    sub_276EFE0();
    goto LABEL_20;
  }
  sub_1EA0880(a1: v15, a2: v16, a3: (__int64)&v5[2 * v17], a4: v14, a5);
  v21 = v5[94163512];
  if ( (_DWORD)v21 == 0 )
  {
LABEL_20:
    sub_276EFE0();
    goto LABEL_21;
  }
  sub_1EA0880(a1: v19, a2: v20, a3: (__int64)&v5[2 * v21], a4: v18, a5);
  v25 = v5[94163513];
  if ( (_DWORD)v25 == 0 )
  {
LABEL_21:
    sub_276EFE0();
    goto LABEL_22;
  }
  sub_1EA0880(a1: v23, a2: v24, a3: (__int64)&v5[2 * v25], a4: v22, a5);
  v29 = v5[94163514];
  if ( (_DWORD)v29 == 0 )
  {
LABEL_22:
    sub_276EFE0();
    goto LABEL_23;
  }
  sub_1EA0880(a1: v27, a2: v28, a3: (__int64)&v5[2 * v29], a4: v26, a5);
  v33 = v5[94163515];
  if ( (_DWORD)v33 == 0 )
  {
LABEL_23:
    sub_276EFE0();
    goto LABEL_24;
  }
  sub_1EA0880(a1: v31, a2: v32, a3: (__int64)&v5[2 * v33], a4: v30, a5);
  v37 = v5[94163516];
  if ( (_DWORD)v37 == 0 )
  {
LABEL_24:
    sub_276EFE0();
    goto LABEL_25;
  }
  sub_1EA0880(a1: v35, a2: v36, a3: (__int64)&v5[2 * v37], a4: v34, a5);
  v41 = v5[94163517];
  if ( (_DWORD)v41 == 0 )
  {
LABEL_25:
    sub_276EFE0();
    goto LABEL_26;
  }
  sub_1EA0880(a1: v39, a2: v40, a3: (__int64)&v5[2 * v41], a4: v38, a5);
  v45 = v5[94163518];
  if ( (_DWORD)v45 == 0 )
  {
LABEL_26:
    sub_276EFE0();
    goto LABEL_27;
  }
  sub_1EA0880(a1: v43, a2: v44, a3: (__int64)&v5[2 * v45], a4: v42, a5);
  v49 = v5[94163519];
  if ( (_DWORD)v49 == 0 )
  {
LABEL_27:
    sub_276EFE0();
    goto LABEL_28;
  }
  sub_1EA0880(a1: v47, a2: v48, a3: (__int64)&v5[2 * v49], a4: v46, a5);
  v53 = v5[94163520];
  if ( (_DWORD)v53 == 0 )
  {
LABEL_28:
    sub_276EFE0();
    goto LABEL_29;
  }
  sub_1EA0880(a1: v51, a2: v52, a3: (__int64)&v5[2 * v53], a4: v50, a5);
  v57 = v5[94163521];
  if ( (_DWORD)v57 == 0 )
  {
LABEL_29:
    sub_276EFE0();
    goto LABEL_30;
  }
  sub_1EA0880(a1: v55, a2: v56, a3: (__int64)&v5[2 * v57], a4: v54, a5);
  v61 = v5[94163522];
  if ( (_DWORD)v61 == 0 )
  {
LABEL_30:
    sub_276EFE0();
    goto LABEL_31;
  }
  sub_1EA0880(a1: v59, a2: v60, a3: (__int64)&v5[2 * v61], a4: v58, a5);
  v65 = v5[94163523];
  if ( (_DWORD)v65 != 0 )
    return sub_1EA0880(a1: v63, a2: v64, a3: (__int64)&v5[2 * v65], a4: v62, a5);
LABEL_31:
  sub_276EFE0(a1: v63, a2: v64, a3: v65, a4: v62, a5);
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
  return sub_1EA7840(a1: v69, a2: v70, a3: v67, a4: v68, a5: v71);
}
