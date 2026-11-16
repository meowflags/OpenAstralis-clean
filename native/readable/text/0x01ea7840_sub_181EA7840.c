// sub_1EA7840
// rva 0x01ea7840  size 634  section .text  group text
// window base 0x181ea7840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA7840(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  double v11; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 result; // rax
  __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rsi
  char v73; // [rsp+0h] [rbp-18h] BYREF
  __int64 v74; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v73 <= *(_QWORD *)(v7 + 8) )
  {
    v74 = a5;
    v11 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v73);
    goto LABEL_20;
  }
  v74 = a5;
  sub_1EA0780(a1, a2, a3: (__int64)(v6 + 94163490), a4, a5);
  v12 = v6[94163509];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_20:
    sub_276EFE0(a1: v11);
    goto LABEL_21;
  }
  sub_1EA0780(a1: v9, a2: v10, a3: (__int64)&v6[2 * v12], a4: v8, a5: v74);
  v16 = v6[94163510];
  if ( (_DWORD)v16 == 0 )
  {
LABEL_21:
    sub_276EFE0();
    goto LABEL_22;
  }
  sub_1EA0780(a1: v14, a2: v15, a3: (__int64)&v6[2 * v16], a4: v13, a5: v74);
  v20 = v6[94163511];
  if ( (_DWORD)v20 == 0 )
  {
LABEL_22:
    sub_276EFE0();
    goto LABEL_23;
  }
  sub_1EA0780(a1: v18, a2: v19, a3: (__int64)&v6[2 * v20], a4: v17, a5: v74);
  v24 = v6[94163512];
  if ( (_DWORD)v24 == 0 )
  {
LABEL_23:
    sub_276EFE0();
    goto LABEL_24;
  }
  sub_1EA0780(a1: v22, a2: v23, a3: (__int64)&v6[2 * v24], a4: v21, a5: v74);
  v28 = v6[94163513];
  if ( (_DWORD)v28 == 0 )
  {
LABEL_24:
    sub_276EFE0();
    goto LABEL_25;
  }
  sub_1EA0780(a1: v26, a2: v27, a3: (__int64)&v6[2 * v28], a4: v25, a5: v74);
  v32 = v6[94163514];
  if ( (_DWORD)v32 == 0 )
  {
LABEL_25:
    sub_276EFE0();
    goto LABEL_26;
  }
  sub_1EA0780(a1: v30, a2: v31, a3: (__int64)&v6[2 * v32], a4: v29, a5: v74);
  v36 = v6[94163515];
  if ( (_DWORD)v36 == 0 )
  {
LABEL_26:
    sub_276EFE0();
    goto LABEL_27;
  }
  sub_1EA0780(a1: v34, a2: v35, a3: (__int64)&v6[2 * v36], a4: v33, a5: v74);
  v40 = v6[94163516];
  if ( (_DWORD)v40 == 0 )
  {
LABEL_27:
    sub_276EFE0();
    goto LABEL_28;
  }
  sub_1EA0780(a1: v38, a2: v39, a3: (__int64)&v6[2 * v40], a4: v37, a5: v74);
  v44 = v6[94163517];
  if ( (_DWORD)v44 == 0 )
  {
LABEL_28:
    sub_276EFE0();
    goto LABEL_29;
  }
  sub_1EA0780(a1: v42, a2: v43, a3: (__int64)&v6[2 * v44], a4: v41, a5: v74);
  v48 = v6[94163518];
  if ( (_DWORD)v48 == 0 )
  {
LABEL_29:
    sub_276EFE0();
    goto LABEL_30;
  }
  sub_1EA0780(a1: v46, a2: v47, a3: (__int64)&v6[2 * v48], a4: v45, a5: v74);
  v52 = v6[94163519];
  if ( (_DWORD)v52 == 0 )
  {
LABEL_30:
    sub_276EFE0();
    goto LABEL_31;
  }
  sub_1EA0780(a1: v50, a2: v51, a3: (__int64)&v6[2 * v52], a4: v49, a5: v74);
  v56 = v6[94163520];
  if ( (_DWORD)v56 == 0 )
  {
LABEL_31:
    sub_276EFE0();
    goto LABEL_32;
  }
  sub_1EA0780(a1: v54, a2: v55, a3: (__int64)&v6[2 * v56], a4: v53, a5: v74);
  v60 = v6[94163521];
  if ( (_DWORD)v60 == 0 )
  {
LABEL_32:
    sub_276EFE0();
    goto LABEL_33;
  }
  sub_1EA0780(a1: v58, a2: v59, a3: (__int64)&v6[2 * v60], a4: v57, a5: v74);
  v64 = v6[94163522];
  if ( (_DWORD)v64 == 0 )
  {
LABEL_33:
    sub_276EFE0();
    goto LABEL_34;
  }
  sub_1EA0780(a1: v62, a2: v63, a3: (__int64)&v6[2 * v64], a4: v61, a5: v74);
  v68 = v6[94163523];
  if ( (_DWORD)v68 == 0 )
  {
LABEL_34:
    sub_276EFE0(a1: v66, a2: v67, a3: v68, a4: v65, a5: v74);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EA7AC0(a1: v71, a2: v72, a3: v70);
  }
  result = sub_1EA0780(a1: v66, a2: v67, a3: (__int64)&v6[2 * v68], a4: v65, a5: v74);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
