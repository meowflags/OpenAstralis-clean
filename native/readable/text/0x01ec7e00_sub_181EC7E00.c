// sub_1EC7E00
// rva 0x01ec7e00  size 461  section .text  group text
// window base 0x181ec7e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC7E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *result; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rbp
  __int64 v42; // r9
  __int64 v43; // rsi
  BOOL v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rdx
  unsigned int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  _DWORD *v56; // r9
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rdx
  char v70; // [rsp-10h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+0h] [rbp-B0h]
  __int64 v72; // [rsp+8h] [rbp-A8h]
  __int64 v73; // [rsp+10h] [rbp-A0h]
  __int64 v74; // [rsp+18h] [rbp-98h]
  _DWORD *v75; // [rsp+20h] [rbp-90h]
  __int64 v76; // [rsp+28h] [rbp-88h]
  __int64 v77; // [rsp+30h] [rbp-80h]
  __int64 v78; // [rsp+38h] [rbp-78h]
  __int64 v79; // [rsp+40h] [rbp-70h]
  int v80; // [rsp+4Ch] [rbp-64h]
  unsigned int v81; // [rsp+50h] [rbp-60h]
  unsigned int v82; // [rsp+54h] [rbp-5Ch]
  __int64 v83; // [rsp+58h] [rbp-58h]
  unsigned int v84; // [rsp+64h] [rbp-4Ch]
  unsigned int v85; // [rsp+68h] [rbp-48h]
  unsigned int v86; // [rsp+6Ch] [rbp-44h]
  __int64 v87; // [rsp+70h] [rbp-40h]
  char v88; // [rsp+78h] [rbp-38h] BYREF
  __int64 v89; // [rsp+88h] [rbp-28h]
  unsigned int v90; // [rsp+94h] [rbp-1Ch]
  __int64 v91; // [rsp+98h] [rbp-18h]
  __int64 v92; // [rsp+A0h] [rbp-10h]
  unsigned int v93; // [rsp+A8h] [rbp-8h]
  unsigned int v94; // [rsp+ACh] [rbp-4h]

  v92 = a3;
  if ( (unsigned __int64)&v88 <= *(_QWORD *)(v8 + 8) )
  {
    v94 = a1;
    v93 = a6;
    v91 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v88);
  }
  else if ( (_DWORD *)a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 28);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_19:
      v94 = a1;
      v93 = a6;
      v91 = a5;
      sub_2771080();
      goto LABEL_20;
    }
    v10 = (unsigned int)v7[2 * v9 + 11];
    if ( (_DWORD)v10 == 0 )
    {
LABEL_20:
      v94 = a1;
      v93 = a6;
      v91 = a5;
      sub_2771080();
      goto LABEL_21;
    }
    v94 = a1;
    v93 = a6;
    v91 = a5;
    sub_15ABC60(a1, a2, a3: &v7[2 * v10]);
    v13 = *(unsigned int *)(v92 + 4);
    if ( (_DWORD)v13 == 0 )
    {
LABEL_21:
      result = (_DWORD *)sub_2771080();
      goto LABEL_22;
    }
    v14 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v90 = *(_DWORD *)(v92 + 4);
      v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34161576);
      v13 = v90;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v14 + 24;
      *(_DWORD *)v14 = 34161576;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
    }
    *(_DWORD *)(v14 + 8) = 47045786;
    v15 = &v7[2 * v7[2 * v13 + 9]];
    v89 = v14;
    sub_1EC8B80(a1: v89, a2: v12, a3: v91, a4: v89, a5: v93, a6: v15);
    v19 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v19 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v20 = sub_1EAA840(a1: v17, a2: v18, a3: 34601856, a4: v16, a5: 0);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v19 + 16;
      *(_QWORD *)v19 = 34601856;
      *(_DWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 12) = 0;
      v20 = v19;
    }
    result = (_DWORD *)sub_578E980(a1: v17, a2: v18, a3: v89, a4: v16, a5: v20);
    if ( result == v7 || *result >> 3 == 4325232 )
    {
      if ( *(int *)(v8 + 16) <= 0 )
        return (_DWORD *)sub_277F280();
      return result;
    }
LABEL_22:
    sub_276FC00(a1: v94, a2: v22, a3: result, a4: v92, a5: v7 + 8650464, a6: v93);
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
    v79 = v23;
    v78 = v27;
    v86 = v28;
    if ( (unsigned __int64)&v70 <= *(_QWORD *)(v8 + 8) )
    {
      v85 = v25;
      sub_1EB84E0(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27, a6: v28, a7: v70);
    }
    else if ( (_DWORD *)v27 != v7 )
    {
      v29 = *(unsigned int *)(v27 + 28);
      if ( (_DWORD)v29 == 0 )
      {
LABEL_78:
        v85 = v25;
        sub_2771080();
        goto LABEL_79;
      }
      v30 = (unsigned int)v7[2 * v29 + 11];
      if ( (_DWORD)v30 == 0 )
      {
LABEL_79:
        v85 = v25;
        sub_2771080();
        goto LABEL_80;
      }
      v85 = v25;
      sub_15ABC60(a1: v25, a2: v26, a3: &v7[2 * v30]);
      v33 = *(unsigned int *)(v79 + 4);
      if ( (_DWORD)v33 == 0 )
      {
LABEL_80:
        sub_2771080();
        goto LABEL_81;
      }
      v34 = sub_28A1320(a1: v31, a2: v32, a3: &v7[2 * v33]);
      v38 = (__int64)(v7 + 94091572);
      if ( (_DWORD *)v34 == v7 )
      {
LABEL_81:
        result = (_DWORD *)sub_2771080(a1: v36, a2: v37, a3: v35, a4: v38);
LABEL_82:
        sub_276FC00(a1: v62, a2: v63, a3: result, a4: v82, a5: v7 + 10113060);
        goto LABEL_83;
      }
      v77 = v34;
      v84 = *(_DWORD *)(v34 + 8);
      v39 = 34161576;
      if ( v84 == 0 )
      {
        v58 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v58 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v83 = 34161576;
          v58 = sub_1EAA920(a1: v36, a2: v37, a3: 34161576);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v58 + 24;
          *(_DWORD *)v58 = 34161576;
          *(_DWORD *)(v58 + 4) = 0;
          *(_QWORD *)(v58 + 8) = 0;
          *(_QWORD *)(v58 + 16) = 0;
        }
        *(_DWORD *)(v58 + 8) = 47045786;
        v82 = 0;
        goto LABEL_53;
      }
      v40 = *(unsigned int *)(v34 + 12);
      v41 = (__int64)&v7[2 * v40];
      if ( (_DWORD)v40 != 0 )
      {
        v42 = (unsigned int)v7[2 * v40 + 1];
        v43 = (unsigned int)v7[2 * v40 + 3];
        v36 = v7[2 * v40 + 16] & 0x1DFF;
        v81 = v36;
        if ( (v36 & 8) != 0 )
          v44 = (_DWORD)v43 == 47082448 && v42 == 47082451;
        else
          v44 = false;
        v80 = v44;
        v37 = (__int64)&v7[2 * v43];
        v76 = v37;
        v75 = &v7[2 * v42];
        if ( v44 )
        {
          v45 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v45 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v73 = v41;
            v83 = 34161576;
            v45 = sub_1EAA920(a1: v36, a2: v37, a3: 34161576);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v45 + 24;
            *(_DWORD *)v45 = 34161576;
            *(_DWORD *)(v45 + 4) = 0;
            *(_QWORD *)(v45 + 8) = 0;
            *(_QWORD *)(v45 + 16) = 0;
          }
          *(_DWORD *)(v45 + 8) = 47045786;
          v72 = v45;
        }
        else if ( v86 == 0 || (v36 & 1) != 0 )
        {
          v83 = 34161576;
          v74 = (__int64)(v7 + 94091572);
          v73 = v41;
          v64 = sub_1EC7520(a1: v36, a2: v37, a3: v79, a4: v38, a5: v78, a6: v41);
          v67 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v67 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v71 = v64;
            v67 = sub_1EAA920(a1: v65, a2: v66, a3: v83);
            v64 = v71;
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v67 + 24;
            *(_DWORD *)v67 = 34161576;
            *(_DWORD *)(v67 + 4) = 0;
            *(_QWORD *)(v67 + 8) = 0;
            *(_QWORD *)(v67 + 16) = 0;
          }
          *(_DWORD *)(v67 + 8) = 47045786;
          *(_DWORD *)(v67 + 4) = 1;
          v68 = v74;
          v71 = v64;
          v74 = v67;
          sub_57881C0(a1: 0, a2: v66, a3: v67, a4: v67, a5: v64, a6: v68);
          v87 = v6;
          v72 = v74;
        }
        else
        {
          v73 = v41;
          v83 = 34161576;
          v69 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v69 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v69 = sub_1EAA920(a1: v36, a2: v37, a3: v83);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v69 + 24;
            *(_DWORD *)v69 = 34161576;
            *(_DWORD *)(v69 + 4) = 0;
            *(_QWORD *)(v69 + 8) = 0;
            *(_QWORD *)(v69 + 16) = 0;
          }
          *(_DWORD *)(v69 + 8) = 47045786;
          v72 = v69;
        }
        v46 = 1;
        v47 = v84;
        v48 = v77;
        v49 = v86;
        v50 = v78;
        v51 = v79;
        while ( v47 > (int)v46 )
        {
          if ( v47 <= (unsigned int)v46 )
            goto LABEL_84;
          v37 = *(unsigned int *)(v48 + 4 * v46 + 12);
          v36 = (__int64)&v7[2 * v37];
          if ( (_DWORD)v37 == 0 )
            goto LABEL_85;
          v52 = v46 + 1;
          if ( (v7[2 * v37 + 16] & 8) != 0 && v7[2 * v37 + 3] == 47082448 && v7[2 * v37 + 1] == 47082451 )
          {
            v46 = v52;
          }
          else if ( (_DWORD)v49 == 0 || (v7[2 * v37 + 16] & 1) != 0 )
          {
            v81 = v46 + 1;
            v80 = v46;
            v76 = (__int64)&v7[2 * v37];
            v53 = sub_1EC7520(a1: v36, a2: v51, a3: v51, a4: v48, a5: v50, a6: v36);
            v54 = v72;
            ++*(_DWORD *)(v72 + 4);
            v55 = *(unsigned int *)(v54 + 12);
            v56 = &v7[2 * *(unsigned int *)(v54 + 8)];
            v73 = v53;
            sub_57881C0(a1: v55, a2: v57, a3: v54, a4: v54, a5: v53, a6: v56);
            v46 = v81;
            v47 = v84;
            v48 = v77;
            v49 = v86;
            v50 = v78;
            v51 = v79;
          }
          else
          {
            v46 = v52;
          }
        }
        v82 = v46;
        v58 = v72;
LABEL_53:
        v59 = *(_QWORD *)(v8 + 40);
        v60 = v59 + 16;
        if ( (unsigned __int64)(v59 + 16) > *(_QWORD *)(v8 + 32) )
        {
          v73 = v58;
          v61 = sub_1EAA840(a1: v36, a2: v37, a3: 40452240, a4: v60, a5: 0);
          v58 = v73;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v60;
          *(_QWORD *)v59 = 40452240;
          *(_DWORD *)(v59 + 8) = 0;
          *(_DWORD *)(v59 + 12) = 0;
          v61 = v59;
        }
        v73 = v58;
        result = (_DWORD *)sub_578E980(a1: v36, a2: v37, a3: v58, a4: v60, a5: v61);
        if ( result == v7 || *result >> 3 == 5056530 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
            return (_DWORD *)sub_277F280();
          return result;
        }
        goto LABEL_82;
      }
LABEL_83:
      LODWORD(v46) = sub_2771080(a1: v36, a2: v37, a3: v39, a4: v38);
LABEL_84:
      v80 = v46;
      sub_2771220(a1: v36, a2: v37, a3: (unsigned int)v46, a4: v48, a5: v84, a6: v49);
LABEL_85:
      sub_2771080(a1: v36, a2: v85, a3: v48, a4: v72, a5: v50, a6: v49);
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
      return (_DWORD *)sub_1EC8560();
    }
    v85 = v25;
    sub_2771080();
    goto LABEL_78;
  }
  v94 = a1;
  v93 = a6;
  sub_2771080();
  goto LABEL_19;
}
