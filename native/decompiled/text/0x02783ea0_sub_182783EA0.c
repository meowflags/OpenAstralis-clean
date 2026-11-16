// sub_182783EA0
// rva 0x02783ea0  size 2190  section .text  group text
// window base 0x182783ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182783EA0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __m128 v41; // xmm6
  __m128 v42; // xmm7
  __int64 result; // rax
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  unsigned int v64; // edx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdi
  __int64 v110; // rsi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rsi
  __int64 v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rdi
  __int64 v124; // rsi
  unsigned int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rcx
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 v138; // rsi
  __int64 v139; // rcx
  __int64 v140; // rdi
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdi
  __int64 v145; // rsi
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdi
  __int64 v149; // rsi
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdi
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdi
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rdi
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rdi
  __int64 v181; // rsi
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rdi
  __int64 v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rdi
  __int64 v189; // rsi
  __int64 v190; // rcx
  __int64 v191; // rdi
  __int64 v192; // rsi
  __int64 v193; // rax
  __int64 v194; // rdi
  __int64 v195; // rsi
  __int64 v196; // rcx
  __int64 v197; // rcx
  __int64 v198; // rdi
  __int64 v199; // rsi
  unsigned int v200; // eax
  __int64 v201; // rcx
  __int64 v202; // rsi
  __int64 v203; // rcx
  __int64 v204; // rdi
  __int64 v205; // rsi
  __int64 v206; // rdx
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rdi
  __int64 v210; // rsi
  __int64 v211; // rcx
  __int64 v212; // rdi
  __int64 v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rdi
  __int64 v216; // rsi
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rdi
  __int64 v220; // rsi
  __int64 v221; // r8
  char v222; // [rsp+0h] [rbp-78h] BYREF
  __int64 v223; // [rsp+8h] [rbp-70h]
  __int64 v224; // [rsp+10h] [rbp-68h]
  __int64 v225; // [rsp+18h] [rbp-60h]
  __int64 v226; // [rsp+20h] [rbp-58h]
  __int64 v227; // [rsp+28h] [rbp-50h]
  __int64 v228; // [rsp+30h] [rbp-48h]
  __int64 v229; // [rsp+38h] [rbp-40h]
  __int64 v230; // [rsp+40h] [rbp-38h]
  unsigned int v231; // [rsp+48h] [rbp-30h]
  unsigned int v232; // [rsp+4Ch] [rbp-2Ch]
  __int64 v233; // [rsp+50h] [rbp-28h]
  __int64 v234; // [rsp+58h] [rbp-20h]
  unsigned int v235; // [rsp+64h] [rbp-14h]
  unsigned int v236; // [rsp+68h] [rbp-10h]
  int v237; // [rsp+6Ch] [rbp-Ch]
  __int64 v238; // [rsp+70h] [rbp-8h]

  v238 = a5;
  v237 = a6;
  if ( (unsigned __int64)&v222 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_59;
  }
  v231 = *(_DWORD *)(v6 + 376669284);
  v8 = v6 + 8LL * v231;
  if ( v231 == 0 )
  {
LABEL_59:
    v230 = v8;
    sub_18276EFE0(a1, a2, a3, a4: v8, a5, a6, a7: v222);
    goto LABEL_60;
  }
  v230 = v6 + 8LL * v231;
  v229 = v6 + 376612120;
  v236 = *(_DWORD *)(v230 + 12);
  v9 = MEMORY[0x182084560](a1, a2, a3: v6 + 376612120, a4: v8, a5: v236);
  v228 = v6 + 372436952;
  v12 = MEMORY[0x182084840](a1: v10, a2: v11, a3: v9, a4: v6 + 372436952, a5: v6 + 372436952);
  v15 = MEMORY[0x182084840](a1: v13, a2: v14, a3: v12, a4: v231, a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * v231 + 8));
  v227 = v6 + 372983672;
  MEMORY[0x182084840](a1: v16, a2: v17, a3: v15, a4: v6 + 372983672, a5: v6 + 372983672);
  v19 = *(unsigned int *)(v6 + 8LL * v231 + 4);
  v226 = v6 + 372674176;
  v20 = v6 + 372990000;
  v225 = v6 + 372990000;
  switch ( (_DWORD)v19 )
  {
    case 0x4D5412:
      v235 = *(_DWORD *)(v238 + (int)v236);
      v142 = MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v235, a5: v6 + 372677712);
      v146 = MEMORY[0x182084B20](a1: v144, a2: v145, a3: v142, a4: v143, a5: v235);
      v150 = MEMORY[0x182084840](a1: v148, a2: v149, a3: v146, a4: v147, a5: v225);
      v154 = MEMORY[0x182084560](a1: v152, a2: v153, a3: v150, a4: v151, a5: v235);
      MEMORY[0x182084840](a1: v156, a2: v157, a3: v154, a4: v155, a5: v226);
      goto LABEL_10;
    case 0x4D5422:
      v234 = *(_QWORD *)(v238 + (int)v236);
      v158 = MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v234, a5: v6 + 372677480);
      v162 = MEMORY[0x182084B80](a1: v160, a2: v161, a3: v158, a4: v159, a5: v234);
      v166 = MEMORY[0x182084840](a1: v164, a2: v165, a3: v162, a4: v163, a5: v225);
      v170 = MEMORY[0x1820845C0](a1: v168, a2: v169, a3: v166, a4: v167, a5: v234);
      MEMORY[0x182084840](a1: v172, a2: v173, a3: v170, a4: v171, a5: v226);
      goto LABEL_10;
    case 0x4D5432:
      v234 = *(_QWORD *)(v238 + (int)v236);
      v174 = MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v234, a5: v6 + 372681896);
      v178 = MEMORY[0x182084BC0](a1: v176, a2: v177, a3: v174, a4: v175, a5: v234);
      v182 = MEMORY[0x182084840](a1: v180, a2: v181, a3: v178, a4: v179, a5: v225);
      v186 = MEMORY[0x182084680](a1: v184, a2: v185, a3: v182, a4: v183, a5: v234);
      MEMORY[0x182084840](a1: v188, a2: v189, a3: v186, a4: v187, a5: v226);
      goto LABEL_10;
    case 0x4D5442:
      if ( v237 != 0 )
      {
        v224 = v6 + 372682432;
        v223 = sub_182784740(a1: v18, a2: v20, a3: v238, a4: v19, a5: v236);
        v193 = MEMORY[0x182084840](a1: v191, a2: v192, a3: v229, a4: v190, a5: v224);
        if ( v223 == v6 )
          JUMPOUT(0x304ECD578LL);
        MEMORY[0x182084BC0](a1: v194, a2: v195, a3: v193, a4: v223, a5: v223);
        if ( v223 != v6 )
        {
          MEMORY[0x182084180](a1: v27, a2: v28, a3: v229, a4: v196, a5: 1);
          MEMORY[0x18159DF60](a1: v212, a2: v213, a3: v229, a4: v211, a5: v223);
          MEMORY[0x182084500](a1: v215, a2: v216, a3: v229, a4: v214, a5: 0);
        }
      }
      else
      {
        v206 = 8LL * *(unsigned int *)(v238 + (int)v236);
        if ( v206 != 0 )
          v206 += v6;
        v234 = v206;
        v207 = MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v19, a5: v6 + 372682432);
        MEMORY[0x182084BC0](a1: v209, a2: v210, a3: v207, a4: v208, a5: v234);
      }
LABEL_10:
      MEMORY[0x1820841E0](a1: v27, a2: v28, a3: v229);
      for ( result = 1; (int)result < 46; result = v236 + 1 )
      {
        if ( (unsigned int)result >= 0x2E )
          goto LABEL_61;
        v231 = *(_DWORD *)(v6 + 4 * result + 376669284);
        v44 = v6 + 8LL * v231;
        if ( v231 == 0 )
          goto LABEL_62;
        v230 = v6 + 8LL * v231;
        v236 = result;
        v235 = *(_DWORD *)(v230 + 12);
        v45 = MEMORY[0x182084560](a1: v31, a2: v32, a3: v229, a4: v30, a5: v235);
        v49 = MEMORY[0x182084840](a1: v47, a2: v48, a3: v45, a4: v46, a5: v228);
        v53 = MEMORY[0x182084840](
                a1: v51,
                a2: v52,
                a3: v49,
                a4: v50,
                a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * v231 + 8));
        MEMORY[0x182084840](a1: v55, a2: v56, a3: v53, a4: v54, a5: v227);
        v59 = *(_DWORD *)(v6 + 8LL * v231 + 4);
        switch ( v59 )
        {
          case 5067794:
            v232 = *(_DWORD *)(v238 + (int)v235);
            v67 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: v232, a5: v6 + 372677712);
            v71 = MEMORY[0x182084B20](a1: v69, a2: v70, a3: v67, a4: v68, a5: v232);
            v75 = MEMORY[0x182084840](a1: v73, a2: v74, a3: v71, a4: v72, a5: v225);
            v79 = MEMORY[0x182084560](a1: v77, a2: v78, a3: v75, a4: v76, a5: v232);
            MEMORY[0x182084840](a1: v81, a2: v82, a3: v79, a4: v80, a5: v226);
            break;
          case 5067810:
            v233 = *(_QWORD *)(v238 + (int)v235);
            v83 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: v233, a5: v6 + 372677480);
            v87 = MEMORY[0x182084B80](a1: v85, a2: v86, a3: v83, a4: v84, a5: v233);
            v91 = MEMORY[0x182084840](a1: v89, a2: v90, a3: v87, a4: v88, a5: v225);
            v95 = MEMORY[0x1820845C0](a1: v93, a2: v94, a3: v91, a4: v92, a5: v233);
            MEMORY[0x182084840](a1: v97, a2: v98, a3: v95, a4: v96, a5: v226);
            break;
          case 5067826:
            v233 = *(_QWORD *)(v238 + (int)v235);
            v99 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: v233, a5: v6 + 372681896);
            v103 = MEMORY[0x182084BC0](a1: v101, a2: v102, a3: v99, a4: v100, a5: v233);
            v107 = MEMORY[0x182084840](a1: v105, a2: v106, a3: v103, a4: v104, a5: v225);
            v111 = MEMORY[0x182084680](a1: v109, a2: v110, a3: v107, a4: v108, a5: v233);
            MEMORY[0x182084840](a1: v113, a2: v114, a3: v111, a4: v112, a5: v226);
            break;
          case 5067842:
            if ( v237 != 0 )
            {
              v223 = v6 + 372682432;
              v224 = sub_182784740(a1: v57, a2: v58, a3: v238, a4: (int)v235, a5: v235);
              v118 = MEMORY[0x182084840](a1: v116, a2: v117, a3: v229, a4: v115, a5: v223);
              if ( v224 == v6 )
                JUMPOUT(0x304ECD299LL);
              MEMORY[0x182084BC0](a1: v119, a2: v120, a3: v118, a4: v224, a5: v224);
              if ( v224 != v6 )
              {
                MEMORY[0x182084180](a1: v65, a2: v66, a3: v229, a4: v121, a5: 1);
                MEMORY[0x18159DF60](a1: v137, a2: v138, a3: v229, a4: v136, a5: v224);
                MEMORY[0x182084500](a1: v140, a2: v141, a3: v229, a4: v139, a5: 0);
              }
            }
            else
            {
              v131 = 8LL * *(unsigned int *)(v238 + (int)v235);
              if ( v131 != 0 )
                v131 += v6;
              v233 = v131;
              v132 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: (int)v235, a5: v6 + 372682432);
              MEMORY[0x182084BC0](a1: v134, a2: v135, a3: v132, a4: v133, a5: v233);
            }
            break;
          case 5067858:
            v233 = (int)v235;
            MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: (int)v235, a5: v6 + 372678544);
            v125 = *(_DWORD *)(v6 + 8LL * v231 + 16);
            v234 = v233 + v238;
            if ( v125 == 8 )
            {
              MEMORY[0x182084BC0](a1: v123, a2: v124, a3: v229, a4: v233, a5: *(_QWORD *)(v238 + v233));
            }
            else
            {
              v235 = v125;
              MEMORY[0x182084180](a1: v123, a2: v124, a3: v229, a4: v122, a5: 1);
              if ( (v235 & 7) != 0 )
                MEMORY[0x1820840C0](a1: v235, a2: v127, a3: v229, a4: v126, a5: v234, a6: 1);
              else
                MEMORY[0x1820840C0](a1: (unsigned int)((int)v235 / 8), a2: v127, a3: v229, a4: v126, a5: v234, a6: 8);
              MEMORY[0x182084500](a1: v129, a2: v130, a3: v229, a4: v128, a5: 0);
            }
            break;
          default:
            v231 = *(_DWORD *)(v6 + 8LL * v231 + 4);
            v60 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v229, a4: (int)v235, a5: v6 + 350866752);
            v64 = v231;
            if ( v231 == 0 )
              goto LABEL_63;
            MEMORY[0x182084840](
              a1: v62,
              a2: v63,
              a3: v60,
              a4: v61,
              a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * v231 + 12));
            break;
        }
        MEMORY[0x1820841E0](a1: v65, a2: v66, a3: v229);
      }
      v236 = result;
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v31, a2: v32, a3: v29, a4: v30);
      return result;
    case 0x4D5452:
      v234 = (int)v236;
      MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v19, a5: v6 + 372678544);
      v200 = *(_DWORD *)(v6 + 8LL * v231 + 16);
      v233 = v234 + v238;
      if ( v200 == 8 )
      {
        MEMORY[0x182084BC0](a1: v198, a2: v199, a3: v229, a4: v197, a5: *(_QWORD *)(v238 + v234));
      }
      else
      {
        v236 = v200;
        MEMORY[0x182084180](a1: v198, a2: v199, a3: v229, a4: v197, a5: 1);
        if ( (v236 & 7) != 0 )
          MEMORY[0x1820840C0](a1: v236, a2: v202, a3: v229, a4: v201, a5: v233, a6: 1);
        else
          MEMORY[0x1820840C0](a1: (unsigned int)((int)v236 / 8), a2: v202, a3: v229, a4: v201, a5: v233, a6: 8);
        MEMORY[0x182084500](a1: v204, a2: v205, a3: v229, a4: v203, a5: 0);
      }
      goto LABEL_10;
    default:
      break;
  }
  v231 = v19;
  v21 = MEMORY[0x182084840](a1: v18, a2: v20, a3: v229, a4: v19, a5: v6 + 350866752);
  if ( v231 != 0 )
  {
    MEMORY[0x182084840](a1: v23, a2: v24, a3: v21, a4: v231, a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * v231 + 12));
    goto LABEL_10;
  }
LABEL_60:
  LODWORD(result) = sub_18276EFE0(a1: v23, a2: v24, a3: v22, a4: v230, a5: v25, a6: v26, a7: v222);
LABEL_61:
  v236 = result;
  LODWORD(result) = sub_18276F0E0(
                      a1: v31,
                      a2: v32,
                      a3: v29,
                      a4: v30,
                      a5: v33,
                      a6: v34,
                      a7: v35,
                      a8: v36,
                      a9: v37,
                      a10: v38,
                      a11: v39,
                      a12: v40,
                      a13: v41,
                      a14: v42,
                      a15: v222);
LABEL_62:
  v230 = v44;
  v236 = result;
  sub_18276EFE0(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7: v222);
LABEL_63:
  sub_18276EFE0(a1: v62, a2: v63, a3: v64, a4: v61, a5: v238, a6: v237, a7: v222);
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
  return sub_182784740(a1: v219, a2: v220, a3: v217, a4: v218, a5: v221);
}
