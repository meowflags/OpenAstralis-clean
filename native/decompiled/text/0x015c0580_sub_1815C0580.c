// sub_1815C0580
// rva 0x015c0580  size 1085  section .text  group text
// window base 0x1815c0580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C0580(
        __int64 a1,
        __int64 a2,
        double *a3,
        __int64 a4,
        double *a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r13
  double *v10; // r14
  __int64 v11; // r15
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm3_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v17; // xmm6_8
  double v18; // xmm7_8
  double v19; // xmm8_8
  __int64 v20; // xmm9_8
  __int64 v21; // xmm10_8
  __int64 v22; // xmm11_8
  double v23; // xmm2_8
  __int64 result; // rax
  double *v25; // rdx
  int v26; // eax
  double v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // eax
  double v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rsi
  int v43; // eax
  double v44; // xmm0_8
  double v45; // xmm1_8
  double v46; // xmm2_8
  double v47; // xmm3_8
  __int64 v48; // rsi
  double v49; // xmm4_8
  double v50; // xmm5_8
  double v51; // rdi
  double v52; // xmm6_8
  double v53; // xmm7_8
  int v54; // ecx
  double v55; // xmm8_8
  double v56; // xmm9_8
  double v57; // xmm10_8
  double v58; // xmm11_8
  int v59; // edx
  int v60; // ecx
  int v61; // edi
  int v62; // esi
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // [rsp-10h] [rbp-120h] BYREF
  double *v66; // [rsp+0h] [rbp-110h]
  unsigned int v67; // [rsp+Ch] [rbp-104h]
  double v68; // [rsp+10h] [rbp-100h]
  double v69; // [rsp+18h] [rbp-F8h]
  double v70; // [rsp+20h] [rbp-F0h]
  double v71; // [rsp+28h] [rbp-E8h]
  double v72; // [rsp+30h] [rbp-E0h]
  double v73; // [rsp+38h] [rbp-D8h]
  int v74; // [rsp+44h] [rbp-CCh]
  int v75; // [rsp+48h] [rbp-C8h]
  unsigned int v76; // [rsp+4Ch] [rbp-C4h]
  int v77; // [rsp+50h] [rbp-C0h]
  int v78; // [rsp+54h] [rbp-BCh]
  double v79; // [rsp+58h] [rbp-B8h]
  double v80; // [rsp+60h] [rbp-B0h]
  int v81; // [rsp+6Ch] [rbp-A4h]
  double v82; // [rsp+70h] [rbp-A0h]
  double v83; // [rsp+78h] [rbp-98h]
  int v84; // [rsp+84h] [rbp-8Ch]
  double v85; // [rsp+88h] [rbp-88h]
  double v86; // [rsp+90h] [rbp-80h]
  __int64 v87; // [rsp+98h] [rbp-78h] BYREF
  double *v88; // [rsp+A0h] [rbp-70h]
  double *v89; // [rsp+A8h] [rbp-68h]
  double v90; // [rsp+B0h] [rbp-60h]
  double v91; // [rsp+B8h] [rbp-58h]
  double v92; // [rsp+C0h] [rbp-50h]
  double v93; // [rsp+C8h] [rbp-48h]
  double v94; // [rsp+D0h] [rbp-40h]
  double v95; // [rsp+D8h] [rbp-38h]
  double v96; // [rsp+E0h] [rbp-30h]
  double v97; // [rsp+E8h] [rbp-28h]
  __int64 v98; // [rsp+F0h] [rbp-20h]
  __int64 v99; // [rsp+F8h] [rbp-18h]
  __int64 v100; // [rsp+100h] [rbp-10h]
  double v101; // [rsp+108h] [rbp-8h]

  if ( (unsigned __int64)&v87 <= *(_QWORD *)(v11 + 8) )
  {
    v89 = a5;
    v88 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v10 )
  {
    if ( a5 != v10 )
    {
      v12 = a5[1];
      v13 = a3[1];
      if ( __builtin_isnan(v13) )
      {
        v14 = a3[1];
      }
      else if ( v12 < v13 )
      {
        v14 = a5[1];
      }
      else
      {
        v14 = a3[1];
      }
      v15 = a5[2];
      v16 = a3[2];
      if ( __builtin_isnan(v16) )
      {
        v17 = a3[2];
      }
      else if ( v15 < v16 )
      {
        v17 = a5[2];
      }
      else
      {
        v17 = a3[2];
      }
      v18 = a5[3];
      v19 = a3[3];
      if ( __builtin_isnan(v19) )
      {
        v20 = *((_QWORD *)a3 + 3);
      }
      else if ( v18 < v19 )
      {
        v20 = *((_QWORD *)a5 + 3);
      }
      else
      {
        v20 = *((_QWORD *)a3 + 3);
      }
      if ( __builtin_isnan(v13) )
      {
        v21 = *((_QWORD *)a3 + 1);
      }
      else if ( v13 < v12 )
      {
        v21 = *((_QWORD *)a5 + 1);
      }
      else
      {
        v21 = *((_QWORD *)a3 + 1);
      }
      if ( __builtin_isnan(v16) )
      {
        v22 = *((_QWORD *)a3 + 2);
      }
      else if ( v16 < v15 )
      {
        v22 = *((_QWORD *)a5 + 2);
      }
      else
      {
        v22 = *((_QWORD *)a3 + 2);
      }
      if ( __builtin_isnan(v19) )
      {
        v23 = a3[3];
      }
      else if ( v19 < v18 )
      {
        v23 = a5[3];
      }
      else
      {
        v23 = a3[3];
      }
      result = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(result + 64) > *(_QWORD *)(v11 + 32) )
      {
        v101 = v23;
        v100 = v22;
        v99 = v21;
        v98 = v20;
        v97 = v19;
        v96 = v18;
        v95 = v17;
        v94 = v16;
        v93 = v15;
        v92 = v14;
        v91 = v13;
        v90 = v12;
        v89 = a5;
        v88 = a3;
        result = MEMORY[0x181EAA920](a1, a2, a3: 35839968);
        v23 = v101;
        v22 = v100;
        v21 = v99;
        v20 = v98;
        v18 = v96;
        v17 = v95;
        v16 = v94;
        v15 = v93;
        v14 = v92;
        v13 = v91;
        v12 = v90;
        a5 = v89;
        a3 = v88;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = result + 64;
        *(_DWORD *)result = 35839968;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
        *(_QWORD *)(result + 16) = 0;
        *(_QWORD *)(result + 24) = 0;
        *(_QWORD *)(result + 32) = 0;
        *(_QWORD *)(result + 40) = 0;
        *(_QWORD *)(result + 48) = 0;
        *(_QWORD *)(result + 56) = 0;
      }
      *(double *)(result + 48) = v23;
      *(_QWORD *)(result + 40) = v22;
      *(_QWORD *)(result + 32) = v21;
      *(_QWORD *)(result + 24) = v20;
      *(double *)(result + 16) = v17;
      *(double *)(result + 8) = v14;
      if ( *(int *)(v11 + 16) <= 0 )
      {
        v89 = a5;
        v88 = a3;
        return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v23, a4: v14, a5: v15, a6: v16, a7: v17, a8: v18);
      }
      return result;
    }
LABEL_42:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    if ( (unsigned __int64)&v65 <= *(_QWORD *)(v11 + 8) )
    {
      v66 = v25;
      MEMORY[0x181EB84E0]();
    }
    else if ( v25 != v10 )
    {
      v67 = *(_DWORD *)v25 >> 3;
      *(_QWORD *)&v86 = v9 + *(_QWORD *)&v10[v67 + 33];
      v66 = v25;
      v26 = (*(__int64 (**)(void))&v86)();
      v27 = v10[v67 + 34];
      v85 = (double)v26;
      v84 = v26;
      *(_QWORD *)&v83 = v9 + *(_QWORD *)&v27;
      v30 = ((__int64 (__fastcall *)(__int64, __int64, double *))(v9 + *(_QWORD *)&v27))(a1: v28, a2: v29, a3: v66);
      v31 = v10[v67 + 35];
      v82 = (double)v30;
      v81 = v30;
      *(_QWORD *)&v80 = v9 + *(_QWORD *)&v31;
      v34 = ((__int64 (__fastcall *)(__int64, __int64, double *))(v9 + *(_QWORD *)&v31))(a1: v32, a2: v33, a3: v66);
      v79 = (double)v34;
      v78 = v34;
      v37 = (*(__int64 (__fastcall **)(__int64, __int64, double *))&v86)(a1: v35, a2: v36, a3: v66);
      v86 = (double)(v37 + 1);
      v77 = v37;
      v76 = v37 + 1;
      v40 = (*(__int64 (__fastcall **)(__int64, __int64, double *))&v83)(a1: v38, a2: v39, a3: v66);
      v83 = (double)(v40 + 1);
      v75 = v40;
      v74 = v40 + 1;
      v43 = (*(__int64 (__fastcall **)(__int64, __int64, double *))&v80)(a1: v41, a2: v42, a3: v66);
      if ( v84 != 0 )
      {
        v44 = v86;
      }
      else if ( v77 == -1 )
      {
        v44 = v86;
        if ( v86 == -0.0 )
        {
          v45 = -0.0;
          goto LABEL_48;
        }
      }
      else
      {
        v44 = v86;
      }
      if ( v84 > (int)v76 )
        v45 = v44;
      else
        v45 = v85;
LABEL_48:
      if ( v81 != 0 )
      {
        v46 = v83;
      }
      else if ( v75 == -1 )
      {
        v46 = v83;
        if ( v83 == -0.0 )
        {
          v47 = -0.0;
          goto LABEL_52;
        }
      }
      else
      {
        v46 = v83;
      }
      if ( v81 > v74 )
        v47 = v46;
      else
        v47 = v82;
LABEL_52:
      v48 = (unsigned int)(v43 + 1);
      v49 = (double)(int)v48;
      if ( v78 == 0 && v43 == -1 && v49 == -0.0 )
      {
        v50 = -0.0;
      }
      else if ( v78 > (int)v48 )
      {
        v50 = (double)(int)v48;
      }
      else
      {
        v50 = v79;
      }
      if ( v84 != 0 )
      {
        *(_QWORD *)&v51 = v76;
        v52 = v85;
      }
      else if ( v77 == -1 )
      {
        v52 = v85;
        v51 = v85;
        if ( v85 == -0.0 )
        {
          v53 = v44;
          goto LABEL_59;
        }
        *(_QWORD *)&v51 = v76;
      }
      else
      {
        *(_QWORD *)&v51 = v76;
        v52 = v85;
      }
      if ( SLODWORD(v51) > v84 )
        v53 = v44;
      else
        v53 = v52;
LABEL_59:
      if ( v81 != 0 )
      {
        v54 = v74;
        v55 = v82;
      }
      else if ( v75 == -1 )
      {
        v55 = v82;
        if ( v82 == -0.0 )
        {
          v56 = v46;
          goto LABEL_63;
        }
        v54 = v74;
      }
      else
      {
        v54 = v74;
        v55 = v82;
      }
      if ( v54 > v81 )
        v56 = v46;
      else
        v56 = v55;
LABEL_63:
      if ( v78 != 0 )
      {
        v57 = v79;
        goto LABEL_65;
      }
      if ( v43 != -1 )
      {
        v57 = v79;
        goto LABEL_65;
      }
      v57 = v79;
      if ( v79 != -0.0 )
      {
LABEL_65:
        if ( (int)v48 > v78 )
          v58 = (double)(int)v48;
        else
          v58 = v57;
        goto LABEL_67;
      }
      v58 = (double)(int)v48;
LABEL_67:
      result = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(result + 64) > *(_QWORD *)(v11 + 32) )
      {
        v80 = v58;
        v73 = v56;
        v72 = v53;
        v71 = v50;
        v70 = (double)(int)v48;
        v69 = v47;
        v68 = v45;
        result = MEMORY[0x181EAA920](a1: *(_QWORD *)&v51, a2: v48, a3: 35839968, a4: v44, a5: v45, a6: v46);
        v58 = v80;
        v56 = v73;
        v53 = v72;
        v50 = v71;
        v49 = v70;
        v47 = v69;
        v45 = v68;
        v46 = v83;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = result + 64;
        *(_DWORD *)result = 35839968;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
        *(_QWORD *)(result + 16) = 0;
        *(_QWORD *)(result + 24) = 0;
        *(_QWORD *)(result + 32) = 0;
        *(_QWORD *)(result + 40) = 0;
        *(_QWORD *)(result + 48) = 0;
        *(_QWORD *)(result + 56) = 0;
      }
      *(double *)(result + 48) = v58;
      *(double *)(result + 40) = v56;
      *(double *)(result + 32) = v53;
      *(double *)(result + 24) = v50;
      *(double *)(result + 16) = v47;
      *(double *)(result + 8) = v45;
      if ( *(int *)(v11 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v79, a2: v82, a3: v85, a4: v47, a5: v49, a6: v50, a7: v46);
      return result;
    }
    MEMORY[0x182771080]();
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
    return sub_1815C0EE0(a1: v61, a2: v62, a3: v59, a4: v60, a5: v63, a6: v64, a7, a8, a9);
  }
  v89 = a5;
  v88 = a3;
  MEMORY[0x182771080]();
  goto LABEL_42;
}
