// sub_181EA6700
// rva 0x01ea6700  size 1338  section .text  group text
// window base 0x181ea6700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EA6700(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
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
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rdi
  __int64 v131; // rsi
  char v132; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v133; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v132 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v132);
    goto LABEL_35;
  }
  v133 = v6 + 94153030;
  sub_181EA01E0(a1, a2, a3: (__int64)(v6 + 94163490), a4, a5: (__int64)(v6 + 94153030), a6: 1u);
  v12 = v6[94163509];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_35:
    MEMORY[0x18276EFE0](a1: v11);
    goto LABEL_36;
  }
  sub_181EA01E0(a1: v9, a2: v10, a3: (__int64)&v6[2 * v12], a4: v8, a5: (__int64)v133, a6: 0);
  v16 = v6[94163527];
  if ( (_DWORD)v16 == 0 )
  {
LABEL_36:
    MEMORY[0x18276EFE0]();
    goto LABEL_37;
  }
  sub_181EA01E0(a1: v14, a2: v15, a3: (__int64)&v6[2 * v16], a4: v13, a5: (__int64)v133, a6: 0);
  v20 = v6[94163510];
  if ( (_DWORD)v20 == 0 )
  {
LABEL_37:
    MEMORY[0x18276EFE0]();
    goto LABEL_38;
  }
  sub_181EA01E0(a1: v18, a2: v19, a3: (__int64)&v6[2 * v20], a4: v17, a5: (__int64)v133, a6: 0);
  v24 = v6[94163528];
  if ( (_DWORD)v24 == 0 )
  {
LABEL_38:
    MEMORY[0x18276EFE0]();
    goto LABEL_39;
  }
  sub_181EA01E0(a1: v22, a2: v23, a3: (__int64)&v6[2 * v24], a4: v21, a5: (__int64)v133, a6: 0);
  v28 = v6[94163511];
  if ( (_DWORD)v28 == 0 )
  {
LABEL_39:
    MEMORY[0x18276EFE0]();
    goto LABEL_40;
  }
  sub_181EA01E0(a1: v26, a2: v27, a3: (__int64)&v6[2 * v28], a4: v25, a5: (__int64)v133, a6: 0);
  v32 = v6[94163529];
  if ( (_DWORD)v32 == 0 )
  {
LABEL_40:
    MEMORY[0x18276EFE0]();
    goto LABEL_41;
  }
  sub_181EA01E0(a1: v30, a2: v31, a3: (__int64)&v6[2 * v32], a4: v29, a5: (__int64)v133, a6: 0);
  v36 = v6[94163512];
  if ( (_DWORD)v36 == 0 )
  {
LABEL_41:
    MEMORY[0x18276EFE0]();
    goto LABEL_42;
  }
  sub_181EA01E0(a1: v34, a2: v35, a3: (__int64)&v6[2 * v36], a4: v33, a5: (__int64)v133, a6: 0);
  v40 = v6[94163530];
  if ( (_DWORD)v40 == 0 )
  {
LABEL_42:
    MEMORY[0x18276EFE0]();
    goto LABEL_43;
  }
  sub_181EA01E0(a1: v38, a2: v39, a3: (__int64)&v6[2 * v40], a4: v37, a5: (__int64)v133, a6: 0);
  v44 = v6[94163513];
  if ( (_DWORD)v44 == 0 )
  {
LABEL_43:
    MEMORY[0x18276EFE0]();
    goto LABEL_44;
  }
  sub_181EA01E0(a1: v42, a2: v43, a3: (__int64)&v6[2 * v44], a4: v41, a5: (__int64)v133, a6: 0);
  v48 = v6[94163531];
  if ( (_DWORD)v48 == 0 )
  {
LABEL_44:
    MEMORY[0x18276EFE0]();
    goto LABEL_45;
  }
  sub_181EA01E0(a1: v46, a2: v47, a3: (__int64)&v6[2 * v48], a4: v45, a5: (__int64)v133, a6: 0);
  v52 = v6[94163514];
  if ( (_DWORD)v52 == 0 )
  {
LABEL_45:
    MEMORY[0x18276EFE0]();
    goto LABEL_46;
  }
  sub_181EA01E0(a1: v50, a2: v51, a3: (__int64)&v6[2 * v52], a4: v49, a5: (__int64)v133, a6: 0);
  v56 = v6[94163532];
  if ( (_DWORD)v56 == 0 )
  {
LABEL_46:
    MEMORY[0x18276EFE0]();
    goto LABEL_47;
  }
  sub_181EA01E0(a1: v54, a2: v55, a3: (__int64)&v6[2 * v56], a4: v53, a5: (__int64)v133, a6: 0);
  v60 = v6[94163515];
  if ( (_DWORD)v60 == 0 )
  {
LABEL_47:
    MEMORY[0x18276EFE0]();
    goto LABEL_48;
  }
  sub_181EA01E0(a1: v58, a2: v59, a3: (__int64)&v6[2 * v60], a4: v57, a5: (__int64)v133, a6: 0);
  v64 = v6[94163533];
  if ( (_DWORD)v64 == 0 )
  {
LABEL_48:
    MEMORY[0x18276EFE0]();
    goto LABEL_49;
  }
  sub_181EA01E0(a1: v62, a2: v63, a3: (__int64)&v6[2 * v64], a4: v61, a5: (__int64)v133, a6: 0);
  v68 = v6[94163516];
  if ( (_DWORD)v68 == 0 )
  {
LABEL_49:
    MEMORY[0x18276EFE0]();
    goto LABEL_50;
  }
  sub_181EA01E0(a1: v66, a2: v67, a3: (__int64)&v6[2 * v68], a4: v65, a5: (__int64)v133, a6: 0);
  v72 = v6[94163534];
  if ( (_DWORD)v72 == 0 )
  {
LABEL_50:
    MEMORY[0x18276EFE0]();
    goto LABEL_51;
  }
  sub_181EA01E0(a1: v70, a2: v71, a3: (__int64)&v6[2 * v72], a4: v69, a5: (__int64)v133, a6: 0);
  v76 = v6[94163517];
  if ( (_DWORD)v76 == 0 )
  {
LABEL_51:
    MEMORY[0x18276EFE0]();
    goto LABEL_52;
  }
  sub_181EA01E0(a1: v74, a2: v75, a3: (__int64)&v6[2 * v76], a4: v73, a5: (__int64)v133, a6: 0);
  v80 = v6[94163535];
  if ( (_DWORD)v80 == 0 )
  {
LABEL_52:
    MEMORY[0x18276EFE0]();
    goto LABEL_53;
  }
  sub_181EA01E0(a1: v78, a2: v79, a3: (__int64)&v6[2 * v80], a4: v77, a5: (__int64)v133, a6: 0);
  v84 = v6[94163518];
  if ( (_DWORD)v84 == 0 )
  {
LABEL_53:
    MEMORY[0x18276EFE0]();
    goto LABEL_54;
  }
  sub_181EA01E0(a1: v82, a2: v83, a3: (__int64)&v6[2 * v84], a4: v81, a5: (__int64)v133, a6: 0);
  v88 = v6[94163536];
  if ( (_DWORD)v88 == 0 )
  {
LABEL_54:
    MEMORY[0x18276EFE0]();
    goto LABEL_55;
  }
  sub_181EA01E0(a1: v86, a2: v87, a3: (__int64)&v6[2 * v88], a4: v85, a5: (__int64)v133, a6: 0);
  v92 = v6[94163519];
  if ( (_DWORD)v92 == 0 )
  {
LABEL_55:
    MEMORY[0x18276EFE0]();
    goto LABEL_56;
  }
  sub_181EA01E0(a1: v90, a2: v91, a3: (__int64)&v6[2 * v92], a4: v89, a5: (__int64)v133, a6: 0);
  v96 = v6[94163537];
  if ( (_DWORD)v96 == 0 )
  {
LABEL_56:
    MEMORY[0x18276EFE0]();
    goto LABEL_57;
  }
  sub_181EA01E0(a1: v94, a2: v95, a3: (__int64)&v6[2 * v96], a4: v93, a5: (__int64)v133, a6: 0);
  v100 = v6[94163520];
  if ( (_DWORD)v100 == 0 )
  {
LABEL_57:
    MEMORY[0x18276EFE0]();
    goto LABEL_58;
  }
  sub_181EA01E0(a1: v98, a2: v99, a3: (__int64)&v6[2 * v100], a4: v97, a5: (__int64)v133, a6: 0);
  v104 = v6[94163538];
  if ( (_DWORD)v104 == 0 )
  {
LABEL_58:
    MEMORY[0x18276EFE0]();
    goto LABEL_59;
  }
  sub_181EA01E0(a1: v102, a2: v103, a3: (__int64)&v6[2 * v104], a4: v101, a5: (__int64)v133, a6: 0);
  v108 = v6[94163521];
  if ( (_DWORD)v108 == 0 )
  {
LABEL_59:
    MEMORY[0x18276EFE0]();
    goto LABEL_60;
  }
  sub_181EA01E0(a1: v106, a2: v107, a3: (__int64)&v6[2 * v108], a4: v105, a5: (__int64)v133, a6: 0);
  v112 = v6[94163539];
  if ( (_DWORD)v112 == 0 )
  {
LABEL_60:
    MEMORY[0x18276EFE0]();
    goto LABEL_61;
  }
  sub_181EA01E0(a1: v110, a2: v111, a3: (__int64)&v6[2 * v112], a4: v109, a5: (__int64)v133, a6: 0);
  v116 = v6[94163522];
  if ( (_DWORD)v116 == 0 )
  {
LABEL_61:
    MEMORY[0x18276EFE0]();
    goto LABEL_62;
  }
  sub_181EA01E0(a1: v114, a2: v115, a3: (__int64)&v6[2 * v116], a4: v113, a5: (__int64)v133, a6: 0);
  v120 = v6[94163540];
  if ( (_DWORD)v120 == 0 )
  {
LABEL_62:
    MEMORY[0x18276EFE0]();
    goto LABEL_63;
  }
  sub_181EA01E0(a1: v118, a2: v119, a3: (__int64)&v6[2 * v120], a4: v117, a5: (__int64)v133, a6: 0);
  v124 = v6[94163523];
  if ( (_DWORD)v124 == 0 )
  {
LABEL_63:
    MEMORY[0x18276EFE0]();
    goto LABEL_64;
  }
  sub_181EA01E0(a1: v122, a2: v123, a3: (__int64)&v6[2 * v124], a4: v121, a5: (__int64)v133, a6: 0);
  v128 = v6[94163541];
  if ( (_DWORD)v128 == 0 )
  {
LABEL_64:
    MEMORY[0x18276EFE0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_181EA6C40(a1: v130, a2: v131, a3: v129);
    return;
  }
  sub_181EA01E0(a1: v126, a2: v127, a3: (__int64)&v6[2 * v128], a4: v125, a5: (__int64)v133, a6: 0);
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
}
