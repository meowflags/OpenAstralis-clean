// sub_181EA5800
// rva 0x01ea5800  size 1798  section .text  group text
// window base 0x181ea5800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA5800(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rsi
  char v103; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v103 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v103);
    goto LABEL_66;
  }
  v8 = v6[94163509];
  if ( (_DWORD)v8 == 0 )
  {
LABEL_66:
    MEMORY[0x18276EFE0]();
    goto LABEL_67;
  }
  v9 = v6[2 * v8 + 3];
  if ( (_DWORD)v9 == 0 )
  {
LABEL_67:
    MEMORY[0x18276EFE0]();
    goto LABEL_68;
  }
  v10 = *(_QWORD *)&v6[2 * v9 + 4];
  v11 = v6[94163527];
  v12 = v10 << 19;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_68:
    MEMORY[0x18276EFE0]();
    goto LABEL_69;
  }
  v13 = v6[2 * v11 + 3];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_69:
    MEMORY[0x18276EFE0](a1, a2, a3: v13, a4: &v6[2 * v11]);
    goto LABEL_70;
  }
  v14 = *(_QWORD *)&v6[2 * v13 + 4];
  v15 = v6[94163510];
  v16 = (v14 << 19) + v12;
  if ( (_DWORD)v15 == 0 )
  {
LABEL_70:
    MEMORY[0x18276EFE0]();
    goto LABEL_71;
  }
  v17 = v6[2 * v15 + 3];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_71:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v15]);
    goto LABEL_72;
  }
  v18 = v6[94163528];
  v19 = (*(_QWORD *)&v6[2 * v17 + 4] << 19) + v16;
  if ( (_DWORD)v18 == 0 )
  {
LABEL_72:
    MEMORY[0x18276EFE0]();
    goto LABEL_73;
  }
  v20 = v6[2 * v18 + 3];
  if ( (_DWORD)v20 == 0 )
  {
LABEL_73:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v18]);
    goto LABEL_74;
  }
  v21 = v6[94163511];
  v22 = (*(_QWORD *)&v6[2 * v20 + 4] << 19) + v19;
  if ( (_DWORD)v21 == 0 )
  {
LABEL_74:
    MEMORY[0x18276EFE0]();
    goto LABEL_75;
  }
  v23 = v6[2 * v21 + 3];
  if ( (_DWORD)v23 == 0 )
  {
LABEL_75:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v21]);
    goto LABEL_76;
  }
  v24 = v6[94163529];
  v25 = (*(_QWORD *)&v6[2 * v23 + 4] << 19) + v22;
  if ( (_DWORD)v24 == 0 )
  {
LABEL_76:
    MEMORY[0x18276EFE0]();
    goto LABEL_77;
  }
  v26 = v6[2 * v24 + 3];
  if ( (_DWORD)v26 == 0 )
  {
LABEL_77:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v24]);
    goto LABEL_78;
  }
  v27 = v6[94163512];
  v28 = (*(_QWORD *)&v6[2 * v26 + 4] << 19) + v25;
  if ( (_DWORD)v27 == 0 )
  {
LABEL_78:
    MEMORY[0x18276EFE0]();
    goto LABEL_79;
  }
  v29 = v6[2 * v27 + 3];
  if ( (_DWORD)v29 == 0 )
  {
LABEL_79:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v27]);
    goto LABEL_80;
  }
  v30 = v6[94163530];
  v31 = (*(_QWORD *)&v6[2 * v29 + 4] << 19) + v28;
  if ( (_DWORD)v30 == 0 )
  {
LABEL_80:
    MEMORY[0x18276EFE0]();
    goto LABEL_81;
  }
  v32 = v6[2 * v30 + 3];
  if ( (_DWORD)v32 == 0 )
  {
LABEL_81:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v30]);
    goto LABEL_82;
  }
  v33 = v6[94163513];
  v34 = (*(_QWORD *)&v6[2 * v32 + 4] << 19) + v31;
  if ( (_DWORD)v33 == 0 )
  {
LABEL_82:
    MEMORY[0x18276EFE0]();
    goto LABEL_83;
  }
  v35 = v6[2 * v33 + 3];
  if ( (_DWORD)v35 == 0 )
  {
LABEL_83:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v33]);
    goto LABEL_84;
  }
  v36 = v6[94163531];
  v37 = (*(_QWORD *)&v6[2 * v35 + 4] << 19) + v34;
  if ( (_DWORD)v36 == 0 )
  {
LABEL_84:
    MEMORY[0x18276EFE0]();
    goto LABEL_85;
  }
  v38 = v6[2 * v36 + 3];
  if ( (_DWORD)v38 == 0 )
  {
LABEL_85:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v36]);
    goto LABEL_86;
  }
  v39 = v6[94163514];
  v40 = (*(_QWORD *)&v6[2 * v38 + 4] << 19) + v37;
  if ( (_DWORD)v39 == 0 )
  {
LABEL_86:
    MEMORY[0x18276EFE0]();
    goto LABEL_87;
  }
  v41 = v6[2 * v39 + 3];
  if ( (_DWORD)v41 == 0 )
  {
LABEL_87:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v39]);
    goto LABEL_88;
  }
  v42 = v6[94163532];
  v43 = (*(_QWORD *)&v6[2 * v41 + 4] << 19) + v40;
  if ( (_DWORD)v42 == 0 )
  {
LABEL_88:
    MEMORY[0x18276EFE0]();
    goto LABEL_89;
  }
  v44 = v6[2 * v42 + 3];
  if ( (_DWORD)v44 == 0 )
  {
LABEL_89:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v42]);
    goto LABEL_90;
  }
  v45 = v6[94163515];
  v46 = (*(_QWORD *)&v6[2 * v44 + 4] << 19) + v43;
  if ( (_DWORD)v45 == 0 )
  {
LABEL_90:
    MEMORY[0x18276EFE0]();
    goto LABEL_91;
  }
  v47 = v6[2 * v45 + 3];
  if ( (_DWORD)v47 == 0 )
  {
LABEL_91:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v45]);
    goto LABEL_92;
  }
  v48 = v6[94163533];
  v49 = (*(_QWORD *)&v6[2 * v47 + 4] << 19) + v46;
  if ( (_DWORD)v48 == 0 )
  {
LABEL_92:
    MEMORY[0x18276EFE0]();
    goto LABEL_93;
  }
  v50 = v6[2 * v48 + 3];
  if ( (_DWORD)v50 == 0 )
  {
LABEL_93:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v48]);
    goto LABEL_94;
  }
  v51 = v6[94163516];
  v52 = (*(_QWORD *)&v6[2 * v50 + 4] << 19) + v49;
  if ( (_DWORD)v51 == 0 )
  {
LABEL_94:
    MEMORY[0x18276EFE0]();
    goto LABEL_95;
  }
  v53 = v6[2 * v51 + 3];
  if ( (_DWORD)v53 == 0 )
  {
LABEL_95:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v51]);
    goto LABEL_96;
  }
  v54 = v6[94163534];
  v55 = (*(_QWORD *)&v6[2 * v53 + 4] << 19) + v52;
  if ( (_DWORD)v54 == 0 )
  {
LABEL_96:
    MEMORY[0x18276EFE0]();
    goto LABEL_97;
  }
  v56 = v6[2 * v54 + 3];
  if ( (_DWORD)v56 == 0 )
  {
LABEL_97:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v54]);
    goto LABEL_98;
  }
  v57 = v6[94163517];
  v58 = (*(_QWORD *)&v6[2 * v56 + 4] << 19) + v55;
  if ( (_DWORD)v57 == 0 )
  {
LABEL_98:
    MEMORY[0x18276EFE0]();
    goto LABEL_99;
  }
  v59 = v6[2 * v57 + 3];
  if ( (_DWORD)v59 == 0 )
  {
LABEL_99:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v57]);
    goto LABEL_100;
  }
  v60 = v6[94163535];
  v61 = (*(_QWORD *)&v6[2 * v59 + 4] << 19) + v58;
  if ( (_DWORD)v60 == 0 )
  {
LABEL_100:
    MEMORY[0x18276EFE0]();
    goto LABEL_101;
  }
  v62 = v6[2 * v60 + 3];
  if ( (_DWORD)v62 == 0 )
  {
LABEL_101:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v60]);
    goto LABEL_102;
  }
  v63 = v6[94163518];
  v64 = (*(_QWORD *)&v6[2 * v62 + 4] << 19) + v61;
  if ( (_DWORD)v63 == 0 )
  {
LABEL_102:
    MEMORY[0x18276EFE0]();
    goto LABEL_103;
  }
  v65 = v6[2 * v63 + 3];
  if ( (_DWORD)v65 == 0 )
  {
LABEL_103:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v63]);
    goto LABEL_104;
  }
  v66 = v6[94163536];
  v67 = (*(_QWORD *)&v6[2 * v65 + 4] << 19) + v64;
  if ( (_DWORD)v66 == 0 )
  {
LABEL_104:
    MEMORY[0x18276EFE0]();
    goto LABEL_105;
  }
  v68 = v6[2 * v66 + 3];
  if ( (_DWORD)v68 == 0 )
  {
LABEL_105:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v66]);
    goto LABEL_106;
  }
  v69 = v6[94163519];
  v70 = (*(_QWORD *)&v6[2 * v68 + 4] << 19) + v67;
  if ( (_DWORD)v69 == 0 )
  {
LABEL_106:
    MEMORY[0x18276EFE0]();
    goto LABEL_107;
  }
  v71 = v6[2 * v69 + 3];
  if ( (_DWORD)v71 == 0 )
  {
LABEL_107:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v69]);
    goto LABEL_108;
  }
  v72 = v6[94163537];
  v73 = (*(_QWORD *)&v6[2 * v71 + 4] << 19) + v70;
  if ( (_DWORD)v72 == 0 )
  {
LABEL_108:
    MEMORY[0x18276EFE0]();
    goto LABEL_109;
  }
  v74 = v6[2 * v72 + 3];
  if ( (_DWORD)v74 == 0 )
  {
LABEL_109:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v72]);
    goto LABEL_110;
  }
  v75 = v6[94163520];
  v76 = (*(_QWORD *)&v6[2 * v74 + 4] << 19) + v73;
  if ( (_DWORD)v75 == 0 )
  {
LABEL_110:
    MEMORY[0x18276EFE0]();
    goto LABEL_111;
  }
  v77 = v6[2 * v75 + 3];
  if ( (_DWORD)v77 == 0 )
  {
LABEL_111:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v75]);
    goto LABEL_112;
  }
  v78 = v6[94163538];
  v79 = (*(_QWORD *)&v6[2 * v77 + 4] << 19) + v76;
  if ( (_DWORD)v78 == 0 )
  {
LABEL_112:
    MEMORY[0x18276EFE0]();
    goto LABEL_113;
  }
  v80 = v6[2 * v78 + 3];
  if ( (_DWORD)v80 == 0 )
  {
LABEL_113:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v78]);
    goto LABEL_114;
  }
  v81 = v6[94163521];
  v82 = (*(_QWORD *)&v6[2 * v80 + 4] << 19) + v79;
  if ( (_DWORD)v81 == 0 )
  {
LABEL_114:
    MEMORY[0x18276EFE0]();
    goto LABEL_115;
  }
  v83 = v6[2 * v81 + 3];
  if ( (_DWORD)v83 == 0 )
  {
LABEL_115:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v81]);
    goto LABEL_116;
  }
  v84 = v6[94163539];
  v85 = (*(_QWORD *)&v6[2 * v83 + 4] << 19) + v82;
  if ( (_DWORD)v84 == 0 )
  {
LABEL_116:
    MEMORY[0x18276EFE0]();
    goto LABEL_117;
  }
  v86 = v6[2 * v84 + 3];
  if ( (_DWORD)v86 == 0 )
  {
LABEL_117:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v84]);
    goto LABEL_118;
  }
  v87 = v6[94163522];
  v88 = (*(_QWORD *)&v6[2 * v86 + 4] << 19) + v85;
  if ( (_DWORD)v87 == 0 )
  {
LABEL_118:
    MEMORY[0x18276EFE0]();
    goto LABEL_119;
  }
  v89 = v6[2 * v87 + 3];
  if ( (_DWORD)v89 == 0 )
  {
LABEL_119:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v87]);
    goto LABEL_120;
  }
  v90 = v6[94163540];
  v91 = (*(_QWORD *)&v6[2 * v89 + 4] << 19) + v88;
  if ( (_DWORD)v90 == 0 )
  {
LABEL_120:
    MEMORY[0x18276EFE0]();
    goto LABEL_121;
  }
  v92 = v6[2 * v90 + 3];
  if ( (_DWORD)v92 == 0 )
  {
LABEL_121:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v90]);
    goto LABEL_122;
  }
  v93 = v6[94163523];
  v94 = (*(_QWORD *)&v6[2 * v92 + 4] << 19) + v91;
  if ( (_DWORD)v93 == 0 )
  {
LABEL_122:
    MEMORY[0x18276EFE0]();
    goto LABEL_123;
  }
  v95 = v6[2 * v93 + 3];
  if ( (_DWORD)v95 == 0 )
  {
LABEL_123:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v93]);
    goto LABEL_124;
  }
  v96 = v6[94163541];
  v97 = (*(_QWORD *)&v6[2 * v95 + 4] << 19) + v94;
  if ( (_DWORD)v96 == 0 )
  {
LABEL_124:
    MEMORY[0x18276EFE0]();
    goto LABEL_125;
  }
  v98 = v6[2 * v96 + 3];
  if ( (_DWORD)v98 == 0 )
  {
LABEL_125:
    MEMORY[0x18276EFE0](a1, a2, a3: &v6[2 * v96]);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EA5F20(a1: v101, a2: v102, a3: v100);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    v97 = MEMORY[0x18277F280]();
  return (*(_QWORD *)&v6[2 * v98 + 4] << 19) + v97;
}
