// sub_184F3E5A0
// rva 0x04f3e5a0  size 2181  section .text  group text
// window base 0x184f3e5a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3E5A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _DWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(__int64, _DWORD *, _DWORD *); // rcx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ebx
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rsi
  _DWORD *v33; // rax
  BOOL v34; // edx
  __int64 v35; // rbx
  _DWORD *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(_DWORD *, __int64, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v41; // rdi
  _DWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rbp
  _DWORD *v61; // rcx
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rbx
  __int16 v71; // r8
  int v72; // eax
  _DWORD *v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  int v76; // r8d
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rbx
  __int16 v81; // r8
  __int64 v82; // rdx
  unsigned int v83; // ebp
  __int64 v84; // rdx
  int v85; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v86; // [rsp+8h] [rbp-40h]
  __int64 v87; // [rsp+10h] [rbp-38h]
  _DWORD *v88; // [rsp+18h] [rbp-30h]
  _DWORD *v89; // [rsp+20h] [rbp-28h]
  _DWORD *v90; // [rsp+28h] [rbp-20h]
  __int64 v91; // [rsp+30h] [rbp-18h]
  _DWORD *v92; // [rsp+38h] [rbp-10h]
  unsigned int v93; // [rsp+40h] [rbp-8h]
  unsigned int v94; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v85 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_82;
  }
  v11 = *(unsigned int *)(v9 + 377133548);
  if ( (_DWORD)v11 == 0 || v10 == *(_QWORD *)(v9 + 376351704) )
    goto LABEL_60;
  v12 = *(_QWORD *)(v10 + 64);
  v13 = *(_QWORD *)(v9 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v11 + 16), 0, v12) == 0 )
      goto LABEL_6;
    goto LABEL_60;
  }
  if ( v13 != v12 || (v72 = *(_DWORD *)(v9 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_60:
    MEMORY[0x18208CC20](a1, a2, a3: v9 + 377133432);
    goto LABEL_6;
  }
  *(_DWORD *)(v9 + 8 * v11 + 28) = v72;
LABEL_6:
  v14 = *(unsigned int *)(v9 + 374416892);
  if ( (_DWORD)v14 == 0 )
  {
LABEL_82:
    v73 = (_DWORD *)MEMORY[0x18276BEE0]();
    goto LABEL_66;
  }
  v15 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                                     + *(_QWORD *)(v9
                                                                                 + 8LL
                                                                                 * (*(_DWORD *)(v9 + 8 * v14) >> 3)
                                                                                 + 320)))(
                    a1,
                    a2,
                    a3: v9 + 8 * v14);
  *(_DWORD *)(v9 + 374416892) = 0;
  v18 = *(unsigned int *)(v9 + 377133548);
  v19 = *(_DWORD *)(v9 + 8 * v18 + 28);
  if ( v19 != 1 )
    goto LABEL_58;
  *(_QWORD *)(v9 + 8 * v18 + 16) = 0;
  __faststorefence();
  while ( 1 )
  {
    if ( v19 == 1 )
    {
      v49 = *(unsigned int *)(v9 + 8 * v18 + 4);
      if ( (_DWORD)v49 != 0 )
      {
        v50 = *(unsigned int *)(v9 + 8 * v49 + 8);
        if ( (_DWORD)v50 != 0 && *(_DWORD *)(v9 + 8 * v50 + 16) != 0 )
        {
          v92 = v15;
          MEMORY[0x18208CCA0](a1: v16, a2: v17, a3: v9 + 377133432, a4: v50, a5: 1);
          v15 = v92;
        }
      }
    }
    if ( v15 == (_DWORD *)v9 )
    {
      v15 = (_DWORD *)MEMORY[0x182771080]();
LABEL_84:
      v92 = v15;
      MEMORY[0x182770780]();
LABEL_85:
      MEMORY[0x182771080]();
LABEL_86:
      MEMORY[0x182770780]();
      goto LABEL_87;
    }
    v20 = *v15 >> 3;
    v7 = *(_DWORD *)(v9 + 8 * v20 + 44) & (0x1716u >> HIBYTE(*(_DWORD *)(v9 + 8 * v20 + 44)));
    if ( (unsigned __int16)*(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v20 + 20) + 4 * v7 + 12) != 5910 )
      goto LABEL_84;
    v21 = *v15 >> 3;
    v22 = (_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v21 + 20));
    v7 = *(_DWORD *)(v9 + 8 * v21 + 44) & (0x1716u >> HIBYTE(*(_DWORD *)(v9 + 8 * v21 + 44)));
    v23 = v9 + 8 * v21;
    v24 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v8 + *(_QWORD *)(v23 + HIWORD(v22[v7 + 3]) + 64));
    v91 = v23;
    v92 = v15;
    v90 = v22;
    v94 = v7;
    v25 = (_DWORD *)v24(a1: v16, a2: v22, a3: v15);
    if ( v25 == (_DWORD *)v9 )
      goto LABEL_85;
    v89 = v25;
    v27 = *v25 >> 3;
    v7 = *(_DWORD *)(v9 + 8 * v27 + 44) & (0x61Bu >> HIBYTE(*(_DWORD *)(v9 + 8 * v27 + 44)));
    if ( (unsigned __int16)*(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v27 + 20) + 4 * v7 + 12) != 1563 )
      goto LABEL_86;
    v28 = *v25 >> 3;
    v29 = *(_DWORD *)(v9 + 8 * v28 + 44);
    v88 = (_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v28 + 20));
    v93 = v29 & (0x61Bu >> SHIBYTE(v29));
    v30 = v88[v93 + 3];
    v87 = v9 + 8 * v28;
    if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, _DWORD *))(v8 + *(_QWORD *)(v87 + HIWORD(v30) + 8)))(
           a1: v26,
           a2: v88,
           a3: v25) == 0 )
      break;
    v51 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8
                                                                        + *(_QWORD *)(v87 + HIWORD(v88[v93 + 3]) + 16)))(
                      a1: v31,
                      a2: v32,
                      a3: v89);
    if ( v51 != (_DWORD *)v9 )
    {
      v55 = *v51 >> 3;
      if ( *(__int16 *)(v9 + 8 * v55 + 62) < 2
        || *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v55 + 16) + 16) != 27277 )
      {
        MEMORY[0x18276FC00](a1: v53, a2: v54, a3: v51, a4: v52, a5: v9 + 34099232);
LABEL_38:
        v51 = (_DWORD *)MEMORY[0x18276FC00](a1: v45, a2: v46, a3: v88, a4: v44, a5: v9 + 34099232);
      }
    }
    if ( v51 != (_DWORD *)v9 )
    {
      v56 = *(_QWORD *)(v9 + 8LL * (*v51 >> 3) + 360);
      v86 = v51;
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v8 + v56))(a1: v53, a2: v54, a3: v51);
      goto LABEL_41;
    }
    LODWORD(v7) = v94;
    v73 = (_DWORD *)MEMORY[0x18276BEE0](a1: v53, a2: v54, a3: v91, a4: v90);
    v79 = *v73 >> 3;
    v80 = *(unsigned int *)(v9 + 8 * v79 + 16);
    v81 = *(_WORD *)(v9 + 8 * v79 + 62);
    if ( v81 < 6 || *(_DWORD *)(v9 + 8 * v80 + 32) != 93090 )
    {
      if ( v81 < 5 || *(_DWORD *)(v9 + 8 * v80 + 28) != 88185 )
      {
        while ( 1 )
        {
LABEL_65:
          v73 = (_DWORD *)MEMORY[0x182769900](a1: v57, a2: v58, a3: v73, a4: v74, a5: &a7);
LABEL_66:
          v75 = *(unsigned int *)(v9 + 377133548);
          v76 = *(_DWORD *)(v9 + 8 * v75 + 28);
          if ( v76 == 1 )
          {
            *(_QWORD *)(v9 + 8 * v75 + 16) = 0;
            __faststorefence();
          }
          else
          {
LABEL_80:
            v74 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v9 + 8 * v75 + 28) = v74;
          }
          if ( v76 == 1 )
          {
            v77 = *(unsigned int *)(v9 + 8 * v75 + 4);
            if ( (_DWORD)v77 != 0 )
            {
              v78 = *(unsigned int *)(v9 + 8 * v77 + 8);
              if ( (_DWORD)v78 != 0 && *(_DWORD *)(v9 + 8 * v78 + 16) != 0 )
              {
                v92 = v73;
                MEMORY[0x18208CCA0](a1: v57, a2: v58, a3: v9 + 377133432, a4: v74, a5: 1);
                v73 = v92;
              }
            }
          }
        }
      }
      v91 = v82;
      v94 = v7;
      v90 = (_DWORD *)v74;
      goto LABEL_41;
    }
LABEL_87:
    v91 = v82;
    v94 = v7;
    v90 = (_DWORD *)v74;
LABEL_41:
    v59 = v87;
    v60 = v93;
    v61 = v88;
    v62 = v89;
    while ( 1 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)(v59 + HIWORD(v61[v60 + 3]) + 8)))(
             a1: v57,
             a2: v58,
             a3: v62) == 0 )
        goto LABEL_15;
      LODWORD(v7) = v93;
      v63 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8
                                                                          + *(_QWORD *)(v87 + HIWORD(v88[v93 + 3]) + 16)))(
                        a1: v31,
                        a2: v32,
                        a3: v89);
      if ( v63 != (_DWORD *)v9 )
      {
        v67 = *v63 >> 3;
        if ( *(__int16 *)(v9 + 8 * v67 + 62) < 2
          || *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v67 + 16) + 16) != 27277 )
        {
          break;
        }
      }
      if ( v63 == (_DWORD *)v9 )
      {
        v83 = v94;
        v73 = (_DWORD *)MEMORY[0x18276BEE0](a1: v65, a2: v66, a3: v91, a4: v90);
        v69 = *v73 >> 3;
        v70 = *(unsigned int *)(v9 + 8 * v69 + 16);
        v71 = *(_WORD *)(v9 + 8 * v69 + 62);
        if ( (v71 < 6 || *(_DWORD *)(v9 + 8 * v70 + 32) != 93090)
          && (v71 < 5 || *(_DWORD *)(v9 + 8 * v70 + 28) != 88185) )
        {
          goto LABEL_65;
        }
        v62 = v89;
        v91 = v84;
        v94 = v83;
        v90 = (_DWORD *)v74;
        v59 = v87;
        v60 = v93;
        v61 = v88;
      }
      else
      {
        v68 = *(_QWORD *)(v9 + 8LL * (*v63 >> 3) + 360);
        v86 = v63;
        ((void (__fastcall *)(__int64, __int64, _DWORD *))(v8 + v68))(a1: v65, a2: v66, a3: v63);
        v59 = v87;
        v60 = v93;
        v61 = v88;
        v62 = v89;
      }
    }
    v86 = v63;
    v15 = (_DWORD *)MEMORY[0x18276FC00](a1: v65, a2: v66, a3: v63, a4: v64, a5: v9 + 34099232);
LABEL_58:
    *(_DWORD *)(v9 + 8 * v18 + 28) = v19 - 1;
  }
LABEL_15:
  v33 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)(v91 + HIWORD(v90[v94 + 3]) + 64)))(
                    a1: v31,
                    a2: v32,
                    a3: v92);
  v90 = v33;
  v34 = v33 != (_DWORD *)v9
     && (unsigned __int16)*(_DWORD *)(v9
                                    + 8LL * *(unsigned int *)(v9 + 8LL * (*v33 >> 3) + 20)
                                    + 4LL
                                    * (*(_DWORD *)(v9 + 8LL * (*v33 >> 3) + 44)
                                     & (0x61Bu >> HIBYTE(*(_DWORD *)(v9 + 8LL * (*v33 >> 3) + 44))))
                                    + 12) == 1563;
  v94 = v34;
  while ( 1 )
  {
    if ( v33 == (_DWORD *)v9 )
    {
      MEMORY[0x182771080]();
LABEL_79:
      v73 = (_DWORD *)MEMORY[0x182770780]();
      goto LABEL_80;
    }
    if ( !v34 )
      goto LABEL_79;
    v35 = *v33 >> 3;
    v36 = (_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v35 + 20));
    v37 = *(_DWORD *)(v9 + 8 * v35 + 44) & (0x61Bu >> HIBYTE(*(_DWORD *)(v9 + 8 * v35 + 44)));
    v38 = v9 + 8 * v35;
    v39 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v8 + *(_QWORD *)(v38 + HIWORD(v36[v37 + 3]) + 8));
    v91 = v38;
    v88 = v36;
    v93 = v37;
    result = v39(a1: v36, a2: v37, a3: v33);
    if ( (_DWORD)result == 0 )
      break;
    v42 = (_DWORD *)((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v8
                                                                       + *(_QWORD *)(v91 + HIWORD(v88[v93 + 3]) + 16)))(
                      a1: v41,
                      a2: v93,
                      a3: v90);
    v88 = v42;
    if ( v42 != (_DWORD *)v9 )
    {
      v47 = *v42 >> 3;
      if ( *(__int16 *)(v9 + 8 * v47 + 62) < 2 )
        goto LABEL_38;
      v43 = *(unsigned int *)(v9 + 8 * v47 + 16);
      if ( *(_DWORD *)(v9 + 8 * v43 + 16) != 27277 )
        goto LABEL_38;
    }
    if ( v42 == (_DWORD *)v9 )
    {
      v73 = (_DWORD *)MEMORY[0x18276BEE0](a1: v45, a2: v46, a3: v43, a4: v42);
      v48 = *v73 >> 3;
      if ( *(__int16 *)(v9 + 8 * v48 + 62) < 4
        || *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v48 + 16) + 24) != 81638 )
      {
        goto LABEL_65;
      }
      if ( v74 == v9 )
      {
        v73 = (_DWORD *)MEMORY[0x18276BEE0]();
        goto LABEL_65;
      }
      MEMORY[0x185030120](a1: v57, a2: v58, a3: v74, a4: v74, a5: 0);
      v34 = v94;
      v33 = v90;
    }
    else
    {
      MEMORY[0x185030120](a1: v45, a2: v46, a3: v42, a4: v44, a5: 0);
      v34 = v94;
      v33 = v90;
    }
  }
  if ( *(int *)(v10 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
