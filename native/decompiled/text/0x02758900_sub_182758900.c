// sub_182758900
// rva 0x02758900  size 6216  section .text  group text
// window base 0x182758900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182758900(int a1, int a2, unsigned int *a3, int a4, int a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned int *v12; // r9
  __int64 v13; // r11
  unsigned int *v14; // r12
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdi
  __int64 v125; // rsi
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rdx
  __int64 v137; // rdi
  __int64 v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // rsi
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // rdi
  __int64 v147; // rsi
  __int64 v148; // rdx
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // rdx
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // rdx
  __int64 v155; // rdi
  __int64 v156; // rsi
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rdx
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // rdi
  __int64 v171; // rsi
  __int64 v172; // rdx
  __int64 v173; // rdi
  __int64 v174; // rsi
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 v178; // rdi
  __int64 v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdi
  __int64 v183; // rsi
  __int64 v184; // r8
  __int64 v185; // r9
  char v186; // [rsp+0h] [rbp-48h] BYREF
  __int64 v187; // [rsp+10h] [rbp-38h]
  __int64 v188; // [rsp+18h] [rbp-30h]
  unsigned int *v189; // [rsp+20h] [rbp-28h]
  unsigned int *v190; // [rsp+28h] [rbp-20h]
  int v191; // [rsp+30h] [rbp-18h]
  int v192; // [rsp+34h] [rbp-14h]
  int v193; // [rsp+38h] [rbp-10h]
  int v194; // [rsp+3Ch] [rbp-Ch]
  int v195; // [rsp+40h] [rbp-8h]
  int v196; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v186 <= *(_QWORD *)(v7 + 8) )
  {
    v196 = a5;
    v189 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    v8 = a3[7];
    v9 = a3[17] & 0x7FFFFFF;
    if ( (a3[17] & 8) != 0 )
      JUMPOUT(0x304EA1932LL);
    if ( (a3[17] & 0x10) != 0 )
      JUMPOUT(0x304EA1942LL);
    v10 = 0;
    if ( (a3[17] & 0x40) != 0 )
      JUMPOUT(0x304EA1952LL);
    v11 = 0;
    if ( (a3[17] & 0x10) != 0 )
      JUMPOUT(0x304EA195DLL);
    v12 = &v6[2 * v8];
    v195 = MEMORY[0x112397B4] & a5;
    if ( (v9 & 8) == 0 )
    {
      v190 = &v6[2 * v8];
      v194 = 0;
      v193 = 0;
      v192 = 0;
      v191 = 0;
      v196 = a5;
      v189 = a3;
      if ( (v9 & 0x10) == 0 && (v9 & 0x40) == 0 )
      {
        switch ( (_DWORD)v8 )
        {
          case 0x410116:
            v36 = *(_QWORD *)(v7 + 40);
            v37 = v36 + 32;
            if ( (unsigned __int64)(v36 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v36 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40514224, a4: v9, a5: v37, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v37;
              *(_DWORD *)v36 = 40514224;
              *(_DWORD *)(v36 + 4) = 0;
              *(_QWORD *)(v36 + 8) = 0;
              *(_QWORD *)(v36 + 16) = 0;
              *(_QWORD *)(v36 + 24) = 0;
            }
            v188 = v36;
            sub_18275A160(a1: v11, a2: v10, a3: v36, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v39, a2: v40, a3: v38);
            return v188;
          case 0x41011F:
            v54 = *(_QWORD *)(v7 + 40);
            v55 = v54 + 32;
            if ( (unsigned __int64)(v54 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v54 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40517424, a4: v9, a5: v55, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v55;
              *(_DWORD *)v54 = 40517424;
              *(_DWORD *)(v54 + 4) = 0;
              *(_QWORD *)(v54 + 8) = 0;
              *(_QWORD *)(v54 + 16) = 0;
              *(_QWORD *)(v54 + 24) = 0;
            }
            v188 = v54;
            sub_18275A160(a1: v11, a2: v10, a3: v54, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v57, a2: v58, a3: v56);
            return v188;
          case 0x410155:
            v72 = *(_QWORD *)(v7 + 40);
            v73 = v72 + 32;
            if ( (unsigned __int64)(v72 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v72 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40520624, a4: v9, a5: v73, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v73;
              *(_DWORD *)v72 = 40520624;
              *(_DWORD *)(v72 + 4) = 0;
              *(_QWORD *)(v72 + 8) = 0;
              *(_QWORD *)(v72 + 16) = 0;
              *(_QWORD *)(v72 + 24) = 0;
            }
            v188 = v72;
            sub_18275A160(a1: v11, a2: v10, a3: v72, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v75, a2: v76, a3: v74);
            return v188;
          case 0x410128:
            v90 = *(_QWORD *)(v7 + 40);
            v91 = v90 + 32;
            if ( (unsigned __int64)(v90 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v90 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40523824, a4: v9, a5: v91, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v91;
              *(_DWORD *)v90 = 40523824;
              *(_DWORD *)(v90 + 4) = 0;
              *(_QWORD *)(v90 + 8) = 0;
              *(_QWORD *)(v90 + 16) = 0;
              *(_QWORD *)(v90 + 24) = 0;
            }
            v188 = v90;
            sub_18275A160(a1: v11, a2: v10, a3: v90, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v93, a2: v94, a3: v92);
            return v188;
          case 0x410143:
            v108 = *(_QWORD *)(v7 + 40);
            v109 = v108 + 32;
            if ( (unsigned __int64)(v108 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v108 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40527024, a4: v9, a5: v109, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v109;
              *(_DWORD *)v108 = 40527024;
              *(_DWORD *)(v108 + 4) = 0;
              *(_QWORD *)(v108 + 8) = 0;
              *(_QWORD *)(v108 + 16) = 0;
              *(_QWORD *)(v108 + 24) = 0;
            }
            v188 = v108;
            sub_18275A160(a1: v11, a2: v10, a3: v108, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v111, a2: v112, a3: v110);
            return v188;
          case 0x41014C:
            v131 = *(_QWORD *)(v7 + 40);
            v132 = v131 + 32;
            if ( (unsigned __int64)(v131 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v131 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40531024, a4: v9, a5: v132, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v132;
              *(_DWORD *)v131 = 40531024;
              *(_DWORD *)(v131 + 4) = 0;
              *(_QWORD *)(v131 + 8) = 0;
              *(_QWORD *)(v131 + 16) = 0;
              *(_QWORD *)(v131 + 24) = 0;
            }
            v188 = v131;
            sub_18275A160(a1: v11, a2: v10, a3: v131, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v134, a2: v135, a3: v133);
            return v188;
          case 0x41013A:
            v149 = *(_QWORD *)(v7 + 40);
            v150 = v149 + 32;
            if ( (unsigned __int64)(v149 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v149 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40534224, a4: v9, a5: v150, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v150;
              *(_DWORD *)v149 = 40534224;
              *(_DWORD *)(v149 + 4) = 0;
              *(_QWORD *)(v149 + 8) = 0;
              *(_QWORD *)(v149 + 16) = 0;
              *(_QWORD *)(v149 + 24) = 0;
            }
            v188 = v149;
            sub_18275A160(a1: v11, a2: v10, a3: v149, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v152, a2: v153, a3: v151);
            return v188;
          case 0x410131:
            v167 = *(_QWORD *)(v7 + 40);
            v168 = v167 + 32;
            if ( (unsigned __int64)(v167 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v167 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40537424, a4: v9, a5: v168, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v168;
              *(_DWORD *)v167 = 40537424;
              *(_DWORD *)(v167 + 4) = 0;
              *(_QWORD *)(v167 + 8) = 0;
              *(_QWORD *)(v167 + 16) = 0;
              *(_QWORD *)(v167 + 24) = 0;
            }
            v188 = v167;
            sub_18275A160(a1: v11, a2: v10, a3: v167, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v170, a2: v171, a3: v169);
            return v188;
          default:
            v27 = *(_QWORD *)(v7 + 40);
            v28 = v27 + 32;
            if ( (unsigned __int64)(v27 + 32) > *(_QWORD *)(v7 + 32) )
            {
              v27 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40512624, a4: v9, a5: v28, a6: v12);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v28;
              *(_DWORD *)v27 = 40512624;
              *(_DWORD *)(v27 + 4) = 0;
              *(_QWORD *)(v27 + 8) = 0;
              *(_QWORD *)(v27 + 16) = 0;
              *(_QWORD *)(v27 + 24) = 0;
            }
            v188 = v27;
            sub_18275A160(a1: v11, a2: v10, a3: v27, a4: v9, a5: v189, a6: v12);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v30, a2: v31, a3: v29);
            return v188;
        }
      }
      switch ( (_DWORD)v8 )
      {
        case 0x410116:
          v41 = *(_QWORD *)(v7 + 40);
          v42 = v41 + 32;
          if ( (unsigned __int64)(v41 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v41 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40515024, a4: v9, a5: v42, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v42;
            *(_DWORD *)v41 = 40515024;
            *(_DWORD *)(v41 + 4) = 0;
            *(_QWORD *)(v41 + 8) = 0;
            *(_QWORD *)(v41 + 16) = 0;
            *(_QWORD *)(v41 + 24) = 0;
          }
          v188 = v41;
          sub_18275A160(a1: v11, a2: v10, a3: v41, a4: v9, a5: v189, a6: v12);
          v45 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v43, a2: v44, a3: v45);
          return v45;
        case 0x41011F:
          v59 = *(_QWORD *)(v7 + 40);
          v60 = v59 + 32;
          if ( (unsigned __int64)(v59 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v59 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40518224, a4: v9, a5: v60, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v60;
            *(_DWORD *)v59 = 40518224;
            *(_DWORD *)(v59 + 4) = 0;
            *(_QWORD *)(v59 + 8) = 0;
            *(_QWORD *)(v59 + 16) = 0;
            *(_QWORD *)(v59 + 24) = 0;
          }
          v188 = v59;
          sub_18275A160(a1: v11, a2: v10, a3: v59, a4: v9, a5: v189, a6: v12);
          v63 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v61, a2: v62, a3: v63);
          return v63;
        case 0x410155:
          v77 = *(_QWORD *)(v7 + 40);
          v78 = v77 + 32;
          if ( (unsigned __int64)(v77 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v77 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40521424, a4: v9, a5: v78, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v78;
            *(_DWORD *)v77 = 40521424;
            *(_DWORD *)(v77 + 4) = 0;
            *(_QWORD *)(v77 + 8) = 0;
            *(_QWORD *)(v77 + 16) = 0;
            *(_QWORD *)(v77 + 24) = 0;
          }
          v188 = v77;
          sub_18275A160(a1: v11, a2: v10, a3: v77, a4: v9, a5: v189, a6: v12);
          v81 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v79, a2: v80, a3: v81);
          return v81;
        case 0x410128:
          v95 = *(_QWORD *)(v7 + 40);
          v96 = v95 + 32;
          if ( (unsigned __int64)(v95 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v95 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40524624, a4: v9, a5: v96, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v96;
            *(_DWORD *)v95 = 40524624;
            *(_DWORD *)(v95 + 4) = 0;
            *(_QWORD *)(v95 + 8) = 0;
            *(_QWORD *)(v95 + 16) = 0;
            *(_QWORD *)(v95 + 24) = 0;
          }
          v188 = v95;
          sub_18275A160(a1: v11, a2: v10, a3: v95, a4: v9, a5: v189, a6: v12);
          v99 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v97, a2: v98, a3: v99);
          return v99;
        case 0x410143:
          v113 = *(_QWORD *)(v7 + 40);
          v114 = v113 + 32;
          if ( (unsigned __int64)(v113 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v113 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40527824, a4: v9, a5: v114, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v114;
            *(_DWORD *)v113 = 40527824;
            *(_DWORD *)(v113 + 4) = 0;
            *(_QWORD *)(v113 + 8) = 0;
            *(_QWORD *)(v113 + 16) = 0;
            *(_QWORD *)(v113 + 24) = 0;
          }
          v188 = v113;
          sub_18275A160(a1: v11, a2: v10, a3: v113, a4: v9, a5: v189, a6: v12);
          v117 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v115, a2: v116, a3: v117);
          return v117;
        case 0x41014C:
          v126 = *(_QWORD *)(v7 + 40);
          v127 = v126 + 32;
          if ( (unsigned __int64)(v126 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v126 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40530224, a4: v9, a5: v127, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v127;
            *(_DWORD *)v126 = 40530224;
            *(_DWORD *)(v126 + 4) = 0;
            *(_QWORD *)(v126 + 8) = 0;
            *(_QWORD *)(v126 + 16) = 0;
            *(_QWORD *)(v126 + 24) = 0;
          }
          v188 = v126;
          sub_18275A160(a1: v11, a2: v10, a3: v126, a4: v9, a5: v189, a6: v12);
          v130 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v128, a2: v129, a3: v130);
          return v130;
        case 0x41013A:
          v144 = *(_QWORD *)(v7 + 40);
          v145 = v144 + 32;
          if ( (unsigned __int64)(v144 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v144 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40533424, a4: v9, a5: v145, a6: v12);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v145;
            *(_DWORD *)v144 = 40533424;
            *(_DWORD *)(v144 + 4) = 0;
            *(_QWORD *)(v144 + 8) = 0;
            *(_QWORD *)(v144 + 16) = 0;
            *(_QWORD *)(v144 + 24) = 0;
          }
          v188 = v144;
          sub_18275A160(a1: v11, a2: v10, a3: v144, a4: v9, a5: v189, a6: v12);
          v148 = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v146, a2: v147, a3: v148);
          return v148;
        default:
          break;
      }
      if ( (_DWORD)v8 != 4260145 )
      {
        v22 = *(_QWORD *)(v7 + 40);
        v23 = v22 + 32;
        if ( (unsigned __int64)(v22 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v22 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40511824, a4: v9, a5: v23, a6: v12);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v23;
          *(_DWORD *)v22 = 40511824;
          *(_DWORD *)(v22 + 4) = 0;
          *(_QWORD *)(v22 + 8) = 0;
          *(_QWORD *)(v22 + 16) = 0;
          *(_QWORD *)(v22 + 24) = 0;
        }
        v188 = v22;
        sub_18275A160(a1: v11, a2: v10, a3: v22, a4: v9, a5: v189, a6: v12);
        v26 = v188;
        *(_BYTE *)(v188 + 17) = v195;
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v24, a2: v25, a3: v26);
        return v26;
      }
      v162 = *(_QWORD *)(v7 + 40);
      v163 = v162 + 32;
      if ( (unsigned __int64)(v162 + 32) > *(_QWORD *)(v7 + 32) )
      {
        v162 = MEMORY[0x181EAA920](a1: 0, a2: 0, a3: 40536624, a4: v9, a5: v163, a6: v12);
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v163;
        *(_DWORD *)v162 = 40536624;
        *(_DWORD *)(v162 + 4) = 0;
        *(_QWORD *)(v162 + 8) = 0;
        *(_QWORD *)(v162 + 16) = 0;
        *(_QWORD *)(v162 + 24) = 0;
      }
      v188 = v162;
      sub_18275A160(a1: v11, a2: v10, a3: v162, a4: v9, a5: v189, a6: v12);
      v166 = v188;
      *(_BYTE *)(v188 + 17) = v195;
      if ( *(int *)(v7 + 16) > 0 )
        return v166;
LABEL_263:
      sub_18277F280(a1: v164, a2: v165, a3: v166);
      return v166;
    }
    v13 = a3[5];
    v14 = &v6[2 * v13];
    if ( (_DWORD)v13 != 0 )
    {
      v15 = v6[2 * v13 + 7];
      if ( (_DWORD)v15 == 0 )
      {
        v196 = a5;
        v189 = a3;
        sub_182771080(a1: 0, a2: 0, (_DWORD)a3, a4: v9, a5, a6: (_DWORD)v12, a7: v186);
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
        return sub_18275A160(a1: v182, a2: v183, a3: v180, a4: v181, a5: v184, a6: v185);
      }
      if ( BYTE2(v6[2 * v6[2 * v15 + 11] + 8]) == 0 )
        goto LABEL_11;
    }
    else
    {
      v188 = (__int64)&v6[2 * v13];
      v190 = &v6[2 * v8];
      v194 = 0;
      v193 = 0;
      v192 = 0;
      v191 = 0;
      v196 = a5;
      v189 = a3;
      sub_182771080(a1: 0, a2: 0, (_DWORD)a3, a4: v9, a5, a6: (_DWORD)v12, a7: v186);
    }
    v188 = (__int64)v14;
    v190 = v12;
    v194 = 0;
    v193 = v11;
    v192 = v10;
    v191 = 0;
    v196 = a5;
    v189 = a3;
    LODWORD(v8) = MEMORY[0x1815ACE20](a1: v11, a2: v10, a3: v14);
    v14 = (unsigned int *)v188;
    v12 = v190;
    a3 = v189;
LABEL_11:
    if ( (v9 & 0x10) != 0 )
      goto LABEL_12;
    v190 = v12;
    v194 = 0;
    v193 = v11;
    v192 = v10;
    v191 = 0;
    v196 = a5;
    v189 = a3;
    if ( (v9 & 0x40) != 0 )
    {
      v12 = v190;
      a3 = v189;
LABEL_12:
      switch ( (_DWORD)v8 )
      {
        case 0x410116:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v46 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v46 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v46 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40515824);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v46 + 32;
            *(_DWORD *)v46 = 40515824;
            *(_DWORD *)(v46 + 4) = 0;
            *(_QWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 16) = 0;
            *(_QWORD *)(v46 + 24) = 0;
          }
          v187 = v46;
          sub_182761560(a1: v11, a2: v10, a3: v46, a4: v9, a5: v189);
          v49 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v47, a2: v48, a3: v49);
          return v49;
        case 0x41011F:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v68 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v68 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v68 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40519824);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v68 + 32;
            *(_DWORD *)v68 = 40519824;
            *(_DWORD *)(v68 + 4) = 0;
            *(_QWORD *)(v68 + 8) = 0;
            *(_QWORD *)(v68 + 16) = 0;
            *(_QWORD *)(v68 + 24) = 0;
          }
          v187 = v68;
          sub_182761560(a1: v11, a2: v10, a3: v68, a4: v9, a5: v189);
          v71 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v69, a2: v70, a3: v71);
          return v71;
        case 0x410155:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v82 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v82 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v82 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40522224);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v82 + 32;
            *(_DWORD *)v82 = 40522224;
            *(_DWORD *)(v82 + 4) = 0;
            *(_QWORD *)(v82 + 8) = 0;
            *(_QWORD *)(v82 + 16) = 0;
            *(_QWORD *)(v82 + 24) = 0;
          }
          v187 = v82;
          sub_182761560(a1: v11, a2: v10, a3: v82, a4: v9, a5: v189);
          v85 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v83, a2: v84, a3: v85);
          return v85;
        case 0x410128:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v100 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v100 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v100 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40525424);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v100 + 32;
            *(_DWORD *)v100 = 40525424;
            *(_DWORD *)(v100 + 4) = 0;
            *(_QWORD *)(v100 + 8) = 0;
            *(_QWORD *)(v100 + 16) = 0;
            *(_QWORD *)(v100 + 24) = 0;
          }
          v187 = v100;
          sub_182761560(a1: v11, a2: v10, a3: v100, a4: v9, a5: v189);
          v103 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v101, a2: v102, a3: v103);
          return v103;
        case 0x410143:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v118 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v118 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v118 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40528624);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v118 + 32;
            *(_DWORD *)v118 = 40528624;
            *(_DWORD *)(v118 + 4) = 0;
            *(_QWORD *)(v118 + 8) = 0;
            *(_QWORD *)(v118 + 16) = 0;
            *(_QWORD *)(v118 + 24) = 0;
          }
          v187 = v118;
          sub_182761560(a1: v11, a2: v10, a3: v118, a4: v9, a5: v189);
          v121 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v119, a2: v120, a3: v121);
          return v121;
        case 0x41014C:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v136 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v136 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v136 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40531824);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v136 + 32;
            *(_DWORD *)v136 = 40531824;
            *(_DWORD *)(v136 + 4) = 0;
            *(_QWORD *)(v136 + 8) = 0;
            *(_QWORD *)(v136 + 16) = 0;
            *(_QWORD *)(v136 + 24) = 0;
          }
          v187 = v136;
          sub_182761560(a1: v11, a2: v10, a3: v136, a4: v9, a5: v189);
          v139 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v137, a2: v138, a3: v139);
          return v139;
        case 0x41013A:
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v154 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v154 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v154 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40535024);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v154 + 32;
            *(_DWORD *)v154 = 40535024;
            *(_DWORD *)(v154 + 4) = 0;
            *(_QWORD *)(v154 + 8) = 0;
            *(_QWORD *)(v154 + 16) = 0;
            *(_QWORD *)(v154 + 24) = 0;
          }
          v187 = v154;
          sub_182761560(a1: v11, a2: v10, a3: v154, a4: v9, a5: v189);
          v157 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v155, a2: v156, a3: v157);
          return v157;
        case 0x410131:
          v188 = (__int64)v14;
          v190 = v12;
          v194 = 0;
          v193 = v11;
          v192 = v10;
          v191 = 0;
          v196 = a5;
          v189 = a3;
          v172 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v172 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v172 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40538224);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v172 + 32;
            *(_DWORD *)v172 = 40538224;
            *(_DWORD *)(v172 + 4) = 0;
            *(_QWORD *)(v172 + 8) = 0;
            *(_QWORD *)(v172 + 16) = 0;
            *(_QWORD *)(v172 + 24) = 0;
          }
          v187 = v172;
          sub_182761560(a1: v11, a2: v10, a3: v172, a4: v9, a5: v189);
          v175 = v187;
          *(_BYTE *)(v187 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v173, a2: v174, a3: v175);
          return v175;
        default:
          v16 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v16 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v188 = (__int64)v14;
            v190 = v12;
            v194 = 0;
            v193 = v11;
            v192 = v10;
            v191 = 0;
            v196 = a5;
            v189 = a3;
            v16 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40511024);
            v17 = v189;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v16 + 32;
            *(_DWORD *)v16 = 40511024;
            *(_DWORD *)(v16 + 4) = 0;
            *(_QWORD *)(v16 + 8) = 0;
            *(_QWORD *)(v16 + 16) = 0;
            *(_QWORD *)(v16 + 24) = 0;
            v190 = v12;
            v194 = 0;
            v193 = v11;
            v192 = v10;
            v191 = 0;
            v196 = a5;
            v17 = a3;
          }
          v189 = v17;
          v188 = v16;
          sub_182761560(a1: v11, a2: v10, a3: v16, a4: v17, a5: v17);
          result = v188;
          *(_BYTE *)(v188 + 17) = v195;
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_18277F280(a1: v19, a2: v20, a3: v18);
          break;
      }
      return result;
    }
    switch ( (_DWORD)v8 )
    {
      case 0x410116:
        v50 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v50 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v50 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40516624);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v50 + 32;
          *(_DWORD *)v50 = 40516624;
          *(_DWORD *)(v50 + 4) = 0;
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 16) = 0;
          *(_QWORD *)(v50 + 24) = 0;
        }
        v187 = v50;
        sub_182761560(a1: v11, a2: v10, a3: v50, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v52, a2: v53, a3: v51);
        return v187;
      case 0x41011F:
        v64 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v64 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v64 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40519024);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v64 + 32;
          *(_DWORD *)v64 = 40519024;
          *(_DWORD *)(v64 + 4) = 0;
          *(_QWORD *)(v64 + 8) = 0;
          *(_QWORD *)(v64 + 16) = 0;
          *(_QWORD *)(v64 + 24) = 0;
        }
        v187 = v64;
        sub_182761560(a1: v11, a2: v10, a3: v64, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v66, a2: v67, a3: v65);
        return v187;
      case 0x410155:
        v86 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v86 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v86 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40523024);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v86 + 32;
          *(_DWORD *)v86 = 40523024;
          *(_DWORD *)(v86 + 4) = 0;
          *(_QWORD *)(v86 + 8) = 0;
          *(_QWORD *)(v86 + 16) = 0;
          *(_QWORD *)(v86 + 24) = 0;
        }
        v187 = v86;
        sub_182761560(a1: v11, a2: v10, a3: v86, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v88, a2: v89, a3: v87);
        return v187;
      case 0x410128:
        v104 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v104 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v104 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40526224);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v104 + 32;
          *(_DWORD *)v104 = 40526224;
          *(_DWORD *)(v104 + 4) = 0;
          *(_QWORD *)(v104 + 8) = 0;
          *(_QWORD *)(v104 + 16) = 0;
          *(_QWORD *)(v104 + 24) = 0;
        }
        v187 = v104;
        sub_182761560(a1: v11, a2: v10, a3: v104, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v106, a2: v107, a3: v105);
        return v187;
      case 0x410143:
        v122 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v122 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v122 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40529424);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v122 + 32;
          *(_DWORD *)v122 = 40529424;
          *(_DWORD *)(v122 + 4) = 0;
          *(_QWORD *)(v122 + 8) = 0;
          *(_QWORD *)(v122 + 16) = 0;
          *(_QWORD *)(v122 + 24) = 0;
        }
        v187 = v122;
        sub_182761560(a1: v11, a2: v10, a3: v122, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v124, a2: v125, a3: v123);
        return v187;
      case 0x41014C:
        v140 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v140 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v140 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40532624);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v140 + 32;
          *(_DWORD *)v140 = 40532624;
          *(_DWORD *)(v140 + 4) = 0;
          *(_QWORD *)(v140 + 8) = 0;
          *(_QWORD *)(v140 + 16) = 0;
          *(_QWORD *)(v140 + 24) = 0;
        }
        v187 = v140;
        sub_182761560(a1: v11, a2: v10, a3: v140, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v142, a2: v143, a3: v141);
        return v187;
      case 0x41013A:
        v158 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v158 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v158 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40535824);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v158 + 32;
          *(_DWORD *)v158 = 40535824;
          *(_DWORD *)(v158 + 4) = 0;
          *(_QWORD *)(v158 + 8) = 0;
          *(_QWORD *)(v158 + 16) = 0;
          *(_QWORD *)(v158 + 24) = 0;
        }
        v187 = v158;
        sub_182761560(a1: v11, a2: v10, a3: v158, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v160, a2: v161, a3: v159);
        return v187;
      case 0x410131:
        v188 = (__int64)v14;
        v176 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v176 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v176 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40539024);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v176 + 32;
          *(_DWORD *)v176 = 40539024;
          *(_DWORD *)(v176 + 4) = 0;
          *(_QWORD *)(v176 + 8) = 0;
          *(_QWORD *)(v176 + 16) = 0;
          *(_QWORD *)(v176 + 24) = 0;
        }
        v187 = v176;
        sub_182761560(a1: v11, a2: v10, a3: v176, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v178, a2: v179, a3: v177);
        return v187;
      default:
        v32 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v32 + 32) > *(_QWORD *)(v7 + 32) )
        {
          v188 = (__int64)v14;
          v32 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 40513424);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v32 + 32;
          *(_DWORD *)v32 = 40513424;
          *(_DWORD *)(v32 + 4) = 0;
          *(_QWORD *)(v32 + 8) = 0;
          *(_QWORD *)(v32 + 16) = 0;
          *(_QWORD *)(v32 + 24) = 0;
        }
        v187 = v32;
        sub_182761560(a1: v11, a2: v10, a3: v32, a4: v9, a5: v189);
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v34, a2: v35, a3: v33);
        return v187;
    }
  }
  v196 = a5;
  sub_182771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v186);
  goto LABEL_263;
}
