// sub_1EB9000
// rva 0x01eb9000  size 145  section .text  group text
// window base 0x181eb9000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB9000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  __m128i v12; // xmm8
  __m128i v13; // xmm9
  __m128i v14; // xmm10
  __m128i v15; // xmm11
  __m128i v16; // xmm12
  __m128i v17; // xmm13
  __m128i v18; // xmm14
  __m128i v19; // xmm15
  __int64 result; // rax
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r11
  __int64 v35; // r10
  __m128i v36; // xmm7
  __m128i v37; // xmm6
  __m128i v38; // xmm5
  __m128i v39; // xmm4
  __m128i v40; // xmm3
  __m128i v41; // xmm2
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  int v44; // esi
  _DWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  _DWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rbx
  unsigned int v51; // edx
  unsigned int v52; // ebp
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdx
  unsigned __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rsi
  char v68; // cl
  int v69; // ebx
  _DWORD *v70; // rbp
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rdx
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rdx
  unsigned int v80; // edx
  unsigned int v81; // ebp
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rdx
  unsigned __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rdx
  char v95; // cl
  int v96; // ebx
  __int64 v97; // rbp
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdx
  unsigned __int64 v101; // rdx
  unsigned int v102; // edx
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rsi
  int v113; // eax
  __int64 v114; // rdi
  unsigned int v115; // ebx
  _DWORD *v116; // rbp
  __int64 v117; // rcx
  __int64 v118; // rsi
  _DWORD *v119; // rdx
  unsigned __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // rcx
  unsigned int v123; // eax
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  _DWORD *v131; // rax
  __int64 v132; // rdx
  unsigned __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rdx
  unsigned __int64 v138; // r9
  char *v139; // r9
  unsigned __int64 v140; // r8
  __int64 v141; // rdx
  __int64 v142; // rdx
  unsigned __int64 v143; // r9
  unsigned __int64 v144; // rbx
  unsigned __int64 v145; // rax
  unsigned __int64 v146; // rbx
  unsigned __int64 v147; // rbx
  unsigned __int64 v148; // rbx
  unsigned __int64 v149; // rbx
  unsigned __int64 v150; // rbx
  unsigned __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdi
  __int64 v156; // rsi
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // r11
  __int64 v160; // r10
  __m128i v161; // xmm7
  __m128i v162; // xmm6
  __m128i v163; // xmm5
  __m128i v164; // xmm4
  __m128i v165; // xmm3
  __m128i v166; // xmm2
  __m128i v167; // xmm1
  __m128i v168; // xmm0
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdi
  __int64 v173; // rsi
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // r11
  __int64 v177; // r10
  __m128i v178; // xmm7
  __m128i v179; // xmm6
  __m128i v180; // xmm5
  __m128i v181; // xmm4
  __m128i v182; // xmm3
  __m128i v183; // xmm2
  __m128i v184; // xmm1
  __m128i v185; // xmm0
  unsigned __int64 v186; // rdx
  __int64 v187; // rdx
  int v188; // edx
  int v189; // ecx
  int v190; // edi
  int v191; // esi
  int v192; // r8d
  int v193; // r9d
  char v194; // [rsp-10h] [rbp-4F0h] BYREF
  _DWORD *v195; // [rsp+0h] [rbp-4E0h]
  __m128i v196; // [rsp+8h] [rbp-4D8h]
  __m128i v197; // [rsp+18h] [rbp-4C8h]
  __m128i v198; // [rsp+28h] [rbp-4B8h]
  __m128i v199; // [rsp+38h] [rbp-4A8h]
  __m128i v200; // [rsp+48h] [rbp-498h]
  __m128i v201; // [rsp+58h] [rbp-488h]
  __m128i v202; // [rsp+68h] [rbp-478h]
  __m128i v203; // [rsp+78h] [rbp-468h]
  __m128i v204; // [rsp+88h] [rbp-458h]
  __m128i v205; // [rsp+98h] [rbp-448h]
  __m128i v206; // [rsp+A8h] [rbp-438h]
  __m128i v207; // [rsp+B8h] [rbp-428h]
  __m128i v208; // [rsp+C8h] [rbp-418h]
  __m128i v209; // [rsp+D8h] [rbp-408h]
  __m128i v210; // [rsp+E8h] [rbp-3F8h]
  __m128i v211; // [rsp+F8h] [rbp-3E8h]
  __int64 v212; // [rsp+108h] [rbp-3D8h]
  __int64 v213; // [rsp+110h] [rbp-3D0h]
  __int64 v214; // [rsp+118h] [rbp-3C8h]
  __int64 v215; // [rsp+120h] [rbp-3C0h]
  __int64 v216; // [rsp+128h] [rbp-3B8h]
  __int64 v217; // [rsp+130h] [rbp-3B0h]
  __int64 v218; // [rsp+138h] [rbp-3A8h]
  __int64 v219; // [rsp+140h] [rbp-3A0h]
  __int64 v220; // [rsp+148h] [rbp-398h]
  __int64 v221; // [rsp+150h] [rbp-390h]
  __int64 v222; // [rsp+158h] [rbp-388h]
  __int64 v223; // [rsp+160h] [rbp-380h]
  char v224; // [rsp+168h] [rbp-378h] BYREF
  __m128i v225[16]; // [rsp+170h] [rbp-370h] BYREF
  __int64 v226; // [rsp+270h] [rbp-270h]
  __int64 v227; // [rsp+278h] [rbp-268h]
  __int64 v228; // [rsp+280h] [rbp-260h]
  __int64 v229; // [rsp+288h] [rbp-258h]
  __int64 v230; // [rsp+290h] [rbp-250h]
  __int64 v231; // [rsp+298h] [rbp-248h]
  __int64 v232; // [rsp+2A0h] [rbp-240h]
  __int64 v233; // [rsp+2A8h] [rbp-238h]
  __int64 v234; // [rsp+2B0h] [rbp-230h]
  __int64 v235; // [rsp+2B8h] [rbp-228h]
  __int64 v236; // [rsp+2C0h] [rbp-220h]
  __int64 v237; // [rsp+2C8h] [rbp-218h]
  char v238; // [rsp+2D0h] [rbp-210h] BYREF
  char v239[8]; // [rsp+2D8h] [rbp-208h] BYREF
  _DWORD *v240; // [rsp+2E0h] [rbp-200h]
  unsigned int v241; // [rsp+2ECh] [rbp-1F4h]
  _DWORD *v242; // [rsp+2F0h] [rbp-1F0h]
  __int64 v243; // [rsp+2F8h] [rbp-1E8h]
  _DWORD *v244; // [rsp+300h] [rbp-1E0h]
  __int64 v245; // [rsp+308h] [rbp-1D8h]
  int v246; // [rsp+314h] [rbp-1CCh]
  unsigned int v247; // [rsp+318h] [rbp-1C8h]
  unsigned int v248; // [rsp+31Ch] [rbp-1C4h]
  int v249; // [rsp+320h] [rbp-1C0h]
  unsigned int v250; // [rsp+324h] [rbp-1BCh]
  __int64 v251; // [rsp+328h] [rbp-1B8h]
  __int64 v252; // [rsp+330h] [rbp-1B0h]
  __int64 v253; // [rsp+338h] [rbp-1A8h]
  __int64 v254; // [rsp+340h] [rbp-1A0h]
  __int64 v255; // [rsp+348h] [rbp-198h]
  __int64 v256; // [rsp+350h] [rbp-190h]
  __m128i v257; // [rsp+358h] [rbp-188h]
  __m128i v258; // [rsp+368h] [rbp-178h]
  __m128i v259; // [rsp+378h] [rbp-168h]
  __m128i v260; // [rsp+388h] [rbp-158h]
  __m128i v261; // [rsp+398h] [rbp-148h]
  __m128i v262; // [rsp+3A8h] [rbp-138h]
  __m128i v263; // [rsp+3B8h] [rbp-128h]
  __m128i v264; // [rsp+3C8h] [rbp-118h]
  __m128i v265; // [rsp+3D8h] [rbp-108h]
  __m128i v266; // [rsp+3E8h] [rbp-F8h]
  __m128i v267; // [rsp+3F8h] [rbp-E8h]
  __m128i v268; // [rsp+408h] [rbp-D8h]
  __m128i v269; // [rsp+418h] [rbp-C8h]
  __m128i v270; // [rsp+428h] [rbp-B8h]
  __m128i v271; // [rsp+438h] [rbp-A8h]
  __m128i v272; // [rsp+448h] [rbp-98h]
  __int64 v273; // [rsp+460h] [rbp-80h]
  __int64 v274; // [rsp+468h] [rbp-78h]
  __int64 v275; // [rsp+470h] [rbp-70h]
  __int64 v276; // [rsp+478h] [rbp-68h]
  __int64 v277; // [rsp+480h] [rbp-60h]
  __int64 v278; // [rsp+488h] [rbp-58h]
  __int64 v279; // [rsp+490h] [rbp-50h]
  __int64 v280; // [rsp+498h] [rbp-48h]
  __int64 v281; // [rsp+4A0h] [rbp-40h]
  __int64 v282; // [rsp+4A8h] [rbp-38h]
  __int64 v283; // [rsp+4B0h] [rbp-30h]
  char v284; // [rsp+4B8h] [rbp-28h] BYREF
  __int64 v285; // [rsp+4C0h] [rbp-20h] BYREF
  _DWORD *v286; // [rsp+4C8h] [rbp-18h]
  int v287; // [rsp+4D4h] [rbp-Ch]
  __int64 v288; // [rsp+4D8h] [rbp-8h]

  if ( (unsigned __int64)&v284 > *(_QWORD *)(v11 + 8) )
  {
    if ( a3 != 0 )
      JUMPOUT(0x303D43018LL);
    v288 = 0;
    v287 = a5;
    v286 = a6;
    v285 = v10;
    result = sub_1EB8D80(a1, a2, a3: v10, a4, a5, a6);
    if ( *(int *)(v11 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v286 = a6;
  v287 = a5;
  v288 = a3;
  v21 = sub_1EB84E0(a1, a2, a3, a4, a5, (__int64)a6, a7: v284);
  v23 = v22;
  v27 = sub_276FC00(a1: v25, a2: v26, a3: v21, a4: v24, a5: v10 + 34096120);
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
  v283 = v7;
  v273 = v34;
  v274 = v35;
  v275 = v33;
  v276 = v32;
  v277 = v30;
  v278 = v31;
  v279 = v23;
  v280 = v28;
  v281 = v29;
  v282 = v27;
  v257 = v19;
  v258 = v18;
  v259 = v17;
  v260 = v16;
  v261 = v15;
  v262 = v14;
  v263 = v13;
  v264 = v12;
  v265 = v36;
  v266 = v37;
  v267 = v38;
  v268 = v39;
  v269 = v40;
  v270 = v41;
  v271 = v42;
  v272 = v43;
  if ( (unsigned __int64)&v238 <= *(_QWORD *)(v11 + 8) )
    goto LABEL_30;
  if ( v28 == v10 )
    goto LABEL_31;
  v254 = 34082368;
  if ( *(char *)(v28 + 68) >= 4 || (unsigned int)(v44 = *(_DWORD *)(v28 + 32)) < 4 )
  {
    v253 = 34082880;
    v252 = 37784040;
    v251 = 34082680;
    v245 = v28;
    v45 = (_DWORD *)sub_4F68C80();
    if ( v45 == (_DWORD *)v10 )
      v48 = (_DWORD *)(v10 + 353301280);
    else
      v48 = v45;
    v49 = (unsigned int)v48[1];
    v50 = v10 + 58178312;
    if ( (_DWORD)v49 != 0 )
    {
      v51 = *(_DWORD *)(v10 + 8 * v49 + 8);
      if ( v51 != 0 )
      {
        v52 = *((char *)v48 + 12);
        v53 = *(unsigned int *)(v10 + 374343896);
        v240 = v48;
        v54 = v52;
        v55 = (v51 >> v52) + 57;
        if ( (int)v55 < 0 )
        {
          v247 = v52;
          v242 = v45;
          v100 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v100 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v246 = v55;
            v241 = v53;
            v100 = sub_1EAA920(a1: v55, a2: v53, a3: v253);
            v53 = v241;
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v100 + 40;
            *(_DWORD *)v100 = 34082880;
            *(_DWORD *)(v100 + 4) = 0;
            *(_QWORD *)(v100 + 8) = 0;
            *(_QWORD *)(v100 + 16) = 0;
            *(_QWORD *)(v100 + 24) = 0;
            *(_QWORD *)(v100 + 32) = 0;
            v246 = v55;
          }
          *(_DWORD *)(v100 + 20) = 46923644;
          *(_DWORD *)(v100 + 16) = v53;
          *(_DWORD *)(v100 + 12) = (unsigned __int64)(v100 - v10) >> 3;
          v243 = v100;
          sub_503B9A0(a1: v55, a2: v53, a3: v100, a4: v54, a5: 0);
          v101 = v243;
          *(_DWORD *)(v243 + 8) = 46004603;
          if ( (*(_DWORD *)v101 & 2) != 0 )
          {
            v146 = (v101 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v101 & 0xFFFFFFFFFFF80000LL) + ((v101 - v146) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v101 & 0xFFFFFFFFFFF80000LL) + ((v101 - v146) >> 9) + 0x38) = 0;
            v71 = v101;
          }
          else
          {
            v71 = v101;
          }
          goto LABEL_29;
        }
        v56 = (unsigned int)((_DWORD)v55 << v52);
        if ( (int)v56 < 0 )
        {
          v246 = v56;
          v247 = v52;
          v242 = v45;
          v132 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v132 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v241 = v53;
            v132 = sub_1EAA920(a1: v56, a2: v53, a3: v253);
            v53 = v241;
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v132 + 40;
            *(_DWORD *)v132 = 34082880;
            *(_DWORD *)(v132 + 4) = 0;
            *(_QWORD *)(v132 + 8) = 0;
            *(_QWORD *)(v132 + 16) = 0;
            *(_QWORD *)(v132 + 24) = 0;
            *(_QWORD *)(v132 + 32) = 0;
          }
          *(_DWORD *)(v132 + 20) = 46923644;
          *(_DWORD *)(v132 + 16) = v53;
          *(_DWORD *)(v132 + 12) = (unsigned __int64)(v132 - v10) >> 3;
          v243 = v132;
          sub_503B9A0(a1: v56, a2: v53, a3: v132, a4: v54, a5: 0);
          v133 = v243;
          *(_DWORD *)(v243 + 8) = 46004603;
          if ( (*(_DWORD *)v133 & 2) != 0 )
          {
            v147 = (v133 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v133 & 0xFFFFFFFFFFF80000LL) + ((v133 - v147) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v133 & 0xFFFFFFFFFFF80000LL) + ((v133 - v147) >> 9) + 0x38) = 0;
            v71 = v133;
          }
          else
          {
            v71 = v133;
          }
          goto LABEL_29;
        }
        v57 = *(_QWORD *)(v11 + 40);
        v58 = ((unsigned int)v56 + 19LL) & 0x1FFFFFFF8LL;
        if ( v58 >= 0x20000 || (v138 = v57 + v58) > *(_QWORD *)(v11 + 32) )
        {
          v246 = v56;
          v247 = v52;
          v243 = v10 + 58178312;
          v242 = v45;
          v57 = sub_1EAA840(a1: v56, a2: v53, a3: v254, a4: v254, a5: v56);
          v52 = v247;
          v50 = v243;
        }
        else
        {
          v59 = v254;
          *(_QWORD *)(v11 + 40) = v138;
          *(_QWORD *)v57 = v59;
          *(_DWORD *)(v57 + 8) = v56;
          v246 = v56;
          v242 = v45;
        }
        v247 = v52;
        v243 = v57;
        sub_4FF2C40(a1: v52, a2: v243, a3: v50, a4: v59, a5: v243, a6: 0);
        sub_4FF2C40(a1: v247, a2: v61, a3: v240, a4: v60, a5: v243, a6: 57);
        v255 = v9;
        v248 = v247;
        v249 = 0;
        v256 = v9;
        v244 = (_DWORD *)v243;
        v250 = 0;
      }
      else
      {
        v242 = v45;
        v74 = *(unsigned __int8 *)(v10 + 58178325);
        v248 = 0;
        v249 = 830974912;
        v244 = (_DWORD *)(v10 + 376658568);
        v250 = v74;
      }
      v62 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v62 + 40) > *(_QWORD *)(v11 + 32) )
      {
        v62 = sub_1EAA920(a1: v46, a2: v47, a3: v252);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v62 + 40;
        *(_DWORD *)v62 = 37784040;
        *(_DWORD *)(v62 + 4) = 0;
        *(_QWORD *)(v62 + 8) = 0;
        *(_QWORD *)(v62 + 16) = 0;
        *(_QWORD *)(v62 + 24) = 0;
        *(_QWORD *)(v62 + 32) = 0;
      }
      v242 = (_DWORD *)v62;
      *(_DWORD *)(v62 + 20) = 46923644;
      *(_DWORD *)(v62 + 16) = *(_DWORD *)(v10 + 374343896);
      *(_DWORD *)(v62 + 12) = (unsigned __int64)(v62 - v10) >> 3;
      v63 = sub_503B9A0(a1: v46, a2: v47, a3: v62, a4: v62, a5: 0);
      v66 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v66 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v243 = v63;
        v66 = sub_1EAA920(a1: v64, a2: v65, a3: v251);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v66 + 24;
        *(_DWORD *)v66 = 34082680;
        *(_DWORD *)(v66 + 4) = 0;
        *(_QWORD *)(v66 + 8) = 0;
        *(_QWORD *)(v66 + 16) = 0;
      }
      v67 = (__int64)v242;
      v68 = v248;
      v69 = v249;
      v70 = v244;
      *(_BYTE *)(v66 + 13) = v250;
      *(_BYTE *)(v66 + 12) = v68;
      *(_DWORD *)(v66 + 8) = v69;
      *(_DWORD *)(v66 + 4) = ((unsigned __int64)v70 - v10) >> 3;
      *(_DWORD *)(v67 + 8) = (unsigned __int64)(v66 - v10) >> 3;
      if ( (*(_DWORD *)v67 & 2) != 0 )
      {
        v140 = (v67 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v140) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v140) >> 9) + 0x38) = 0;
        v71 = v67;
      }
      else
      {
        v71 = v67;
      }
      goto LABEL_29;
    }
    sub_2771080();
  }
  else
  {
    if ( (v44 & 0xA0000000) != 0x80000000 )
    {
      v253 = 34082880;
      v251 = 34082680;
      v245 = v28;
      if ( (unsigned int)sub_4F5E660() != 0 )
      {
        if ( *(int *)(v11 + 16) <= 0 )
          sub_277F280();
        return v245;
      }
      if ( (unsigned int)sub_1591620() != 0 )
      {
        v71 = sub_2091A00(a1: v98, a2: v99, a3: v245);
      }
      else
      {
        v243 = sub_4F68C80(a1: v98, a2: v99, a3: v245);
        v105 = sub_1582360(a1: v103, a2: v104, a3: v10 + 376658704);
        if ( v243 == v10 )
          v108 = v10 + 353301280;
        else
          v108 = v243;
        v248 = *(char *)(v105 + 12) | *(char *)(v108 + 12);
        v244 = (_DWORD *)v108;
        v240 = (_DWORD *)v105;
        v109 = sub_50132E0(a1: v106, a2: v107, a3: 124, a4: v243, a5: v108);
        v113 = sub_50132E0(a1: v111, a2: v112, a3: v109, a4: v110, a5: v240);
        v249 = v113;
        v115 = v113 - 1;
        v116 = (_DWORD *)(v10 + 58178360);
        v117 = v248;
        v118 = (unsigned int)(v113 << v248);
        if ( (int)v118 < 0 )
        {
          v250 = v113 - 1;
          v136 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v136 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v247 = v113 << v248;
            v136 = sub_1EAA920(a1: v114, a2: v118, a3: v253);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v136 + 40;
            *(_DWORD *)v136 = 34082880;
            *(_DWORD *)(v136 + 4) = 0;
            *(_QWORD *)(v136 + 8) = 0;
            *(_QWORD *)(v136 + 16) = 0;
            *(_QWORD *)(v136 + 24) = 0;
            *(_QWORD *)(v136 + 32) = 0;
            v247 = v118;
          }
          *(_DWORD *)(v136 + 20) = 46923644;
          *(_DWORD *)(v136 + 16) = *(_DWORD *)(v10 + 374343896);
          *(_DWORD *)(v136 + 12) = (unsigned __int64)(v136 - v10) >> 3;
          v242 = (_DWORD *)v136;
          sub_503B9A0(a1: v114, a2: v118, a3: v136, a4: v117, a5: 0);
          v137 = (__int64)v242;
          v242[2] = 46004603;
          if ( (*(_DWORD *)v137 & 2) != 0 )
          {
            v149 = (v137 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v149) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v137 & 0xFFFFFFFFFFF80000LL) + ((v137 - v149) >> 9) + 0x38) = 0;
            v71 = v137;
          }
          else
          {
            v71 = v137;
          }
        }
        else
        {
          v119 = *(_DWORD **)(v11 + 40);
          v120 = ((unsigned int)v118 + 19LL) & 0x1FFFFFFF8LL;
          if ( v120 >= 0x20000 || (unsigned __int64)(v139 = (char *)v119 + v120) > *(_QWORD *)(v11 + 32) )
          {
            v242 = (_DWORD *)(v10 + 58178360);
            v250 = v113 - 1;
            v119 = (_DWORD *)sub_1EAA840(a1: v114, a2: v118, a3: v254, a4: v254, a5: v118);
            v116 = v242;
            v115 = v250;
          }
          else
          {
            v121 = v254;
            *(_QWORD *)(v11 + 40) = v139;
            *(_QWORD *)v119 = v121;
            v119[2] = v118;
          }
          v242 = v119;
          v250 = v115;
          if ( v248 != 0 )
            sub_4FF2C40(a1: 1, a2: v118, a3: v116, a4: v121, a5: v119, a6: v115);
          else
            sub_1EB4960(a1: v115, a2: 1, a3: (_DWORD *)(v10 + 376658736), a4: v121, a5: 0, a6: v242, a7: v238);
          v123 = sub_5011A80(a1: v240, a2: v10 + 58178384, a3: v250, a4: v122, a5: v248, a6: v242);
          v125 = sub_5011A80(a1: v244, a2: v10 + 58178408, a3: v123, a4: v124, a5: v248, a6: v242);
          v128 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v128 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v249 = v125;
            v128 = sub_1EAA920(a1: v126, a2: v127, a3: 34081944);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v128 + 40;
            *(_DWORD *)v128 = 34081944;
            *(_DWORD *)(v128 + 4) = 0;
            *(_QWORD *)(v128 + 8) = 0;
            *(_QWORD *)(v128 + 16) = 0;
            *(_QWORD *)(v128 + 24) = 0;
            *(_QWORD *)(v128 + 32) = 0;
          }
          v244 = (_DWORD *)v128;
          *(_DWORD *)(v128 + 20) = 46923644;
          *(_DWORD *)(v128 + 16) = *(_DWORD *)(v10 + 374343896);
          *(_DWORD *)(v128 + 12) = (unsigned __int64)(v128 - v10) >> 3;
          v249 = (char)v248;
          v129 = sub_503B9A0(a1: v126, a2: v127, a3: v128, a4: v128, a5: 0);
          v130 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v130 + 24) > *(_QWORD *)(v11 + 32) )
          {
            v240 = (_DWORD *)v129;
            v130 = sub_1EAA920(a1: v64, a2: v67, a3: v251);
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v130 + 24;
            *(_DWORD *)v130 = 34082680;
            *(_DWORD *)(v130 + 4) = 0;
            *(_QWORD *)(v130 + 8) = 0;
            *(_QWORD *)(v130 + 16) = 0;
          }
          v71 = (__int64)v244;
          v131 = v242;
          *(_BYTE *)(v130 + 12) = v248;
          *(_DWORD *)(v130 + 4) = ((unsigned __int64)v131 - v10) >> 3;
          *(_DWORD *)(v71 + 8) = (unsigned __int64)(v130 - v10) >> 3;
          if ( (*(_DWORD *)v71 & 2) != 0 )
          {
            v150 = (v71 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v150) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v150) >> 9) + 0x38) = 0;
          }
        }
      }
      while ( 1 )
      {
LABEL_29:
        sub_27697E0(a1: v64, a2: v67, a3: v71, a4: v71, a5: &v285);
LABEL_30:
        v245 = v28;
        sub_1EB84E0(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32, a6: v33, a7: v238);
LABEL_31:
        v245 = v28;
        v72 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v72 + 48) > *(_QWORD *)(v11 + 32) )
        {
          v72 = sub_1EAA920(a1: v30, a2: v31, a3: 34101256);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v72 + 48;
          *(_DWORD *)v72 = 34101256;
          *(_DWORD *)(v72 + 4) = 0;
          *(_QWORD *)(v72 + 8) = 0;
          *(_QWORD *)(v72 + 16) = 0;
          *(_QWORD *)(v72 + 24) = 0;
          *(_QWORD *)(v72 + 32) = 0;
          *(_QWORD *)(v72 + 40) = 0;
        }
        *(_DWORD *)(v72 + 20) = 46923644;
        *(_DWORD *)(v72 + 16) = *(_DWORD *)(v10 + 374343896);
        *(_DWORD *)(v72 + 12) = (unsigned __int64)(v72 - v10) >> 3;
        v244 = (_DWORD *)v72;
        sub_503B9A0(a1: v30, a2: v31, a3: v72, a4: v29, a5: 0);
        v73 = (__int64)v244;
        v244[2] = 46527773;
        if ( (*(_DWORD *)v73 & 2) != 0 )
        {
          v144 = (v73 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v73 & 0xFFFFFFFFFFF80000LL) + ((v73 - v144) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v73 & 0xFFFFFFFFFFF80000LL) + ((v73 - v144) >> 9) + 0x38) = 0;
          v71 = v73;
        }
        else
        {
          v71 = v73;
        }
      }
    }
    v253 = 34082880;
    v252 = 37784040;
    v251 = 34082680;
    v245 = v28;
    v75 = sub_4F68C80();
    if ( v75 == v10 )
      v78 = v10 + 353301280;
    else
      v78 = v75;
    v79 = *(unsigned int *)(v78 + 4);
    v50 = v10 + 58178336;
    if ( (_DWORD)v79 != 0 )
    {
      v80 = *(_DWORD *)(v10 + 8 * v79 + 8);
      if ( v80 != 0 )
      {
        v81 = *(char *)(v78 + 12);
        v82 = *(unsigned int *)(v10 + 374343896);
        v242 = (_DWORD *)v78;
        v83 = v81;
        v84 = (v80 >> v81) + 49;
        if ( (int)v84 < 0 )
        {
          v247 = v81;
          v244 = (_DWORD *)v75;
          v134 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v134 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v246 = v84;
            v241 = v82;
            v134 = sub_1EAA920(a1: v84, a2: v82, a3: v253);
            v82 = v241;
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v134 + 40;
            *(_DWORD *)v134 = 34082880;
            *(_DWORD *)(v134 + 4) = 0;
            *(_QWORD *)(v134 + 8) = 0;
            *(_QWORD *)(v134 + 16) = 0;
            *(_QWORD *)(v134 + 24) = 0;
            *(_QWORD *)(v134 + 32) = 0;
            v246 = v84;
          }
          *(_DWORD *)(v134 + 20) = 46923644;
          *(_DWORD *)(v134 + 16) = v82;
          *(_DWORD *)(v134 + 12) = (unsigned __int64)(v134 - v10) >> 3;
          v240 = (_DWORD *)v134;
          sub_503B9A0(a1: v84, a2: v82, a3: v134, a4: v83, a5: 0);
          v135 = (__int64)v240;
          v240[2] = 46004603;
          if ( (*(_DWORD *)v135 & 2) != 0 )
          {
            v148 = (v135 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v135 & 0xFFFFFFFFFFF80000LL) + ((v135 - v148) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v135 & 0xFFFFFFFFFFF80000LL) + ((v135 - v148) >> 9) + 0x38) = 0;
            v71 = v135;
          }
          else
          {
            v71 = v135;
          }
          goto LABEL_29;
        }
        v85 = (unsigned int)((_DWORD)v84 << v81);
        if ( (int)v85 < 0 )
        {
          v246 = v85;
          v247 = v81;
          v244 = (_DWORD *)v75;
          v141 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v141 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v241 = v82;
            v141 = sub_1EAA920(a1: v85, a2: v82, a3: v253);
            v82 = v241;
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v141 + 40;
            *(_DWORD *)v141 = 34082880;
            *(_DWORD *)(v141 + 4) = 0;
            *(_QWORD *)(v141 + 8) = 0;
            *(_QWORD *)(v141 + 16) = 0;
            *(_QWORD *)(v141 + 24) = 0;
            *(_QWORD *)(v141 + 32) = 0;
          }
          *(_DWORD *)(v141 + 20) = 46923644;
          *(_DWORD *)(v141 + 16) = v82;
          *(_DWORD *)(v141 + 12) = (unsigned __int64)(v141 - v10) >> 3;
          v240 = (_DWORD *)v141;
          sub_503B9A0(a1: v85, a2: v82, a3: v141, a4: v83, a5: 0);
          v142 = (__int64)v240;
          v240[2] = 46004603;
          if ( (*(_DWORD *)v142 & 2) != 0 )
          {
            v151 = (v142 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v151) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v142 & 0xFFFFFFFFFFF80000LL) + ((v142 - v151) >> 9) + 0x38) = 0;
            v71 = v142;
          }
          else
          {
            v71 = v142;
          }
          goto LABEL_29;
        }
        v86 = *(_QWORD *)(v11 + 40);
        v87 = ((unsigned int)v85 + 19LL) & 0x1FFFFFFF8LL;
        if ( v87 >= 0x20000 || (v143 = v86 + v87) > *(_QWORD *)(v11 + 32) )
        {
          v246 = v85;
          v247 = v81;
          v240 = (_DWORD *)(v10 + 58178336);
          v244 = (_DWORD *)v75;
          v86 = sub_1EAA840(a1: v85, a2: v82, a3: v254, a4: v254, a5: v85);
          v81 = v247;
          v50 = (__int64)v240;
        }
        else
        {
          v88 = v254;
          *(_QWORD *)(v11 + 40) = v143;
          *(_QWORD *)v86 = v88;
          *(_DWORD *)(v86 + 8) = v85;
          v246 = v85;
          v244 = (_DWORD *)v75;
        }
        v247 = v81;
        v240 = (_DWORD *)v86;
        sub_4FF2C40(a1: v81, a2: v240, a3: v50, a4: v88, a5: v240, a6: 0);
        sub_4FF2C40(a1: v247, a2: v90, a3: v242, a4: v89, a5: v240, a6: 49);
        v255 = v9;
        v250 = v247;
        v249 = 0;
        v256 = v9;
        v243 = (__int64)v240;
        v248 = 0;
      }
      else
      {
        v244 = (_DWORD *)v75;
        v102 = *(unsigned __int8 *)(v10 + 58178349);
        v250 = 0;
        v249 = -994847527;
        v243 = v10 + 376658640;
        v248 = v102;
      }
      v91 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v91 + 40) > *(_QWORD *)(v11 + 32) )
      {
        v91 = sub_1EAA920(a1: v76, a2: v77, a3: v252);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v91 + 40;
        *(_DWORD *)v91 = 37784040;
        *(_DWORD *)(v91 + 4) = 0;
        *(_QWORD *)(v91 + 8) = 0;
        *(_QWORD *)(v91 + 16) = 0;
        *(_QWORD *)(v91 + 24) = 0;
        *(_QWORD *)(v91 + 32) = 0;
      }
      v244 = (_DWORD *)v91;
      *(_DWORD *)(v91 + 20) = 46923644;
      *(_DWORD *)(v91 + 16) = *(_DWORD *)(v10 + 374343896);
      *(_DWORD *)(v91 + 12) = (unsigned __int64)(v91 - v10) >> 3;
      v92 = sub_503B9A0(a1: v76, a2: v77, a3: v91, a4: v91, a5: 0);
      v94 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v94 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v240 = (_DWORD *)v92;
        v94 = sub_1EAA920(a1: v64, a2: v93, a3: v251);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v94 + 24;
        *(_DWORD *)v94 = 34082680;
        *(_DWORD *)(v94 + 4) = 0;
        *(_QWORD *)(v94 + 8) = 0;
        *(_QWORD *)(v94 + 16) = 0;
      }
      v67 = (__int64)v244;
      v95 = v250;
      v96 = v249;
      v97 = v243;
      *(_BYTE *)(v94 + 13) = v248;
      *(_BYTE *)(v94 + 12) = v95;
      *(_DWORD *)(v94 + 8) = v96;
      *(_DWORD *)(v94 + 4) = (unsigned __int64)(v97 - v10) >> 3;
      *(_DWORD *)(v67 + 8) = (unsigned __int64)(v94 - v10) >> 3;
      if ( (*(_DWORD *)v67 & 2) != 0 )
      {
        v145 = (v67 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v145) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v145) >> 9) + 0x38) = 0;
        v71 = v67;
      }
      else
      {
        v71 = v67;
      }
      goto LABEL_29;
    }
  }
  v152 = sub_2771080(a1: v76, a2: v77, a3: v245);
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
  v237 = 34082880;
  v226 = v8;
  v227 = v159;
  v228 = v160;
  v229 = v158;
  v230 = v157;
  v231 = v155;
  v232 = v156;
  v233 = v50;
  v234 = v153;
  v235 = v154;
  v236 = v152;
  v225[0] = v19;
  v225[1] = v18;
  v225[2] = v17;
  v225[3] = v16;
  v225[4] = v15;
  v225[5] = v14;
  v225[6] = v13;
  v225[7] = v12;
  v225[8] = v161;
  v225[9] = v162;
  v225[10] = v163;
  v225[11] = v164;
  v225[12] = v165;
  v225[13] = v166;
  v225[14] = v167;
  v225[15] = v168;
  if ( (unsigned __int64)&v224 > *(_QWORD *)(v11 + 8) )
    sub_27697E0(a1: v155, a2: v156, a3: v10 + 376658752, a4: v154, a5: v239);
  v169 = sub_1EB84E0(a1: v155, a2: v156, a3: v153, a4: v154, a5: v157, a6: v158, a7: v224);
  v223 = 34082880;
  v212 = v8;
  v213 = v176;
  v214 = v177;
  v215 = v175;
  v216 = v174;
  v217 = v172;
  v218 = v173;
  v219 = v50;
  v220 = v170;
  v221 = v171;
  v222 = v169;
  v196 = v19;
  v197 = v18;
  v198 = v17;
  v199 = v16;
  v200 = v15;
  v201 = v14;
  v202 = v13;
  v203 = v12;
  v204 = v178;
  v205 = v179;
  v206 = v180;
  v207 = v181;
  v208 = v182;
  v209 = v183;
  v210 = v184;
  v211 = v185;
  if ( (unsigned __int64)&v194 > *(_QWORD *)(v11 + 8) )
  {
    if ( *(_DWORD *)(v11 + 300) == 0 )
      goto LABEL_150;
    v186 = v10 + 376658752;
    while ( 1 )
    {
      sub_27697E0(a1: v172, a2: v173, a3: v186, a4: v171, a5: v225);
LABEL_150:
      if ( *(_DWORD *)(v11 + 324) != 0 )
      {
        v186 = v10 + 376658752;
      }
      else
      {
        v187 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v187 + 40) > *(_QWORD *)(v11 + 32) )
        {
          v187 = sub_1EAA920(a1: v172, a2: v173, a3: 37751696);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v187 + 40;
          *(_DWORD *)v187 = 37751696;
          *(_DWORD *)(v187 + 4) = 0;
          *(_QWORD *)(v187 + 8) = 0;
          *(_QWORD *)(v187 + 16) = 0;
          *(_QWORD *)(v187 + 24) = 0;
          *(_QWORD *)(v187 + 32) = 0;
        }
        *(_DWORD *)(v187 + 20) = 46923644;
        *(_DWORD *)(v187 + 16) = *(_DWORD *)(v10 + 374343896);
        *(_DWORD *)(v187 + 12) = (unsigned __int64)(v187 - v10) >> 3;
        v195 = (_DWORD *)v187;
        sub_503B9A0(a1: v172, a2: v173, a3: v187, a4: v171, a5: 0);
        v186 = (unsigned __int64)v195;
        v195[2] = 7272304;
        if ( (*(_DWORD *)v186 & 2) != 0 )
        {
          v171 = (v186 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v186 & 0xFFFFFFFFFFF80000LL) + ((v186 - v171) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v186 & 0xFFFFFFFFFFF80000LL) + ((v186 - v171) >> 9) + 0x38) = 0;
        }
      }
    }
  }
  sub_1EB84E0(a1: v172, a2: v173, a3: v170, a4: v171, a5: v174, a6: v175, a7: v194);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1EBA520(a1: v190, a2: v191, a3: v188, a4: v189, a5: v192, a6: v193, a7);
}
