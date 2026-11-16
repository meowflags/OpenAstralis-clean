// sub_1EA6180
// rva 0x01ea6180  size 1402  section .text  group text
// window base 0x181ea6180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA6180(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rsi
  int v12; // r9d
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rsi
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rsi
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rsi
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // rsi
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // edi
  __int64 v42; // rsi
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rsi
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // edi
  __int64 v52; // rsi
  int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // edi
  __int64 v57; // rsi
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // edi
  __int64 v62; // rsi
  int v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // edi
  __int64 v67; // rsi
  int v68; // r9d
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // edi
  __int64 v72; // rsi
  int v73; // r9d
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // edi
  __int64 v77; // rsi
  int v78; // r9d
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // edi
  __int64 v82; // rsi
  int v83; // r9d
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // edi
  __int64 v87; // rsi
  int v88; // r9d
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // edi
  __int64 v92; // rsi
  int v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // edi
  __int64 v97; // rsi
  int v98; // r9d
  __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // edi
  __int64 v102; // rsi
  int v103; // r9d
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // edi
  __int64 v107; // rsi
  int v108; // r9d
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // edi
  __int64 v112; // rsi
  int v113; // r9d
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // edi
  __int64 v117; // rsi
  int v118; // r9d
  __int64 v119; // rdx
  __int64 v120; // rcx
  int v121; // edi
  __int64 v122; // rsi
  int v123; // r9d
  __int64 v124; // rdx
  __int64 v125; // rcx
  int v126; // edi
  __int64 v127; // rsi
  int v128; // r9d
  __int64 v129; // rdx
  __int64 v130; // rcx
  int v131; // edi
  __int64 v132; // rsi
  int v133; // r9d
  __int64 v134; // rdx
  __int64 v135; // rcx
  int v136; // edi
  __int64 v137; // rsi
  int v138; // r9d
  __int64 v139; // rdx
  __int64 v140; // rcx
  int v141; // edi
  __int64 v142; // rsi
  int v143; // r9d
  __int64 v144; // rdx
  __int64 v145; // rcx
  int v146; // edi
  __int64 v147; // rsi
  int v148; // r9d
  __int64 v149; // rdx
  __int64 v150; // rcx
  int v151; // edi
  __int64 v152; // rsi
  int v153; // r9d
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rdi
  __int64 v157; // rsi
  int v158; // r9d
  __int64 v159; // rdx
  __int64 result; // rax
  __int64 i; // rdx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // r8
  char v167; // [rsp+0h] [rbp-28h] BYREF
  __int64 v168; // [rsp+8h] [rbp-20h]
  __int64 v169; // [rsp+10h] [rbp-18h]
  __int64 v170; // [rsp+18h] [rbp-10h]
  unsigned int v171; // [rsp+24h] [rbp-4h]

  v169 = a5;
  if ( (unsigned __int64)&v167 <= *(_QWORD *)(v7 + 8) )
  {
    v171 = a6;
    v13 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v167);
LABEL_42:
    sub_276EFE0(a1: v13);
    goto LABEL_43;
  }
  if ( a6 != 0 )
  {
    v171 = a6;
    v8 = *(_QWORD *)(v6 + 376656592);
    v168 = v6 + 371049544;
    sub_1E98DA0(a1: 0, a2, a3: a5, a4, a5: v8, a6: v6 + 371049544);
    if ( *(_QWORD *)(v6 + 376178832) != 0 )
    {
      v170 = *(_QWORD *)(v6 + 376178832);
      sub_1EA3E20(a1, a2, a3: v169, a4, a5: v170, a6: v168);
      for ( i = *(_QWORD *)(v170 + 256); i != 0; i = *(_QWORD *)(v170 + 256) )
      {
        v170 = i;
        sub_1EA3E20(a1, a2, a3: v169, a4: v170, a5: v170, a6: v168);
      }
    }
  }
  else
  {
    v171 = 0;
  }
  sub_1EA0160(a1, a2, a3: v6 + 376653960, a4, a5: v169, a6);
  v14 = *(unsigned int *)(v6 + 376654036);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_42;
  sub_1EA0160(a1: v10, a2: v11, a3: v6 + 8 * v14, a4: v9, a5: v169, a6: v12);
  v19 = *(unsigned int *)(v6 + 376654108);
  if ( (_DWORD)v19 == 0 )
  {
LABEL_43:
    sub_276EFE0();
    goto LABEL_44;
  }
  sub_1EA0160(a1: v16, a2: v17, a3: v6 + 8 * v19, a4: v15, a5: v169, a6: v18);
  v24 = *(unsigned int *)(v6 + 376654040);
  if ( (_DWORD)v24 == 0 )
  {
LABEL_44:
    sub_276EFE0();
    goto LABEL_45;
  }
  sub_1EA0160(a1: v21, a2: v22, a3: v6 + 8 * v24, a4: v20, a5: v169, a6: v23);
  v29 = *(unsigned int *)(v6 + 376654112);
  if ( (_DWORD)v29 == 0 )
  {
LABEL_45:
    sub_276EFE0();
    goto LABEL_46;
  }
  sub_1EA0160(a1: v26, a2: v27, a3: v6 + 8 * v29, a4: v25, a5: v169, a6: v28);
  v34 = *(unsigned int *)(v6 + 376654044);
  if ( (_DWORD)v34 == 0 )
  {
LABEL_46:
    sub_276EFE0();
    goto LABEL_47;
  }
  sub_1EA0160(a1: v31, a2: v32, a3: v6 + 8 * v34, a4: v30, a5: v169, a6: v33);
  v39 = *(unsigned int *)(v6 + 376654116);
  if ( (_DWORD)v39 == 0 )
  {
LABEL_47:
    sub_276EFE0();
    goto LABEL_48;
  }
  sub_1EA0160(a1: v36, a2: v37, a3: v6 + 8 * v39, a4: v35, a5: v169, a6: v38);
  v44 = *(unsigned int *)(v6 + 376654048);
  if ( (_DWORD)v44 == 0 )
  {
LABEL_48:
    sub_276EFE0();
    goto LABEL_49;
  }
  sub_1EA0160(a1: v41, a2: v42, a3: v6 + 8 * v44, a4: v40, a5: v169, a6: v43);
  v49 = *(unsigned int *)(v6 + 376654120);
  if ( (_DWORD)v49 == 0 )
  {
LABEL_49:
    sub_276EFE0();
    goto LABEL_50;
  }
  sub_1EA0160(a1: v46, a2: v47, a3: v6 + 8 * v49, a4: v45, a5: v169, a6: v48);
  v54 = *(unsigned int *)(v6 + 376654052);
  if ( (_DWORD)v54 == 0 )
  {
LABEL_50:
    sub_276EFE0();
    goto LABEL_51;
  }
  sub_1EA0160(a1: v51, a2: v52, a3: v6 + 8 * v54, a4: v50, a5: v169, a6: v53);
  v59 = *(unsigned int *)(v6 + 376654124);
  if ( (_DWORD)v59 == 0 )
  {
LABEL_51:
    sub_276EFE0();
    goto LABEL_52;
  }
  sub_1EA0160(a1: v56, a2: v57, a3: v6 + 8 * v59, a4: v55, a5: v169, a6: v58);
  v64 = *(unsigned int *)(v6 + 376654056);
  if ( (_DWORD)v64 == 0 )
  {
LABEL_52:
    sub_276EFE0();
    goto LABEL_53;
  }
  sub_1EA0160(a1: v61, a2: v62, a3: v6 + 8 * v64, a4: v60, a5: v169, a6: v63);
  v69 = *(unsigned int *)(v6 + 376654128);
  if ( (_DWORD)v69 == 0 )
  {
LABEL_53:
    sub_276EFE0();
    goto LABEL_54;
  }
  sub_1EA0160(a1: v66, a2: v67, a3: v6 + 8 * v69, a4: v65, a5: v169, a6: v68);
  v74 = *(unsigned int *)(v6 + 376654060);
  if ( (_DWORD)v74 == 0 )
  {
LABEL_54:
    sub_276EFE0();
    goto LABEL_55;
  }
  sub_1EA0160(a1: v71, a2: v72, a3: v6 + 8 * v74, a4: v70, a5: v169, a6: v73);
  v79 = *(unsigned int *)(v6 + 376654132);
  if ( (_DWORD)v79 == 0 )
  {
LABEL_55:
    sub_276EFE0();
    goto LABEL_56;
  }
  sub_1EA0160(a1: v76, a2: v77, a3: v6 + 8 * v79, a4: v75, a5: v169, a6: v78);
  v84 = *(unsigned int *)(v6 + 376654064);
  if ( (_DWORD)v84 == 0 )
  {
LABEL_56:
    sub_276EFE0();
    goto LABEL_57;
  }
  sub_1EA0160(a1: v81, a2: v82, a3: v6 + 8 * v84, a4: v80, a5: v169, a6: v83);
  v89 = *(unsigned int *)(v6 + 376654136);
  if ( (_DWORD)v89 == 0 )
  {
LABEL_57:
    sub_276EFE0();
    goto LABEL_58;
  }
  sub_1EA0160(a1: v86, a2: v87, a3: v6 + 8 * v89, a4: v85, a5: v169, a6: v88);
  v94 = *(unsigned int *)(v6 + 376654068);
  if ( (_DWORD)v94 == 0 )
  {
LABEL_58:
    sub_276EFE0();
    goto LABEL_59;
  }
  sub_1EA0160(a1: v91, a2: v92, a3: v6 + 8 * v94, a4: v90, a5: v169, a6: v93);
  v99 = *(unsigned int *)(v6 + 376654140);
  if ( (_DWORD)v99 == 0 )
  {
LABEL_59:
    sub_276EFE0();
    goto LABEL_60;
  }
  sub_1EA0160(a1: v96, a2: v97, a3: v6 + 8 * v99, a4: v95, a5: v169, a6: v98);
  v104 = *(unsigned int *)(v6 + 376654072);
  if ( (_DWORD)v104 == 0 )
  {
LABEL_60:
    sub_276EFE0();
    goto LABEL_61;
  }
  sub_1EA0160(a1: v101, a2: v102, a3: v6 + 8 * v104, a4: v100, a5: v169, a6: v103);
  v109 = *(unsigned int *)(v6 + 376654144);
  if ( (_DWORD)v109 == 0 )
  {
LABEL_61:
    sub_276EFE0();
    goto LABEL_62;
  }
  sub_1EA0160(a1: v106, a2: v107, a3: v6 + 8 * v109, a4: v105, a5: v169, a6: v108);
  v114 = *(unsigned int *)(v6 + 376654076);
  if ( (_DWORD)v114 == 0 )
  {
LABEL_62:
    sub_276EFE0();
    goto LABEL_63;
  }
  sub_1EA0160(a1: v111, a2: v112, a3: v6 + 8 * v114, a4: v110, a5: v169, a6: v113);
  v119 = *(unsigned int *)(v6 + 376654148);
  if ( (_DWORD)v119 == 0 )
  {
LABEL_63:
    sub_276EFE0();
    goto LABEL_64;
  }
  sub_1EA0160(a1: v116, a2: v117, a3: v6 + 8 * v119, a4: v115, a5: v169, a6: v118);
  v124 = *(unsigned int *)(v6 + 376654080);
  if ( (_DWORD)v124 == 0 )
  {
LABEL_64:
    sub_276EFE0();
    goto LABEL_65;
  }
  sub_1EA0160(a1: v121, a2: v122, a3: v6 + 8 * v124, a4: v120, a5: v169, a6: v123);
  v129 = *(unsigned int *)(v6 + 376654152);
  if ( (_DWORD)v129 == 0 )
  {
LABEL_65:
    sub_276EFE0();
    goto LABEL_66;
  }
  sub_1EA0160(a1: v126, a2: v127, a3: v6 + 8 * v129, a4: v125, a5: v169, a6: v128);
  v134 = *(unsigned int *)(v6 + 376654084);
  if ( (_DWORD)v134 == 0 )
  {
LABEL_66:
    sub_276EFE0();
    goto LABEL_67;
  }
  sub_1EA0160(a1: v131, a2: v132, a3: v6 + 8 * v134, a4: v130, a5: v169, a6: v133);
  v139 = *(unsigned int *)(v6 + 376654156);
  if ( (_DWORD)v139 == 0 )
  {
LABEL_67:
    sub_276EFE0();
    goto LABEL_68;
  }
  sub_1EA0160(a1: v136, a2: v137, a3: v6 + 8 * v139, a4: v135, a5: v169, a6: v138);
  v144 = *(unsigned int *)(v6 + 376654088);
  if ( (_DWORD)v144 == 0 )
  {
LABEL_68:
    sub_276EFE0();
    goto LABEL_69;
  }
  sub_1EA0160(a1: v141, a2: v142, a3: v6 + 8 * v144, a4: v140, a5: v169, a6: v143);
  v149 = *(unsigned int *)(v6 + 376654160);
  if ( (_DWORD)v149 == 0 )
  {
LABEL_69:
    sub_276EFE0();
    goto LABEL_70;
  }
  sub_1EA0160(a1: v146, a2: v147, a3: v6 + 8 * v149, a4: v145, a5: v169, a6: v148);
  v154 = *(unsigned int *)(v6 + 376654092);
  if ( (_DWORD)v154 == 0 )
  {
LABEL_70:
    sub_276EFE0();
    goto LABEL_71;
  }
  sub_1EA0160(a1: v151, a2: v152, a3: v6 + 8 * v154, a4: v150, a5: v169, a6: v153);
  v159 = *(unsigned int *)(v6 + 376654164);
  if ( (_DWORD)v159 == 0 )
  {
LABEL_71:
    sub_276EFE0(a1: v156, a2: v157, a3: v159, a4: v155, a5: v169, a6: v171);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EA6700(a1: v164, a2: v165, a3: v162, a4: v163, a5: v166);
  }
  result = sub_1EA0160(a1: v156, a2: v157, a3: v6 + 8 * v159, a4: v155, a5: v169, a6: v158);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
