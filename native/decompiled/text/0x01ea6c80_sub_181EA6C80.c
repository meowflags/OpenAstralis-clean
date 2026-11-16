// sub_181EA6C80
// rva 0x01ea6c80  size 2153  section .text  group text
// window base 0x181ea6c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA6C80(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  double v71; // xmm0_8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // r8
  __int64 v109; // r9
  char v110; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v111; // [rsp+8h] [rbp-10h]
  __int64 v112; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v110 <= *(_QWORD *)(v7 + 8) )
  {
    v112 = a6;
    v71 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v110);
LABEL_80:
    v72 = v6[94163536];
    if ( (_DWORD)v72 == 0 )
    {
      MEMORY[0x18276EFE0](a1: v71);
      return MEMORY[0x18277F280]();
    }
    if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v72], a4: v70, a5: v111, a6: v112) != 0 )
    {
      if ( *(int *)(v7 + 16) > 0 )
        return 1;
LABEL_134:
      MEMORY[0x18277F280]();
      return 1;
    }
    v76 = v6[94163519];
    if ( (_DWORD)v76 == 0 )
    {
      MEMORY[0x18276EFE0]();
      goto LABEL_150;
    }
    if ( (unsigned int)sub_181EA0540(a1: v74, a2: v75, a3: &v6[2 * v76], a4: v73, a5: v111, a6: v112) != 0 )
    {
      v16 = 10;
      goto LABEL_9;
    }
LABEL_90:
    v78 = v6[94163537];
    if ( (_DWORD)v78 != 0 )
    {
      if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v78], a4: v77, a5: v111, a6: v112) != 0 )
      {
        if ( *(int *)(v7 + 16) > 0 )
          return 1;
LABEL_137:
        MEMORY[0x18277F280]();
        return 1;
      }
      v82 = v6[94163520];
      if ( (_DWORD)v82 != 0 )
      {
        if ( (unsigned int)sub_181EA0540(a1: v80, a2: v81, a3: &v6[2 * v82], a4: v79, a5: v111, a6: v112) != 0 )
        {
          v16 = 11;
          goto LABEL_9;
        }
LABEL_100:
        v84 = v6[94163538];
        if ( (_DWORD)v84 != 0 )
        {
          if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v84], a4: v83, a5: v111, a6: v112) != 0 )
          {
            if ( *(int *)(v7 + 16) > 0 )
              return 1;
LABEL_140:
            MEMORY[0x18277F280]();
            return 1;
          }
          v88 = v6[94163521];
          if ( (_DWORD)v88 != 0 )
          {
            if ( (unsigned int)sub_181EA0540(a1: v86, a2: v87, a3: &v6[2 * v88], a4: v85, a5: v111, a6: v112) != 0 )
            {
              v16 = 12;
              goto LABEL_9;
            }
LABEL_110:
            v90 = v6[94163539];
            if ( (_DWORD)v90 != 0 )
            {
              if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v90], a4: v89, a5: v111, a6: v112) != 0 )
              {
                if ( *(int *)(v7 + 16) > 0 )
                  return 1;
LABEL_143:
                MEMORY[0x18277F280]();
                return 1;
              }
              v94 = v6[94163522];
              if ( (_DWORD)v94 != 0 )
              {
                if ( (unsigned int)sub_181EA0540(a1: v92, a2: v93, a3: &v6[2 * v94], a4: v91, a5: v111, a6: v112) != 0 )
                {
                  v16 = 13;
                  goto LABEL_9;
                }
LABEL_120:
                v96 = v6[94163540];
                if ( (_DWORD)v96 != 0 )
                {
                  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v96], a4: v95, a5: v111, a6: v112) != 0 )
                  {
                    if ( *(int *)(v7 + 16) > 0 )
                      return 1;
LABEL_146:
                    MEMORY[0x18277F280]();
                    return 1;
                  }
                  v100 = v6[94163523];
                  if ( (_DWORD)v100 != 0 )
                  {
                    if ( (unsigned int)sub_181EA0540(a1: v98, a2: v99, a3: &v6[2 * v100], a4: v97, a5: v111, a6: v112) != 0 )
                    {
                      v16 = 14;
                      goto LABEL_9;
                    }
LABEL_130:
                    v103 = v6[94163541];
                    if ( (_DWORD)v103 != 0 )
                    {
                      result = sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v103], a4: v101, a5: v111, a6: v112);
                      if ( *(int *)(v7 + 16) > 0 )
                        return result;
                      return MEMORY[0x18277F280]();
                    }
LABEL_158:
                    MEMORY[0x18276EFE0](a1: v14, a2: v15, a3: v103, a4: v101, a5: v102, a6: v112);
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
                    return sub_181EA7500(a1: v106, a2: v107, a3: v104, a4: v105, a5: v108, a6: v109);
                  }
LABEL_157:
                  MEMORY[0x18276EFE0]();
                  goto LABEL_158;
                }
LABEL_156:
                MEMORY[0x18276EFE0]();
                goto LABEL_157;
              }
LABEL_155:
              MEMORY[0x18276EFE0]();
              goto LABEL_156;
            }
LABEL_154:
            MEMORY[0x18276EFE0]();
            goto LABEL_155;
          }
LABEL_153:
          MEMORY[0x18276EFE0]();
          goto LABEL_154;
        }
LABEL_152:
        MEMORY[0x18276EFE0]();
        goto LABEL_153;
      }
LABEL_151:
      MEMORY[0x18276EFE0]();
      goto LABEL_152;
    }
LABEL_150:
    MEMORY[0x18276EFE0]();
    goto LABEL_151;
  }
  v112 = a6;
  v111 = v6 + 94153030;
  if ( (unsigned int)sub_181EA0540(a1, a2, a3: v6 + 94163490, a4: a6, a5: v6 + 94153030, a6) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  v12 = v6[94163509];
  if ( (_DWORD)v12 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_85;
  }
  if ( (unsigned int)sub_181EA0540(a1: v9, a2: v10, a3: &v6[2 * v12], a4: v8, a5: v111, a6: v112) != 0 )
  {
    v16 = 0;
LABEL_9:
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v14, a2: v15, a3: v16);
    return 1;
  }
  v17 = v6[94163527];
  if ( (_DWORD)v17 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_90;
  }
  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v17], a4: v13, a5: v111, a6: v112) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  v21 = v6[94163510];
  if ( (_DWORD)v21 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_95;
  }
  if ( (unsigned int)sub_181EA0540(a1: v19, a2: v20, a3: &v6[2 * v21], a4: v18, a5: v111, a6: v112) != 0 )
  {
    v16 = 1;
    goto LABEL_9;
  }
  v23 = v6[94163528];
  if ( (_DWORD)v23 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_100;
  }
  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v23], a4: v22, a5: v111, a6: v112) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  v27 = v6[94163511];
  if ( (_DWORD)v27 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_105;
  }
  if ( (unsigned int)sub_181EA0540(a1: v25, a2: v26, a3: &v6[2 * v27], a4: v24, a5: v111, a6: v112) != 0 )
  {
    v16 = 2;
    goto LABEL_9;
  }
  v29 = v6[94163529];
  if ( (_DWORD)v29 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_110;
  }
  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v29], a4: v28, a5: v111, a6: v112) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  v33 = v6[94163512];
  if ( (_DWORD)v33 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_115;
  }
  if ( (unsigned int)sub_181EA0540(a1: v31, a2: v32, a3: &v6[2 * v33], a4: v30, a5: v111, a6: v112) != 0 )
  {
    v16 = 3;
    goto LABEL_9;
  }
  v35 = v6[94163530];
  if ( (_DWORD)v35 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_120;
  }
  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v35], a4: v34, a5: v111, a6: v112) == 0 )
  {
    v39 = v6[94163513];
    if ( (_DWORD)v39 == 0 )
    {
      MEMORY[0x18276EFE0]();
      goto LABEL_125;
    }
    if ( (unsigned int)sub_181EA0540(a1: v37, a2: v38, a3: &v6[2 * v39], a4: v36, a5: v111, a6: v112) != 0 )
    {
      v16 = 4;
      goto LABEL_9;
    }
    v41 = v6[94163531];
    if ( (_DWORD)v41 == 0 )
    {
      MEMORY[0x18276EFE0]();
      goto LABEL_130;
    }
    if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v41], a4: v40, a5: v111, a6: v112) != 0 )
    {
      if ( *(int *)(v7 + 16) > 0 )
        return 1;
LABEL_85:
      MEMORY[0x18277F280]();
      return 1;
    }
    v45 = v6[94163514];
    if ( (_DWORD)v45 == 0 )
    {
      MEMORY[0x18276EFE0]();
      goto LABEL_134;
    }
    if ( (unsigned int)sub_181EA0540(a1: v43, a2: v44, a3: &v6[2 * v45], a4: v42, a5: v111, a6: v112) != 0 )
    {
      v16 = 5;
      goto LABEL_9;
    }
    v47 = v6[94163532];
    if ( (_DWORD)v47 != 0 )
    {
      if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v47], a4: v46, a5: v111, a6: v112) != 0 )
      {
        if ( *(int *)(v7 + 16) > 0 )
          return 1;
LABEL_95:
        MEMORY[0x18277F280]();
        return 1;
      }
      v51 = v6[94163515];
      if ( (_DWORD)v51 != 0 )
      {
        if ( (unsigned int)sub_181EA0540(a1: v49, a2: v50, a3: &v6[2 * v51], a4: v48, a5: v111, a6: v112) != 0 )
        {
          v16 = 6;
          goto LABEL_9;
        }
        v53 = v6[94163533];
        if ( (_DWORD)v53 != 0 )
        {
          if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v53], a4: v52, a5: v111, a6: v112) != 0 )
          {
            if ( *(int *)(v7 + 16) > 0 )
              return 1;
LABEL_105:
            MEMORY[0x18277F280]();
            return 1;
          }
          v57 = v6[94163516];
          if ( (_DWORD)v57 != 0 )
          {
            if ( (unsigned int)sub_181EA0540(a1: v55, a2: v56, a3: &v6[2 * v57], a4: v54, a5: v111, a6: v112) != 0 )
            {
              v16 = 7;
              goto LABEL_9;
            }
            v59 = v6[94163534];
            if ( (_DWORD)v59 != 0 )
            {
              if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v59], a4: v58, a5: v111, a6: v112) != 0 )
              {
                if ( *(int *)(v7 + 16) > 0 )
                  return 1;
LABEL_115:
                MEMORY[0x18277F280]();
                return 1;
              }
              v63 = v6[94163517];
              if ( (_DWORD)v63 != 0 )
              {
                if ( (unsigned int)sub_181EA0540(a1: v61, a2: v62, a3: &v6[2 * v63], a4: v60, a5: v111, a6: v112) != 0 )
                {
                  v16 = 8;
                  goto LABEL_9;
                }
                v65 = v6[94163535];
                if ( (_DWORD)v65 != 0 )
                {
                  if ( (unsigned int)sub_181EA0540(a1: v14, a2: v15, a3: &v6[2 * v65], a4: v64, a5: v111, a6: v112) != 0 )
                  {
                    if ( *(int *)(v7 + 16) > 0 )
                      return 1;
LABEL_125:
                    MEMORY[0x18277F280]();
                    return 1;
                  }
                  v69 = v6[94163518];
                  if ( (_DWORD)v69 != 0 )
                  {
                    if ( (unsigned int)sub_181EA0540(a1: v67, a2: v68, a3: &v6[2 * v69], a4: v66, a5: v111, a6: v112) != 0 )
                    {
                      v16 = 9;
                      goto LABEL_9;
                    }
                    goto LABEL_80;
                  }
                }
                else
                {
                  MEMORY[0x18276EFE0]();
                }
                MEMORY[0x18276EFE0]();
                goto LABEL_146;
              }
            }
            else
            {
              MEMORY[0x18276EFE0]();
            }
            MEMORY[0x18276EFE0]();
            goto LABEL_143;
          }
        }
        else
        {
          MEMORY[0x18276EFE0]();
        }
        MEMORY[0x18276EFE0]();
        goto LABEL_140;
      }
    }
    else
    {
      MEMORY[0x18276EFE0]();
    }
    MEMORY[0x18276EFE0]();
    goto LABEL_137;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 1;
}
