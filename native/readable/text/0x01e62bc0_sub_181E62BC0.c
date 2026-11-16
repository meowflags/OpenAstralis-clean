// sub_1E62BC0
// rva 0x01e62bc0  size 2036  section .text  group text
// window base 0x181e62bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1E62BC0(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ebp
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *result; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  _DWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rbp
  char v35; // bp
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(__int64, _QWORD, _DWORD *); // rsi
  __int64 v41; // rdi
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ebx
  int v49; // ebp
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned __int64 i; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 j; // rdx
  _DWORD *v57; // rbx
  _DWORD *v58; // rsi
  unsigned __int64 k; // rsi
  __int64 v60; // rdi
  unsigned int v61; // r8d
  __int64 v62; // r10
  __int64 v63; // r11
  __int64 v64; // r12
  __int64 v65; // rsi
  bool v66; // r9
  __int64 v67; // rcx
  int v68; // ebp
  __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+10h] [rbp-98h]
  __int64 v74; // [rsp+18h] [rbp-90h]
  int v75; // [rsp+24h] [rbp-84h]
  __int64 v76; // [rsp+28h] [rbp-80h]
  __int64 v77; // [rsp+30h] [rbp-78h]
  __int64 v78; // [rsp+38h] [rbp-70h]
  int v79; // [rsp+40h] [rbp-68h]
  unsigned int v80; // [rsp+44h] [rbp-64h]
  _DWORD *v81; // [rsp+48h] [rbp-60h]
  __int64 v82; // [rsp+50h] [rbp-58h]
  __int64 v83; // [rsp+58h] [rbp-50h]
  _DWORD *v84; // [rsp+60h] [rbp-48h]
  unsigned int v85; // [rsp+68h] [rbp-40h]
  unsigned int v86; // [rsp+6Ch] [rbp-3Ch]
  BOOL v87; // [rsp+70h] [rbp-38h]
  int v88; // [rsp+74h] [rbp-34h]
  int v89; // [rsp+78h] [rbp-30h]
  unsigned int v90; // [rsp+7Ch] [rbp-2Ch]
  __int64 v91; // [rsp+80h] [rbp-28h]
  int v92; // [rsp+8Ch] [rbp-1Ch]
  int v93; // [rsp+90h] [rbp-18h]
  int v94; // [rsp+94h] [rbp-14h]
  int v95; // [rsp+98h] [rbp-10h]
  unsigned int v96; // [rsp+9Ch] [rbp-Ch]
  unsigned int v97; // [rsp+A0h] [rbp-8h]
  unsigned int v98; // [rsp+A4h] [rbp-4h]

  v84 = a3;
  v83 = a5;
  v98 = a6;
  if ( (unsigned __int64)&v71 <= *(_QWORD *)(v9 + 8) )
  {
    v97 = a2;
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v97 = a2;
    v10 = *a3 >> 3;
    v11 = v8[2 * v10 + 11];
    v82 = (__int64)&v8[2 * v8[2 * v10 + 5]];
    v96 = v11 & (0x749u >> SHIBYTE(v11));
    v12 = *(_DWORD *)(v82 + 4LL * v96 + 12);
    v81 = &v8[2 * v10];
    v13 = ((__int64 (*)(void))(v7 + *(_QWORD *)((char *)v81 + HIWORD(v12) + 80)))();
    v95 = v13;
    if ( (v13 & 0x8000000) != 0 )
      JUMPOUT(0x303C85C6ALL);
    if ( (v13 & 0x40000000) != 0 )
      JUMPOUT(0x303C85C7DLL);
    if ( v13 < 0 )
      JUMPOUT(0x303C85C90LL);
    v94 = 0;
    v93 = 0;
    v92 = 0;
    v16 = sub_1E61A20(a1: v14, a2: v15, a3: (__int64)v84, a4: 0, a5: v97, a6: 0);
    v80 = (unsigned __int64)(v16 - (_QWORD)v8) >> 3;
    v6 = (unsigned __int64)(v83 - (_QWORD)v8) >> 3;
    v79 = v6;
    if ( (v95 & 0x40000000) == 0 )
    {
      v91 = 34614240;
      v78 = v16;
      v90 = v95 & 0x7FFFFFFF;
      if ( (v95 & 0x20000000) != 0 )
        JUMPOUT(0x303C85DA6LL);
      if ( (v95 & 0x10000000) != 0 )
        JUMPOUT(0x303C85DB9LL);
      v89 = 0;
      v88 = 0;
      v28 = sub_1E633C0(a1: v17, a2: v18, a3: v84, a4: v95 & 0x7FFFFFFF, a5: v97);
      v77 = v28;
      if ( v95 < 0 || (v95 & 0x20000000) != 0 )
      {
        v76 = sub_1E63720(a1: v30, a2: v31, a3: v84, a4: v29, a5: v97);
        v28 = v77;
      }
      else
      {
        v76 = (__int64)v8;
      }
      v6 = (unsigned __int64)(v28 - (_QWORD)v8) >> 3;
      v75 = v6;
      if ( v95 < 0 )
      {
        v32 = v84;
        v33 = *((_QWORD *)v84 + 1);
        v34 = (unsigned int)v84[1];
        if ( (_DWORD)v34 != 0 )
          v35 = *((_BYTE *)&v8[2 * v34 + 3] + v33);
        else
          v35 = *(_BYTE *)(v33 + 12);
        *((_QWORD *)v84 + 1) = v33 + 1;
        v87 = v35 == 1;
        v74 = sub_1E63580(a1: v30, a2: v31, a3: v32, a4: v29, a5: v97);
        v73 = sub_1E617E0(a1: v36, a2: v37, a3: v84);
        v72 = sub_1E617E0(a1: v38, a2: v39, a3: v84);
        v40 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v7
                                                                + *(_QWORD *)((char *)v81
                                                                            + HIWORD(*(_DWORD *)(v82 + 4LL * v96 + 12))
                                                                            + 40));
        v42 = v40(a1: v41, a2: v40, a3: v84);
        v45 = v42;
        v86 = v42;
        if ( (v90 & 8) != 0 )
          v85 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                    + *(_QWORD *)((char *)v81
                                                                                + HIWORD(*(_DWORD *)(v82 + 4LL * v96 + 12))
                                                                                + 40)))(
                  a1: v43,
                  a2: v44,
                  a3: v84);
        else
          v85 = 0xFFFFFFFD;
        v46 = sub_1E63580(a1: v43, a2: v44, a3: v84, a4: v45, a5: v97);
        if ( v98 != 0 )
        {
          if ( (v95 & 1) != 0 )
          {
            v47 = v90;
            v48 = v75;
            v49 = v79;
            v50 = v80;
          }
          else
          {
            v48 = v75;
            v49 = v79;
            v50 = v80;
            v47 = v90 | 0x10000000;
          }
        }
        else
        {
          v47 = v90;
          v48 = v75;
          v49 = v79;
          v50 = v80;
        }
        v90 = v47;
        v51 = *(_QWORD *)(v9 + 40);
        v52 = v51 + 88;
        if ( (unsigned __int64)(v51 + 88) > *(_QWORD *)(v9 + 32) )
        {
          v82 = v46;
          v51 = sub_1EAA920(a1: v52, a2: v50, a3: v91);
          v47 = v90;
          v46 = v82;
          v60 = v85;
          v61 = v86;
          v65 = v72;
          v62 = v73;
          v63 = v74;
          v66 = v87;
          v48 = v75;
          v64 = v76;
          v49 = v79;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v52;
          *(_DWORD *)v51 = 34614240;
          *(_DWORD *)(v51 + 4) = 0;
          for ( i = 8; i < 0x58; i += 8LL )
            *(_QWORD *)(v51 + i) = 0;
          v60 = v85;
          v61 = v86;
          v62 = v73;
          v63 = v74;
          v64 = v76;
          v65 = v72;
          v66 = v87;
        }
        *(_DWORD *)(v51 + 76) = v60;
        *(_DWORD *)(v51 + 72) = v61;
        *(_DWORD *)(v51 + 68) = v47;
        *(_DWORD *)(v51 + 64) = -1;
        *(_DWORD *)(v51 + 60) = (unsigned __int64)(v46 - (_QWORD)v8) >> 3;
        *(_DWORD *)(v51 + 36) = (unsigned __int64)(v62 - (_QWORD)v8) >> 3;
        *(_DWORD *)(v51 + 32) = (unsigned __int64)(v63 - (_QWORD)v8) >> 3;
        *(_DWORD *)(v51 + 28) = (unsigned __int64)(v64 - (_QWORD)v8) >> 3;
        *(_DWORD *)(v51 + 24) = v48;
        *(_DWORD *)(v51 + 20) = v49;
        *(_BYTE *)(v51 + 17) = v66;
        *(_DWORD *)(v51 + 12) = (unsigned __int64)(v65 - (_QWORD)v8) >> 3;
        *(_DWORD *)(v51 + 8) = v80;
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280(a1: v60, a2: v90, a3: v51, a4: v62, a5: v63, a6: v46);
        return (_DWORD *)v51;
      }
      if ( (v95 & 0x20000000) == 0 && (v95 & 0x10000000) == 0 )
      {
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280(a1: v30, a2: v31, a3: v84);
        return v8;
      }
LABEL_35:
      if ( (v95 & 0x10000000) != 0 )
        v54 = (__int64)(v8 + 8521374);
      else
        v54 = v76;
      v55 = v98;
      result = *(_DWORD **)(v9 + 40);
      if ( (unsigned __int64)(result + 22) > *(_QWORD *)(v9 + 32) )
      {
        v74 = v54;
        result = (_DWORD *)sub_1EAA920(a1: v30, a2: v31, a3: v91, a4: v29, a5: v54, a6: v98);
        v54 = v74;
        LODWORD(v6) = v75;
        v67 = v90;
        v68 = v79;
        v69 = v80;
        v55 = v98;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = result + 22;
        *result = 34614240;
        result[1] = 0;
        for ( j = 2; j < 22; j += 2LL )
          *(_QWORD *)&result[j] = 0;
        v67 = v90;
        v68 = v79;
        v69 = v80;
      }
      result[19] = -3;
      result[17] = v67;
      result[16] = -1;
      v70 = (unsigned __int64)(v54 - (_QWORD)v8) >> 3;
      result[7] = v70;
      result[6] = v6;
      result[5] = v68;
      result[2] = v69;
      if ( *(int *)(v9 + 16) <= 0 )
        return (_DWORD *)sub_277F280(a1: v30, a2: v69, a3: v70, a4: v67, a5: v54, a6: v55);
      return result;
    }
    v91 = 34614240;
    v78 = v16;
    v19 = (_DWORD *)sub_1E63480(a1: v17, a2: v18, a3: v84, a4: (unsigned __int64)(v16 - (_QWORD)v8) >> 3, a5: v97);
    if ( v19 != v8 )
    {
      v20 = *v19 >> 3;
      if ( (_DWORD)v20 != 4326780 )
        goto LABEL_74;
    }
    v24 = v79;
    v25 = v80;
    if ( v98 == 0 )
    {
LABEL_10:
      if ( v95 >= 0 )
        v26 = v8;
      else
        v26 = v19;
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v76 = (__int64)v19;
        sub_277F280(a1: v22, a2: v23, a3: v20, a4: v26);
      }
      return v26;
    }
    if ( v19 == v8 )
      goto LABEL_75;
    v20 = v19[17] & 0x7FFFFFF;
    if ( (v19[17] & 1) != 0 )
      goto LABEL_10;
    v57 = *(_DWORD **)(v9 + 40);
    v58 = v57 + 22;
    if ( (unsigned __int64)(v57 + 22) > *(_QWORD *)(v9 + 32) )
    {
      v88 = v19[17] & 0x7FFFFFF;
      v76 = (__int64)v19;
      v57 = (_DWORD *)sub_1EAA920(a1: v22, a2: v58, a3: v91, a4: v80);
      LODWORD(v20) = v88;
      v19 = (_DWORD *)v76;
      v24 = v79;
      LODWORD(v25) = v80;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v58;
      *v57 = 34614240;
      v57[1] = 0;
      for ( k = 2; k < 22; k += 2LL )
        *(_QWORD *)&v57[k] = 0;
    }
    v57[19] = -3;
    v57[17] = v20 + 0x10000000;
    v57[16] = -1;
    v57[7] = 4260687;
    v57[6] = v19[6];
    v57[5] = v24;
    v57[2] = v25;
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v76 = (__int64)v19;
      sub_277F280();
    }
    return v57;
  }
  v97 = a2;
  v19 = (_DWORD *)sub_2771080();
LABEL_74:
  sub_276FC00(a1: v22, a2: v23, a3: v19, a4: v21, a5: v8 + 8653560);
LABEL_75:
  sub_2771080(a1: v22, a2: v23, a3: v20, a4: v25);
  goto LABEL_35;
}
