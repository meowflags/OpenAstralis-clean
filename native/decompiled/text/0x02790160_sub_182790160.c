// sub_182790160
// rva 0x02790160  size 20619  section .text  group text
// window base 0x182790160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182790160(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r13
  unsigned int *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128i v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __m128 v33; // xmm6
  __m128 v34; // xmm7
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbp
  __int64 v38; // rsi
  unsigned __int64 i; // rcx
  __int64 v40; // rcx
  unsigned int *v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // r9
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm3
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __m128 v53; // xmm6
  __m128 v54; // xmm7
  unsigned int *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm0
  __m128 v62; // xmm1
  __m128 v63; // xmm2
  __m128 v64; // xmm3
  __m128 v65; // xmm4
  __m128 v66; // xmm5
  __m128 v67; // xmm6
  __m128 v68; // xmm7
  unsigned int *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r9
  unsigned int *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  unsigned __int64 v79; // rdi
  int v80; // r10d
  __int64 v81; // rcx
  unsigned int *v82; // rdx
  unsigned int *v83; // r8
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // r9
  __int64 v88; // rcx
  unsigned int *v89; // r10
  __int64 v90; // r8
  __int64 v91; // rax
  unsigned int *v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r12
  __int64 v95; // rdx
  __int64 v96; // r12
  unsigned int v97; // r11d
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // r9
  __m128 v105; // xmm0
  __m128 v106; // xmm1
  __m128 v107; // xmm2
  __m128 v108; // xmm3
  __m128 v109; // xmm4
  __m128 v110; // xmm5
  __m128 v111; // xmm6
  __m128 v112; // xmm7
  unsigned int *v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // r8
  __int64 v118; // r9
  __m128 v119; // xmm0
  __m128 v120; // xmm1
  __m128 v121; // xmm2
  __m128 v122; // xmm3
  __m128 v123; // xmm4
  __m128 v124; // xmm5
  __m128 v125; // xmm6
  __m128 v126; // xmm7
  unsigned int *v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int64 v131; // rsi
  unsigned int *v132; // rdx
  __int64 v133; // r8
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rdi
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r11
  __int64 v145; // r10
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 v152; // rsi
  __int64 v153; // r9
  __int64 v154; // rbp
  __int64 v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rdi
  __int64 v158; // rsi
  __int64 v159; // r9
  __int64 v160; // rbp
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rsi
  __int64 v167; // r9
  __int64 v168; // rbp
  __int64 v169; // rbx
  __int64 v170; // rax
  __int64 v171; // rdi
  __int64 v172; // rsi
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // rdx
  unsigned int v176; // r9d
  __int64 v177; // rbx
  __int64 v178; // rdx
  unsigned __int64 v179; // rsi
  __int64 v180; // rax
  __int64 v181; // rdi
  __int64 v182; // rsi
  __int64 v183; // r9
  unsigned int v184; // ebp
  __int64 v185; // rbx
  __int64 v186; // rdi
  __int64 v187; // rdx
  unsigned __int64 v188; // rsi
  __int64 v189; // rax
  __int64 v190; // rdi
  __int64 v191; // rsi
  __int64 v192; // r9
  unsigned int v193; // ebp
  int v194; // edx
  __int64 v195; // rdx
  unsigned __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdi
  __int64 v199; // rsi
  __int64 v200; // r9
  unsigned int v201; // ebp
  int v202; // edx
  __int64 v203; // rdi
  __int64 v204; // rdx
  unsigned __int64 v205; // r9
  __int64 v206; // rax
  __int64 v207; // rdi
  __int64 v208; // rsi
  __int64 v209; // r9
  unsigned int v210; // ebp
  int v211; // edx
  __int64 v212; // rax
  __int64 v213; // rdi
  __int64 v214; // rsi
  __int64 v215; // r9
  __int64 v216; // rcx
  unsigned int v217; // ebp
  int v218; // eax
  __int64 v219; // rax
  __int64 v220; // rdi
  __int64 v221; // rsi
  __int64 v222; // r9
  unsigned int v223; // ebp
  int v224; // edx
  __int64 v225; // rdi
  __int64 v226; // r8
  unsigned __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rdi
  __int64 v230; // rsi
  __int64 v231; // r9
  unsigned int v232; // ebp
  int v233; // edx
  unsigned __int64 v234; // r9
  __int64 v235; // rsi
  __int64 v236; // r9
  __int64 v237; // rcx
  unsigned int *v238; // rdx
  __int64 v239; // r8
  __int64 v240; // rax
  __int64 v241; // rcx
  __int64 v242; // rdx
  unsigned __int64 v243; // rdi
  __int64 v244; // rdx
  unsigned __int64 v245; // rsi
  __int64 v246; // rcx
  __int64 v247; // rcx
  unsigned int *v248; // rax
  __int64 v249; // rdi
  __int64 v250; // rsi
  __int64 v251; // rcx
  __int64 v252; // rdx
  __int64 v253; // rax
  __int64 v254; // rdi
  __int64 v255; // rsi
  __int64 v256; // rcx
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // rdx
  __int64 v260; // r8
  __int64 v261; // rax
  __int64 v262; // rdi
  __int64 v263; // rsi
  __int64 v264; // rcx
  __int64 v265; // rdx
  __int64 v266; // rax
  __int64 v267; // rdi
  __int64 v268; // rsi
  __int64 v269; // rdx
  unsigned int v270; // r11d
  __int64 v271; // rcx
  __int64 v272; // rdx
  __int64 v273; // rdx
  __int64 v274; // rsi
  __int64 v275; // rcx
  __int64 v276; // rdi
  __int64 v277; // rdx
  unsigned __int64 v278; // rax
  __int64 v279; // rax
  __int64 v280; // rdi
  __int64 v281; // rsi
  __int64 v282; // rcx
  __int64 v283; // rdx
  __int64 v284; // rdx
  unsigned __int64 v285; // rbp
  __int64 v286; // rax
  __int64 v287; // rdi
  __int64 v288; // rsi
  __int64 v289; // rcx
  __int64 v290; // rdx
  __int64 v291; // r8
  unsigned int *v292; // rax
  __int64 v293; // rdi
  __int64 v294; // rsi
  __int64 v295; // rcx
  __int64 v296; // rdx
  unsigned int *v297; // rax
  __int64 v298; // rdi
  __int64 v299; // rsi
  __int64 v300; // rcx
  __int64 v301; // rdx
  __int64 v302; // rdx
  unsigned int *v303; // rax
  __int64 v304; // rdi
  __int64 v305; // rsi
  __int64 v306; // rcx
  __int64 v307; // rdx
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // r8
  unsigned __int64 v311; // r8
  __int64 v312; // rcx
  __int64 v313; // r8
  __int64 v314; // rax
  __int64 v315; // rdi
  __int64 v316; // rsi
  __int64 v317; // rdx
  unsigned int v318; // r11d
  unsigned __int64 v319; // rbp
  __int64 v320; // rdx
  __int64 v321; // rdx
  unsigned __int64 v322; // rbp
  unsigned __int64 v323; // rbp
  unsigned __int64 v324; // rbp
  unsigned __int64 v325; // rbp
  __int64 v326; // rdx
  __int64 v327; // rdx
  __int64 v328; // rax
  __int64 v329; // rax
  __int64 v330; // rdx
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // rcx
  __int64 v334; // rcx
  __int64 v335; // rdx
  unsigned __int64 v336; // rsi
  __int64 v337; // rdx
  __int64 v338; // rax
  __int64 v339; // rax
  __int64 v340; // rax
  __int64 v341; // rcx
  __int64 v342; // rdi
  __int64 v343; // rsi
  __int64 v344; // rdx
  int v345; // eax
  __int64 v346; // rdi
  __int64 v347; // rcx
  __int64 v348; // rsi
  __int64 v349; // r8
  unsigned __int64 v350; // r9
  unsigned __int64 v351; // rdi
  __int64 v352; // rcx
  __int64 v353; // rcx
  __int64 v354; // rsi
  __int64 v355; // rsi
  __m128 v356; // xmm0
  __m128 v357; // xmm1
  __m128 v358; // xmm2
  __m128 v359; // xmm3
  __m128 v360; // xmm4
  __m128 v361; // xmm5
  __m128 v362; // xmm6
  __m128 v363; // xmm7
  __int64 v364; // rcx
  __int64 v365; // rdx
  __int64 v366; // r8
  __int64 v367; // rax
  __int64 v368; // rdx
  unsigned __int64 v369; // rbp
  __int64 v370; // r8
  unsigned __int64 v371; // rax
  __int64 v372; // rdx
  unsigned __int64 v373; // rax
  __int64 v374; // rdx
  unsigned __int64 v375; // rbp
  __int64 v376; // rdx
  __int64 v377; // rdx
  __int64 v378; // rdx
  __int64 v379; // rdi
  unsigned __int64 v380; // r8
  __int64 v381; // rdx
  __int64 v382; // rdx
  __int64 v383; // rdx
  __int64 v384; // rdx
  __int64 v385; // rdx
  __int64 v386; // rdx
  __int64 v387; // rdx
  __int64 v388; // rdx
  __int64 v389; // rdx
  __int64 v390; // rdx
  __int64 v391; // rdx
  __int64 v392; // rdx
  char v393; // [rsp+0h] [rbp-198h] BYREF
  __int64 v394; // [rsp+10h] [rbp-188h]
  __int64 v395; // [rsp+18h] [rbp-180h]
  __int64 v396; // [rsp+20h] [rbp-178h]
  __int64 v397; // [rsp+28h] [rbp-170h]
  __int64 v398; // [rsp+30h] [rbp-168h]
  __int64 v399; // [rsp+38h] [rbp-160h]
  __int64 v400; // [rsp+40h] [rbp-158h]
  __int64 v401; // [rsp+48h] [rbp-150h]
  unsigned int *v402; // [rsp+50h] [rbp-148h]
  __int64 v403; // [rsp+58h] [rbp-140h]
  unsigned __int64 v404; // [rsp+60h] [rbp-138h]
  unsigned int *v405; // [rsp+68h] [rbp-130h]
  __int64 v406; // [rsp+70h] [rbp-128h]
  unsigned int *v407; // [rsp+78h] [rbp-120h]
  unsigned __int64 v408; // [rsp+80h] [rbp-118h]
  unsigned int *v409; // [rsp+88h] [rbp-110h]
  __int64 v410; // [rsp+90h] [rbp-108h]
  unsigned int *v411; // [rsp+98h] [rbp-100h]
  unsigned int *v412; // [rsp+A0h] [rbp-F8h]
  __int64 v413; // [rsp+A8h] [rbp-F0h]
  unsigned int *v414; // [rsp+B0h] [rbp-E8h]
  __int64 v415; // [rsp+B8h] [rbp-E0h]
  __int64 v416; // [rsp+C0h] [rbp-D8h]
  __int64 v417; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v418; // [rsp+D0h] [rbp-C8h]
  __int64 v419; // [rsp+D8h] [rbp-C0h]
  unsigned int v420; // [rsp+E4h] [rbp-B4h]
  __int64 v421; // [rsp+E8h] [rbp-B0h]
  unsigned int *v422; // [rsp+F0h] [rbp-A8h]
  unsigned int v423; // [rsp+FCh] [rbp-9Ch]
  unsigned int *v424; // [rsp+100h] [rbp-98h]
  unsigned int *v425; // [rsp+108h] [rbp-90h]
  unsigned int *v426; // [rsp+110h] [rbp-88h]
  __int64 v427; // [rsp+118h] [rbp-80h]
  unsigned int *v428; // [rsp+120h] [rbp-78h]
  int v429; // [rsp+12Ch] [rbp-6Ch]
  unsigned int v430; // [rsp+130h] [rbp-68h]
  int v431; // [rsp+134h] [rbp-64h]
  int v432; // [rsp+138h] [rbp-60h]
  int v433; // [rsp+13Ch] [rbp-5Ch]
  unsigned int v434; // [rsp+140h] [rbp-58h]
  unsigned int v435; // [rsp+144h] [rbp-54h]
  int v436; // [rsp+148h] [rbp-50h]
  unsigned int v437; // [rsp+14Ch] [rbp-4Ch]
  unsigned int v438; // [rsp+150h] [rbp-48h]
  unsigned int v439; // [rsp+154h] [rbp-44h]
  __int64 v440; // [rsp+158h] [rbp-40h]
  __int64 v441; // [rsp+160h] [rbp-38h]
  int v442; // [rsp+16Ch] [rbp-2Ch]
  unsigned int v443; // [rsp+170h] [rbp-28h]
  unsigned int v444; // [rsp+174h] [rbp-24h]
  __int64 v445; // [rsp+178h] [rbp-20h]
  unsigned int v446; // [rsp+184h] [rbp-14h]
  __int64 v447; // [rsp+188h] [rbp-10h]
  __int64 v448; // [rsp+190h] [rbp-8h]

  v428 = a3;
  if ( (unsigned __int64)&v393 <= *(_QWORD *)(v19 + 8) )
  {
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_346;
  }
  v20 = a3[3];
  if ( (_DWORD)v20 == 0 )
  {
LABEL_346:
    v180 = sub_182771080(a1, a2, (__int64)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v393);
    goto LABEL_347;
  }
  v21 = MEMORY[0x1827B6940](a1, a2, a3: &v18[2 * v20]);
  v446 = v21;
  v35 = 40470128;
  if ( v21 == 0 )
  {
    v40 = (__int64)v428;
    if ( (v428[10] & 0x80000000) == 0 )
    {
      v445 = 40470128;
      v337 = *(_QWORD *)(v19 + 40);
      if ( (unsigned __int64)(v337 + 40) > *(_QWORD *)(v19 + 32) )
      {
        v337 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445);
      }
      else
      {
        *(_QWORD *)(v19 + 40) = v337 + 40;
        *(_DWORD *)v337 = 40470128;
        *(_DWORD *)(v337 + 4) = 0;
        *(_QWORD *)(v337 + 8) = 0;
        *(_QWORD *)(v337 + 16) = 0;
        *(_QWORD *)(v337 + 24) = 0;
        *(_QWORD *)(v337 + 32) = 0;
      }
      *(_DWORD *)(v337 + 20) = 46923644;
      *(_DWORD *)(v337 + 16) = v18[93585974];
      *(_DWORD *)(v337 + 12) = (unsigned __int64)(v337 - (_QWORD)v18) >> 3;
      *(_DWORD *)(v337 + 8) = 46469489;
      v338 = v337;
      goto LABEL_370;
    }
    if ( *(int *)(v19 + 16) <= 0 )
      sub_18277F280(a1: v23, a2: v24, a3: 40470128, a4: (__int64)v428);
    return (__int64)(v18 + 94167634);
  }
  if ( v21 < 0 )
    goto LABEL_371;
  v15 = *(_QWORD *)(v19 + 40);
  v36 = *(_QWORD *)(v19 + 32);
  v37 = (4LL * (unsigned int)v21 + 19) & 0x7FFFFFFF8LL;
  v38 = 40544944;
  if ( v37 >= 0x20000 || (v23 = v15 + v37, v15 + v37 > v36) )
  {
    v445 = 40470128;
    v427 = MEMORY[0x181EAA840](a1: v23, a2: 40544944, a3: 40544944, a4: v36, a5: v446);
    v35 = v445;
    v42 = v428;
  }
  else
  {
    *(_QWORD *)(v19 + 40) = v23;
    *(_QWORD *)v15 = 40544944;
    *(_DWORD *)(v15 + 8) = v21;
    *(_DWORD *)(v15 + 12) = 0;
    if ( v37 - 16 >= 0x800 )
    {
      v445 = 40470128;
      memset((void *)(v15 + 16), 0, v37 - 16);
      v23 = v15 + v37;
    }
    else
    {
      for ( i = 16; v37 > i; i += 8LL )
        *(_QWORD *)(v15 + i) = 0;
    }
    v42 = v428;
    v427 = v15;
  }
  v16 = v42[3];
  if ( (_DWORD)v16 == 0 )
    goto LABEL_372;
  v445 = v35;
  v16 = (unsigned __int64)&v18[2 * v16];
  v43 = MEMORY[0x1827B6940](a1: v23, a2: v38, a3: v16);
  v55 = v428;
  v56 = v428[6];
  if ( (_DWORD)v56 == 0 )
    goto LABEL_373;
  v426 = v18 + 91263074;
  v444 = v43;
  v425 = (unsigned int *)MEMORY[0x1827BC2C0](
                           a1: v44,
                           a2: v45,
                           a3: &v18[2 * v56],
                           a4: v18 + 91263074,
                           a5: v43,
                           a6: v18 + 91263074);
  v69 = v428;
  v70 = v428[3];
  if ( (_DWORD)v70 == 0 )
    goto LABEL_374;
  v443 = MEMORY[0x1827B66E0](a1: v57, a2: v58, a3: &v18[2 * v70]);
  v74 = v428;
  v75 = v428[3];
  if ( (_DWORD)v75 == 0 )
    goto LABEL_375;
  v76 = v18[2 * v75 + 2];
  v77 = (__int64)&v18[2 * v75];
  if ( (_DWORD)v76 == 0 )
    goto LABEL_376;
  v15 = (__int64)v425;
  v78 = v18[2 * v76 + 5];
  if ( v425 == v18 )
    goto LABEL_377;
  v16 = (unsigned __int64)(v18 + 94167638);
  v424 = v18 + 94167638;
  v24 = 40544184;
  v441 = 40544184;
  v79 = (unsigned __int64)((char *)v428 - (char *)v18) >> 3;
  v423 = v79;
  v26 = 40545056;
  if ( v18 + 94167638 == v425 )
  {
    v440 = 40545056;
    v442 = v78;
    v248 = (unsigned int *)MEMORY[0x1827B0500](a1: v79, a2: 40544184, a3: v428, a4: v78, a5: v425);
    v251 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)((char *)v248 - (char *)v18) >> 3;
    if ( (*(_DWORD *)v251 & 2) != 0 )
    {
      if ( (*(_DWORD *)v251 & 1) != 0 )
      {
        v273 = v251 - *(_QWORD *)(v251 - 8);
        if ( *(_BYTE *)(v273 + 48) != 0 )
          *(_BYTE *)(v273 + 48) = 0;
      }
      else if ( *(_BYTE *)((v251 & 0xFFFFFFFFFFF80000LL) + ((v251 - ((v251 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v251 & 0xFFFFFFFFFFF80000LL) + ((v251 - ((v251 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
    v252 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v252 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v422 = v248;
      v252 = MEMORY[0x181EAA920](a1: v249, a2: v250, a3: v440);
      v248 = v422;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v252 + 56;
      *(_DWORD *)v252 = 40545056;
      *(_DWORD *)(v252 + 4) = 0;
      *(_QWORD *)(v252 + 8) = 0;
      *(_QWORD *)(v252 + 16) = 0;
      *(_QWORD *)(v252 + 24) = 0;
      *(_QWORD *)(v252 + 32) = 0;
      *(_QWORD *)(v252 + 40) = 0;
      *(_QWORD *)(v252 + 48) = 0;
    }
    *(_DWORD *)(v252 + 40) = v423;
    *(_DWORD *)(v252 + 4) = 47083810;
    v422 = (unsigned int *)v252;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v248;
    v15 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  if ( v18 + 94167644 == v425 )
  {
    v440 = 40545056;
    v442 = v78;
    v253 = MEMORY[0x1827B03E0](a1: v79, a2: 40544184, a3: v428, a4: v78, a5: v425, a6: v443);
    v256 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v253 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v256 & 2) != 0 )
    {
      if ( (*(_DWORD *)v256 & 1) != 0 )
      {
        v284 = v256 - *(_QWORD *)(v256 - 8);
        if ( *(_BYTE *)(v284 + 48) != 0 )
          *(_BYTE *)(v284 + 48) = 0;
      }
      else if ( *(_BYTE *)((v256 & 0xFFFFFFFFFFF80000LL) + ((v256 - ((v256 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v256 & 0xFFFFFFFFFFF80000LL) + ((v256 - ((v256 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
    v257 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v257 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v253;
      v257 = MEMORY[0x181EAA920](a1: v254, a2: v255, a3: v440);
      v253 = v421;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v257 + 56;
      *(_DWORD *)v257 = 40545056;
      *(_DWORD *)(v257 + 4) = 0;
      *(_QWORD *)(v257 + 8) = 0;
      *(_QWORD *)(v257 + 16) = 0;
      *(_QWORD *)(v257 + 24) = 0;
      *(_QWORD *)(v257 + 32) = 0;
      *(_QWORD *)(v257 + 40) = 0;
      *(_QWORD *)(v257 + 48) = 0;
    }
    *(_DWORD *)(v257 + 40) = v423;
    *(_DWORD *)(v257 + 4) = 47083810;
    v422 = (unsigned int *)v257;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = v253;
    v91 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  if ( v18 + 94167650 == v425 )
  {
    v440 = 40545056;
    v442 = v78;
    v258 = v427;
    v428[9] |= 0x1000u;
    *(_DWORD *)(v258 + 12) = 47083814;
    if ( (*(_DWORD *)v258 & 2) != 0 )
    {
      if ( (*(_DWORD *)v258 & 1) != 0 )
      {
        v291 = v258 - *(_QWORD *)(v258 - 8);
        if ( *(_BYTE *)(v291 + 48) != 0 )
          *(_BYTE *)(v291 + 48) = 0;
      }
      else
      {
        v278 = (v258 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v258 & 0xFFFFFFFFFFF80000LL) + ((v258 - v278) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v258 & 0xFFFFFFFFFFF80000LL) + ((v258 - v278) >> 9) + 0x38) = 0;
      }
    }
    v259 = *(_QWORD *)(v19 + 40);
    v260 = v259 + 56;
    if ( (unsigned __int64)(v259 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v259 = MEMORY[0x181EAA920](a1: v79, a2: 40544184, a3: v440, a4: v258, a5: v260, a6: 40545056);
      LODWORD(v79) = v423;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v260;
      *(_DWORD *)v259 = 40545056;
      *(_DWORD *)(v259 + 4) = 0;
      *(_QWORD *)(v259 + 8) = 0;
      *(_QWORD *)(v259 + 16) = 0;
      *(_QWORD *)(v259 + 24) = 0;
      *(_QWORD *)(v259 + 32) = 0;
      *(_QWORD *)(v259 + 40) = 0;
      *(_QWORD *)(v259 + 48) = 0;
    }
    *(_DWORD *)(v259 + 40) = v79;
    *(_DWORD *)(v259 + 4) = 47083810;
    v422 = (unsigned int *)v259;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  if ( v18 + 94167656 == v425 )
  {
    v440 = 40545056;
    v442 = v78;
    v261 = MEMORY[0x1827A3860](a1: v79, a2: 40544184, a3: v428, a4: v78, a5: v425);
    v264 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v261 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v264 & 2) != 0 )
    {
      if ( (*(_DWORD *)v264 & 1) != 0 )
      {
        v302 = v264 - *(_QWORD *)(v264 - 8);
        if ( *(_BYTE *)(v302 + 48) != 0 )
          *(_BYTE *)(v302 + 48) = 0;
      }
      else
      {
        v285 = (v264 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v264 & 0xFFFFFFFFFFF80000LL) + ((v264 - v285) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v264 & 0xFFFFFFFFFFF80000LL) + ((v264 - v285) >> 9) + 0x38) = 0;
      }
    }
    v265 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v265 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v261;
      v265 = MEMORY[0x181EAA920](a1: v262, a2: v263, a3: v440);
      v261 = v421;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v265 + 56;
      *(_DWORD *)v265 = 40545056;
      *(_DWORD *)(v265 + 4) = 0;
      *(_QWORD *)(v265 + 8) = 0;
      *(_QWORD *)(v265 + 16) = 0;
      *(_QWORD *)(v265 + 24) = 0;
      *(_QWORD *)(v265 + 32) = 0;
      *(_QWORD *)(v265 + 40) = 0;
      *(_QWORD *)(v265 + 48) = 0;
    }
    *(_DWORD *)(v265 + 40) = v423;
    *(_DWORD *)(v265 + 4) = 47083810;
    v422 = (unsigned int *)v265;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v92 = v428;
    v93 = v261;
    v91 = (__int64)v18;
    goto LABEL_40;
  }
  v80 = v428[8];
  v420 = (unsigned __int64)((char *)v425 - (char *)v18) >> 3;
  if ( v80 < 49 )
  {
    v440 = 40545056;
    v442 = v78;
    v266 = MEMORY[0x1827B6300](a1: v79, a2: 40544184, a3: v77, a4: v78, a5: v443);
    v269 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v269 + 24) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v266;
      v269 = MEMORY[0x181EAA920](a1: v267, a2: v268, a3: v441);
      v266 = v421;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v269 + 24;
      *(_DWORD *)v269 = 40544184;
      *(_DWORD *)(v269 + 4) = 0;
      *(_QWORD *)(v269 + 8) = 0;
      *(_QWORD *)(v269 + 16) = 0;
    }
    v270 = v420;
    v271 = v427;
    *(_DWORD *)(v269 + 8) = (unsigned __int64)(v266 - (_QWORD)v18) >> 3;
    *(_DWORD *)(v269 + 4) = v270;
    *(_DWORD *)(v271 + 12) = (unsigned __int64)(v269 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v271 & 2) != 0 )
    {
      v267 = v423;
      if ( (*(_DWORD *)v271 & 1) != 0 )
      {
        v310 = v271 - *(_QWORD *)(v271 - 8);
        if ( *(_BYTE *)(v310 + 48) != 0 )
          *(_BYTE *)(v310 + 48) = 0;
      }
      else if ( *(_BYTE *)((v271 & 0xFFFFFFFFFFF80000LL) + ((v271 - ((v271 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v271 & 0xFFFFFFFFFFF80000LL) + ((v271 - ((v271 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
    v272 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v272 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v272 = MEMORY[0x181EAA920](a1: v267, a2: v268, a3: v440);
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v272 + 56;
      *(_DWORD *)v272 = 40545056;
      *(_DWORD *)(v272 + 4) = 0;
      *(_QWORD *)(v272 + 8) = 0;
      *(_QWORD *)(v272 + 16) = 0;
      *(_QWORD *)(v272 + 24) = 0;
      *(_QWORD *)(v272 + 32) = 0;
      *(_QWORD *)(v272 + 40) = 0;
      *(_QWORD *)(v272 + 48) = 0;
    }
    *(_DWORD *)(v272 + 40) = v423;
    *(_DWORD *)(v272 + 4) = 47083810;
    v422 = (unsigned int *)v272;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v93 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    goto LABEL_40;
  }
  if ( v80 >= 51 && v18 + 94167668 == v425 )
  {
    v440 = 40545056;
    v442 = v78;
    v91 = sub_18278F000(
            a1: v79,
            a2: 40544184,
            a3: v428,
            a4: v78,
            a5: (__int64)v425,
            a6: 40545056,
            a7: (__m128)v27.m128i_i128,
            a8: v28,
            a9: v29,
            a10: v30,
            a11: v31,
            a12: v32,
            a13: v33,
            a14: v34,
            a15: v393);
    v275 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v91 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v275 & 2) != 0 )
    {
      v276 = v423;
      if ( (*(_DWORD *)v275 & 1) != 0 )
      {
        v321 = v275 - *(_QWORD *)(v275 - 8);
        if ( *(_BYTE *)(v321 + 48) != 0 )
          *(_BYTE *)(v321 + 48) = 0;
      }
      else
      {
        v319 = (v275 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v275 & 0xFFFFFFFFFFF80000LL) + ((v275 - v319) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v275 & 0xFFFFFFFFFFF80000LL) + ((v275 - v319) >> 9) + 0x38) = 0;
      }
    }
    else
    {
      v276 = v423;
    }
    v277 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v277 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v91;
      v277 = MEMORY[0x181EAA920](a1: v276, a2: v274, a3: v440);
      v91 = v421;
      LODWORD(v276) = v423;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v277 + 56;
      *(_DWORD *)v277 = 40545056;
      *(_DWORD *)(v277 + 4) = 0;
      *(_QWORD *)(v277 + 8) = 0;
      *(_QWORD *)(v277 + 16) = 0;
      *(_QWORD *)(v277 + 24) = 0;
      *(_QWORD *)(v277 + 32) = 0;
      *(_QWORD *)(v277 + 40) = 0;
      *(_QWORD *)(v277 + 48) = 0;
    }
    *(_DWORD *)(v277 + 40) = v276;
    *(_DWORD *)(v277 + 4) = 47083810;
    v422 = (unsigned int *)v277;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  v440 = 40545056;
  v442 = v78;
  v81 = v427;
  if ( v18 + 94167662 == v425 )
  {
    v279 = sub_18279F000(a1: v79, a2: 40544184, a3: v428, a4: v427, a5: v425, a6: 40545056);
    v282 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v279 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v282 & 2) != 0 )
    {
      if ( (*(_DWORD *)v282 & 1) != 0 )
      {
        v280 = v423;
        v320 = v282 - *(_QWORD *)(v282 - 8);
        if ( *(_BYTE *)(v320 + 48) != 0 )
          *(_BYTE *)(v320 + 48) = 0;
      }
      else
      {
        v311 = (v282 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v282 & 0xFFFFFFFFFFF80000LL) + ((v282 - v311) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v282 & 0xFFFFFFFFFFF80000LL) + ((v282 - v311) >> 9) + 0x38) = 0;
      }
    }
    v283 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v283 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v279;
      v283 = MEMORY[0x181EAA920](a1: v280, a2: v281, a3: v440);
      v279 = v421;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v283 + 56;
      *(_DWORD *)v283 = 40545056;
      *(_DWORD *)(v283 + 4) = 0;
      *(_QWORD *)(v283 + 8) = 0;
      *(_QWORD *)(v283 + 16) = 0;
      *(_QWORD *)(v283 + 24) = 0;
      *(_QWORD *)(v283 + 32) = 0;
      *(_QWORD *)(v283 + 40) = 0;
      *(_QWORD *)(v283 + 48) = 0;
    }
    *(_DWORD *)(v283 + 40) = v423;
    *(_DWORD *)(v283 + 4) = 47083810;
    v422 = (unsigned int *)v283;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = v279;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  if ( v80 >= 55 && v18 + 94167674 == v425 )
  {
    if ( v443 != 2 )
    {
      v382 = *(_QWORD *)(v19 + 40);
      v135 = v382 + 56;
      if ( (unsigned __int64)(v382 + 56) > *(_QWORD *)(v19 + 32) )
        goto LABEL_488;
      *(_QWORD *)(v19 + 40) = v135;
      *(_DWORD *)v382 = 40545056;
      *(_DWORD *)(v382 + 4) = 0;
      *(_QWORD *)(v382 + 8) = 0;
      *(_QWORD *)(v382 + 16) = 0;
      *(_QWORD *)(v382 + 24) = 0;
      *(_QWORD *)(v382 + 32) = 0;
      *(_QWORD *)(v382 + 40) = 0;
      *(_QWORD *)(v382 + 48) = 0;
LABEL_455:
      v23 = v423;
      *(_DWORD *)(v382 + 40) = v423;
      *(_DWORD *)(v382 + 4) = 47083810;
      v439 = v443;
      v421 = (__int64)v425;
      v438 = v444;
      v437 = 0;
      v419 = (__int64)v18;
      v418 = (unsigned __int64)v18;
      v417 = (__int64)v18;
      v416 = (__int64)v18;
      v415 = (__int64)v18;
      v414 = (unsigned int *)v382;
      v447 = v17;
      v436 = v442;
      v413 = (__int64)v18;
      v412 = v18;
LABEL_456:
      v338 = *(_QWORD *)(v19 + 40);
      v40 = v338 + 40;
      if ( (unsigned __int64)(v338 + 40) > *(_QWORD *)(v19 + 32) )
      {
        v338 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40, a5: v135, a6: v26);
      }
      else
      {
        *(_QWORD *)(v19 + 40) = v40;
        *(_DWORD *)v338 = 40470128;
        *(_DWORD *)(v338 + 4) = 0;
        *(_QWORD *)(v338 + 8) = 0;
        *(_QWORD *)(v338 + 16) = 0;
        *(_QWORD *)(v338 + 24) = 0;
        *(_QWORD *)(v338 + 32) = 0;
      }
      *(_DWORD *)(v338 + 20) = 46923644;
      *(_DWORD *)(v338 + 16) = v18[93585974];
      *(_DWORD *)(v338 + 12) = (unsigned __int64)(v338 - (_QWORD)v18) >> 3;
      *(_DWORD *)(v338 + 8) = 46496713;
      goto LABEL_370;
    }
    v286 = MEMORY[0x1827AEEA0](a1: v79, a2: 40544184, a3: v428, a4: v427, a5: v425, a6: 40545056);
    v289 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v286 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v289 & 2) != 0 )
    {
      if ( (*(_DWORD *)v289 & 1) != 0 )
      {
        v326 = v289 - *(_QWORD *)(v289 - 8);
        if ( *(_BYTE *)(v326 + 48) != 0 )
          *(_BYTE *)(v326 + 48) = 0;
      }
      else
      {
        v322 = (v289 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v289 & 0xFFFFFFFFFFF80000LL) + ((v289 - v322) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v289 & 0xFFFFFFFFFFF80000LL) + ((v289 - v322) >> 9) + 0x38) = 0;
      }
    }
    v290 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v290 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v421 = v286;
      v290 = MEMORY[0x181EAA920](a1: v287, a2: v288, a3: v440);
      v286 = v421;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v290 + 56;
      *(_DWORD *)v290 = 40545056;
      *(_DWORD *)(v290 + 4) = 0;
      *(_QWORD *)(v290 + 8) = 0;
      *(_QWORD *)(v290 + 16) = 0;
      *(_QWORD *)(v290 + 24) = 0;
      *(_QWORD *)(v290 + 32) = 0;
      *(_QWORD *)(v290 + 40) = 0;
      *(_QWORD *)(v290 + 48) = 0;
    }
    *(_DWORD *)(v290 + 40) = v423;
    *(_DWORD *)(v290 + 4) = 47083810;
    v422 = (unsigned int *)v290;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = v286;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    v93 = (__int64)v18;
    goto LABEL_40;
  }
  if ( v80 >= 55 && v18 + 94167680 == v425 )
  {
    v292 = (unsigned int *)MEMORY[0x1827AEF80](a1: v79, a2: 40544184, a3: v428, a4: v427, a5: v425, a6: 40545056);
    v295 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)((char *)v292 - (char *)v18) >> 3;
    if ( (*(_DWORD *)v295 & 2) != 0 )
    {
      if ( (*(_DWORD *)v295 & 1) != 0 )
      {
        v327 = v295 - *(_QWORD *)(v295 - 8);
        if ( *(_BYTE *)(v327 + 48) != 0 )
          *(_BYTE *)(v327 + 48) = 0;
      }
      else
      {
        v323 = (v295 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v295 & 0xFFFFFFFFFFF80000LL) + ((v295 - v323) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v295 & 0xFFFFFFFFFFF80000LL) + ((v295 - v323) >> 9) + 0x38) = 0;
      }
    }
    v296 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v296 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v411 = v292;
      v296 = MEMORY[0x181EAA920](a1: v293, a2: v294, a3: v440);
      v292 = v411;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v296 + 56;
      *(_DWORD *)v296 = 40545056;
      *(_DWORD *)(v296 + 4) = 0;
      *(_QWORD *)(v296 + 8) = 0;
      *(_QWORD *)(v296 + 16) = 0;
      *(_QWORD *)(v296 + 24) = 0;
      *(_QWORD *)(v296 + 32) = 0;
      *(_QWORD *)(v296 + 40) = 0;
      *(_QWORD *)(v296 + 48) = 0;
    }
    *(_DWORD *)(v296 + 40) = v423;
    *(_DWORD *)(v296 + 4) = 47083810;
    v422 = (unsigned int *)v296;
    v89 = v18;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v292;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v93 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    goto LABEL_40;
  }
  if ( v80 >= 58 && v18 + 94167686 == v425 )
  {
    v297 = (unsigned int *)MEMORY[0x1827AF600](a1: v79, a2: 40544184, a3: v428, a4: v427, a5: v425, a6: 40545056);
    v300 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)((char *)v297 - (char *)v18) >> 3;
    if ( (*(_DWORD *)v300 & 2) != 0 )
    {
      v298 = v423;
      if ( (*(_DWORD *)v300 & 1) != 0 )
      {
        v330 = v300 - *(_QWORD *)(v300 - 8);
        if ( *(_BYTE *)(v330 + 48) != 0 )
          *(_BYTE *)(v330 + 48) = 0;
      }
      else
      {
        v324 = (v300 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v300 & 0xFFFFFFFFFFF80000LL) + ((v300 - v324) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v300 & 0xFFFFFFFFFFF80000LL) + ((v300 - v324) >> 9) + 0x38) = 0;
      }
    }
    v301 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v301 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v411 = v297;
      v301 = MEMORY[0x181EAA920](a1: v298, a2: v299, a3: v440);
      v297 = v411;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v301 + 56;
      *(_DWORD *)v301 = 40545056;
      *(_DWORD *)(v301 + 4) = 0;
      *(_QWORD *)(v301 + 8) = 0;
      *(_QWORD *)(v301 + 16) = 0;
      *(_QWORD *)(v301 + 24) = 0;
      *(_QWORD *)(v301 + 32) = 0;
      *(_QWORD *)(v301 + 40) = 0;
      *(_QWORD *)(v301 + 48) = 0;
    }
    *(_DWORD *)(v301 + 40) = v423;
    *(_DWORD *)(v301 + 4) = 47083810;
    v422 = (unsigned int *)v301;
    v89 = v18;
    v26 = (unsigned __int64)v297;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v93 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    goto LABEL_40;
  }
  if ( v80 >= 61 && v18 + 94167692 == v425 )
  {
    v303 = (unsigned int *)MEMORY[0x1827AF260](a1: v79, a2: 40544184, a3: v428, a4: v427, a5: v425, a6: 40545056);
    v306 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)((char *)v303 - (char *)v18) >> 3;
    if ( (*(_DWORD *)v306 & 2) != 0 )
    {
      v304 = v423;
      if ( (*(_DWORD *)v306 & 1) != 0 )
      {
        v331 = v306 - *(_QWORD *)(v306 - 8);
        if ( *(_BYTE *)(v331 + 48) != 0 )
          *(_BYTE *)(v331 + 48) = 0;
      }
      else
      {
        v325 = (v306 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v306 & 0xFFFFFFFFFFF80000LL) + ((v306 - v325) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v306 & 0xFFFFFFFFFFF80000LL) + ((v306 - v325) >> 9) + 0x38) = 0;
      }
    }
    v307 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v307 + 56) > *(_QWORD *)(v19 + 32) )
    {
      v411 = v303;
      v307 = MEMORY[0x181EAA920](a1: v304, a2: v305, a3: v440);
      v303 = v411;
    }
    else
    {
      *(_QWORD *)(v19 + 40) = v307 + 56;
      *(_DWORD *)v307 = 40545056;
      *(_DWORD *)(v307 + 4) = 0;
      *(_QWORD *)(v307 + 8) = 0;
      *(_QWORD *)(v307 + 16) = 0;
      *(_QWORD *)(v307 + 24) = 0;
      *(_QWORD *)(v307 + 32) = 0;
      *(_QWORD *)(v307 + 40) = 0;
      *(_QWORD *)(v307 + 48) = 0;
    }
    *(_DWORD *)(v307 + 40) = v423;
    *(_DWORD *)(v307 + 4) = 47083810;
    v422 = (unsigned int *)v307;
    v89 = v303;
    v26 = (unsigned __int64)v18;
    v90 = (__int64)v18;
    v23 = (__int64)v18;
    v24 = (__int64)v18;
    v16 = (unsigned __int64)v18;
    v15 = (__int64)v18;
    v93 = (__int64)v18;
    v91 = (__int64)v18;
    v92 = v428;
    goto LABEL_40;
  }
  v82 = *(unsigned int **)(v19 + 40);
  v83 = v82 + 14;
  if ( (unsigned __int64)(v82 + 14) > *(_QWORD *)(v19 + 32) )
  {
    v82 = (unsigned int *)MEMORY[0x181EAA920](a1: v79, a2: 40544184, a3: v440, a4: v427, a5: v83, a6: 40545056);
    v79 = v423;
    v81 = v427;
  }
  else
  {
    *(_QWORD *)(v19 + 40) = v83;
    *v82 = 40545056;
    v82[1] = 0;
    *((_QWORD *)v82 + 1) = 0;
    *((_QWORD *)v82 + 2) = 0;
    *((_QWORD *)v82 + 3) = 0;
    *((_QWORD *)v82 + 4) = 0;
    *((_QWORD *)v82 + 5) = 0;
    *((_QWORD *)v82 + 6) = 0;
  }
  v82[10] = v79;
  v82[1] = 47083810;
  if ( v18 + 94164930 == v425 )
  {
    v411 = v82;
    v308 = sub_18278CCE0(
             a1: v79,
             a2: v24,
             a3: (__int64)v82,
             a4: v81,
             a5: v443,
             a6: (__int64)(v18 + 94167698),
             a7: (__m128)v27.m128i_i128,
             a8: v28,
             a9: v29,
             a10: v30,
             a11: v31,
             a12: v32,
             a13: v33,
             a14: v34,
             a15: v393);
    v92 = v428;
    v428[9] |= *(_DWORD *)(v308 + 8);
    v309 = v427;
    *(_DWORD *)(v427 + 12) = *(_DWORD *)(v308 + 4);
    if ( (*(_DWORD *)v309 & 2) == 0 )
    {
      v448 = v17;
      v422 = v411;
      v89 = v18;
      v26 = (unsigned __int64)v18;
      v90 = (__int64)v18;
      v23 = (__int64)v18;
      v24 = (__int64)v18;
      v16 = (unsigned __int64)v18;
      v15 = (__int64)v18;
      v91 = (__int64)v18;
      v93 = (__int64)v18;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)v309 & 1) != 0 )
    {
      v328 = v309 - *(_QWORD *)(v309 - 8);
      if ( *(_BYTE *)(v328 + 48) != 0 )
        *(_BYTE *)(v328 + 48) = 0;
    }
    else if ( *(_BYTE *)((v309 & 0xFFFFFFFFFFF80000LL) + ((v309 - ((v309 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
    {
      *(_BYTE *)((v309 & 0xFFFFFFFFFFF80000LL) + ((v309 - ((v309 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
    }
  }
  else
  {
    v411 = v82;
    v84 = sub_18278B420(
            a1: v79,
            a2: v24,
            a3: v82,
            a4: v81,
            a5: (__int64)v425,
            a6: v443,
            a7: (__m128)v27.m128i_i128,
            a8: v28,
            a9: v29,
            a10: v30,
            a11: v31,
            a12: v32,
            a13: v33,
            a14: v34,
            a15: v393);
    if ( (unsigned int *)v84 == v18 )
    {
      v312 = v427;
      v313 = v428[3];
      if ( (_DWORD)v313 == 0 )
        goto LABEL_464;
      v314 = MEMORY[0x1827B6300](a1: v85, a2: v86, a3: &v18[2 * v313], a4: v427, a5: v443);
      v317 = *(_QWORD *)(v19 + 40);
      if ( (unsigned __int64)(v317 + 24) > *(_QWORD *)(v19 + 32) )
      {
        v410 = v314;
        v317 = MEMORY[0x181EAA920](a1: v315, a2: v316, a3: v441);
        v314 = v410;
      }
      else
      {
        *(_QWORD *)(v19 + 40) = v317 + 24;
        *(_DWORD *)v317 = 40544184;
        *(_DWORD *)(v317 + 4) = 0;
        *(_QWORD *)(v317 + 8) = 0;
        *(_QWORD *)(v317 + 16) = 0;
      }
      v318 = v420;
      *(_DWORD *)(v317 + 8) = (unsigned __int64)(v314 - (_QWORD)v18) >> 3;
      *(_DWORD *)(v317 + 4) = v318;
      v84 = v317;
    }
    v88 = v427;
    *(_DWORD *)(v427 + 12) = (unsigned __int64)(v84 - (_QWORD)v18) >> 3;
    if ( (*(_DWORD *)v88 & 2) != 0 )
    {
      if ( (*(_DWORD *)v88 & 1) != 0 )
      {
        v329 = v88 - *(_QWORD *)(v88 - 8);
        if ( *(_BYTE *)(v329 + 48) != 0 )
          *(_BYTE *)(v329 + 48) = 0;
      }
      else if ( *(_BYTE *)((v88 & 0xFFFFFFFFFFF80000LL) + ((v88 - ((v88 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v88 & 0xFFFFFFFFFFF80000LL) + ((v88 - ((v88 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
  }
  v448 = v17;
  v422 = v411;
  v89 = v18;
  v26 = (unsigned __int64)v18;
  v90 = (__int64)v18;
  v23 = (__int64)v18;
  v24 = (__int64)v18;
  v16 = (unsigned __int64)v18;
  v15 = (__int64)v18;
  v91 = (__int64)v18;
  v92 = v428;
  v93 = (__int64)v18;
LABEL_40:
  v94 = v92[3];
  if ( (_DWORD)v94 == 0 )
    goto LABEL_378;
  v95 = v18[2 * v94 + 2];
  v96 = (__int64)&v18[2 * v94];
  if ( (_DWORD)v95 == 0 )
    goto LABEL_379;
  v97 = v443;
  if ( v443 != v18[2 * v95 + 5] - v442 )
    goto LABEL_380;
  v98 = v96;
  v411 = (unsigned int *)v16;
  v410 = v15;
  v409 = (unsigned int *)v24;
  v408 = v90;
  v407 = (unsigned int *)v23;
  v406 = v91;
  v405 = (unsigned int *)v93;
  v404 = (unsigned __int64)v89;
  v403 = v26;
  v99 = 1;
  while ( 1 )
  {
    v443 = v99;
    if ( (int)v446 <= (int)v99 )
      break;
    if ( (unsigned int *)v98 == v18 )
    {
      v100 = sub_182771080(
               a1: v23,
               a2: v24,
               a3: v98,
               a4: v99,
               a5: v90,
               a6: v26,
               a7: (__m128)v27.m128i_i128,
               a8: v28,
               a9: v29,
               a10: v30,
               a11: v31,
               a12: v32,
               a13: v33,
               a14: v34,
               a15: v393);
LABEL_436:
      v435 = v100;
      sub_182771080(
        a1: v102,
        a2: v103,
        a3: (__int64)v113,
        a4: v101,
        a5: v114,
        a6: v104,
        a7: v105,
        a8: v106,
        a9: v107,
        a10: v108,
        a11: v109,
        a12: v110,
        a13: v111,
        a14: v112,
        a15: v393);
LABEL_437:
      sub_182771080(
        a1: v115,
        a2: v116,
        a3: (__int64)v127,
        a4: v128,
        a5: v117,
        a6: v118,
        a7: v119,
        a8: v120,
        a9: v121,
        a10: v122,
        a11: v123,
        a12: v124,
        a13: v125,
        a14: v126,
        a15: v393);
LABEL_438:
      sub_182771080(
        a1: v130,
        a2: v131,
        a3: (__int64)v132,
        a4: v129,
        a5: v133,
        a6: v26,
        a7: (__m128)v27.m128i_i128,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34,
        a15: v393);
LABEL_439:
      sub_182771080(
        a1: v130,
        a2: v131,
        a3: (__int64)v132,
        a4: v134,
        a5: v135,
        a6: v26,
        a7: (__m128)v27.m128i_i128,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34,
        a15: v393);
LABEL_440:
      v433 = v40;
      sub_182771080(
        a1: v130,
        a2: v131,
        a3: (__int64)v132,
        a4: v40,
        a5: v135,
        a6: v26,
        a7: (__m128)v27.m128i_i128,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34,
        a15: v393);
LABEL_441:
      sub_182771080(
        a1: v23,
        a2: v24,
        a3: (__int64)v132,
        a4: v146,
        a5: v90,
        a6: v26,
        a7: (__m128)v27.m128i_i128,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34,
        a15: v393);
LABEL_442:
      sub_182771080(
        a1: v23,
        a2: v24,
        a3: v148,
        a4: v146,
        a5: v90,
        a6: v26,
        a7: (__m128)v27.m128i_i128,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34,
        a15: v393);
LABEL_443:
      v432 = v433;
      v431 = v24;
      v339 = (__int64)v402;
      v447 = v17;
      v430 = v435;
      v429 = v15;
      v424 = (unsigned int *)v144;
      v426 = (unsigned int *)v96;
      v399 = v23;
      v398 = v145;
      v397 = v146;
      v396 = v26;
      v395 = v90;
      v448 = v17;
      v394 = v401;
      v401 = v16;
      while ( 1 )
      {
        v425 = (unsigned int *)v339;
        v340 = MEMORY[0x1827C6220](a1: v23, a2: v24, a3: v339);
        if ( (unsigned int *)v340 == v18 )
        {
          v341 = v427;
          v344 = (__int64)(v18 + 88325320);
        }
        else
        {
          v344 = v340;
        }
        v402 = (unsigned int *)v340;
        v403 = v344;
        v345 = MEMORY[0x1850132E0](a1: v342, a2: v343, a3: 39, a4: v341, a5: v344);
        v15 = (unsigned int)*(char *)(v403 + 12);
        v16 = v15;
        v347 = v15;
        v348 = (unsigned int)(v345 << *(_BYTE *)(v403 + 12));
        if ( (int)v348 < 0 )
        {
          v444 = v15;
          v442 = v345;
          v376 = *(_QWORD *)(v19 + 40);
          if ( (unsigned __int64)(v376 + 40) > *(_QWORD *)(v19 + 32) )
          {
            v434 = v348;
            v376 = MEMORY[0x181EAA920](a1: v346, a2: v348, a3: 34082880);
          }
          else
          {
            *(_QWORD *)(v19 + 40) = v376 + 40;
            *(_DWORD *)v376 = 34082880;
            *(_DWORD *)(v376 + 4) = 0;
            *(_QWORD *)(v376 + 8) = 0;
            *(_QWORD *)(v376 + 16) = 0;
            *(_QWORD *)(v376 + 24) = 0;
            *(_QWORD *)(v376 + 32) = 0;
            v434 = v348;
          }
          *(_DWORD *)(v376 + 20) = 46923644;
          *(_DWORD *)(v376 + 16) = v18[93585974];
          *(_DWORD *)(v376 + 12) = (unsigned __int64)(v376 - (_QWORD)v18) >> 3;
          v405 = (unsigned int *)v376;
          MEMORY[0x18503B9A0](a1: v346, a2: v348, a3: v376, a4: v347, a5: 0);
          v377 = (__int64)v405;
          v405[2] = 46004603;
          if ( (*(_DWORD *)v377 & 2) != 0 )
          {
            v40 = (v377 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v377 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v377 - v40) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v377 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v377 - v40) >> 9) + 0x38) = 0;
            v338 = v377;
          }
          else
          {
            v338 = v377;
          }
        }
        else
        {
          v434 = v15;
          v349 = *(_QWORD *)(v19 + 40);
          v350 = *(_QWORD *)(v19 + 32);
          v351 = ((unsigned int)v348 + 19LL) & 0x1FFFFFFF8LL;
          v352 = 34082368;
          if ( v351 >= 0x20000 || (v351 += v349, v351 > v350) )
          {
            v444 = v15;
            v442 = v345;
            v349 = MEMORY[0x181EAA840](a1: v351, a2: v348, a3: 34082368, a4: 34082368, a5: (unsigned int)v348, a6: v350);
            v16 = v444;
          }
          else
          {
            *(_QWORD *)(v19 + 40) = v351;
            *(_QWORD *)v349 = 34082368;
            *(_DWORD *)(v349 + 8) = v348;
            v442 = v345;
          }
          v405 = (unsigned int *)v349;
          v444 = v16;
          MEMORY[0x184FF2C40](a1: (unsigned int)v16, a2: v349, a3: v18 + 14546328, a4: v352, a5: v349, a6: 0);
          MEMORY[0x184FF2C40](a1: v444, a2: v354, a3: v403, a4: v353, a5: v405, a6: 29);
          v364 = *(unsigned int *)(v403 + 4);
          if ( (_DWORD)v364 != 0 )
          {
            MEMORY[0x184FF2C40](
              a1: v444,
              a2: v355,
              a3: v18 + 14546334,
              a4: (unsigned int)*(char *)(v403 + 12),
              a5: v405,
              a6: (v18[2 * v364 + 2] >> *(_BYTE *)(v403 + 12)) + 29);
            v365 = *(_QWORD *)(v19 + 40);
            if ( (unsigned __int64)(v365 + 40) > *(_QWORD *)(v19 + 32) )
            {
              v365 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445);
            }
            else
            {
              *(_QWORD *)(v19 + 40) = v365 + 40;
              *(_DWORD *)v365 = 40470128;
              *(_DWORD *)(v365 + 4) = 0;
              *(_QWORD *)(v365 + 8) = 0;
              *(_QWORD *)(v365 + 16) = 0;
              *(_QWORD *)(v365 + 24) = 0;
              *(_QWORD *)(v365 + 32) = 0;
            }
            *(_DWORD *)(v365 + 20) = 46923644;
            *(_DWORD *)(v365 + 16) = v18[93585974];
            *(_DWORD *)(v365 + 12) = (unsigned __int64)(v365 - (_QWORD)v18) >> 3;
            v366 = *(_QWORD *)(v19 + 40);
            if ( (unsigned __int64)(v366 + 24) > *(_QWORD *)(v19 + 32) )
            {
              v406 = v365;
              v366 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: 34082680);
              v365 = v406;
            }
            else
            {
              *(_QWORD *)(v19 + 40) = v366 + 24;
              *(_DWORD *)v366 = 34082680;
              *(_DWORD *)(v366 + 4) = 0;
              *(_QWORD *)(v366 + 8) = 0;
              *(_QWORD *)(v366 + 16) = 0;
            }
            v367 = (__int64)v405;
            v15 = v434;
            *(_BYTE *)(v366 + 12) = v434;
            *(_DWORD *)(v366 + 4) = (unsigned __int64)(v367 - (_QWORD)v18) >> 3;
            *(_DWORD *)(v365 + 8) = (unsigned __int64)(v366 - (_QWORD)v18) >> 3;
            if ( (*(_DWORD *)v365 & 2) != 0 )
            {
              v40 = (v365 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v365 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v365 - v40) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v365 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v365 - v40) >> 9) + 0x38) = 0;
            }
            v338 = v365;
          }
          else
          {
            v16 = v444;
            v15 = v401;
            sub_182771080(
              a1: v395,
              a2: v394,
              a3: v403,
              a4: (__int64)v402,
              a5: (__int64)v405,
              a6: v396,
              a7: v356,
              a8: v357,
              a9: v358,
              a10: v359,
              a11: v360,
              a12: v361,
              a13: v362,
              a14: v363,
              a15: v393);
LABEL_512:
            v387 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
LABEL_482:
            v24 = v420;
            *(_DWORD *)(v387 + 20) = 46923644;
            *(_DWORD *)(v387 + 16) = v24;
            *(_DWORD *)(v387 + 12) = (unsigned __int64)(v387 - (_QWORD)v18) >> 3;
            *(_DWORD *)(v387 + 8) = 46385650;
            v338 = v387;
          }
        }
LABEL_370:
        v27 = sub_182769900(
                a1: v23,
                a2: v24,
                a3: (_DWORD *)v338,
                a4: v40,
                a5: (__int64)&a15,
                a6: v26,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34);
LABEL_371:
        sub_182770E80(
          a1: v23,
          a2: v24,
          a3: v446,
          a4: v22,
          a5: v25,
          a6: v26,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_372:
        v43 = sub_182771080(
                a1: v23,
                a2: v38,
                a3: v35,
                a4: v427,
                a5: v25,
                a6: v26,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_373:
        v444 = v43;
        sub_182771080(
          a1: v44,
          a2: v45,
          a3: (__int64)v55,
          a4: v427,
          a5: v56,
          a6: v46,
          a7: v47,
          a8: v48,
          a9: v49,
          a10: v50,
          a11: v51,
          a12: v52,
          a13: v53,
          a14: v54,
          a15: v393);
LABEL_374:
        sub_182771080(
          a1: v57,
          a2: v58,
          a3: (__int64)v69,
          a4: v427,
          a5: v59,
          a6: v60,
          a7: v61,
          a8: v62,
          a9: v63,
          a10: v64,
          a11: v65,
          a12: v66,
          a13: v67,
          a14: v68,
          a15: v393);
LABEL_375:
        sub_182771080(
          a1: v71,
          a2: v72,
          a3: (__int64)v74,
          a4: v427,
          a5: v75,
          a6: v73,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_376:
        sub_182771080(
          a1: v71,
          a2: v72,
          a3: (__int64)v74,
          a4: v427,
          a5: v77,
          a6: v73,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_377:
        v442 = v78;
        sub_182771080(
          a1: v71,
          a2: v72,
          a3: (__int64)v74,
          a4: v427,
          a5: v77,
          a6: v73,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_378:
        sub_182771080(
          a1: v23,
          a2: v24,
          a3: (__int64)v92,
          a4: v93,
          a5: v90,
          a6: v26,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_379:
        v91 = sub_182771080(
                a1: v23,
                a2: v24,
                a3: v95,
                a4: v93,
                a5: v90,
                a6: v26,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_380:
        v432 = v442;
        v431 = v97;
        v447 = v17;
        v430 = v444;
        v429 = 0;
        v424 = (unsigned int *)v26;
        v426 = v89;
        v399 = v93;
        v398 = v91;
        v397 = v23;
        v396 = v90;
        v395 = v24;
        v394 = v15;
        v401 = v16;
        v339 = (__int64)v425;
      }
    }
    v100 = MEMORY[0x1827B6940]();
    v113 = v428;
    v114 = v428[6];
    if ( (_DWORD)v114 == 0 )
      goto LABEL_436;
    v435 = v100;
    v402 = (unsigned int *)MEMORY[0x1827BC2C0](a1: v102, a2: v103, a3: &v18[2 * v114], a4: v101, a5: v100, a6: v426);
    v127 = v428;
    v128 = v428[3];
    if ( (_DWORD)v128 == 0 )
      goto LABEL_437;
    v434 = MEMORY[0x1827B66E0](a1: v115, a2: v116, a3: &v18[2 * v128]);
    v132 = v428;
    v133 = v428[3];
    if ( (_DWORD)v133 == 0 )
      goto LABEL_438;
    v134 = v18[2 * v133 + 2];
    v135 = (__int64)&v18[2 * v133];
    if ( (_DWORD)v134 == 0 )
      goto LABEL_439;
    v15 = (__int64)v402;
    v40 = v18[2 * v134 + 5];
    if ( v402 == v18 )
      goto LABEL_440;
    v16 = (unsigned __int64)v424;
    v24 = v18[93585974];
    if ( v424 == v402 )
    {
      v23 = (__int64)v411;
      if ( v411 != v18 )
      {
        v433 = v40;
        v381 = *(_QWORD *)(v19 + 40);
        if ( (unsigned __int64)(v381 + 40) > *(_QWORD *)(v19 + 32) )
          goto LABEL_478;
        *(_QWORD *)(v19 + 40) = v381 + 40;
        *(_DWORD *)v381 = 40470128;
        *(_DWORD *)(v381 + 4) = 0;
        *(_QWORD *)(v381 + 8) = 0;
        *(_QWORD *)(v381 + 16) = 0;
        *(_QWORD *)(v381 + 24) = 0;
        *(_QWORD *)(v381 + 32) = 0;
LABEL_450:
        *(_DWORD *)(v381 + 20) = 46923644;
        *(_DWORD *)(v381 + 16) = v24;
        *(_DWORD *)(v381 + 12) = (unsigned __int64)(v381 - (_QWORD)v18) >> 3;
        *(_DWORD *)(v381 + 8) = 46385530;
        v338 = v381;
        goto LABEL_370;
      }
      v433 = v40;
      v150 = MEMORY[0x1827B0500](a1: v428, a2: v24, a3: v428, a4: v40, a5: v402);
      if ( v446 <= v443 )
      {
        sub_182771220(
          a1: v151,
          a2: v152,
          a3: v443,
          a4: v446,
          a5: v446,
          a6: v153,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_452:
        v378 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
        goto LABEL_414;
      }
      v154 = v443;
      v155 = v427;
      *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v150 - (_QWORD)v18) >> 3;
      if ( (*(_DWORD *)v155 & 2) != 0 )
      {
        v23 = (__int64)v405;
        if ( (*(_DWORD *)v155 & 1) != 0 )
        {
          v178 = v155 - *(_QWORD *)(v155 - 8);
          v179 = (unsigned __int64)(4 * v154 + 12) >> 9;
          if ( *(_BYTE *)(v178 + v179 + 48) != 0 )
            *(_BYTE *)(v178 + v179 + 48) = 0;
        }
        else if ( *(_BYTE *)((v155 & 0xFFFFFFFFFFF80000LL)
                           + ((v155 - ((v155 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                           + 0x38) != 0 )
        {
          *(_BYTE *)((v155 & 0xFFFFFFFFFFF80000LL) + ((v155 - ((v155 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
        }
        v96 = v404;
        v144 = v403;
        v26 = v408;
        v90 = (__int64)v409;
        v448 = v17;
        v401 = v410;
        v145 = v406;
        v24 = v434;
        v132 = v428;
        v146 = (__int64)v407;
        LODWORD(v15) = v154;
        v16 = v150;
      }
      else
      {
        v96 = v404;
        v144 = v403;
        v26 = v408;
        v90 = (__int64)v409;
        v448 = v17;
        v401 = v410;
        v23 = (__int64)v405;
        v145 = v406;
        v24 = v434;
        v132 = v428;
        v146 = (__int64)v407;
        LODWORD(v15) = v154;
        v16 = v150;
      }
    }
    else if ( v18 + 94167644 == v402 )
    {
      v433 = v40;
      v23 = (__int64)v411;
      v15 = v427;
      v40 = v446;
      v16 = v443;
      if ( (unsigned int *)v410 != v18 )
      {
        v383 = *(_QWORD *)(v19 + 40);
        if ( (unsigned __int64)(v383 + 40) > *(_QWORD *)(v19 + 32) )
        {
          v420 = v24;
          v383 = MEMORY[0x181EAA920](a1: v411, a2: v24, a3: v445, a4: v446);
          v24 = v420;
        }
        else
        {
          *(_QWORD *)(v19 + 40) = v383 + 40;
          *(_DWORD *)v383 = 40470128;
          *(_DWORD *)(v383 + 4) = 0;
          *(_QWORD *)(v383 + 8) = 0;
          *(_QWORD *)(v383 + 16) = 0;
          *(_QWORD *)(v383 + 24) = 0;
          *(_QWORD *)(v383 + 32) = 0;
        }
        *(_DWORD *)(v383 + 20) = 46923644;
        *(_DWORD *)(v383 + 16) = v24;
        *(_DWORD *)(v383 + 12) = (unsigned __int64)(v383 - (_QWORD)v18) >> 3;
        *(_DWORD *)(v383 + 8) = 46385539;
        v338 = v383;
        goto LABEL_370;
      }
      v156 = MEMORY[0x1827B03E0](a1: v411, a2: v24, a3: v428, a4: v446, a5: v402, a6: v434);
      if ( v446 <= v443 )
      {
        sub_182771220(
          a1: v157,
          a2: v158,
          a3: v443,
          a4: v446,
          a5: v446,
          a6: v159,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_463:
        sub_182771220(
          a1: v136,
          a2: v24,
          a3: v443,
          a4: v163,
          a5: v446,
          a6: v26,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_464:
        sub_182771080(
          a1: v85,
          a2: v86,
          a3: (__int64)v411,
          a4: v312,
          a5: v313,
          a6: v87,
          a7: (__m128)v27.m128i_i128,
          a8: v28,
          a9: v29,
          a10: v30,
          a11: v31,
          a12: v32,
          a13: v33,
          a14: v34,
          a15: v393);
LABEL_465:
        v384 = *(_QWORD *)(v19 + 40);
        if ( (unsigned __int64)(v384 + 40) > *(_QWORD *)(v19 + 32) )
          goto LABEL_508;
        *(_QWORD *)(v19 + 40) = v384 + 40;
        *(_DWORD *)v384 = 40470128;
        *(_DWORD *)(v384 + 4) = 0;
        *(_QWORD *)(v384 + 8) = 0;
        *(_QWORD *)(v384 + 16) = 0;
        *(_QWORD *)(v384 + 24) = 0;
        *(_QWORD *)(v384 + 32) = 0;
LABEL_467:
        *(_DWORD *)(v384 + 20) = 46923644;
        *(_DWORD *)(v384 + 16) = v24;
        *(_DWORD *)(v384 + 12) = (unsigned __int64)(v384 - (_QWORD)v18) >> 3;
        *(_DWORD *)(v384 + 8) = 46385678;
        v338 = v384;
        goto LABEL_370;
      }
      v160 = v443;
      v161 = v427;
      *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v156 - (_QWORD)v18) >> 3;
      if ( (*(_DWORD *)v161 & 2) == 0 )
        goto LABEL_85;
      if ( (*(_DWORD *)v161 & 1) == 0 )
      {
        if ( *(_BYTE *)((v161 & 0xFFFFFFFFFFF80000LL) + ((v161 - ((v161 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v161 & 0xFFFFFFFFFFF80000LL) + ((v161 - ((v161 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
LABEL_85:
        v96 = v404;
        v144 = v403;
        v26 = v408;
        v90 = (__int64)v409;
        v401 = v156;
        v23 = (__int64)v405;
        v145 = v406;
        v24 = v434;
        v132 = v428;
        v146 = (__int64)v407;
        LODWORD(v15) = v160;
        v16 = (unsigned __int64)v411;
        goto LABEL_72;
      }
      v186 = (__int64)v407;
      v187 = v161 - *(_QWORD *)(v161 - 8);
      v188 = (unsigned __int64)(4 * v160 + 12) >> 9;
      if ( *(_BYTE *)(v187 + v188 + 48) != 0 )
        *(_BYTE *)(v187 + v188 + 48) = 0;
      v96 = v404;
      v144 = v403;
      v26 = v408;
      v90 = (__int64)v409;
      v401 = v156;
      v145 = v406;
      v24 = v434;
      v132 = v428;
      v146 = v186;
      v23 = (__int64)v405;
      LODWORD(v15) = v160;
      v16 = (unsigned __int64)v411;
    }
    else
    {
      v136 = (__int64)(v18 + 94167650);
      if ( v18 + 94167650 == v402 )
      {
        v433 = v40;
        v162 = v410;
        v15 = v427;
        v163 = v446;
        v16 = v443;
        v428[9] |= 0x1000u;
        if ( (unsigned int)v163 <= (unsigned int)v16 )
          goto LABEL_463;
        *(_DWORD *)(v15 + 4 * v16 + 12) = 47083814;
        if ( (*(_DWORD *)v15 & 2) == 0 )
        {
          v96 = v404;
          v144 = v403;
          v26 = v408;
          v90 = (__int64)v409;
          v401 = v162;
          v23 = (__int64)v405;
          v145 = v406;
          v24 = v434;
          v146 = (__int64)v407;
          LODWORD(v15) = v16;
          v16 = (unsigned __int64)v411;
          goto LABEL_72;
        }
        if ( (*(_DWORD *)v15 & 1) == 0 )
        {
          if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - ((v15 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - ((v15 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
LABEL_101:
          v96 = v404;
          v144 = v403;
          v26 = v408;
          v90 = (__int64)v409;
          v448 = v17;
          v401 = v410;
          v23 = (__int64)v405;
          v145 = v406;
          v24 = v434;
          v132 = v428;
          v146 = (__int64)v407;
          LODWORD(v15) = v16;
          v16 = (unsigned __int64)v411;
          goto LABEL_72;
        }
        v145 = v406;
        v195 = v15 - *(_QWORD *)(v15 - 8);
        v196 = (4 * v16 + 12) >> 9;
        if ( *(_BYTE *)(v195 + v196 + 48) != 0 )
          *(_BYTE *)(v195 + v196 + 48) = 0;
        goto LABEL_130;
      }
      if ( v18 + 94167656 == v402 )
      {
        v433 = v40;
        v23 = (__int64)v405;
        v15 = v427;
        v40 = v446;
        v16 = v443;
        if ( v405 != v18 )
          goto LABEL_465;
        v164 = MEMORY[0x1827A3860](a1: v405, a2: v428, a3: v428, a4: v446, a5: v402);
        if ( v446 <= v443 )
        {
          sub_182771220(
            a1: v165,
            a2: v166,
            a3: v443,
            a4: v446,
            a5: v446,
            a6: v167,
            a7: (__m128)v27.m128i_i128,
            a8: v28,
            a9: v29,
            a10: v30,
            a11: v31,
            a12: v32,
            a13: v33,
            a14: v34,
            a15: v393);
LABEL_469:
          sub_182771220(
            a1: v171,
            a2: v172,
            a3: v443,
            a4: v174,
            a5: v446,
            a6: v173,
            a7: (__m128)v27.m128i_i128,
            a8: v28,
            a9: v29,
            a10: v30,
            a11: v31,
            a12: v32,
            a13: v33,
            a14: v34,
            a15: v393);
LABEL_470:
          v385 = *(_QWORD *)(v19 + 40);
          if ( (unsigned __int64)(v385 + 40) > *(_QWORD *)(v19 + 32) )
          {
            v420 = v24;
            v385 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
            v24 = v420;
          }
          else
          {
            *(_QWORD *)(v19 + 40) = v385 + 40;
            *(_DWORD *)v385 = 40470128;
            *(_DWORD *)(v385 + 4) = 0;
            *(_QWORD *)(v385 + 8) = 0;
            *(_QWORD *)(v385 + 16) = 0;
            *(_QWORD *)(v385 + 24) = 0;
            *(_QWORD *)(v385 + 32) = 0;
          }
          *(_DWORD *)(v385 + 20) = 46923644;
          *(_DWORD *)(v385 + 16) = v24;
          *(_DWORD *)(v385 + 12) = (unsigned __int64)(v385 - (_QWORD)v18) >> 3;
          *(_DWORD *)(v385 + 8) = 46385707;
          v338 = v385;
          goto LABEL_370;
        }
        v168 = v443;
        v169 = v427;
        *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v164 - (_QWORD)v18) >> 3;
        if ( (*(_DWORD *)v169 & 2) != 0 )
        {
          v145 = v406;
          if ( (*(_DWORD *)v169 & 1) != 0 )
          {
            v203 = (__int64)v409;
            v204 = v169 - *(_QWORD *)(v169 - 8);
            v205 = (unsigned __int64)(4 * v168 + 12) >> 9;
            if ( *(_BYTE *)(v204 + v205 + 48) != 0 )
              *(_BYTE *)(v204 + v205 + 48) = 0;
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = v203;
            v448 = v17;
            v401 = v410;
            v23 = v164;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
            LODWORD(v15) = v168;
            v16 = (unsigned __int64)v411;
          }
          else
          {
            if ( *(_BYTE *)((v169 & 0xFFFFFFFFFFF80000LL) + ((v169 - ((v169 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v169 & 0xFFFFFFFFFFF80000LL) + ((v169 - ((v169 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = (__int64)v409;
            v448 = v17;
            v401 = v410;
            v23 = v164;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
            LODWORD(v15) = v168;
            v16 = (unsigned __int64)v411;
          }
        }
        else
        {
          v96 = v404;
          v144 = v403;
          v26 = v408;
          v90 = (__int64)v409;
          v448 = v17;
          v401 = v410;
          v23 = v164;
          v145 = v406;
          v24 = v434;
          v132 = v428;
          v146 = (__int64)v407;
          LODWORD(v15) = v168;
          v16 = (unsigned __int64)v411;
        }
      }
      else
      {
        v23 = v428[8];
        v26 = (unsigned __int64)((char *)v402 - (char *)v18) >> 3;
        v420 = v26;
        if ( (int)v23 < 49 )
        {
          v433 = v40;
          v170 = MEMORY[0x1827B6300](a1: v23, a2: v24, a3: v135, a4: v40, a5: v434);
          v174 = v446;
          if ( v446 <= v443 )
            goto LABEL_469;
          v175 = *(_QWORD *)(v19 + 40);
          if ( (unsigned __int64)(v175 + 24) > *(_QWORD *)(v19 + 32) )
          {
            v400 = v170;
            v175 = MEMORY[0x181EAA920](a1: v171, a2: v172, a3: v441);
            v170 = v400;
          }
          else
          {
            *(_QWORD *)(v19 + 40) = v175 + 24;
            *(_DWORD *)v175 = 40544184;
            *(_DWORD *)(v175 + 4) = 0;
            *(_QWORD *)(v175 + 8) = 0;
            *(_QWORD *)(v175 + 16) = 0;
          }
          v176 = v420;
          v16 = v443;
          v177 = v427;
          *(_DWORD *)(v175 + 8) = (unsigned __int64)(v170 - (_QWORD)v18) >> 3;
          *(_DWORD *)(v175 + 4) = v176;
          *(_DWORD *)(v177 + 4 * v16 + 12) = (unsigned __int64)(v175 - (_QWORD)v18) >> 3;
          if ( (*(_DWORD *)v177 & 2) == 0 )
            goto LABEL_101;
          v145 = v406;
          if ( (*(_DWORD *)v177 & 1) == 0 )
          {
            if ( *(_BYTE *)((v177 & 0xFFFFFFFFFFF80000LL) + ((v177 - ((v177 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v177 & 0xFFFFFFFFFFF80000LL) + ((v177 - ((v177 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
LABEL_130:
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = (__int64)v409;
            v448 = v17;
            v401 = v410;
            v23 = (__int64)v405;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
            LODWORD(v15) = v16;
            v16 = (unsigned __int64)v411;
            goto LABEL_72;
          }
          v225 = v403;
          v226 = v177 - *(_QWORD *)(v177 - 8);
          v227 = (4 * v16 + 12) >> 9;
          if ( *(_BYTE *)(v226 + v227 + 48) != 0 )
            *(_BYTE *)(v226 + v227 + 48) = 0;
          v96 = v404;
          v144 = v225;
          v26 = v408;
          v90 = (__int64)v409;
          v448 = v17;
          v401 = v410;
          v23 = (__int64)v405;
          v145 = v406;
          v24 = v434;
          v132 = v428;
          v146 = (__int64)v407;
          LODWORD(v15) = v16;
          v16 = (unsigned __int64)v411;
        }
        else if ( (int)v23 >= 51 && (v135 = (__int64)(v18 + 94167668), v18 + 94167668 == v402) )
        {
          v433 = v40;
          v23 = (__int64)v407;
          v15 = v427;
          v40 = v446;
          v16 = v443;
          if ( (unsigned int *)v406 != v18 )
            goto LABEL_474;
          v189 = sub_18278F000(
                   a1: (__int64)v407,
                   a2: v24,
                   a3: v428,
                   a4: v446,
                   a5: (__int64)v402,
                   a6: v26,
                   a7: (__m128)v27.m128i_i128,
                   a8: v28,
                   a9: v29,
                   a10: v30,
                   a11: v31,
                   a12: v32,
                   a13: v33,
                   a14: v34,
                   a15: v393);
          if ( v446 <= v443 )
          {
            sub_182771220(
              a1: v190,
              a2: v191,
              a3: v443,
              a4: v446,
              a5: v446,
              a6: v192,
              a7: (__m128)v27.m128i_i128,
              a8: v28,
              a9: v29,
              a10: v30,
              a11: v31,
              a12: v32,
              a13: v33,
              a14: v34,
              a15: v393);
LABEL_478:
            v420 = v24;
            v381 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445);
            v24 = v420;
            goto LABEL_450;
          }
          v193 = v443;
          v15 = v427;
          *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v189 - (_QWORD)v18) >> 3;
          v194 = *(_DWORD *)v15;
          if ( (*(_DWORD *)v15 & 2) != 0 )
          {
            v241 = v15;
            LODWORD(v15) = v193;
            if ( (v194 & 1) != 0 )
            {
              v244 = v241 - *(_QWORD *)(v241 - 8);
              v245 = (4 * (unsigned __int64)v193 + 12) >> 9;
              if ( *(_BYTE *)(v244 + v245 + 48) != 0 )
                *(_BYTE *)(v244 + v245 + 48) = 0;
            }
            else if ( *(_BYTE *)((v241 & 0xFFFFFFFFFFF80000LL)
                               + ((v241 - ((v241 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                               + 0x38) != 0 )
            {
              *(_BYTE *)((v241 & 0xFFFFFFFFFFF80000LL) + ((v241 - ((v241 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
            }
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = (__int64)v409;
            v16 = (unsigned __int64)v411;
            v448 = v17;
            v401 = v410;
            v23 = (__int64)v405;
            v145 = v189;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
          }
          else
          {
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = (__int64)v409;
            v448 = v17;
            v401 = v410;
            v23 = (__int64)v405;
            v145 = v189;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
            LODWORD(v15) = v193;
            v16 = (unsigned __int64)v411;
          }
        }
        else
        {
          v433 = v40;
          v15 = v427;
          v40 = v446;
          v16 = v443;
          if ( v18 + 94167662 == v402 )
          {
            v23 = (__int64)v407;
            if ( v407 != v18 )
              goto LABEL_470;
            v180 = sub_18279F000(a1: v407, a2: v24, a3: v428, a4: v446, a5: v402, a6: v26);
            if ( v446 <= v443 )
            {
              sub_182771220(
                a1: v181,
                a2: v182,
                a3: v443,
                a4: v446,
                a5: v446,
                a6: v183,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_474:
              v386 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v386 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v420 = v24;
                v386 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
                v24 = v420;
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v386 + 40;
                *(_DWORD *)v386 = 40470128;
                *(_DWORD *)(v386 + 4) = 0;
                *(_QWORD *)(v386 + 8) = 0;
                *(_QWORD *)(v386 + 16) = 0;
                *(_QWORD *)(v386 + 24) = 0;
                *(_QWORD *)(v386 + 32) = 0;
              }
              *(_DWORD *)(v386 + 20) = 46923644;
              *(_DWORD *)(v386 + 16) = v24;
              *(_DWORD *)(v386 + 12) = (unsigned __int64)(v386 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v386 + 8) = 46385763;
              v338 = v386;
              goto LABEL_370;
            }
            v184 = v443;
            v185 = v427;
            *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v180 - (_QWORD)v18) >> 3;
            if ( (*(_DWORD *)v185 & 2) != 0 )
            {
              v234 = v404;
              v235 = v185;
              if ( (*(_DWORD *)v185 & 1) != 0 )
              {
                LODWORD(v15) = v184;
                v242 = v235 - *(_QWORD *)(v235 - 8);
                v243 = (4 * (unsigned __int64)v184 + 12) >> 9;
                if ( *(_BYTE *)(v242 + v243 + 48) != 0 )
                {
                  *(_BYTE *)(v242 + v243 + 48) = 0;
                  v96 = v404;
                  v144 = v403;
                  v26 = v408;
                  v90 = (__int64)v409;
                  v16 = (unsigned __int64)v411;
                  v448 = v17;
                  v401 = v410;
                  v23 = (__int64)v405;
                  v145 = v406;
                  v24 = v434;
                  v132 = v428;
                  v146 = v180;
                }
                else
                {
LABEL_347:
                  v96 = v404;
                  v144 = v403;
                  v26 = v408;
                  v90 = (__int64)v409;
                  v16 = (unsigned __int64)v411;
                  v448 = v17;
                  v401 = v410;
                  v23 = (__int64)v405;
                  v145 = v406;
                  v24 = v434;
                  v132 = v428;
                  v146 = v180;
                }
              }
              else
              {
                if ( *(_BYTE *)((v185 & 0xFFFFFFFFFFF80000LL)
                              + ((v185 - ((v185 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                              + 0x38) != 0 )
                  *(_BYTE *)((v185 & 0xFFFFFFFFFFF80000LL)
                           + ((v185 - ((v185 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                           + 0x38) = 0;
                v96 = v234;
                v144 = v403;
                v26 = v408;
                v90 = (__int64)v409;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v145 = v406;
                v24 = v434;
                v132 = v428;
                v146 = v180;
                LODWORD(v15) = v184;
                v16 = (unsigned __int64)v411;
              }
            }
            else
            {
              v96 = v404;
              v144 = v403;
              v26 = v408;
              v90 = (__int64)v409;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v145 = v406;
              v24 = v434;
              v132 = v428;
              v146 = v180;
              LODWORD(v15) = v184;
              v16 = (unsigned __int64)v411;
            }
          }
          else if ( (int)v23 >= 55 && v18 + 94167674 == v402 )
          {
            v23 = (__int64)v409;
            if ( v409 != v18 )
            {
              v420 = v24;
              v387 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v387 + 40) > *(_QWORD *)(v19 + 32) )
                goto LABEL_512;
              *(_QWORD *)(v19 + 40) = v387 + 40;
              *(_DWORD *)v387 = 40470128;
              *(_DWORD *)(v387 + 4) = 0;
              *(_QWORD *)(v387 + 8) = 0;
              *(_QWORD *)(v387 + 16) = 0;
              *(_QWORD *)(v387 + 24) = 0;
              *(_QWORD *)(v387 + 32) = 0;
              goto LABEL_482;
            }
            if ( (unsigned int *)v408 != v18 )
            {
              v388 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v388 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v420 = v24;
                v388 = MEMORY[0x181EAA920](a1: v409, a2: v24, a3: v445, a4: v446);
                v24 = v420;
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v388 + 40;
                *(_DWORD *)v388 = 40470128;
                *(_DWORD *)(v388 + 4) = 0;
                *(_QWORD *)(v388 + 8) = 0;
                *(_QWORD *)(v388 + 16) = 0;
                *(_QWORD *)(v388 + 24) = 0;
                *(_QWORD *)(v388 + 32) = 0;
              }
              *(_DWORD *)(v388 + 20) = 46923644;
              *(_DWORD *)(v388 + 16) = v24;
              *(_DWORD *)(v388 + 12) = (unsigned __int64)(v388 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v388 + 8) = 46425845;
              v338 = v388;
              goto LABEL_370;
            }
            if ( v434 != 2 )
            {
              v447 = v17;
              v439 = v434;
              v421 = (__int64)v402;
              v438 = v435;
              v437 = v443;
              v419 = v403;
              v418 = v404;
              v417 = (__int64)v405;
              v416 = v406;
              v448 = v17;
              v415 = (__int64)v407;
              v414 = v422;
              v436 = v433;
              v413 = v410;
              v412 = v411;
              goto LABEL_456;
            }
            v197 = MEMORY[0x1827AEEA0](a1: v409, a2: v24, a3: v428, a4: v446, a5: v402);
            if ( v446 <= v443 )
            {
              sub_182771220(
                a1: v198,
                a2: v199,
                a3: v443,
                a4: v446,
                a5: v446,
                a6: v200,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_488:
              v382 = MEMORY[0x181EAA920](a1: v79, a2: v24, a3: v26, a4: v81);
              goto LABEL_455;
            }
            v201 = v443;
            v15 = v427;
            *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v197 - (_QWORD)v18) >> 3;
            v202 = *(_DWORD *)v15;
            if ( (*(_DWORD *)v15 & 2) != 0 )
            {
              v246 = v15;
              LODWORD(v15) = v201;
              if ( (v202 & 1) != 0 )
              {
                v145 = v406;
                v335 = v246 - *(_QWORD *)(v246 - 8);
                v336 = (4 * (unsigned __int64)v201 + 12) >> 9;
                if ( *(_BYTE *)(v335 + v336 + 48) != 0 )
                  *(_BYTE *)(v335 + v336 + 48) = 0;
                v96 = v404;
                v144 = v403;
                v26 = v408;
                v90 = v197;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
              }
              else
              {
                if ( *(_BYTE *)((v246 & 0xFFFFFFFFFFF80000LL)
                              + ((v246 - ((v246 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                              + 0x38) != 0 )
                  *(_BYTE *)((v246 & 0xFFFFFFFFFFF80000LL)
                           + ((v246 - ((v246 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                           + 0x38) = 0;
                v96 = v404;
                v144 = v403;
                v26 = v408;
                v90 = v197;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v145 = v406;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
              }
            }
            else
            {
              v96 = v404;
              v144 = v403;
              v26 = v408;
              v90 = v197;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v145 = v406;
              v24 = v434;
              v132 = v428;
              v146 = (__int64)v407;
              LODWORD(v15) = v201;
              v16 = (unsigned __int64)v411;
            }
          }
          else if ( (int)v23 >= 55 && v18 + 94167680 == v402 )
          {
            if ( (unsigned int *)v408 != v18 )
            {
              v420 = v24;
              v389 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v389 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v389 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v446);
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v389 + 40;
                *(_DWORD *)v389 = 40470128;
                *(_DWORD *)(v389 + 4) = 0;
                *(_QWORD *)(v389 + 8) = 0;
                *(_QWORD *)(v389 + 16) = 0;
                *(_QWORD *)(v389 + 24) = 0;
                *(_QWORD *)(v389 + 32) = 0;
              }
              v24 = v420;
              *(_DWORD *)(v389 + 20) = 46923644;
              *(_DWORD *)(v389 + 16) = v24;
              *(_DWORD *)(v389 + 12) = (unsigned __int64)(v389 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v389 + 8) = 46385641;
              v338 = v389;
              goto LABEL_370;
            }
            v23 = (__int64)v409;
            if ( v409 != v18 )
            {
              v390 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v390 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v420 = v24;
                v390 = MEMORY[0x181EAA920](a1: v409, a2: v24, a3: v445, a4: v446);
                v24 = v420;
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v390 + 40;
                *(_DWORD *)v390 = 40470128;
                *(_DWORD *)(v390 + 4) = 0;
                *(_QWORD *)(v390 + 8) = 0;
                *(_QWORD *)(v390 + 16) = 0;
                *(_QWORD *)(v390 + 24) = 0;
                *(_QWORD *)(v390 + 32) = 0;
              }
              *(_DWORD *)(v390 + 20) = 46923644;
              *(_DWORD *)(v390 + 16) = v24;
              *(_DWORD *)(v390 + 12) = (unsigned __int64)(v390 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v390 + 8) = 46425845;
              v338 = v390;
              goto LABEL_370;
            }
            v206 = MEMORY[0x1827AEF80](a1: v409, a2: v24, a3: v428, a4: v446, a5: v402);
            if ( v446 <= v443 )
            {
              sub_182771220(
                a1: v207,
                a2: v208,
                a3: v443,
                a4: v446,
                a5: v446,
                a6: v209,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_497:
              sub_182771220(
                a1: v213,
                a2: v214,
                a3: v443,
                a4: v216,
                a5: v446,
                a6: v215,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_498:
              sub_182771220(
                a1: v139,
                a2: v140,
                a3: v443,
                a4: v138,
                a5: v446,
                a6: v141,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_499:
              v391 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v391 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v420 = v24;
                v391 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
                v24 = v420;
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v391 + 40;
                *(_DWORD *)v391 = 40470128;
                *(_DWORD *)(v391 + 4) = 0;
                *(_QWORD *)(v391 + 8) = 0;
                *(_QWORD *)(v391 + 16) = 0;
                *(_QWORD *)(v391 + 24) = 0;
                *(_QWORD *)(v391 + 32) = 0;
              }
              *(_DWORD *)(v391 + 20) = 46923644;
              *(_DWORD *)(v391 + 16) = v24;
              *(_DWORD *)(v391 + 12) = (unsigned __int64)(v391 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v391 + 8) = 46385605;
              v338 = v391;
              goto LABEL_370;
            }
            v210 = v443;
            v15 = v427;
            *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v206 - (_QWORD)v18) >> 3;
            v211 = *(_DWORD *)v15;
            if ( (*(_DWORD *)v15 & 2) != 0 )
            {
              v247 = v15;
              LODWORD(v15) = v210;
              if ( (v211 & 1) != 0 )
              {
                v145 = v406;
                v368 = v247 - *(_QWORD *)(v247 - 8);
                v369 = (4 * (unsigned __int64)v210 + 12) >> 9;
                if ( *(_BYTE *)(v368 + v369 + 48) != 0 )
                  *(_BYTE *)(v368 + v369 + 48) = 0;
                v96 = v404;
                v144 = v403;
                v26 = v206;
                v90 = (__int64)v409;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
              }
              else
              {
                if ( *(_BYTE *)((v247 & 0xFFFFFFFFFFF80000LL)
                              + ((v247 - ((v247 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                              + 0x38) != 0 )
                  *(_BYTE *)((v247 & 0xFFFFFFFFFFF80000LL)
                           + ((v247 - ((v247 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                           + 0x38) = 0;
                v96 = v404;
                v144 = v403;
                v26 = v206;
                v90 = (__int64)v409;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v145 = v406;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
              }
            }
            else
            {
              v96 = v404;
              v144 = v403;
              v26 = v206;
              v90 = (__int64)v409;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v145 = v406;
              v24 = v434;
              v132 = v428;
              v146 = (__int64)v407;
              LODWORD(v15) = v210;
              v16 = (unsigned __int64)v411;
            }
          }
          else if ( (int)v23 >= 58 && v18 + 94167686 == v402 )
          {
            v23 = v403;
            if ( (unsigned int *)v403 != v18 )
              goto LABEL_499;
            v16 = (unsigned __int64)v428;
            v219 = MEMORY[0x1827AF600](a1: v403, a2: v24, a3: v428, a4: v446, a5: v402);
            if ( v446 <= v443 )
            {
              sub_182771220(
                a1: v220,
                a2: v221,
                a3: v443,
                a4: v446,
                a5: v446,
                a6: v222,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_503:
              v392 = *(_QWORD *)(v19 + 40);
              if ( (unsigned __int64)(v392 + 40) > *(_QWORD *)(v19 + 32) )
              {
                v420 = v24;
                v392 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
                v24 = v420;
              }
              else
              {
                *(_QWORD *)(v19 + 40) = v392 + 40;
                *(_DWORD *)v392 = 40470128;
                *(_DWORD *)(v392 + 4) = 0;
                *(_QWORD *)(v392 + 8) = 0;
                *(_QWORD *)(v392 + 16) = 0;
                *(_QWORD *)(v392 + 24) = 0;
                *(_QWORD *)(v392 + 32) = 0;
              }
              *(_DWORD *)(v392 + 20) = 46923644;
              *(_DWORD *)(v392 + 16) = v24;
              *(_DWORD *)(v392 + 12) = (unsigned __int64)(v392 - (_QWORD)v18) >> 3;
              *(_DWORD *)(v392 + 8) = 46385623;
              v338 = v392;
              goto LABEL_370;
            }
            v223 = v443;
            v15 = v427;
            *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v219 - (_QWORD)v18) >> 3;
            v224 = *(_DWORD *)v15;
            if ( (*(_DWORD *)v15 & 2) != 0 )
            {
              v145 = v406;
              v333 = v15;
              LODWORD(v15) = v223;
              if ( (v224 & 1) != 0 )
              {
                v374 = v333 - *(_QWORD *)(v333 - 8);
                v375 = (4 * (unsigned __int64)v223 + 12) >> 9;
                if ( *(_BYTE *)(v374 + v375 + 48) != 0 )
                  *(_BYTE *)(v374 + v375 + 48) = 0;
              }
              else if ( *(_BYTE *)((v333 & 0xFFFFFFFFFFF80000LL)
                                 + ((v333 - ((v333 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                 + 0x38) != 0 )
              {
                *(_BYTE *)((v333 & 0xFFFFFFFFFFF80000LL) + ((v333 - ((v333 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              }
              v96 = v404;
              v144 = v219;
              v26 = v408;
              v90 = (__int64)v409;
              v16 = (unsigned __int64)v411;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v24 = v434;
              v132 = v428;
              v146 = (__int64)v407;
            }
            else
            {
              v96 = v404;
              v144 = v219;
              v26 = v408;
              v90 = (__int64)v409;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v145 = v406;
              v24 = v434;
              v132 = v428;
              v146 = (__int64)v407;
              LODWORD(v15) = v223;
              v16 = (unsigned __int64)v411;
            }
          }
          else if ( (int)v23 >= 61 && v18 + 94167692 == v402 )
          {
            v26 = v404;
            v23 = v403;
            if ( (unsigned int *)v404 != v18 )
              goto LABEL_503;
            v228 = MEMORY[0x1827AF260](a1: v403, a2: v24, a3: v428, a4: v446, a5: v402);
            if ( v446 <= v443 )
            {
              sub_182771220(
                a1: v229,
                a2: v230,
                a3: v443,
                a4: v446,
                a5: v446,
                a6: v231,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_507:
              sub_182771080(
                a1: v139,
                a2: v140,
                a3: (__int64)v238,
                a4: v237,
                a5: v239,
                a6: v236,
                a7: (__m128)v27.m128i_i128,
                a8: v28,
                a9: v29,
                a10: v30,
                a11: v31,
                a12: v32,
                a13: v33,
                a14: v34,
                a15: v393);
LABEL_508:
              v420 = v24;
              v384 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: v445, a4: v40);
              v24 = v420;
              goto LABEL_467;
            }
            v232 = v443;
            v15 = v427;
            *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v228 - (_QWORD)v18) >> 3;
            v233 = *(_DWORD *)v15;
            if ( (*(_DWORD *)v15 & 2) != 0 )
            {
              v145 = v406;
              v334 = v15;
              LODWORD(v15) = v232;
              if ( (v233 & 1) != 0 )
              {
                v24 = v434;
                v132 = v428;
                v379 = v334 - *(_QWORD *)(v334 - 8);
                v380 = (4 * (unsigned __int64)v232 + 12) >> 9;
                if ( *(_BYTE *)(v379 + v380 + 48) != 0 )
                  *(_BYTE *)(v379 + v380 + 48) = 0;
                v96 = v228;
                v144 = v403;
                v26 = v408;
                v90 = (__int64)v409;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v146 = (__int64)v407;
              }
              else
              {
                if ( *(_BYTE *)((v334 & 0xFFFFFFFFFFF80000LL)
                              + ((v334 - ((v334 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                              + 0x38) != 0 )
                  *(_BYTE *)((v334 & 0xFFFFFFFFFFF80000LL)
                           + ((v334 - ((v334 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                           + 0x38) = 0;
                v96 = v228;
                v144 = v403;
                v26 = v408;
                v90 = (__int64)v409;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
              }
            }
            else
            {
              v96 = v228;
              v144 = v403;
              v26 = v408;
              v90 = (__int64)v409;
              v448 = v17;
              v401 = v410;
              v23 = (__int64)v405;
              v145 = v406;
              v24 = v434;
              v132 = v428;
              v146 = (__int64)v407;
              LODWORD(v15) = v232;
              v16 = (unsigned __int64)v411;
            }
          }
          else
          {
            if ( v18 + 94164930 == v402 )
            {
              v212 = sub_18278CCE0(
                       a1: (__int64)v409,
                       a2: v24,
                       a3: (__int64)v422,
                       a4: v446,
                       a5: v434,
                       a6: (__int64)(v18 + 94167698),
                       a7: (__m128)v27.m128i_i128,
                       a8: v28,
                       a9: v29,
                       a10: v30,
                       a11: v31,
                       a12: v32,
                       a13: v33,
                       a14: v34,
                       a15: v393);
              v132 = v428;
              v428[9] |= *(_DWORD *)(v212 + 8);
              v216 = v446;
              if ( v446 <= v443 )
                goto LABEL_497;
              v217 = v443;
              v15 = v427;
              *(_DWORD *)(v427 + 4LL * v443 + 12) = *(_DWORD *)(v212 + 4);
              v218 = *(_DWORD *)v15;
              if ( (*(_DWORD *)v15 & 2) == 0 )
              {
                v96 = v404;
                v144 = v403;
                v26 = v408;
                v90 = (__int64)v409;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v145 = v406;
                v24 = v434;
                v146 = (__int64)v407;
                LODWORD(v15) = v217;
                v16 = (unsigned __int64)v411;
                goto LABEL_72;
              }
              v145 = v406;
              v332 = v15;
              LODWORD(v15) = v217;
              if ( (v218 & 1) != 0 )
              {
                v370 = v332 - *(_QWORD *)(v332 - 8);
                v371 = (4 * (unsigned __int64)v217 + 12) >> 9;
                if ( *(_BYTE *)(v370 + v371 + 48) != 0 )
                  *(_BYTE *)(v370 + v371 + 48) = 0;
              }
              else if ( *(_BYTE *)((v332 & 0xFFFFFFFFFFF80000LL)
                                 + ((v332 - ((v332 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                 + 0x38) != 0 )
              {
                *(_BYTE *)((v332 & 0xFFFFFFFFFFF80000LL) + ((v332 - ((v332 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              }
            }
            else
            {
              v137 = sub_18278B420(
                       a1: (__int64)v409,
                       a2: v24,
                       a3: v422,
                       a4: v446,
                       a5: (__int64)v402,
                       a6: v434,
                       a7: (__m128)v27.m128i_i128,
                       a8: v28,
                       a9: v29,
                       a10: v30,
                       a11: v31,
                       a12: v32,
                       a13: v33,
                       a14: v34,
                       a15: v393);
              if ( (unsigned int *)v137 == v18 )
              {
                v236 = v404;
                v16 = v443;
                v15 = v427;
                v237 = v446;
                v238 = v428;
                v239 = v428[3];
                if ( (_DWORD)v239 == 0 )
                  goto LABEL_507;
                v400 = v137;
                v240 = MEMORY[0x1827B6300](a1: v139, a2: v140, a3: &v18[2 * v239], a4: v446, a5: v434, a6: v404);
                v142 = *(_QWORD *)(v19 + 40);
                v138 = v142 + 24;
                if ( (unsigned __int64)(v142 + 24) > *(_QWORD *)(v19 + 32) )
                {
                  v399 = v240;
                  v142 = MEMORY[0x181EAA920](a1: v139, a2: v441, a3: v441);
                  v240 = v399;
                }
                else
                {
                  *(_QWORD *)(v19 + 40) = v138;
                  *(_DWORD *)v142 = 40544184;
                  *(_DWORD *)(v142 + 4) = 0;
                  *(_QWORD *)(v142 + 8) = 0;
                  *(_QWORD *)(v142 + 16) = 0;
                }
                v141 = v420;
                *(_DWORD *)(v142 + 8) = (unsigned __int64)(v240 - (_QWORD)v18) >> 3;
                *(_DWORD *)(v142 + 4) = v141;
              }
              else
              {
                v142 = v137;
                v400 = v137;
              }
              if ( v446 <= v443 )
                goto LABEL_498;
              v15 = v443;
              v143 = v427;
              *(_DWORD *)(v427 + 4LL * v443 + 12) = (unsigned __int64)(v142 - (_QWORD)v18) >> 3;
              if ( (*(_DWORD *)v143 & 2) == 0 )
              {
                v96 = v404;
                v144 = v403;
                v26 = v408;
                v90 = (__int64)v409;
                v16 = (unsigned __int64)v411;
                v448 = v17;
                v401 = v410;
                v23 = (__int64)v405;
                v145 = v406;
                v24 = v434;
                v132 = v428;
                v146 = (__int64)v407;
                goto LABEL_72;
              }
              v145 = v406;
              if ( (*(_DWORD *)v143 & 1) != 0 )
              {
                v372 = v143 - *(_QWORD *)(v143 - 8);
                v373 = (unsigned __int64)(4 * v15 + 12) >> 9;
                if ( *(_BYTE *)(v372 + v373 + 48) != 0 )
                  *(_BYTE *)(v372 + v373 + 48) = 0;
              }
              else if ( *(_BYTE *)((v143 & 0xFFFFFFFFFFF80000LL)
                                 + ((v143 - ((v143 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9)
                                 + 0x38) != 0 )
              {
                *(_BYTE *)((v143 & 0xFFFFFFFFFFF80000LL) + ((v143 - ((v143 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              }
            }
            v96 = v404;
            v144 = v403;
            v26 = v408;
            v90 = (__int64)v409;
            v16 = (unsigned __int64)v411;
            v448 = v17;
            v401 = v410;
            v23 = (__int64)v405;
            v24 = v434;
            v132 = v428;
            v146 = (__int64)v407;
          }
        }
      }
    }
LABEL_72:
    v147 = v132[3];
    if ( (_DWORD)v147 == 0 )
      goto LABEL_441;
    v148 = v18[2 * v147 + 2];
    v149 = (__int64)&v18[2 * v147];
    if ( (_DWORD)v148 == 0 )
      goto LABEL_442;
    if ( (_DWORD)v24 != v18[2 * v148 + 5] - v433 )
      goto LABEL_443;
    v411 = (unsigned int *)v16;
    v448 = v17;
    v410 = v401;
    v409 = (unsigned int *)v90;
    v408 = v26;
    v407 = (unsigned int *)v146;
    v406 = v145;
    v405 = (unsigned int *)v23;
    v404 = v96;
    v403 = v144;
    v99 = (unsigned int)(v15 + 1);
    v98 = v149;
  }
  v15 = (unsigned int)v99;
  v40 = v427;
  if ( (v428[10] & 0x80000000) == 0 && (unsigned int *)v406 == v18 )
  {
    v378 = *(_QWORD *)(v19 + 40);
    if ( (unsigned __int64)(v378 + 40) > *(_QWORD *)(v19 + 32) )
      goto LABEL_452;
    *(_QWORD *)(v19 + 40) = v378 + 40;
    *(_DWORD *)v378 = 40470128;
    *(_DWORD *)(v378 + 4) = 0;
    *(_QWORD *)(v378 + 8) = 0;
    *(_QWORD *)(v378 + 16) = 0;
    *(_QWORD *)(v378 + 24) = 0;
    *(_QWORD *)(v378 + 32) = 0;
LABEL_414:
    *(_DWORD *)(v378 + 20) = 46923644;
    *(_DWORD *)(v378 + 16) = v18[93585974];
    *(_DWORD *)(v378 + 12) = (unsigned __int64)(v378 - (_QWORD)v18) >> 3;
    *(_DWORD *)(v378 + 8) = 46469489;
    v338 = v378;
    goto LABEL_370;
  }
  if ( *(int *)(v19 + 16) <= 0 )
    sub_18277F280(a1: v23, a2: v24, a3: (__int64)v428, a4: v427);
  return v40;
}
