// sub_1EC1280
// rva 0x01ec1280  size 2600  section .text  group text
// window base 0x181ec1280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC1280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 i; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 j; // r8
  int v27; // r9d
  _DWORD *v28; // rdi
  unsigned __int64 v29; // r8
  unsigned __int64 k; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  unsigned int v39; // r9d
  _DWORD *v40; // rdi
  unsigned int v41; // r10d
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rsi
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // r9d
  __int64 v50; // rdx
  _DWORD *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdi
  unsigned int v54; // eax
  int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned int v58; // edx
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 result; // rax
  _DWORD *v63; // rdi
  __int64 v64; // rbp
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rcx
  char v71; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD *v72; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+10h] [rbp-98h]
  __int64 v74; // [rsp+18h] [rbp-90h]
  __int64 v75; // [rsp+20h] [rbp-88h]
  __int64 v76; // [rsp+28h] [rbp-80h]
  _DWORD *v77; // [rsp+30h] [rbp-78h]
  int v78; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v79; // [rsp+40h] [rbp-68h]
  unsigned int v80; // [rsp+44h] [rbp-64h]
  unsigned int v81; // [rsp+48h] [rbp-60h]
  int v82; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v83; // [rsp+50h] [rbp-58h]
  unsigned int v84; // [rsp+54h] [rbp-54h]
  unsigned int v85; // [rsp+58h] [rbp-50h]
  int v86; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v87; // [rsp+60h] [rbp-48h]
  unsigned int v88; // [rsp+64h] [rbp-44h]
  unsigned int v89; // [rsp+68h] [rbp-40h]
  unsigned int v90; // [rsp+6Ch] [rbp-3Ch]
  __int64 v91; // [rsp+70h] [rbp-38h]
  unsigned int v92; // [rsp+7Ch] [rbp-2Ch]
  signed int v93; // [rsp+80h] [rbp-28h]
  int v94; // [rsp+84h] [rbp-24h]
  unsigned int v95; // [rsp+88h] [rbp-20h]
  unsigned int v96; // [rsp+8Ch] [rbp-1Ch]
  __int64 v97; // [rsp+90h] [rbp-18h]
  __int64 v98; // [rsp+98h] [rbp-10h]
  unsigned int v99; // [rsp+A4h] [rbp-4h]

  v99 = a3;
  v77 = a5;
  v76 = a6;
  v75 = a1;
  v98 = a2;
  v97 = a4;
  if ( (unsigned __int64)&v71 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v71);
LABEL_96:
    sub_2770E80(a1, a2, a3: (unsigned int)v93, a4, a5: v95, a6);
    goto LABEL_97;
  }
  v96 = *(_DWORD *)(a6 + 8);
  if ( v96 != 0 )
  {
    LODWORD(v6) = *(_DWORD *)(a6 + 12);
    LODWORD(v7) = (int)v6 >= 1;
    v74 = v8 + 369863928;
    v94 = v6;
    sub_5EFF100(a1, a2, a3: (int)v6 >= 1, a4, a5: v8 + 369863928);
    v94 = v94 < 0x10000;
    a4 = 1;
    while ( 1 )
    {
      a6 = v76;
      if ( (int)v96 <= (int)a4 )
        break;
      if ( v96 <= (unsigned int)a4 )
        goto LABEL_106;
      v93 = *(_DWORD *)(v76 + 4 * a4 + 12);
      LODWORD(v6) = v93;
      v92 = a4;
      sub_5EFF100(a1, a2, a3: v93 >= 1, a4, a5: v74);
      a4 = v92 + 1;
      if ( v93 < 0x10000 )
        ++v94;
    }
    v95 = a4;
    v10 = v94;
  }
  else
  {
    v95 = 0;
    v10 = 0;
  }
  v93 = v10;
  if ( v10 < 0 )
    goto LABEL_96;
  v11 = *(_QWORD *)(v9 + 40);
  v12 = *(_QWORD *)(v9 + 32);
  v7 = (4LL * (unsigned int)v10 + 19) & 0x7FFFFFFF8LL;
  v13 = 34089120;
  v91 = 34089120;
  if ( v7 >= 0x20000 || (a1 = v11 + v7, v11 + v7 > v12) )
  {
    v11 = sub_1EAA840(a1, a2: 34089120, a3: 34089120, a4, a5: v93);
    v13 = v91;
    v10 = v93;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = a1;
    *(_QWORD *)v11 = 34089120;
    *(_DWORD *)(v11 + 8) = v10;
    *(_DWORD *)(v11 + 12) = 0;
    if ( v7 - 16 >= 0x800 )
    {
      memset((void *)(v11 + 16), 0, v7 - 16);
      a1 = v11 + v7;
      v10 = v93;
    }
    else
    {
      for ( i = 16; v7 > i; i += 8LL )
        *(_QWORD *)(v11 + i) = 0;
    }
  }
  v15 = v96;
  if ( v96 != 0 )
  {
    v16 = v76;
    LODWORD(v6) = *(_DWORD *)(v76 + 12);
    if ( (int)v6 < 0x10000 )
    {
      if ( v10 == 0 )
      {
LABEL_98:
        v74 = v11;
        sub_2771220(a1, a2: v13, a3: 0, a4: v15, a5: 0);
LABEL_99:
        sub_2771220(a1: v32, a2: v33, a3: v87, a4: v35, a5: v85);
LABEL_100:
        sub_2771220(a1: v69, a2: v33, a3: (unsigned int)v70, a4: v70, a5: v88);
LABEL_101:
        sub_2771220(a1: v40, a2: v33, a3: (unsigned int)v42, a4: v42, a5: v85);
        goto LABEL_102;
      }
      *(_DWORD *)(v11 + 12) = v6;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    v7 = v17;
    v6 = 1;
    while ( (int)v15 > (int)v6 )
    {
      if ( (unsigned int)v15 <= (unsigned int)v6 )
        goto LABEL_107;
      a1 = *(unsigned int *)(v16 + 4 * v6 + 12);
      v18 = v6 + 1;
      if ( (int)a1 < 0x10000 )
      {
        if ( v10 <= (unsigned int)v7 )
          goto LABEL_109;
        *(_DWORD *)(v11 + 4 * v7 + 12) = a1;
        v7 = (unsigned int)(v7 + 1);
        v6 = v18;
      }
      else
      {
        v6 = v18;
      }
    }
    v95 = v6;
    v92 = v7;
  }
  else
  {
    v95 = 0;
    v92 = 0;
  }
  v74 = v11;
  v90 = sub_1EC1CC0();
  v21 = *(_QWORD *)(v9 + 40);
  v22 = *(_QWORD *)(v9 + 32);
  v23 = v90 & 0xFFFFFF;
  v89 = v90 & 0xFFFFFF;
  LODWORD(v6) = (v90 & 0xFFFFFF) + 1;
  v88 = v6;
  v24 = (4LL * (unsigned int)v6 + 19) & 0xFFFFFF8;
  if ( v24 >= 0x20000 || (v19 = v21 + v24, v21 + v24 > v22) )
  {
    v73 = sub_1EAA840(a1: v19, a2: v20, a3: v91, a4: v23, a5: v6);
    LODWORD(v6) = v88;
    v23 = v89;
    v25 = v91;
  }
  else
  {
    v25 = v91;
    *(_QWORD *)(v9 + 40) = v19;
    *(_QWORD *)v21 = v25;
    *(_DWORD *)(v21 + 8) = v6;
    *(_DWORD *)(v21 + 12) = 0;
    if ( v24 - 16 >= 0x800 )
    {
      memset((void *)(v21 + 16), 0, v24 - 16);
      v19 = v21 + v24;
      v23 = v89;
    }
    else
    {
      for ( j = 16; v24 > j; j += 8LL )
        *(_QWORD *)(v21 + j) = 0;
    }
    v73 = v21;
  }
  LODWORD(v7) = v96;
  v87 = v77[2];
  v86 = (__int16)(v96 - v93);
  v27 = v87 + 2 * v86;
  v85 = v27;
  if ( v27 < 0 )
  {
LABEL_97:
    sub_2770E80(a1: v19, a2: v25, a3: v85, a4: v23, a5: v95);
    goto LABEL_98;
  }
  v84 = v96 - v93;
  v28 = *(_DWORD **)(v9 + 40);
  v29 = (4LL * (unsigned int)v27 + 19) & 0x7FFFFFFF8LL;
  if ( v29 >= 0x20000 || (unsigned __int64)v28 + v29 > *(_QWORD *)(v9 + 32) )
  {
    v28 = (_DWORD *)sub_1EAA840(a1: (__int64)v28, a2: v25, a3: v91, a4: v23, a5: v85);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = (char *)v28 + v29;
    *(_QWORD *)v28 = v25;
    v28[2] = v27;
    v28[3] = 0;
    if ( v29 - 16 >= 0x800 )
    {
      memset(v28 + 4, 0, v29 - 16);
      v23 = v89;
    }
    else
    {
      for ( k = 16; v29 > k; k += 8LL )
        *(_QWORD *)&v28[k / 4] = 0;
    }
  }
  v72 = v28;
  sub_1EB4960(a1: 0, a2: v87, a3: v77, a4: v23, a5: 0, a6: v28, a7: v71);
  if ( v96 == 0 )
  {
    v95 = 0;
    v59 = 0;
    goto LABEL_72;
  }
  v35 = v90;
  LODWORD(v6) = *(_DWORD *)(v76 + 12);
  v92 = v6;
  LODWORD(v7) = HIBYTE(v90);
  v83 = HIBYTE(v90);
  if ( (int)v6 >= 0x10000 )
  {
    if ( v99 != 0 )
    {
      v36 = v75;
      if ( v75 == v8 )
      {
LABEL_103:
        sub_2771080();
        goto LABEL_104;
      }
      if ( *(_DWORD *)(v75 + 8) == 0 )
      {
LABEL_105:
        sub_2771220(a1: v36, a2: v33, a3: 0, a4: v35, a5: 0);
LABEL_106:
        sub_2771220(a1, a2, a3: (unsigned int)a4, a4, a5: v96, a6);
LABEL_107:
        v74 = v11;
        sub_2771220(a1, a2: v13, a3: (unsigned int)v6, a4: v15, a5: v96);
LABEL_108:
        sub_2771220(a1: v32, a2: v33, a3: v81, a4: v31, a5: v96, a6: v44);
LABEL_109:
        sub_2771220(a1, a2: v13, a3: (unsigned int)v7, a4: v11, a5: (unsigned int)v93);
LABEL_110:
        sub_2771220(a1: v32, a2: v46, a3: v50, a4: v31, a5: v85);
LABEL_111:
        sub_2771220(a1: v56, a2: v33, a3: (unsigned int)v57, a4: v57, a5: (unsigned int)v6);
LABEL_112:
        sub_2771220(a1: v51, a2: v33, a3: v52, a4: v31, a5: v49);
LABEL_113:
        sub_2771080(a1: v32, a2: v46, a3: v45, a4: v31, a5: v34, a6: v44);
LABEL_114:
        v47 = sub_2771080(a1: v53, a2: v46, a3: v45, a4: v31, a5: v34, a6: v44);
LABEL_115:
        v54 = sub_2771220(a1: v32, a2: v46, a3: v81, a4: v31, a5: v47, a6: v44);
LABEL_116:
        sub_2771220(a1: v72, a2: v46, a3: v81, a4: v81, a5: v54, a6: v53);
        JUMPOUT(0x181EC1CA8LL);
      }
      v37 = v98 + v97 * *(int *)(v75 + 12);
      v38 = sub_4F9CAA0(a1: v75, a2: v37, a3: v37);
    }
    else
    {
      v38 = -1159918307;
    }
    v39 = v85;
    if ( v85 > v87 )
    {
      LODWORD(v6) = v92;
      v40 = v72;
      v41 = v87;
      v72[v87 + 3] = v92;
      v42 = v41 + 1;
      if ( v39 > (unsigned int)v42 )
      {
        v40[v42 + 3] = v38;
        v43 = 1;
        LODWORD(v7) = v73;
        LODWORD(v6) = v88;
        goto LABEL_51;
      }
      goto LABEL_101;
    }
    goto LABEL_99;
  }
  if ( v99 != 0 )
  {
    v66 = v75;
    if ( v75 == v8 )
    {
LABEL_102:
      sub_2771080();
      goto LABEL_103;
    }
    if ( *(_DWORD *)(v75 + 8) == 0 )
    {
LABEL_104:
      sub_2771220(a1: v66, a2: v33, a3: 0, a4: v35, a5: 0);
      goto LABEL_105;
    }
    v67 = *(int *)(v75 + 12) * v97 + v98;
    v68 = sub_4F9CAA0(a1: v75, a2: v67, a3: v67);
  }
  else
  {
    v68 = -32768;
  }
  v82 = v68;
  sub_5EFF100(a1: v32, a2: v33, a3: (__int16)v68 == v68, a4: v35, a5: v8 + 369712832);
  v70 = (v92 >> v83) & v89;
  LODWORD(v6) = v88;
  if ( v88 <= (unsigned int)v70 )
    goto LABEL_100;
  LODWORD(v7) = v73;
  *(_DWORD *)(v73 + 4 * v70 + 12) = v92 | (v82 << 16);
  v43 = 0;
LABEL_51:
  v82 = v43;
  v31 = 1;
  while ( 1 )
  {
    v32 = v75;
    v44 = v76;
    v45 = v99;
    v81 = v31;
    if ( (int)v96 <= (int)v31 )
      break;
    if ( v96 <= (unsigned int)v31 )
      goto LABEL_108;
    v46 = *(unsigned int *)(v76 + 4 * v31 + 12);
    v80 = v46;
    LODWORD(v6) = v31 + 1;
    if ( (int)v46 < 0x10000 )
    {
      v79 = v31 + 1;
      if ( v99 != 0 )
      {
        v53 = v75;
        if ( v75 == v8 )
          goto LABEL_114;
        v54 = *(_DWORD *)(v75 + 8);
        if ( v54 <= v81 )
          goto LABEL_116;
        v55 = sub_4F9CAA0(
                a1: v75,
                a2: v46,
                a3: v98 + v97 * *(int *)(v75 + 4LL * v81 + 12),
                a4: v81,
                a5: v34,
                a6: v76);
      }
      else
      {
        v55 = -32768;
      }
      v78 = v55;
      sub_5EFF100(a1: v32, a2: v46, a3: (__int16)v55 == v55, a4: v31, a5: v8 + 369712832);
      v33 = v80 >> v83;
      v57 = (unsigned int)v33 & v89;
      LODWORD(v6) = v88;
      if ( v88 <= (unsigned int)v57 )
        goto LABEL_111;
      v58 = v79;
      LODWORD(v7) = v73;
      *(_DWORD *)(v73 + 4 * v57 + 12) = v80 | (v78 << 16);
      v31 = v58;
    }
    else
    {
      if ( v99 != 0 )
      {
        if ( v75 == v8 )
          goto LABEL_113;
        v47 = *(_DWORD *)(v75 + 8);
        if ( v47 <= (unsigned int)v31 )
          goto LABEL_115;
        v79 = v31 + 1;
        LODWORD(v6) = v98 + v97 * *(_DWORD *)(v75 + 4 * v31 + 12);
        v48 = sub_4F9CAA0(
                a1: v75,
                a2: v98,
                a3: v98 + v97 * *(int *)(v75 + 4 * v31 + 12),
                a4: v31,
                a5: v34,
                a6: v76);
      }
      else
      {
        v79 = v31 + 1;
        v48 = -1159918307;
      }
      v49 = v85;
      v50 = v87 + 2 * v82;
      if ( v85 <= (unsigned int)v50 )
        goto LABEL_110;
      v33 = v80;
      v51 = v72;
      v72[v50 + 3] = v80;
      v52 = (unsigned int)(v50 + 1);
      if ( v49 <= (unsigned int)v52 )
        goto LABEL_112;
      v51[v52 + 3] = v48;
      ++v82;
      v31 = v79;
    }
  }
  v95 = v31;
  v59 = v82;
LABEL_72:
  v88 = v59;
  sub_5EFF100(a1: v32, a2: v33, a3: v59 == v86, a4: v31, a5: v8 + 371377472);
  result = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v9 + 32) )
  {
    result = sub_1EAA920(a1: v60, a2: v61, a3: 40467384);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = result + 32;
    *(_DWORD *)result = 40467384;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
  }
  v63 = v72;
  v64 = v73;
  v65 = v90;
  *(_WORD *)(result + 16) = v84;
  *(_DWORD *)(result + 12) = v65;
  *(_DWORD *)(result + 8) = (unsigned __int64)(v64 - v8) >> 3;
  *(_DWORD *)(result + 4) = ((unsigned __int64)v63 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v63, a2: v61, a3: v88, a4: v65, a5: v95);
  return result;
}
