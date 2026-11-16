// sub_1815981E0
// rva 0x015981e0  size 3568  section .text  group text
// window base 0x1815981e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815981E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // r8
  __int64 v36; // r11
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // r8
  void (__fastcall *v42)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 (__fastcall *v57)(unsigned __int64, __int64, __int64); // rcx
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  BOOL v64; // eax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  _DWORD *v70; // rdx
  __int64 (*v71)(void); // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  int v78; // eax
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rdx
  unsigned __int64 v83; // r9
  unsigned __int64 v84; // r9
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  _DWORD *v94; // rdx
  char v95; // r8
  void (__fastcall *v96)(__int64, __int64, __int64, _QWORD, __int64); // rcx
  unsigned __int64 v97; // r8
  _DWORD *v98; // rax
  _DWORD *v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rbx
  char v104; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD *v105; // [rsp+8h] [rbp-A0h]
  __int64 v106; // [rsp+10h] [rbp-98h]
  _DWORD *v107; // [rsp+18h] [rbp-90h]
  __int64 v108; // [rsp+20h] [rbp-88h]
  __int64 v109; // [rsp+28h] [rbp-80h]
  __int64 v110; // [rsp+30h] [rbp-78h]
  __int64 v111; // [rsp+38h] [rbp-70h]
  __int64 v112; // [rsp+40h] [rbp-68h]
  __int64 v113; // [rsp+48h] [rbp-60h]
  __int64 v114; // [rsp+50h] [rbp-58h]
  unsigned int v115; // [rsp+5Ch] [rbp-4Ch]
  __int64 v116; // [rsp+60h] [rbp-48h]
  __int64 v117; // [rsp+68h] [rbp-40h]
  _DWORD *v118; // [rsp+70h] [rbp-38h]
  int v119; // [rsp+78h] [rbp-30h]
  unsigned int v120; // [rsp+7Ch] [rbp-2Ch]
  int v121; // [rsp+80h] [rbp-28h]
  unsigned int v122; // [rsp+84h] [rbp-24h]
  __int64 v123; // [rsp+88h] [rbp-20h]
  int v124; // [rsp+94h] [rbp-14h]
  int v125; // [rsp+98h] [rbp-10h]
  unsigned int v126; // [rsp+9Ch] [rbp-Ch]
  __int64 v127; // [rsp+A0h] [rbp-8h]

  v118 = a3;
  v117 = a5;
  if ( (unsigned __int64)&v104 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_115;
  }
  result = MEMORY[0x185039DE0](a1, a2, a3: v10 + 376612992);
  if ( result != v10 && *(_DWORD *)result >> 3 != 4261917 )
    goto LABEL_116;
  if ( result == v10 )
  {
LABEL_115:
    result = MEMORY[0x182771080]();
LABEL_116:
    MEMORY[0x18276FC00](a1: v14, a2: v15, a3: result, a4: v13, a5: v10 + 34095336);
    goto LABEL_117;
  }
  if ( *(_BYTE *)(result + 4) != 0
    || v117 != v10 && (_DWORD)(result = sub_181596900(a1: v14, a2: v15, a3: v10 + 376613104, a4: v13, a5: v117)) == 0 )
  {
    if ( *(int *)(v11 + 16) > 0 )
      return result;
    return MEMORY[0x18277F280]();
  }
  v16 = *(unsigned int *)(v10 + 376613032);
  if ( (_DWORD)v16 == 47076562 )
    v17 = (_DWORD *)(v10 + 376613120);
  else
    v17 = (_DWORD *)(v10 + 8 * v16);
  if ( v17 != (_DWORD *)v10 && *v17 >> 3 != 4474731 )
  {
    MEMORY[0x18276FC00](a1: v14, a2: v15, a3: v17, a4: v13, a5: v10 + 35797848);
    goto LABEL_126;
  }
  if ( v17 == (_DWORD *)v10 )
    goto LABEL_120;
  v18 = v17[2];
  if ( v18 >= 4 )
    goto LABEL_121;
  switch ( v18 )
  {
    case 0u:
      if ( v118 == (_DWORD *)v10 )
      {
LABEL_126:
        MEMORY[0x182771080]();
LABEL_127:
        MEMORY[0x182771080]();
        goto LABEL_128;
      }
      v115 = *v118 >> 3;
      v116 = ((__int64 (*)(void))(v9 + *(_QWORD *)(v10 + 8LL * v115 + 144)))();
      v21 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v9 + *(_QWORD *)(v10 + 8LL * v115 + 192)))(
              a1: v19,
              a2: v20,
              a3: v118);
      v25 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v25 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v114 = v21;
        v25 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: 34085680);
        v21 = v114;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v25 + 24;
        *(_DWORD *)v25 = 34085680;
        *(_DWORD *)(v25 + 4) = 0;
        *(_QWORD *)(v25 + 8) = 0;
        *(_QWORD *)(v25 + 16) = 0;
      }
      v113 = v25;
      v114 = v21;
      MEMORY[0x184F35AC0](a1: v23, a2: v24, a3: v25, a4: v22, a5: v21);
      MEMORY[0x184F36F80](a1: v27, a2: v28, a3: v113, a4: v26, a5: v10 + 57135224);
      v32 = v116;
      v33 = *(unsigned int *)(v116 + 8);
      v126 = *(_DWORD *)(v116 + 8);
      v34 = 0;
      v8 = v10;
      LODWORD(v7) = 0;
      while ( 1 )
      {
        if ( (int)v33 <= (int)v34 )
        {
          v111 = v8;
          v124 = v7;
          v125 = v34;
          goto LABEL_60;
        }
        if ( (unsigned int)v33 <= (unsigned int)v34 )
          goto LABEL_130;
        v35 = *(unsigned int *)(v32 + 4 * v34 + 12);
        v36 = v10 + 8 * v35;
        if ( (_DWORD)v7 != 0 )
        {
          v110 = v8;
          v114 = v10 + 8 * v35;
          v125 = v34;
          goto LABEL_26;
        }
        if ( (_DWORD)v35 == 0 )
          goto LABEL_134;
        v39 = *(unsigned int *)(v10 + 8 * v35 + 8);
        v40 = v10 + 8 * v39;
        if ( (_DWORD)v39 == 0 )
        {
          v111 = v10 + 8 * v39;
          v114 = v36;
          v125 = v34;
          v112 = v8;
LABEL_45:
          sub_1815979C0(a1: v29, a2: v30, a3: v113, a4: v33, a5: v112, a6: v31, a7: v104);
          LODWORD(v7) = 1;
          v127 = v9;
          v110 = v112;
          goto LABEL_26;
        }
        if ( (_DWORD)v39 == 45046983 )
        {
          v110 = v36;
          v114 = v36;
          v125 = v34;
        }
        else
        {
          if ( *(_BYTE *)(v10 + 8 * v39 + 12) != 0 )
          {
            v111 = v10 + 8 * v39;
            v114 = v36;
            v125 = v34;
            v112 = v8;
            v124 = 0;
          }
          else
          {
            v41 = *(unsigned int *)(v10 + 8 * v39 + 4);
            if ( (_DWORD)v41 == 0 )
              goto LABEL_140;
            if ( *(_DWORD *)(v10 + 8 * v41 + 8) == 9 )
            {
              v111 = v40;
              v114 = v36;
              v125 = v34;
              v112 = v8;
              v124 = 0;
              if ( (unsigned int)MEMORY[0x18282F960](
                                   a1: 12,
                                   a2: 9,
                                   a3: v10 + 376613080,
                                   a4: v33,
                                   a5: 12,
                                   a6: v10 + 8 * v41) != 0 )
              {
                LODWORD(v7) = v124;
                v127 = v9;
                v110 = v114;
                goto LABEL_26;
              }
            }
            else
            {
              v111 = v40;
              v114 = v36;
              v125 = v34;
              v112 = v8;
              v124 = 0;
            }
          }
          if ( (unsigned int)MEMORY[0x184FFC820](a1: v29, a2: v30, a3: v111, a4: v33, a5: v10 + 352990112, a6: 0) == 0 )
            goto LABEL_45;
          LODWORD(v7) = v124;
          v127 = v9;
          v110 = v114;
        }
LABEL_26:
        if ( (int)v7 >= 1 )
        {
          v124 = v7;
          sub_1815979C0(a1: v29, a2: v30, a3: v113, a4: v33, a5: v114, a6: v31, a7: v104);
          LODWORD(v7) = v124 + 1;
        }
        v37 = *(unsigned int *)(v10 + 376613064);
        if ( (_DWORD)v37 == 47076562 )
          v38 = (_DWORD *)(v10 + 57669296);
        else
          v38 = (_DWORD *)(v10 + 8 * v37);
        if ( v38 != (_DWORD *)v10 && *v38 >> 3 != 4260808 )
          goto LABEL_132;
        if ( v38 == (_DWORD *)v10 )
          goto LABEL_131;
        if ( (int)v7 >= v38[1] )
          break;
        v34 = (unsigned int)(v125 + 1);
        v8 = v110;
        v33 = v126;
        v32 = v116;
      }
      v127 = v9;
      v111 = v110;
      v124 = v7;
LABEL_60:
      v45 = 34082680;
      if ( *(_DWORD *)(v10 + 376613148) != 0 )
      {
        v123 = 34082680;
        goto LABEL_62;
      }
      v62 = *(_QWORD *)(v11 + 40);
      v30 = v10 + 376613144;
      if ( (unsigned __int64)(v62 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v109 = v10 + 376613144;
        v123 = 34082680;
        v62 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 35797992);
        v30 = v109;
        v45 = v123;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v62 + 24;
        *(_DWORD *)v62 = 35797992;
        *(_DWORD *)(v62 + 4) = 0;
        *(_QWORD *)(v62 + 8) = 0;
        *(_QWORD *)(v62 + 16) = 0;
      }
      *(_DWORD *)(v62 + 8) = 4456446;
      v63 = *(_QWORD *)(v11 + 40);
      v29 = v63 + 64;
      if ( (unsigned __int64)(v63 + 64) > *(_QWORD *)(v11 + 32) )
      {
        v108 = v62;
        v109 = v30;
        v123 = v45;
        v63 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 34107288);
        v62 = v108;
        v30 = v109;
        v45 = v123;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v29;
        *(_DWORD *)v63 = 34107288;
        *(_DWORD *)(v63 + 4) = 0;
        *(_QWORD *)(v63 + 8) = 0;
        *(_QWORD *)(v63 + 16) = 0;
        *(_QWORD *)(v63 + 24) = 0;
        *(_QWORD *)(v63 + 32) = 0;
        *(_QWORD *)(v63 + 40) = 0;
        *(_QWORD *)(v63 + 48) = 0;
        *(_QWORD *)(v63 + 56) = 0;
      }
      *(_DWORD *)(v62 + 4) = (unsigned __int64)(v63 - v10) >> 3;
      if ( (*(_DWORD *)v62 & 2) != 0 )
      {
        v29 = v62 & 0xFFFFFFFFFFF80000LL;
        v97 = (v62 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v62 & 0xFFFFFFFFFFF80000LL) + ((v62 - v97) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v62 & 0xFFFFFFFFFFF80000LL) + ((v62 - v97) >> 9) + 0x38) = 0;
      }
      v64 = __sync_val_compare_and_swap(
              (volatile signed __int32 *)(v10 + 376613148),
              0,
              (unsigned __int64)(v62 - v10) >> 3) == 0;
      v33 = *(unsigned int *)v30;
      if ( (v33 & 2) != 0 )
      {
        v33 = v30 & 0xFFFFFFFFFFF80000LL;
        v29 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
        v30 = (v30 - v29) >> 9;
        if ( *(_BYTE *)(v33 + v30 + 56) != 0 )
          *(_BYTE *)(v33 + v30 + 56) = 0;
      }
      if ( !v64 )
      {
        v123 = v45;
        goto LABEL_62;
      }
      v123 = v45;
      v65 = v115;
      v115 = *(_DWORD *)(v10 + 374343872);
      v109 = v10 + 8 * v65;
      v108 = v10 + 8LL * v115;
      v109 = MEMORY[0x184F6D020](a1: v29, a2: v108, a3: v109);
      v69 = *(unsigned int *)(v10 + 376613064);
      if ( (_DWORD)v69 == 47076562 )
      {
        v70 = (_DWORD *)(v10 + 57669296);
LABEL_82:
        v71 = (__int64 (*)(void))(v9 + *(_QWORD *)(v10 + 8LL * (*v70 >> 3) + 104));
        v107 = v70;
        v72 = v71();
      }
      else
      {
        if ( (_DWORD)v69 != 0 )
        {
          v70 = (_DWORD *)(v10 + 8 * v69);
          goto LABEL_82;
        }
        v72 = v10 + 353301280;
      }
      if ( v72 == v10 )
        v73 = v10 + 353301280;
      else
        v73 = v72;
      v107 = (_DWORD *)v72;
      v122 = *(char *)(v73 + 12) | *(char *)(v109 + 12);
      v106 = v73;
      v74 = MEMORY[0x1850132E0](a1: v67, a2: v68, a3: 235, a4: v66, a5: v109);
      v78 = MEMORY[0x1850132E0](a1: v76, a2: v77, a3: v74, a4: v75, a5: v106);
      v121 = v78;
      LODWORD(v7) = v78 - 18;
      v8 = v10 + 57669312;
      v80 = v122;
      v81 = (unsigned int)(v78 << v122);
      if ( (int)v81 < 0 )
      {
LABEL_135:
        v120 = v7;
        v101 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v101 + 40) > *(_QWORD *)(v11 + 32) )
        {
          v119 = v81;
          v101 = MEMORY[0x181EAA920](a1: v79, a2: v81, a3: 34082880);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v101 + 40;
          *(_DWORD *)v101 = 34082880;
          *(_DWORD *)(v101 + 4) = 0;
          *(_QWORD *)(v101 + 8) = 0;
          *(_QWORD *)(v101 + 16) = 0;
          *(_QWORD *)(v101 + 24) = 0;
          *(_QWORD *)(v101 + 32) = 0;
          v119 = v81;
        }
        *(_DWORD *)(v101 + 20) = 46923644;
        *(_DWORD *)(v101 + 16) = *(_DWORD *)(v10 + 374343896);
        *(_DWORD *)(v101 + 12) = (unsigned __int64)(v101 - v10) >> 3;
        v105 = (_DWORD *)v101;
        MEMORY[0x18503B9A0](a1: v79, a2: v81, a3: v101, a4: v80, a5: 0);
        v102 = (unsigned __int64)v105;
        v105[2] = 46004603;
        if ( (*(_DWORD *)v102 & 2) != 0 )
        {
          v13 = v102 & 0xFFFFFFFFFFF80000LL;
          v103 = (v102 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v102 & 0xFFFFFFFFFFF80000LL) + ((v102 - v103) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v102 & 0xFFFFFFFFFFF80000LL) + ((v102 - v103) >> 9) + 0x38) = 0;
          v98 = (_DWORD *)v102;
        }
        else
        {
          v98 = (_DWORD *)v102;
        }
        goto LABEL_119;
      }
      v82 = *(_QWORD *)(v11 + 40);
      v83 = ((unsigned int)v81 + 19LL) & 0x1FFFFFFF8LL;
      if ( v83 >= 0x20000 || (v84 = v82 + v83) > *(_QWORD *)(v11 + 32) )
      {
        v105 = (_DWORD *)(v10 + 57669312);
        v120 = v78 - 18;
        v82 = MEMORY[0x181EAA840](a1: 34082368, a2: v81, a3: 34082368, a4: v122, a5: (unsigned int)v81);
        v8 = (__int64)v105;
        LODWORD(v7) = v120;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v84;
        *(_QWORD *)v82 = 34082368;
        *(_DWORD *)(v82 + 8) = v81;
      }
      v105 = (_DWORD *)v82;
      v120 = v7;
      if ( v122 != 0 )
        MEMORY[0x184FF2C40](a1: 1, a2: v81, a3: v8, a4: v80, a5: v82, a6: (unsigned int)v7);
      else
        MEMORY[0x181EB4960](a1: (unsigned int)v7, a2: 18, a3: v10 + 376613160, a4: v80, a5: 0, a6: v105);
      v86 = MEMORY[0x185011A80](a1: v106, a2: v10 + 57669336, a3: v120, a4: v85, a5: v122, a6: v105);
      v88 = MEMORY[0x185011A80](a1: v109, a2: v10 + 57669360, a3: v86, a4: v87, a5: v122, a6: v105);
      v91 = v115;
      if ( v115 == 0 )
      {
        MEMORY[0x182771080]();
LABEL_140:
        v125 = v34;
        MEMORY[0x182771080]();
        goto LABEL_141;
      }
      v92 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v92 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v121 = v88;
        v93 = MEMORY[0x181EAA920](a1: v89, a2: v90, a3: v123);
        v94 = v105;
        v95 = v122;
        v91 = v115;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v92 + 24;
        *(_DWORD *)v92 = 34082680;
        *(_DWORD *)(v92 + 4) = 0;
        *(_QWORD *)(v92 + 8) = 0;
        *(_QWORD *)(v92 + 16) = 0;
        v93 = v92;
        v94 = v105;
        v95 = v122;
      }
      *(_BYTE *)(v93 + 12) = v95;
      *(_DWORD *)(v93 + 4) = ((unsigned __int64)v94 - v10) >> 3;
      v96 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))(v9
                                                                            + *(_QWORD *)(v10
                                                                                        + 8LL
                                                                                        * (*(_DWORD *)(v10 + 8 * v91) >> 3)
                                                                                        + 448));
      v96(a1: v89, a2: v90, a3: v108, a4: v96, a5: v93);
LABEL_62:
      v46 = v113;
      if ( *(_DWORD *)(v113 + 8) != 0 )
      {
        v47 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v47 + 24) > *(_QWORD *)(v11 + 32) )
        {
          v47 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: v123);
          v48 = v113;
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v47 + 24;
          *(_DWORD *)v47 = 34082680;
          *(_DWORD *)(v47 + 4) = 0;
          *(_QWORD *)(v47 + 8) = 0;
          *(_QWORD *)(v47 + 16) = 0;
          v48 = v46;
        }
        v108 = v47;
        MEMORY[0x184FE9280](a1: v29, a2: v30, a3: v47, a4: v33, a5: v48, a6: v10);
        v49 = v108;
      }
      else
      {
        v49 = v10 + 373281248;
      }
      v50 = *(unsigned int *)(v10 + 376613148);
      v51 = v10 + 8 * v50;
      if ( (_DWORD)v50 != 0 )
      {
        v52 = *(_DWORD *)(v10 + 8 * v50) >> 3;
        v8 = *(unsigned int *)(v10 + 8 * v52 + 44);
        v7 = v10 + 8LL * *(unsigned int *)(v10 + 8 * v52 + 20);
        v53 = (unsigned int)v8 & (0x1EFBu >> HIBYTE(*(_DWORD *)(v10 + 8 * v52 + 44)));
        v54 = (unsigned __int16)*(_DWORD *)(v7 + 4 * v53 + 12);
        if ( (_DWORD)v54 != 7931 )
          goto LABEL_129;
      }
      if ( (_DWORD)v50 == 0 )
      {
LABEL_128:
        v108 = v49;
        v51 = MEMORY[0x182771080]();
LABEL_129:
        v108 = v49;
        MEMORY[0x18276FC00](a1: v29, a2: v53, a3: v51, a4: v54, a5: v10 + 34421528);
LABEL_130:
        v125 = v34;
        v112 = v8;
        MEMORY[0x182771220](a1: v29, a2: v30, a3: (unsigned int)v34, a4: v33, a5: v126);
LABEL_131:
        v38 = (_DWORD *)MEMORY[0x182771080]();
LABEL_132:
        MEMORY[0x18276FC00](a1: v29, a2: v30, a3: v38, a4: v110, a5: v10 + 34086464);
LABEL_133:
        MEMORY[0x182771080](a1: v59, a2: v60, a3: v61, a4: v58, a5: v108);
LABEL_134:
        v114 = v36;
        v125 = v34;
        v112 = v8;
        MEMORY[0x182771080]();
        goto LABEL_135;
      }
      v55 = *(_DWORD *)(v10 + 8 * v50) >> 3;
      v8 = v10 + 8LL * *(unsigned int *)(v10 + 8 * v55 + 20);
      v56 = *(_DWORD *)(v10 + 8 * v55 + 44) & (0x1EFBu >> HIBYTE(*(_DWORD *)(v10 + 8 * v55 + 44)));
      v57 = (__int64 (__fastcall *)(unsigned __int64, __int64, __int64))(v9
                                                                       + *(_QWORD *)(v10
                                                                                   + 8 * v55
                                                                                   + HIWORD(*(_DWORD *)(v8 + 4 * v56 + 12))));
      LODWORD(v7) = v49;
      v108 = v49;
      result = v57(a1: v29, a2: v56, a3: v51);
      if ( (_DWORD)result != 0 )
      {
        v61 = *(unsigned int *)(v10 + 374343872);
        if ( (_DWORD)v61 == 0 )
          goto LABEL_133;
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v9
                                                                                      + *(_QWORD *)(v10
                                                                                                  + 8LL * (*(_DWORD *)(v10 + 8 * v61) >> 3)
                                                                                                  + 352)))(
                   a1: v59,
                   a2: v60,
                   a3: v10 + 8 * v61,
                   a4: v58,
                   a5: v108);
      }
LABEL_53:
      if ( *(int *)(v11 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    case 1u:
LABEL_117:
      if ( v118 == (_DWORD *)v10 )
      {
        MEMORY[0x182771080](a1: v14, a2: v15, a3: v118, a4: v13, a5: v117);
        JUMPOUT(0x181598FD0LL);
      }
      v98 = v118;
      goto LABEL_119;
    case 3u:
      if ( v118 != (_DWORD *)v10 )
      {
        v42 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v9
                                                                               + *(_QWORD *)(v10
                                                                                           + 8LL * (*v118 >> 3)
                                                                                           + 168));
        v42(a1: v14, a2: v15, a3: v118, a4: v42, a5: v10 + 8LL * *(unsigned int *)(v10 + 374343872));
        result = MEMORY[0x184FCB9C0](a1: v43, a2: v44, a3: 172);
        goto LABEL_53;
      }
      goto LABEL_127;
    default:
      while ( 1 )
      {
        v99 = v118;
        v100 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v100 + 40) > *(_QWORD *)(v11 + 32) )
        {
LABEL_141:
          v116 = (__int64)v17;
          v100 = MEMORY[0x181EAA920](a1: v14, a2: v15, a3: 35798456, a4: v99);
          v99 = v118;
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v100 + 40;
          *(_DWORD *)v100 = 35798456;
          *(_DWORD *)(v100 + 4) = 0;
          *(_QWORD *)(v100 + 8) = 0;
          *(_QWORD *)(v100 + 16) = 0;
          *(_QWORD *)(v100 + 24) = 0;
          *(_QWORD *)(v100 + 32) = 0;
        }
        v116 = v100;
        MEMORY[0x18503ACA0](a1: v14, a2: v15, a3: v100, a4: v99, a5: v99);
        v98 = (_DWORD *)v116;
LABEL_119:
        MEMORY[0x182769900](a1: v14, a2: v15, a3: v98, a4: v13, a5: &a7);
LABEL_120:
        v18 = MEMORY[0x182771080](a1: v14, a2: v15, a3: v118);
LABEL_121:
        MEMORY[0x182771220](a1: v14, a2: v15, a3: v18, a4: v118, a5: 4);
      }
  }
}
