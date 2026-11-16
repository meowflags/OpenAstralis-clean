// sub_18503F0E0
// rva 0x0503f0e0  size 2661  section .text  group text
// window base 0x18503f0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503F0E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 i; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *); // rax
  _DWORD *v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // rdx
  signed __int64 v23; // r8
  __int64 v24; // rbp
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  _DWORD *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rdi
  _DWORD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 j; // rax
  __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // r11
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rdi
  _DWORD *v60; // rsi
  _DWORD *v61; // r10
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // rbx
  unsigned __int64 v65; // rbp
  _DWORD *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 k; // rax
  __int64 v74; // rdx
  _DWORD *v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 result; // rax
  __int64 v80; // rdx
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rdx
  unsigned __int64 v84; // rbp
  unsigned __int64 v85; // rdi
  int v86; // r8d
  __int64 v87; // r8
  _DWORD *v88; // rcx
  __int64 v89; // rdx
  int v90; // r8d
  _DWORD *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rdx
  int v96; // [rsp+0h] [rbp-98h] BYREF
  __int64 v97; // [rsp+8h] [rbp-90h]
  _DWORD *v98; // [rsp+10h] [rbp-88h]
  _DWORD *v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-78h]
  _DWORD *v101; // [rsp+28h] [rbp-70h]
  _DWORD *v102; // [rsp+30h] [rbp-68h]
  unsigned int v103; // [rsp+3Ch] [rbp-5Ch]
  _DWORD *v104; // [rsp+40h] [rbp-58h]
  _DWORD *v105; // [rsp+48h] [rbp-50h]
  _DWORD *v106; // [rsp+50h] [rbp-48h]
  unsigned int v107; // [rsp+5Ch] [rbp-3Ch]
  __int64 v108; // [rsp+60h] [rbp-38h]
  __int64 v109; // [rsp+68h] [rbp-30h]
  __int64 v110; // [rsp+70h] [rbp-28h]
  unsigned int v111; // [rsp+78h] [rbp-20h]
  unsigned int v112; // [rsp+7Ch] [rbp-1Ch]
  void (__fastcall *v113)(__int64, _DWORD *, _DWORD *, __int64, _DWORD *); // [rsp+80h] [rbp-18h]
  __int64 v114; // [rsp+88h] [rbp-10h]
  unsigned int v115; // [rsp+94h] [rbp-4h]

  v106 = a3;
  v105 = a5;
  if ( (unsigned __int64)&v96 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_105:
    MEMORY[0x182771080]();
    goto LABEL_106;
  }
  v10 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 34248584);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v10 + 40;
    *(_DWORD *)v10 = 34248584;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
  }
  v11 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v11 + 272) > *(_QWORD *)(v9 + 32) )
  {
    v104 = (_DWORD *)v10;
    v11 = MEMORY[0x181EAA840](a1, a2, a3: 34084944, a4: v11, a5: 64);
    v10 = (__int64)v104;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v11 + 272;
    *(_QWORD *)v11 = 34084944;
    *(_DWORD *)(v11 + 8) = 64;
    *(_DWORD *)(v11 + 12) = 0;
    for ( i = 16; i < 0x110; i += 8LL )
      *(_QWORD *)(v11 + i) = 0;
  }
  *(_DWORD *)(v10 + 12) = (unsigned __int64)(v11 - v8) >> 3;
  if ( (*(_DWORD *)v10 & 2) != 0 )
  {
    v84 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v84) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v84) >> 9) + 0x38) = 0;
  }
  v104 = (_DWORD *)MEMORY[0x185809A40](a1, a2, a3: v10);
  MEMORY[0x1857DC1C0](a1: v14, a2: v15, a3: v104, a4: v13, a5: v106);
  if ( v105 == (_DWORD *)v8 )
    goto LABEL_105;
  v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*v105 >> 3) + 112));
  v103 = *v105 >> 3;
  v19 = (_DWORD *)v18(a1: v16, a2: v17, a3: v105);
  if ( v19 == (_DWORD *)v8 )
  {
LABEL_106:
    MEMORY[0x182771080]();
    goto LABEL_107;
  }
  v102 = v19;
  v21 = *(_DWORD *)(v8 + 8LL * (*v19 >> 3) + 48);
  v115 = v21;
  v114 = (int)v21;
  if ( v21 == 0 )
  {
    v25 = v19;
    goto LABEL_79;
  }
  v22 = *(unsigned int *)((char *)v19 + (int)v21);
  if ( (_DWORD)v22 == 0 )
  {
    v25 = v19;
    goto LABEL_79;
  }
  if ( v9 == *(_QWORD *)(v8 + 376351704) )
  {
    v25 = v19;
    goto LABEL_79;
  }
  v23 = *(_QWORD *)(v9 + 64);
  v24 = *(_QWORD *)(v8 + 8 * v22 + 16);
  if ( v24 != 0 )
  {
    v25 = v19;
    if ( v24 == v23 )
    {
      v86 = *(_DWORD *)(v8 + 8 * v22 + 28) + 1;
      if ( v86 >= 0 )
      {
        *(_DWORD *)(v8 + 8 * v22 + 28) = v86;
        goto LABEL_16;
      }
    }
    goto LABEL_79;
  }
  v25 = v19;
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v22 + 16), 0, v23) != 0 )
LABEL_79:
    MEMORY[0x18208CC20](a1: v20, a2: v25, a3: v25);
LABEL_16:
  v113 = (void (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v103 + 120));
  v113(a1: v20, a2: v25, a3: v105, a4: (__int64)v113, a5: v106);
  v31 = (_DWORD *)sub_18503C560(a1: v27, a2: v28, a3: (unsigned __int64)v106, a4: v26, a5: v29, a6: v30, a7: v96);
  if ( v31 == (_DWORD *)v8 )
    goto LABEL_107;
  v101 = v31;
  v36 = (unsigned int)v31[2];
  v112 = v36;
  if ( (_DWORD)v36 != 0 )
  {
    v37 = *(_QWORD *)(v9 + 40);
    v110 = 34085680;
    if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v37 = MEMORY[0x181EAA920](a1: v32, a2: v33, a3: v110);
      v36 = v112;
      v31 = v101;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v37 + 24;
      *(_DWORD *)v37 = 34085680;
      *(_DWORD *)(v37 + 4) = 0;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
    }
    v100 = v37;
    v38 = *(_QWORD *)(v9 + 40);
    v39 = 34082368;
    v109 = 34082368;
    if ( (unsigned __int64)(v38 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v38 = MEMORY[0x181EAA840](a1: v32, a2: 34082368, a3: v109, a4: v36, a5: 16);
      v39 = v109;
      v37 = v100;
      v36 = v112;
      v31 = v101;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v38 + 32;
      *(_QWORD *)v38 = 34082368;
      *(_DWORD *)(v38 + 8) = 16;
      *(_DWORD *)(v38 + 12) = 0;
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = 0;
    }
    *(_DWORD *)(v37 + 4) = (unsigned __int64)(v38 - v8) >> 3;
    if ( (*(_DWORD *)v37 & 2) != 0 )
    {
      v85 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v85) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v85) >> 9) + 0x38) = 0;
    }
    v40 = (_DWORD *)(v8 + 8LL * (unsigned int)v31[3]);
    v99 = (_DWORD *)(v8 + 373163632);
    v98 = v40;
    MEMORY[0x184F36F80](a1: v37, a2: v39, a3: v37, a4: v36, a5: v8 + 373163632);
    MEMORY[0x18500AEA0](a1: v42, a2: v43, a3: v100, a4: v41, a5: v98);
    v47 = v100;
    v108 = 34082680;
    if ( *(_DWORD *)(v100 + 8) != 0 )
    {
      v48 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v48 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v48 = MEMORY[0x181EAA920](a1: v45, a2: v46, a3: v108);
        v49 = v100;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v48 + 24;
        *(_DWORD *)v48 = 34082680;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        v49 = v47;
      }
      v97 = v48;
      MEMORY[0x184FE9280](a1: v45, a2: v46, a3: v48, a4: v44, a5: v49, a6: v8);
      v50 = v97;
    }
    else
    {
      v50 = v8 + 373281248;
    }
    v113(a1: v45, a2: v46, a3: v105, a4: v44, a5: (_DWORD *)v50);
    for ( j = 1; ; j = v107 + 1 )
    {
      v33 = v109;
      v36 = v112;
      v64 = v101;
      if ( (int)v112 <= (int)j )
        break;
      if ( v112 <= (unsigned int)j )
      {
        v91 = (_DWORD *)MEMORY[0x18276CFE0](a1: v32, a2: v109, a3: (unsigned int)j, a4: (unsigned int)j, a5: v112);
        goto LABEL_94;
      }
      v52 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v107 = j;
        v52 = MEMORY[0x181EAA920](a1: v32, a2: v109, a3: v110);
        j = v107;
        v33 = v109;
        v36 = v112;
        v64 = v101;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v52 + 24;
        *(_DWORD *)v52 = 34085680;
        *(_DWORD *)(v52 + 4) = 0;
        *(_QWORD *)(v52 + 8) = 0;
        *(_QWORD *)(v52 + 16) = 0;
      }
      v98 = (_DWORD *)v52;
      v53 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v53 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v107 = j;
        v53 = MEMORY[0x181EAA840](a1: v32, a2: v33, a3: v109, a4: v36, a5: 16);
        v52 = (__int64)v98;
        j = v107;
        v33 = v109;
        v36 = v112;
        v64 = v101;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v53 + 32;
        *(_QWORD *)v53 = v33;
        *(_DWORD *)(v53 + 8) = 16;
        *(_DWORD *)(v53 + 12) = 0;
        *(_QWORD *)(v53 + 16) = 0;
        *(_QWORD *)(v53 + 24) = 0;
      }
      *(_DWORD *)(v52 + 4) = (unsigned __int64)(v53 - v8) >> 3;
      if ( (*(_DWORD *)v52 & 2) != 0 )
      {
        v65 = (v52 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v65) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v65) >> 9) + 0x38) = 0;
      }
      v54 = v8 + 8LL * (unsigned int)v64[j + 3];
      v107 = j;
      v97 = v54;
      MEMORY[0x184F36F80](a1: v32, a2: v33, a3: v52, a4: v36, a5: v99);
      MEMORY[0x18500AEA0](a1: v56, a2: v57, a3: v98, a4: v55, a5: v97);
      v61 = v98;
      if ( v98[2] != 0 )
      {
        v62 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v62 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v62 = MEMORY[0x181EAA920](a1: v59, a2: v60, a3: v108);
          v61 = v98;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v62 + 24;
          *(_DWORD *)v62 = 34082680;
          *(_DWORD *)(v62 + 4) = 0;
          *(_QWORD *)(v62 + 8) = 0;
          *(_QWORD *)(v62 + 16) = 0;
        }
        v100 = v62;
        MEMORY[0x184FE9280](a1: v59, a2: v60, a3: v62, a4: v58, a5: v61, a6: v8);
        v63 = v100;
      }
      else
      {
        v63 = v8 + 373281248;
      }
      v113(a1: v59, a2: v60, a3: v105, a4: v58, a5: (_DWORD *)v63);
    }
    v111 = j;
  }
  else
  {
    v111 = 0;
  }
  v66 = sub_18503C980(a1: v32, a2: v33, a3: v106, a4: v36, a5: v34, a6: v35, a7: v96);
  if ( v66 == (_DWORD *)v8 )
  {
    v91 = (_DWORD *)MEMORY[0x18276BEE0](a1: v67, a2: v68, a3: v111);
    goto LABEL_94;
  }
  v99 = v66;
  v112 = v66[2];
  if ( v112 == 0 )
  {
    v111 = 0;
    goto LABEL_58;
  }
  v69 = (unsigned int)v66[3];
  if ( (_DWORD)v69 == 0 )
  {
LABEL_107:
    v91 = (_DWORD *)MEMORY[0x18276BEE0]();
    goto LABEL_94;
  }
  v97 = v8 + 366971032;
  v100 = v8 + 373165088;
  v98 = (_DWORD *)(v8 + 8 * v69);
  sub_18503DB20(a1: v8 + 366971032, a2: v8 + 373165088, a3: v98, a4: v104, a5: v105, a6: v101);
  for ( k = 1; (int)v112 > (int)k; k = v107 + 1 )
  {
    if ( v112 <= (unsigned int)k )
    {
      v107 = k;
      v91 = (_DWORD *)MEMORY[0x18276CFE0](a1: v71, a2: v72, a3: (unsigned int)k, a4: v70, a5: v112);
      goto LABEL_94;
    }
    v74 = (unsigned int)v99[k + 3];
    if ( (_DWORD)v74 == 0 )
    {
      v91 = (_DWORD *)MEMORY[0x18276BEE0](a1: v71, a2: v72, a3: v99, a4: v8 + 8 * v74, a5: (unsigned int)k);
LABEL_94:
      if ( v115 != 0 )
      {
        v88 = v102;
        v89 = *(unsigned int *)((char *)v102 + v114);
        v90 = *(_DWORD *)(v8 + 8 * v89 + 28);
        if ( v90 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v89 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v89 + 28) = v90 - 1;
        }
        if ( v90 == 1 )
          goto LABEL_99;
        while ( 1 )
        {
          while ( 1 )
          {
            v91 = (_DWORD *)MEMORY[0x182769900](a1: v92, a2: v93, a3: v91, a4: v88, a5: &a7);
LABEL_99:
            v94 = *(unsigned int *)(v8 + 8 * v89 + 4);
            if ( (_DWORD)v94 != 0 )
            {
              v95 = *(unsigned int *)(v8 + 8 * v94 + 8);
              if ( (_DWORD)v95 != 0 && *(_DWORD *)(v8 + 8 * v95 + 16) != 0 )
                break;
            }
          }
          v101 = v91;
LABEL_111:
          MEMORY[0x18208CCA0](a1: v92, a2: v93, a3: v88);
          v91 = v101;
          v88 = v102;
        }
      }
      v101 = v91;
      v88 = v102;
      goto LABEL_111;
    }
    v107 = k;
    v98 = (_DWORD *)(v8 + 8 * v74);
    sub_18503DB20(a1: v97, a2: v100, a3: v98, a4: v104, a5: v105, a6: v101);
  }
  v111 = k;
LABEL_58:
  v75 = (_DWORD *)((__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*v106 >> 3) + 120)))();
  v99 = v75;
  if ( v75 != (_DWORD *)v8 )
    sub_18503DB20(a1: v8 + 371505136, a2: v8 + 373281248, a3: v75, a4: v104, a5: v105, a6: v101);
  v78 = v115;
  if ( v115 == 0 )
  {
    v87 = 0xFFFFFFFFLL;
    goto LABEL_88;
  }
  result = (__int64)v102;
  v80 = *(unsigned int *)((char *)v102 + v114);
  v81 = *(_DWORD *)(v8 + 8 * v80 + 28);
  if ( v81 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v80 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * v80 + 28) = v81 - 1;
  }
  if ( v81 == 1 )
  {
    v82 = *(unsigned int *)(v8 + 8 * v80 + 4);
    if ( (_DWORD)v82 != 0 )
    {
      v83 = *(unsigned int *)(v8 + 8 * v82 + 8);
      if ( (_DWORD)v83 != 0 )
      {
        v78 = *(unsigned int *)(v8 + 8 * v83 + 16);
        if ( (_DWORD)v78 != 0 )
        {
          v87 = 1;
LABEL_88:
          MEMORY[0x18208CCA0](a1: v76, a2: v77, a3: v102, a4: v78, a5: v87);
          result = (__int64)v102;
        }
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v76, a2: v77, a3: v111);
  return result;
}
