// sub_1ED0AE0
// rva 0x01ed0ae0  size 4005  section .text  group text
// window base 0x181ed0ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED0AE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  signed __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  _DWORD *v41; // rdx
  __int64 v42; // rax
  int v43; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  _DWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  _DWORD *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  _DWORD *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ebx
  __int64 v68; // rcx
  int v69; // ebx
  _DWORD *v70; // rbp
  __int64 v71; // rcx
  int v72; // ebx
  __int64 v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  _DWORD *v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // rdx
  int v85; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v86; // [rsp+8h] [rbp-50h]
  _DWORD *v87; // [rsp+10h] [rbp-48h]
  __int64 v88; // [rsp+18h] [rbp-40h]
  __int64 v89; // [rsp+20h] [rbp-38h]
  __int64 v90; // [rsp+28h] [rbp-30h]
  __int64 v91; // [rsp+30h] [rbp-28h]
  __int64 v92; // [rsp+38h] [rbp-20h]
  __int64 v93; // [rsp+40h] [rbp-18h]
  __int64 v94; // [rsp+48h] [rbp-10h]
  _DWORD *v95; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v85 <= *(_QWORD *)(v10 + 8) )
  {
    v94 = a5;
    v61 = (_DWORD *)sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v85);
    *(_DWORD *)(v9 + 8 * v66 + 28) = v7 - 1;
    if ( v7 == 1 )
    {
      v66 = *(unsigned int *)(v9 + 8 * v66 + 4);
      if ( (_DWORD)v66 != 0 )
      {
        v66 = *(unsigned int *)(v9 + 8 * v66 + 8);
        if ( (_DWORD)v66 != 0 && *(_DWORD *)(v9 + 8 * v66 + 16) != 0 )
        {
          v95 = v61;
          sub_208CCA0(a1: v62, a2: v63, a3: v77, a4: v66, a5: 1);
          v61 = v95;
        }
      }
    }
    goto LABEL_60;
  }
  v95 = a3;
  v11 = (unsigned int)a3[6];
  if ( (_DWORD)v11 == 0 || v10 == *(_QWORD *)(v9 + 376351704) )
    goto LABEL_52;
  v12 = *(_QWORD *)(v10 + 64);
  v13 = *(_QWORD *)(v9 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v11 + 16), 0, v12) == 0 )
    {
      v94 = a5;
      goto LABEL_7;
    }
    goto LABEL_52;
  }
  if ( v13 != v12 || (v60 = *(_DWORD *)(v9 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_52:
    v94 = a5;
    sub_208CC20();
    goto LABEL_7;
  }
  *(_DWORD *)(v9 + 8 * v11 + 28) = v60;
  v94 = a5;
LABEL_7:
  v14 = sub_1ED3480(a1, a2, a3: v94);
  v93 = v14;
  if ( v14 == v9 )
    v19 = v9;
  else
    v19 = sub_1EDAAC0(a1: v16, a2: v17, a3: v14);
  v92 = v19;
  v20 = sub_1ED2FA0(a1: v16, a2: v17, a3: v94, a4: v15, a5: v19, a6: v18, a7: v85);
  if ( v20 == v9 )
    v91 = v9;
  else
    v91 = v9 + 8LL * *(unsigned int *)(v20 + 4);
  if ( v20 == v9 )
  {
    v90 = v20;
    v89 = v9 + 376659264;
  }
  else
  {
    v24 = v9 + 8LL * *(unsigned int *)(v20 + 8);
    v90 = v20;
    v89 = sub_1EEF140(a1: v22, a2: v23, a3: v9, a4: v21, a5: v24);
  }
  v25 = v91;
  if ( v91 == v9 && v93 != v9 )
    v25 = sub_1ED2AC0(a1: v22, a2: v23, a3: (_DWORD)v95, a4: v93, a5: v94, a6: v93, a7: v85);
  if ( v25 == v9 )
  {
    v45 = sub_1ED2A40(a1: v22, a2: v23, a3: v94);
    if ( v45 == v9 )
    {
      v91 = v45;
      v25 = v9;
    }
    else
    {
      v46 = v9 + 8LL * *(unsigned int *)(v45 + 4);
      v91 = v45;
      v25 = v46;
    }
  }
  else
  {
    v91 = v9;
  }
  if ( v25 != v9 )
  {
    v26 = *(unsigned int *)(v25 + 8);
    v88 = v25;
    v27 = sub_1ECCCE0(a1: 0, a2: v26, a3: v95, a4: v89, a5: v94, a6: v25, a7: v85);
    if ( v91 != v9 )
    {
      v87 = (_DWORD *)v27;
      v30 = (_DWORD *)sub_27D1940(a1: v28, a2: v29, a3: v94);
      if ( v30 != (_DWORD *)v9 )
      {
        v33 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)(v9 + 8LL * (*v30 >> 3) + 192)))(
                a1: v31,
                a2: v32,
                a3: v30);
        sub_1ED3540(a1: v34, a2: v35, a3: v33, a4: v91, a5: v9 + 8LL * *(unsigned int *)(v91 + 8));
LABEL_20:
        sub_2852B20(a1: v9, a2: v37, a3: v9 + 52423576, a4: v36, a5: v94, a6: v87);
        v41 = v95;
        v42 = (unsigned int)v95[6];
        v43 = *(_DWORD *)(v9 + 8 * v42 + 28);
        if ( v43 == 1 )
        {
          *(_QWORD *)(v9 + 8 * v42 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v38 = (unsigned int)(v43 - 1);
          *(_DWORD *)(v9 + 8 * v42 + 28) = v38;
        }
        if ( v43 == 1 )
        {
          v58 = *(unsigned int *)(v9 + 8 * v42 + 4);
          if ( (_DWORD)v58 != 0 )
          {
            v59 = *(unsigned int *)(v9 + 8 * v58 + 8);
            if ( (_DWORD)v59 != 0 && *(_DWORD *)(v9 + 8 * v59 + 16) != 0 )
              sub_208CCA0(a1: v39, a2: v40, a3: v41, a4: v38, a5: 1);
          }
        }
        if ( *(int *)(v10 + 16) <= 0 )
          sub_277F280();
        return v87;
      }
      v61 = (_DWORD *)sub_276BEE0(a1: v31, a2: v32, a3: v95, a4: v91);
      v71 = *v61 >> 3;
      if ( *(__int16 *)(v9 + 8 * v71 + 62) >= 4
        && *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v71 + 16) + 24) == 81613 )
      {
        goto LABEL_62;
      }
      v66 = *(unsigned int *)(v80 + 24);
      v72 = *(_DWORD *)(v9 + 8 * v66 + 28);
      if ( v72 == 1 )
      {
        *(_QWORD *)(v9 + 8 * v66 + 16) = 0;
        __faststorefence();
        v73 = v80;
      }
      else
      {
        v73 = v80;
        *(_DWORD *)(v9 + 8 * v66 + 28) = v72 - 1;
      }
      if ( v72 == 1 )
      {
        v74 = *(unsigned int *)(v9 + 8 * v66 + 4);
        if ( (_DWORD)v74 != 0 )
        {
          v78 = *(unsigned int *)(v9 + 8 * v74 + 8);
          if ( (_DWORD)v78 != 0 && *(_DWORD *)(v9 + 8 * v78 + 16) != 0 )
          {
            v87 = v61;
            sub_208CCA0(a1: v62, a2: v63, a3: v73, a4: v66, a5: 1);
            v61 = v87;
          }
        }
      }
      goto LABEL_60;
    }
    v87 = (_DWORD *)v27;
    v51 = sub_4FA3500(a1: v28, a2: v29, a3: v9 + 376660208, a4: v91, a5: v92);
    if ( v51 == v9 )
    {
      v61 = (_DWORD *)sub_276BEE0(a1: v52, a2: v53, a3: v95);
      v68 = *v61 >> 3;
      if ( *(__int16 *)(v9 + 8 * v68 + 62) >= 4
        && *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v68 + 16) + 24) == 81613 )
      {
        goto LABEL_62;
      }
      v66 = (unsigned int)v79[6];
      v69 = *(_DWORD *)(v9 + 8 * v66 + 28);
      if ( v69 == 1 )
      {
        *(_QWORD *)(v9 + 8 * v66 + 16) = 0;
        __faststorefence();
        v70 = v79;
      }
      else
      {
        v70 = v79;
        *(_DWORD *)(v9 + 8 * v66 + 28) = v69 - 1;
      }
      if ( v69 != 1 )
        goto LABEL_60;
      v75 = *(unsigned int *)(v9 + 8 * v66 + 4);
      if ( (_DWORD)v75 == 0 )
        goto LABEL_60;
      v76 = *(unsigned int *)(v9 + 8 * v75 + 8);
      if ( (_DWORD)v76 == 0 || *(_DWORD *)(v9 + 8 * v76 + 16) == 0 )
        goto LABEL_60;
    }
    else
    {
      v54 = (_DWORD *)sub_58EAB40(a1: v52, a2: v53, a3: v51);
      if ( v54 == (_DWORD *)v9 || *v54 >> 3 == 5038167 )
      {
        v86 = v54;
        sub_1EDAC80(a1: v56, a2: v57, a3: v93, a4: v55, a5: v54);
        goto LABEL_20;
      }
      v70 = v95;
      v61 = (_DWORD *)sub_276A220(a1: v89, a2: v93, a3: v54, a4: v87, a5: v9 + 40305336, a6: v90);
      v81 = (unsigned int)v70[6];
      v82 = *(_DWORD *)(v9 + 8 * v81 + 28);
      if ( v82 == 1 )
      {
        *(_QWORD *)(v9 + 8 * v81 + 16) = 0;
        __faststorefence();
      }
      else
      {
        v66 = (unsigned int)(v82 - 1);
        *(_DWORD *)(v9 + 8 * v81 + 28) = v66;
      }
      if ( v82 != 1
        || (_DWORD)(v83 = *(unsigned int *)(v9 + 8 * v81 + 4)) == 0
        || (_DWORD)(v84 = *(unsigned int *)(v9 + 8 * v83 + 8)) == 0
        || *(_DWORD *)(v9 + 8 * v84 + 16) == 0 )
      {
        while ( 1 )
        {
LABEL_60:
          v61 = (_DWORD *)sub_2769900(a1: v62, a2: v63, a3: v61, a4: v66, a5: &a7);
          v64 = v95;
          v65 = *v61 >> 3;
          if ( *(__int16 *)(v9 + 8 * v65 + 62) >= 4
            && *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v65 + 16) + 24) == 81613 )
          {
LABEL_62:
            v87 = v61;
            v61 = (_DWORD *)sub_28C1D00(a1: v62, a2: v63, a3: v61);
          }
          v66 = (unsigned int)v64[6];
          v67 = *(_DWORD *)(v9 + 8 * v66 + 28);
          if ( v67 == 1 )
          {
            *(_QWORD *)(v9 + 8 * v66 + 16) = 0;
            __faststorefence();
          }
          else
          {
            *(_DWORD *)(v9 + 8 * v66 + 28) = v67 - 1;
          }
          if ( v67 == 1 )
          {
            v66 = *(unsigned int *)(v9 + 8 * v66 + 4);
            if ( (_DWORD)v66 != 0 )
            {
              v66 = *(unsigned int *)(v9 + 8 * v66 + 8);
              if ( (_DWORD)v66 != 0 && *(_DWORD *)(v9 + 8 * v66 + 16) != 0 )
              {
                v87 = v61;
                sub_208CCA0(a1: v62, a2: v63, a3: v64, a4: v66, a5: 1);
                v61 = v87;
              }
            }
          }
        }
      }
    }
    v86 = v61;
    sub_208CCA0(a1: v62, a2: v63, a3: v70, a4: v66, a5: 1);
    v61 = v86;
    goto LABEL_60;
  }
  v47 = (unsigned int)v95[6];
  v48 = *(unsigned int *)(v9 + 8 * v47 + 28);
  if ( (_DWORD)v48 == 1 )
  {
    *(_QWORD *)(v9 + 8 * v47 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v9 + 8 * v47 + 28) = v48 - 1;
  }
  if ( (_DWORD)v48 == 1 )
  {
    v49 = *(unsigned int *)(v9 + 8 * v47 + 4);
    if ( (_DWORD)v49 != 0 )
    {
      v50 = *(unsigned int *)(v9 + 8 * v49 + 8);
      if ( (_DWORD)v50 != 0 && *(_DWORD *)(v9 + 8 * v50 + 16) != 0 )
        sub_208CCA0(a1: v22, a2: v23, a3: v95, a4: v48, a5: 1);
    }
  }
  if ( *(int *)(v10 + 16) <= 0 )
    sub_277F280();
  return (_DWORD *)v9;
}
