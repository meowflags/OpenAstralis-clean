// sub_15AA320
// rva 0x015aa320  size 4165  section .text  group text
// window base 0x1815aa320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AA320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 result; // rax
  int v16; // edi
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // edi
  int v21; // esi
  int v22; // r9d
  __int64 v23; // rcx
  int v24; // edi
  int v25; // esi
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // edi
  int v29; // esi
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // edi
  int v33; // esi
  int v34; // r9d
  __int64 v35; // rcx
  int v36; // edi
  int v37; // esi
  int v38; // r9d
  __int64 v39; // rcx
  int v40; // edi
  int v41; // esi
  int v42; // r9d
  __int64 v43; // rcx
  int v44; // edi
  int v45; // esi
  int v46; // r9d
  __int64 v47; // rcx
  int v48; // edi
  int v49; // esi
  int v50; // r9d
  __int64 v51; // rcx
  int v52; // edi
  int v53; // esi
  int v54; // r9d
  __int64 v55; // rcx
  int v56; // edi
  int v57; // esi
  int v58; // r9d
  __int64 v59; // rcx
  int v60; // edi
  int v61; // esi
  int v62; // r9d
  _DWORD *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdx
  unsigned __int64 v67; // rsi
  _DWORD *v68; // rcx
  _DWORD *v69; // rbx
  _DWORD *v70; // rbp
  __int64 v71; // rdi
  int v72; // r8d
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rdi
  unsigned __int64 v77; // r9
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdx
  int v84; // r8d
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // r8d
  __int64 v91; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v92; // [rsp+8h] [rbp-A0h]
  _DWORD *v93; // [rsp+10h] [rbp-98h]
  __int64 v94; // [rsp+18h] [rbp-90h]
  __int64 v95; // [rsp+20h] [rbp-88h]
  __int64 v96; // [rsp+28h] [rbp-80h]
  __int64 v97; // [rsp+30h] [rbp-78h]
  __int64 v98; // [rsp+38h] [rbp-70h]
  __int64 v99; // [rsp+40h] [rbp-68h]
  __int64 v100; // [rsp+48h] [rbp-60h]
  __int64 v101; // [rsp+50h] [rbp-58h]
  __int64 v102; // [rsp+58h] [rbp-50h]
  __int64 v103; // [rsp+60h] [rbp-48h]
  __int64 v104; // [rsp+68h] [rbp-40h]
  __int64 v105; // [rsp+70h] [rbp-38h]
  __int64 v106; // [rsp+78h] [rbp-30h]
  __int64 v107; // [rsp+80h] [rbp-28h]
  __int64 v108; // [rsp+88h] [rbp-20h]
  _DWORD *v109; // [rsp+90h] [rbp-18h]
  _BYTE *v110; // [rsp+98h] [rbp-10h]
  __int64 v111; // [rsp+A0h] [rbp-8h]

  if ( (unsigned __int64)&v91 <= *(_QWORD *)(v8 + 8) )
  {
    v79 = sub_1EB84E0();
    v80 = (unsigned int)(v90 - 1);
    *(_DWORD *)(v7 + 8 * v89 + 28) = v80;
    if ( v90 != 1 )
      goto LABEL_41;
    v86 = *(unsigned int *)(v7 + 8 * v89 + 4);
    if ( (_DWORD)v86 == 0 )
      goto LABEL_41;
    v87 = *(unsigned int *)(v7 + 8 * v86 + 8);
    if ( (_DWORD)v87 == 0 || *(_DWORD *)(v7 + 8 * v87 + 16) == 0 )
      goto LABEL_41;
    while ( 1 )
    {
      v92 = v79;
      sub_208CCA0(a1: v81, a2: v82, a3: v109, a4: v80, a5: 1);
      v79 = v92;
      while ( 1 )
      {
LABEL_41:
        v79 = sub_2769900(a1: v81, a2: v82, a3: v79, a4: v80, a5: &a7);
        v83 = *(unsigned int *)(v7 + 376614464);
        v84 = *(_DWORD *)(v7 + 8 * v83 + 28);
        if ( v84 == 1 )
        {
          *(_QWORD *)(v7 + 8 * v83 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v80 = (unsigned int)(v84 - 1);
          *(_DWORD *)(v7 + 8 * v83 + 28) = v80;
        }
        if ( v84 == 1 )
        {
          v85 = *(unsigned int *)(v7 + 8 * v83 + 4);
          if ( (_DWORD)v85 != 0 )
          {
            v88 = *(unsigned int *)(v7 + 8 * v85 + 8);
            if ( (_DWORD)v88 != 0 && *(_DWORD *)(v7 + 8 * v88 + 16) != 0 )
              break;
          }
        }
      }
    }
  }
  v9 = *(unsigned int *)(v7 + 376614464);
  if ( (_DWORD)v9 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_29;
  v10 = *(_QWORD *)(v8 + 64);
  v11 = *(_QWORD *)(v7 + 8 * v9 + 16);
  if ( v11 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v9 + 16), 0, v10) == 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
  if ( v11 != v10 || (v78 = *(_DWORD *)(v7 + 8 * v9 + 28) + 1) < 0 )
  {
LABEL_29:
    sub_208CC20(a1, a2, a3: v7 + 376614456);
    goto LABEL_6;
  }
  *(_DWORD *)(v7 + 8 * v9 + 28) = v78;
LABEL_6:
  v12 = *(unsigned int *)(v7 + 376614460);
  if ( (_DWORD)v12 != 0 )
  {
    v13 = *(unsigned int *)(v7 + 376614464);
    v14 = *(_DWORD *)(v7 + 8 * v13 + 28);
    if ( v14 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v13 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v13 + 28) = v14 - 1;
    }
    result = v7 + 8 * v12;
    if ( v14 == 1 )
    {
      v73 = *(unsigned int *)(v7 + 8 * v13 + 4);
      if ( (_DWORD)v73 != 0 )
      {
        v74 = *(unsigned int *)(v7 + 8 * v73 + 8);
        if ( (_DWORD)v74 != 0 && *(_DWORD *)(v7 + 8 * v74 + 16) != 0 )
        {
          v92 = result;
          sub_208CCA0(a1, a2, a3: v7 + 376614456, a4: v13, a5: 1);
          result = v92;
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v92 = result;
      sub_277F280();
      return v92;
    }
  }
  else
  {
    v109 = (_DWORD *)(v7 + 376614456);
    v111 = sub_15A8A20();
    v110 = *(_BYTE **)(v111 + 48);
    v108 = v7 + 376612408;
    v107 = sub_15A82E0(
             a1: v16,
             a2: v17,
             a3: (int)v7 + 376612408,
             a4: (__int64)v110,
             a5: v110,
             a6: v18,
             a7: v91,
             a8: v92);
    v110 = *(_BYTE **)(v111 + 48);
    v106 = sub_15A82E0(a1: v20, a2: v21, a3: v108, a4: v19, a5: v110, a6: v22, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 16);
    v105 = sub_15A82E0(a1: v24, a2: v25, a3: v108, a4: v23, a5: v110, a6: v26, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 32);
    v104 = sub_15A82E0(a1: v28, a2: v29, a3: v108, a4: v27, a5: v110, a6: v30, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 32);
    v103 = sub_15A82E0(a1: v32, a2: v33, a3: v108, a4: v31, a5: v110, a6: v34, a7: v91, a8: v92);
    v110 = *(_BYTE **)v111;
    v102 = sub_15A82E0(a1: v36, a2: v37, a3: v108, a4: v35, a5: v110, a6: v38, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 40);
    v101 = sub_15A82E0(a1: v40, a2: v41, a3: v108, a4: v39, a5: v110, a6: v42, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 40);
    v100 = sub_15A82E0(a1: v44, a2: v45, a3: v108, a4: v43, a5: v110, a6: v46, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 8);
    v99 = sub_15A82E0(a1: v48, a2: v49, a3: v108, a4: v47, a5: v110, a6: v50, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 56);
    v98 = sub_15A82E0(a1: v52, a2: v53, a3: v108, a4: v51, a5: v110, a6: v54, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 56);
    v97 = sub_15A82E0(a1: v56, a2: v57, a3: v108, a4: v55, a5: v110, a6: v58, a7: v91, a8: v92);
    v110 = *(_BYTE **)(v111 + 24);
    v108 = sub_15A82E0(a1: v60, a2: v61, a3: v108, a4: v59, a5: v110, a6: v62, a7: v91, a8: v92);
    v96 = sub_15AB380(a1: v107, a2: v106, a3: v7 + 350837920, a4: v105, a5: v7 + 350837864, a6: v7 + 350837808);
    v95 = sub_15AB380(a1: v104, a2: v103, a3: v7 + 350837416, a4: v102, a5: v7 + 350837352, a6: v7 + 350837296);
    v94 = sub_15AB380(a1: v101, a2: v100, a3: v7 + 350837152, a4: v99, a5: v7 + 350837096, a6: v7 + 350837040);
    v63 = (_DWORD *)sub_15AB380(
                      a1: v98,
                      a2: v97,
                      a3: v7 + 350836936,
                      a4: v108,
                      a5: v7 + 350836880,
                      a6: v7 + 350836824);
    v66 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v66 + 64) > *(_QWORD *)(v8 + 32) )
    {
      v93 = v63;
      v66 = sub_1EAA920(a1: v64, a2: v65, a3: 35802416);
      v67 = (unsigned __int64)v109;
      v63 = v93;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v66 + 64;
      *(_DWORD *)v66 = 35802416;
      *(_DWORD *)(v66 + 4) = 0;
      *(_QWORD *)(v66 + 8) = 0;
      *(_QWORD *)(v66 + 16) = 0;
      *(_QWORD *)(v66 + 24) = 0;
      *(_QWORD *)(v66 + 32) = 0;
      *(_QWORD *)(v66 + 40) = 0;
      *(_QWORD *)(v66 + 48) = 0;
      *(_QWORD *)(v66 + 56) = 0;
      v67 = (unsigned __int64)v109;
    }
    v68 = (_DWORD *)v94;
    v69 = (_DWORD *)v95;
    v70 = (_DWORD *)v96;
    *(_DWORD *)(v66 + 48) = v63[3];
    *(_DWORD *)(v66 + 44) = v63[2];
    *(_DWORD *)(v66 + 40) = v63[1];
    *(_DWORD *)(v66 + 36) = v68[3];
    *(_DWORD *)(v66 + 32) = v68[2];
    *(_DWORD *)(v66 + 28) = v68[1];
    *(_DWORD *)(v66 + 24) = v69[3];
    *(_DWORD *)(v66 + 20) = v69[2];
    *(_DWORD *)(v66 + 16) = v69[1];
    *(_DWORD *)(v66 + 12) = v70[3];
    *(_DWORD *)(v66 + 8) = v70[2];
    *(_DWORD *)(v66 + 4) = v70[1];
    *(_DWORD *)(v7 + 376614460) = (unsigned __int64)(v66 - v7) >> 3;
    if ( (*(_DWORD *)v67 & 2) != 0 )
    {
      v77 = (v67 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v77) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v67 & 0xFFFFFFFFFFF80000LL) + ((v67 - v77) >> 9) + 0x38) = 0;
    }
    v71 = *(unsigned int *)(v7 + 376614464);
    v72 = *(_DWORD *)(v7 + 8 * v71 + 28);
    if ( v72 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v71 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v71 + 28) = v72 - 1;
    }
    if ( v72 == 1 )
    {
      v75 = *(unsigned int *)(v7 + 8 * v71 + 4);
      if ( (_DWORD)v75 != 0 )
      {
        v76 = *(unsigned int *)(v7 + 8 * v75 + 8);
        if ( (_DWORD)v76 != 0 && *(_DWORD *)(v7 + 8 * v76 + 16) != 0 )
        {
          v92 = v66;
          v93 = v63;
          sub_208CCA0(a1: v76, a2: v67, a3: v109, a4: v68, a5: 1);
          v66 = v92;
          v63 = v93;
          v68 = (_DWORD *)v94;
          v69 = (_DWORD *)v95;
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v92 = v66;
      sub_277F280(a1: v98, a2: v97, a3: v69, a4: v63, a5: v68, a6: v99);
      return v92;
    }
    return v66;
  }
  return result;
}
