// sub_181EA5320
// rva 0x01ea5320  size 1242  section .text  group text
// window base 0x181ea5320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA5320(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  int v100; // r8d
  int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rsi
  int v108; // r8d
  int v109; // r9d
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // rsi
  int v116; // r8d
  int v117; // r9d
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rsi
  int v124; // r8d
  int v125; // r9d
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int64 v131; // rsi
  int v132; // r8d
  int v133; // r9d
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // rsi
  int v140; // r8d
  int v141; // r9d
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rdi
  __int64 v147; // rsi
  int v148; // r8d
  int v149; // r9d
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdi
  __int64 v155; // rsi
  int v156; // r8d
  int v157; // r9d
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rdi
  __int64 v163; // rsi
  int v164; // r8d
  int v165; // r9d
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rdi
  __int64 v171; // rsi
  int v172; // r8d
  int v173; // r9d
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rdi
  __int64 v179; // rsi
  int v180; // r8d
  int v181; // r9d
  __int64 v182; // rdx
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdi
  __int64 v187; // rsi
  int v188; // r8d
  int v189; // r9d
  __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rdi
  __int64 v195; // rsi
  int v196; // r8d
  int v197; // r9d
  __int64 v198; // rdx
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rdi
  __int64 v203; // rsi
  int v204; // r8d
  int v205; // r9d
  __int64 v206; // rdx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rdi
  __int64 v211; // rsi
  int v212; // r8d
  int v213; // r9d
  __int64 v214; // rdx
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rdi
  __int64 v219; // rsi
  int v220; // r8d
  int v221; // r9d
  __int64 v222; // rdx
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rcx
  __int64 v226; // rdi
  __int64 v227; // rsi
  int v228; // r8d
  int v229; // r9d
  __int64 v230; // rdx
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rdi
  __int64 v235; // rsi
  int v236; // r8d
  int v237; // r9d
  __int64 v238; // rdx
  __int64 v239; // rax
  __int64 v240; // rax
  char v242; // [rsp+0h] [rbp-18h] BYREF
  __int64 v243; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v242 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v242);
    goto LABEL_36;
  }
  v8 = v6[94163509];
  if ( (_DWORD)v8 == 0 )
  {
LABEL_36:
    MEMORY[0x18276EFE0]();
    goto LABEL_37;
  }
  v9 = sub_181E9FCA0(a1, a2, a3: (__int64)&v6[2 * v8], a4, a5, a6);
  v15 = v6[94163527];
  if ( (_DWORD)v15 == 0 )
  {
LABEL_37:
    MEMORY[0x18276EFE0]();
    goto LABEL_38;
  }
  v243 = v9;
  v16 = sub_181E9FCA0(a1: v11, a2: v12, a3: (__int64)&v6[2 * v15], a4: v10, a5: v13, a6: v14);
  v22 = v6[94163510];
  v23 = v243 + v16;
  if ( (_DWORD)v22 == 0 )
  {
LABEL_38:
    MEMORY[0x18276EFE0]();
    goto LABEL_39;
  }
  v243 = v23;
  v24 = sub_181E9FCA0(a1: v18, a2: v19, a3: (__int64)&v6[2 * v22], a4: v17, a5: v20, a6: v21);
  v30 = v6[94163528];
  v31 = v243 + v24;
  if ( (_DWORD)v30 == 0 )
  {
LABEL_39:
    MEMORY[0x18276EFE0]();
    goto LABEL_40;
  }
  v243 = v31;
  v32 = sub_181E9FCA0(a1: v26, a2: v27, a3: (__int64)&v6[2 * v30], a4: v25, a5: v28, a6: v29);
  v38 = v6[94163511];
  v39 = v243 + v32;
  if ( (_DWORD)v38 == 0 )
  {
LABEL_40:
    MEMORY[0x18276EFE0]();
    goto LABEL_41;
  }
  v243 = v39;
  v40 = sub_181E9FCA0(a1: v34, a2: v35, a3: (__int64)&v6[2 * v38], a4: v33, a5: v36, a6: v37);
  v46 = v6[94163529];
  v47 = v243 + v40;
  if ( (_DWORD)v46 == 0 )
  {
LABEL_41:
    MEMORY[0x18276EFE0]();
    goto LABEL_42;
  }
  v243 = v47;
  v48 = sub_181E9FCA0(a1: v42, a2: v43, a3: (__int64)&v6[2 * v46], a4: v41, a5: v44, a6: v45);
  v54 = v6[94163512];
  v55 = v243 + v48;
  if ( (_DWORD)v54 == 0 )
  {
LABEL_42:
    MEMORY[0x18276EFE0]();
    goto LABEL_43;
  }
  v243 = v55;
  v56 = sub_181E9FCA0(a1: v50, a2: v51, a3: (__int64)&v6[2 * v54], a4: v49, a5: v52, a6: v53);
  v62 = v6[94163530];
  v63 = v243 + v56;
  if ( (_DWORD)v62 == 0 )
  {
LABEL_43:
    MEMORY[0x18276EFE0]();
    goto LABEL_44;
  }
  v243 = v63;
  v64 = sub_181E9FCA0(a1: v58, a2: v59, a3: (__int64)&v6[2 * v62], a4: v57, a5: v60, a6: v61);
  v70 = v6[94163513];
  v71 = v243 + v64;
  if ( (_DWORD)v70 == 0 )
  {
LABEL_44:
    MEMORY[0x18276EFE0]();
    goto LABEL_45;
  }
  v243 = v71;
  v72 = sub_181E9FCA0(a1: v66, a2: v67, a3: (__int64)&v6[2 * v70], a4: v65, a5: v68, a6: v69);
  v78 = v6[94163531];
  v79 = v243 + v72;
  if ( (_DWORD)v78 == 0 )
  {
LABEL_45:
    MEMORY[0x18276EFE0]();
    goto LABEL_46;
  }
  v243 = v79;
  v80 = sub_181E9FCA0(a1: v74, a2: v75, a3: (__int64)&v6[2 * v78], a4: v73, a5: v76, a6: v77);
  v86 = v6[94163514];
  v87 = v243 + v80;
  if ( (_DWORD)v86 == 0 )
  {
LABEL_46:
    MEMORY[0x18276EFE0]();
    goto LABEL_47;
  }
  v243 = v87;
  v88 = sub_181E9FCA0(a1: v82, a2: v83, a3: (__int64)&v6[2 * v86], a4: v81, a5: v84, a6: v85);
  v94 = v6[94163532];
  v95 = v243 + v88;
  if ( (_DWORD)v94 == 0 )
  {
LABEL_47:
    MEMORY[0x18276EFE0]();
    goto LABEL_48;
  }
  v243 = v95;
  v96 = sub_181E9FCA0(a1: v90, a2: v91, a3: (__int64)&v6[2 * v94], a4: v89, a5: v92, a6: v93);
  v102 = v6[94163515];
  v103 = v243 + v96;
  if ( (_DWORD)v102 == 0 )
  {
LABEL_48:
    MEMORY[0x18276EFE0]();
    goto LABEL_49;
  }
  v243 = v103;
  v104 = sub_181E9FCA0(a1: v98, a2: v99, a3: (__int64)&v6[2 * v102], a4: v97, a5: v100, a6: v101);
  v110 = v6[94163533];
  v111 = v243 + v104;
  if ( (_DWORD)v110 == 0 )
  {
LABEL_49:
    MEMORY[0x18276EFE0]();
    goto LABEL_50;
  }
  v243 = v111;
  v112 = sub_181E9FCA0(a1: v106, a2: v107, a3: (__int64)&v6[2 * v110], a4: v105, a5: v108, a6: v109);
  v118 = v6[94163516];
  v119 = v243 + v112;
  if ( (_DWORD)v118 == 0 )
  {
LABEL_50:
    MEMORY[0x18276EFE0]();
    goto LABEL_51;
  }
  v243 = v119;
  v120 = sub_181E9FCA0(a1: v114, a2: v115, a3: (__int64)&v6[2 * v118], a4: v113, a5: v116, a6: v117);
  v126 = v6[94163534];
  v127 = v243 + v120;
  if ( (_DWORD)v126 == 0 )
  {
LABEL_51:
    MEMORY[0x18276EFE0]();
    goto LABEL_52;
  }
  v243 = v127;
  v128 = sub_181E9FCA0(a1: v122, a2: v123, a3: (__int64)&v6[2 * v126], a4: v121, a5: v124, a6: v125);
  v134 = v6[94163517];
  v135 = v243 + v128;
  if ( (_DWORD)v134 == 0 )
  {
LABEL_52:
    MEMORY[0x18276EFE0]();
    goto LABEL_53;
  }
  v243 = v135;
  v136 = sub_181E9FCA0(a1: v130, a2: v131, a3: (__int64)&v6[2 * v134], a4: v129, a5: v132, a6: v133);
  v142 = v6[94163535];
  v143 = v243 + v136;
  if ( (_DWORD)v142 == 0 )
  {
LABEL_53:
    MEMORY[0x18276EFE0]();
    goto LABEL_54;
  }
  v243 = v143;
  v144 = sub_181E9FCA0(a1: v138, a2: v139, a3: (__int64)&v6[2 * v142], a4: v137, a5: v140, a6: v141);
  v150 = v6[94163518];
  v151 = v243 + v144;
  if ( (_DWORD)v150 == 0 )
  {
LABEL_54:
    MEMORY[0x18276EFE0]();
    goto LABEL_55;
  }
  v243 = v151;
  v152 = sub_181E9FCA0(a1: v146, a2: v147, a3: (__int64)&v6[2 * v150], a4: v145, a5: v148, a6: v149);
  v158 = v6[94163536];
  v159 = v243 + v152;
  if ( (_DWORD)v158 == 0 )
  {
LABEL_55:
    MEMORY[0x18276EFE0]();
    goto LABEL_56;
  }
  v243 = v159;
  v160 = sub_181E9FCA0(a1: v154, a2: v155, a3: (__int64)&v6[2 * v158], a4: v153, a5: v156, a6: v157);
  v166 = v6[94163519];
  v167 = v243 + v160;
  if ( (_DWORD)v166 == 0 )
  {
LABEL_56:
    MEMORY[0x18276EFE0]();
    goto LABEL_57;
  }
  v243 = v167;
  v168 = sub_181E9FCA0(a1: v162, a2: v163, a3: (__int64)&v6[2 * v166], a4: v161, a5: v164, a6: v165);
  v174 = v6[94163537];
  v175 = v243 + v168;
  if ( (_DWORD)v174 == 0 )
  {
LABEL_57:
    MEMORY[0x18276EFE0]();
    goto LABEL_58;
  }
  v243 = v175;
  v176 = sub_181E9FCA0(a1: v170, a2: v171, a3: (__int64)&v6[2 * v174], a4: v169, a5: v172, a6: v173);
  v182 = v6[94163520];
  v183 = v243 + v176;
  if ( (_DWORD)v182 == 0 )
  {
LABEL_58:
    MEMORY[0x18276EFE0]();
    goto LABEL_59;
  }
  v243 = v183;
  v184 = sub_181E9FCA0(a1: v178, a2: v179, a3: (__int64)&v6[2 * v182], a4: v177, a5: v180, a6: v181);
  v190 = v6[94163538];
  v191 = v243 + v184;
  if ( (_DWORD)v190 == 0 )
  {
LABEL_59:
    MEMORY[0x18276EFE0]();
    goto LABEL_60;
  }
  v243 = v191;
  v192 = sub_181E9FCA0(a1: v186, a2: v187, a3: (__int64)&v6[2 * v190], a4: v185, a5: v188, a6: v189);
  v198 = v6[94163521];
  v199 = v243 + v192;
  if ( (_DWORD)v198 == 0 )
  {
LABEL_60:
    MEMORY[0x18276EFE0]();
    goto LABEL_61;
  }
  v243 = v199;
  v200 = sub_181E9FCA0(a1: v194, a2: v195, a3: (__int64)&v6[2 * v198], a4: v193, a5: v196, a6: v197);
  v206 = v6[94163539];
  v207 = v243 + v200;
  if ( (_DWORD)v206 == 0 )
  {
LABEL_61:
    MEMORY[0x18276EFE0]();
    goto LABEL_62;
  }
  v243 = v207;
  v208 = sub_181E9FCA0(a1: v202, a2: v203, a3: (__int64)&v6[2 * v206], a4: v201, a5: v204, a6: v205);
  v214 = v6[94163522];
  v215 = v243 + v208;
  if ( (_DWORD)v214 == 0 )
  {
LABEL_62:
    MEMORY[0x18276EFE0]();
    goto LABEL_63;
  }
  v243 = v215;
  v216 = sub_181E9FCA0(a1: v210, a2: v211, a3: (__int64)&v6[2 * v214], a4: v209, a5: v212, a6: v213);
  v222 = v6[94163540];
  v223 = v243 + v216;
  if ( (_DWORD)v222 == 0 )
  {
LABEL_63:
    MEMORY[0x18276EFE0]();
    goto LABEL_64;
  }
  v243 = v223;
  v224 = sub_181E9FCA0(a1: v218, a2: v219, a3: (__int64)&v6[2 * v222], a4: v217, a5: v220, a6: v221);
  v230 = v6[94163523];
  v231 = v243 + v224;
  if ( (_DWORD)v230 == 0 )
  {
LABEL_64:
    MEMORY[0x18276EFE0]();
    goto LABEL_65;
  }
  v243 = v231;
  v232 = sub_181E9FCA0(a1: v226, a2: v227, a3: (__int64)&v6[2 * v230], a4: v225, a5: v228, a6: v229);
  v238 = v6[94163541];
  v239 = v243 + v232;
  if ( (_DWORD)v238 == 0 )
  {
LABEL_65:
    MEMORY[0x18276EFE0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EA5800();
  }
  v243 = v239;
  v240 = sub_181E9FCA0(a1: v234, a2: v235, a3: (__int64)&v6[2 * v238], a4: v233, a5: v236, a6: v237);
  if ( *(int *)(v7 + 16) <= 0 )
    v240 = MEMORY[0x18277F280]();
  return v243 + v240;
}
