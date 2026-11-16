// sub_5026D20
// rva 0x05026d20  size 2421  section .text  group text
// window base 0x185026d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5026D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  _DWORD *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64, _DWORD *); // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, __int64, _DWORD *); // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 result; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r9
  unsigned int v42; // ebp
  __int64 v43; // rdx
  __int64 v44; // rsi
  _DWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // rsi
  _DWORD *v53; // rdx
  __int64 v54; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD *v55; // [rsp+10h] [rbp-98h]
  _DWORD *v56; // [rsp+18h] [rbp-90h]
  _DWORD *v57; // [rsp+20h] [rbp-88h]
  _DWORD *v58; // [rsp+28h] [rbp-80h]
  _DWORD *v59; // [rsp+30h] [rbp-78h]
  unsigned int v60; // [rsp+3Ch] [rbp-6Ch]
  __int64 v61; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-60h]
  _DWORD *v63; // [rsp+50h] [rbp-58h]
  __int64 v64; // [rsp+58h] [rbp-50h]
  _DWORD *v65; // [rsp+60h] [rbp-48h]
  __int64 v66; // [rsp+68h] [rbp-40h]
  __int64 v67; // [rsp+70h] [rbp-38h]
  __int64 v68; // [rsp+78h] [rbp-30h]
  __int64 v69; // [rsp+80h] [rbp-28h]
  __int64 v70; // [rsp+88h] [rbp-20h]
  __int64 (__fastcall *v71)(__int64, __int64, _DWORD *); // [rsp+90h] [rbp-18h]
  unsigned int v72; // [rsp+98h] [rbp-10h]
  unsigned int v73; // [rsp+9Ch] [rbp-Ch]
  __int64 v74; // [rsp+A0h] [rbp-8h]

  v65 = a6;
  v74 = a1;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v10 + 8) )
    goto LABEL_43;
  if ( a5 == v9 )
  {
LABEL_44:
    v64 = a3;
    sub_2771080();
    goto LABEL_45;
  }
  v11 = (unsigned int)a5[1];
  if ( (_DWORD)v11 == 0 )
  {
LABEL_45:
    v63 = a5;
    v64 = a3;
    sub_2771080();
    goto LABEL_46;
  }
  v12 = (unsigned int)v9[2 * v11 + 2];
  v7 = (__int64)&v9[2 * v11];
  if ( a6 == v9 )
  {
LABEL_46:
    v62 = v7;
    v73 = v12;
    v63 = a5;
    v64 = a3;
    v46 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v46 + 48) > *(_QWORD *)(v10 + 32) )
    {
      v46 = sub_1EAA920(a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v46 + 48;
      *(_DWORD *)v46 = 34101256;
      *(_DWORD *)(v46 + 4) = 0;
      *(_QWORD *)(v46 + 8) = 0;
      *(_QWORD *)(v46 + 16) = 0;
      *(_QWORD *)(v46 + 24) = 0;
      *(_QWORD *)(v46 + 32) = 0;
      *(_QWORD *)(v46 + 40) = 0;
    }
    *(_DWORD *)(v46 + 20) = 46923644;
    *(_DWORD *)(v46 + 16) = v9[93585974];
    *(_DWORD *)(v46 + 12) = (unsigned __int64)(v46 - (_QWORD)v9) >> 3;
    v61 = v46;
    sub_503B9A0(a1, a2, a3: v46, a4: v12, a5: 0);
    v45 = (_DWORD *)v61;
    goto LABEL_35;
  }
  v73 = v9[2 * v11 + 2];
  v60 = v11;
  v63 = a5;
  v64 = a3;
  v62 = (__int64)&v9[2 * v11];
  v61 = sub_6006A40(a1, a2, a3: v62);
  v72 = v9[2 * v60 + 2];
  sub_6329C40(a1: v9, a2: v13, a3: 0, a4: v72, a5: v73, a6: v72);
  v16 = v65;
  v17 = *v65 >> 3;
  if ( SHIWORD(v9[2 * v17 + 15]) >= 2 )
    goto LABEL_7;
  do
  {
    sub_276FC00(a1: v74, a2: v15, a3: v16, a4: v61, a5: v9 + 10825804);
LABEL_7:
    ;
  }
  while ( v9[2 * v9[2 * v17 + 4] + 4] != 29520 );
  v60 = *v16 >> 3;
  v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)&v9[2 * v60 + 180]);
  v18 = v71(a1: v14, a2: v15, a3: v16);
  v19 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)&v9[2 * v60 + 122]);
  v70 = v18 + v74;
  v21 = v19(a1: v18 + v74, a2: v20, a3: v65);
  v7 = v73;
  v24 = v73 * *(_QWORD *)(v61 + 16);
  if ( *((_BYTE *)v65 + 16) != 0 )
  {
    v68 = 34081944;
    v47 = *(_QWORD *)(v10 + 40);
    v48 = v47 + 40;
    if ( (unsigned __int64)(v47 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v69 = v24;
      v66 = v21;
      v47 = sub_1EAA920(a1: v22, a2: v23, a3: v68);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v48;
      *(_DWORD *)v47 = 34081944;
      *(_DWORD *)(v47 + 4) = 0;
      *(_QWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = 0;
      *(_QWORD *)(v47 + 24) = 0;
      *(_QWORD *)(v47 + 32) = 0;
      v69 = v24;
    }
    *(_DWORD *)(v47 + 20) = 46923644;
    *(_DWORD *)(v47 + 16) = v9[93585974];
    *(_DWORD *)(v47 + 12) = (unsigned __int64)(v47 - (_QWORD)v9) >> 3;
    v59 = (_DWORD *)v47;
    sub_503B9A0(a1: v22, a2: v23, a3: v47, a4: v48, a5: 0);
    v49 = (unsigned __int64)v59;
    v59[2] = 46497204;
    if ( (*(_DWORD *)v49 & 2) != 0 )
    {
      v35 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v35) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v35) >> 9) + 0x38) = 0;
      v45 = (_DWORD *)v49;
    }
    else
    {
      v45 = (_DWORD *)v49;
    }
    goto LABEL_35;
  }
  v25 = *((_QWORD *)v65 + 1) - v24;
  if ( v24 < 1 )
  {
    v26 = v74;
    if ( v24 < 0 || v74 < 0 || v74 > v25 )
    {
      v69 = v73 * *(_QWORD *)(v61 + 16);
      v45 = (_DWORD *)sub_5FF2280(a1: v74, a2: v23, a3: v65, a4: v61, a5: v74, a6: v69);
      if ( v45 == v9 )
      {
        sub_2771080();
        JUMPOUT(0x185027695LL);
      }
      goto LABEL_35;
    }
  }
  else
  {
    v26 = v74;
    v27 = v25 + 1;
    if ( v74 < 0 || v27 <= v74 )
    {
      v69 = v73 * *(_QWORD *)(v61 + 16);
      v66 = v27;
      v45 = (_DWORD *)sub_632AEE0(a1: v74, a2: v23, a3: v65, a4: v61, a5: v74, a6: v27);
      if ( v45 != v9 )
        goto LABEL_35;
      v42 = v62;
      v7 = v64;
      result = sub_2771080(a1: v74, a2: v73, a3: v69, a4: v61, a5: v63, a6: v65);
      goto LABEL_55;
    }
  }
  v68 = 34081944;
  v67 = v73;
  v28 = (unsigned int)v65[1];
  v66 = *(_QWORD *)(v61 + 8);
  v29 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8 + *(_QWORD *)&v9[2 * v60 + 178]);
  v59 = &v9[2 * v28];
  v60 = v28;
  v58 = (_DWORD *)v29(a1: v26, a2: v28, a3: v65);
  v32 = v71(a1: v30, a2: v31, a3: v65);
  result = v74 + v32;
  v35 = v61;
  v7 = *(_QWORD *)(v61 + 16) * v67;
  v36 = v60;
  if ( v60 != 0 )
  {
    v37 = *(_QWORD *)&v9[2 * (v9[2 * v60] >> 3) + 40];
    if ( 16667008 - v8 == v37 )
    {
      v38 = (unsigned int)v9[2 * v60 + 2];
      if ( (_DWORD)v38 != 0 )
      {
        v39 = *(unsigned int *)(v10 + 72);
        if ( (_DWORD)v39 != 0 )
        {
          v40 = (unsigned int)v9[2 * v39 + 18];
          v41 = (__int64)((_DWORD)v40 != 0 ? &v9[2 * v40] : &v9[2 * v39]);
        }
        else
        {
          v41 = (__int64)v9;
        }
        if ( &v9[2 * v38] != (_DWORD *)v41 )
        {
          v67 *= *(_QWORD *)(v61 + 16);
          v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
          v45 = v9 + 94303058;
          goto LABEL_40;
        }
      }
      if ( (int)v9[2 * v60 + 3] < 0 )
      {
        v67 *= *(_QWORD *)(v61 + 16);
        v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
        v45 = v9 + 94303048;
        goto LABEL_40;
      }
    }
    else
    {
      v67 *= *(_QWORD *)(v61 + 16);
      v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
      ((void (__fastcall *)(__int64, _QWORD, _DWORD *))(v8 + v37))(a1: v33, a2: v60, a3: v59);
      v7 = v67;
      result = (__int64)v71;
      v35 = v61;
    }
  }
  v42 = v9[93585974];
  if ( v7 < 0 )
  {
LABEL_55:
    v67 = v7;
    v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
    v50 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v50 + 40) <= *(_QWORD *)(v10 + 32) )
      goto LABEL_65;
    goto LABEL_77;
  }
  if ( v66 < 0 )
  {
    v67 = v7;
    v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
    v50 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v50 + 40) <= *(_QWORD *)(v10 + 32) )
      goto LABEL_65;
    goto LABEL_77;
  }
  if ( v58 != v9 && result < 0 )
  {
    v67 = v7;
    v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
    v50 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v50 + 40) <= *(_QWORD *)(v10 + 32) )
    {
LABEL_65:
      *(_QWORD *)(v10 + 40) = v50 + 40;
      *(_DWORD *)v50 = 34081944;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = 0;
      *(_QWORD *)(v50 + 24) = 0;
      *(_QWORD *)(v50 + 32) = 0;
LABEL_66:
      *(_DWORD *)(v50 + 20) = 46923644;
      *(_DWORD *)(v50 + 16) = v42;
      *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - (_QWORD)v9) >> 3;
      v57 = (_DWORD *)v50;
      sub_503B9A0(a1: v33, a2: v36, a3: v50, a4: v35, a5: 0);
      v45 = v57;
      goto LABEL_40;
    }
LABEL_77:
    v60 = v42;
    v50 = sub_1EAA920(a1: v33, a2: v36, a3: v68);
    v42 = v60;
    goto LABEL_66;
  }
  if ( v58 != v9 )
  {
    v43 = *v58 >> 3;
    v44 = (unsigned int)v9[2 * v43 + 6];
    if ( (_DWORD)v44 == 0 || (v9[2 * v44 + 16] & 0x10000) == 0 )
    {
      v67 = v7;
      v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
      v51 = *(_QWORD *)(v10 + 40);
      v52 = &v9[2 * v44];
      v53 = &v9[2 * v43];
      if ( (unsigned __int64)(v51 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v57 = v53;
        v56 = v52;
        v60 = v42;
        v51 = sub_1EAA920(a1: v33, a2: v52, a3: v68);
        v42 = v60;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v51 + 40;
        *(_DWORD *)v51 = 34081944;
        *(_DWORD *)(v51 + 4) = 0;
        *(_QWORD *)(v51 + 8) = 0;
        *(_QWORD *)(v51 + 16) = 0;
        *(_QWORD *)(v51 + 24) = 0;
        *(_QWORD *)(v51 + 32) = 0;
        v57 = v53;
        v56 = v52;
      }
      *(_DWORD *)(v51 + 20) = 46923644;
      *(_DWORD *)(v51 + 16) = v42;
      *(_DWORD *)(v51 + 12) = (unsigned __int64)(v51 - (_QWORD)v9) >> 3;
      v55 = (_DWORD *)v51;
      sub_503B9A0(a1: v33, a2: v52, a3: v51, a4: v35, a5: 0);
      v45 = v55;
LABEL_40:
      if ( *v45 >> 3 == 5412877 )
      {
        v55 = v45;
        v45 = (_DWORD *)sub_6117A40(a1: v33, a2: v36, a3: v45);
        if ( v45 == v9 )
        {
          v7 = v67;
          sub_2771080(a1: v33, a2: v36, a3: v58, a4: v71);
LABEL_43:
          v63 = a5;
          v64 = a3;
          sub_1EB84E0();
          goto LABEL_44;
        }
      }
LABEL_35:
      result = sub_2769900(a1: v33, a2: v36, a3: v45, a4: v35, a5: &a7);
      goto LABEL_36;
    }
  }
  if ( v7 != 0 )
  {
    v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
    v67 = v7;
    result = sub_1596080(a1: result, a2: v7, a3: v62, a4: v35, a5: v66, a6: v58);
    goto LABEL_29;
  }
LABEL_36:
  v67 = v7;
  v71 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))result;
LABEL_29:
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
