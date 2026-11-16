// sub_1E9D800
// rva 0x01e9d800  size 1702  section .text  group text
// window base 0x181e9d800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E9D800(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  double v11; // xmm0_8
  double v12; // xmm0_8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  int v59; // ebx
  char v60; // [rsp+0h] [rbp-18h] BYREF
  __int64 v61; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v60 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v60);
    goto LABEL_75;
  }
  if ( *(_DWORD *)(a3 + 8) == 0 )
  {
LABEL_75:
    sub_276EFE0();
    goto LABEL_76;
  }
  v61 = a3;
  v8 = sub_1E9F640(a1, a2, a3: v6 + 94164268);
  if ( v8 < 0 )
    v11 = (double)(v8 & 1 | ((unsigned __int64)v8 >> 1)) * MEMORY[0x11b12998]/* 0x11b12998 */;
  else
    v11 = (double)v8;
  v12 = v11 * MEMORY[0x11b12980]/* 0x11b12980 */ / MEMORY[0x11b12988]/* 0x11b12988 */;
  v13 = (__int64)v12;
  if ( (__int64)v12 == MEMORY[0x11b12990]/* 0x11b12990 */ )
    goto LABEL_106;
  while ( 1 )
  {
    if ( (__int64)v13 < 1 )
    {
      v13 = 0;
    }
    else if ( v13 == 0x7FFFFFFFFFFFFFFFLL )
    {
      v13 = 2 * (__int64)(v12 / MEMORY[0x11b12998]/* 0x11b12998 */);
    }
    v14 = v6[94163509];
    v15 = &v6[2 * v14];
    if ( (_DWORD)v14 == 0 )
    {
LABEL_76:
      sub_276EFE0(a1: v9, a2: v10, a3: v15);
LABEL_77:
      sub_276EFE0(a1: v9, a2: v10, a3: v15);
LABEL_78:
      sub_276EFE0();
LABEL_79:
      sub_276EFE0();
LABEL_80:
      sub_276EFE0();
LABEL_81:
      sub_276EFE0();
LABEL_82:
      sub_276EFE0();
LABEL_83:
      sub_276EFE0();
LABEL_84:
      sub_276EFE0();
LABEL_85:
      sub_276EFE0();
LABEL_86:
      sub_276EFE0();
LABEL_87:
      sub_276EFE0();
LABEL_88:
      sub_276EFE0();
LABEL_89:
      sub_276EFE0();
LABEL_90:
      sub_276EFE0();
LABEL_91:
      sub_276EFE0();
LABEL_92:
      sub_276EFE0();
LABEL_93:
      sub_276EFE0();
LABEL_94:
      sub_276EFE0();
LABEL_95:
      sub_276EFE0();
LABEL_96:
      sub_276EFE0();
LABEL_97:
      sub_276EFE0();
LABEL_98:
      sub_276EFE0();
LABEL_99:
      sub_276EFE0();
LABEL_100:
      sub_276EFE0();
LABEL_101:
      sub_276EFE0();
LABEL_102:
      sub_276EFE0();
LABEL_103:
      sub_276EFE0();
LABEL_104:
      sub_276EFE0();
      goto LABEL_105;
    }
    v16 = v6[2 * v14 + 3];
    if ( (_DWORD)v16 == 0 )
      goto LABEL_77;
    v17 = *(_QWORD *)&v6[2 * v16 + 2] + (*(_QWORD *)&v6[2 * v16 + 4] << 19);
    if ( v17 > v13 )
    {
      v59 = 1;
      goto LABEL_55;
    }
    v18 = v6[94163510];
    if ( (_DWORD)v18 == 0 )
      goto LABEL_78;
    v19 = v6[2 * v18 + 3];
    if ( (_DWORD)v19 == 0 )
      goto LABEL_79;
    v20 = *(_QWORD *)&v6[2 * v19 + 2] + (*(_QWORD *)&v6[2 * v19 + 4] << 19) + v17;
    if ( v20 > v13 )
    {
      v59 = 2;
      goto LABEL_55;
    }
    v21 = v6[94163511];
    if ( (_DWORD)v21 == 0 )
      goto LABEL_80;
    v22 = v6[2 * v21 + 3];
    if ( (_DWORD)v22 == 0 )
      goto LABEL_81;
    v23 = *(_QWORD *)&v6[2 * v22 + 2] + (*(_QWORD *)&v6[2 * v22 + 4] << 19) + v20;
    if ( v23 > v13 )
    {
      v59 = 3;
      goto LABEL_55;
    }
    v24 = v6[94163512];
    if ( (_DWORD)v24 == 0 )
      goto LABEL_82;
    v25 = v6[2 * v24 + 3];
    if ( (_DWORD)v25 == 0 )
      goto LABEL_83;
    v26 = *(_QWORD *)&v6[2 * v25 + 2] + (*(_QWORD *)&v6[2 * v25 + 4] << 19) + v23;
    if ( v26 > v13 )
    {
      v59 = 4;
      goto LABEL_55;
    }
    v27 = v6[94163513];
    if ( (_DWORD)v27 == 0 )
      goto LABEL_84;
    v28 = v6[2 * v27 + 3];
    if ( (_DWORD)v28 == 0 )
      goto LABEL_85;
    v29 = *(_QWORD *)&v6[2 * v28 + 2] + (*(_QWORD *)&v6[2 * v28 + 4] << 19) + v26;
    if ( v29 > v13 )
    {
      v59 = 5;
      goto LABEL_55;
    }
    v30 = v6[94163514];
    if ( (_DWORD)v30 == 0 )
      goto LABEL_86;
    v31 = v6[2 * v30 + 3];
    if ( (_DWORD)v31 == 0 )
      goto LABEL_87;
    v32 = *(_QWORD *)&v6[2 * v31 + 2] + (*(_QWORD *)&v6[2 * v31 + 4] << 19) + v29;
    if ( v32 > v13 )
    {
      v59 = 6;
      goto LABEL_55;
    }
    v33 = v6[94163515];
    if ( (_DWORD)v33 == 0 )
      goto LABEL_88;
    v34 = v6[2 * v33 + 3];
    if ( (_DWORD)v34 == 0 )
      goto LABEL_89;
    v35 = *(_QWORD *)&v6[2 * v34 + 2] + (*(_QWORD *)&v6[2 * v34 + 4] << 19) + v32;
    if ( v35 > v13 )
    {
      v59 = 7;
      goto LABEL_55;
    }
    v36 = v6[94163516];
    if ( (_DWORD)v36 == 0 )
      goto LABEL_90;
    v37 = v6[2 * v36 + 3];
    if ( (_DWORD)v37 == 0 )
      goto LABEL_91;
    v38 = *(_QWORD *)&v6[2 * v37 + 2] + (*(_QWORD *)&v6[2 * v37 + 4] << 19) + v35;
    if ( v38 > v13 )
    {
      v59 = 8;
      goto LABEL_55;
    }
    v39 = v6[94163517];
    if ( (_DWORD)v39 == 0 )
      goto LABEL_92;
    v40 = v6[2 * v39 + 3];
    if ( (_DWORD)v40 == 0 )
      goto LABEL_93;
    v41 = *(_QWORD *)&v6[2 * v40 + 2] + (*(_QWORD *)&v6[2 * v40 + 4] << 19) + v38;
    if ( v41 > v13 )
    {
      v59 = 9;
      goto LABEL_55;
    }
    v42 = v6[94163518];
    if ( (_DWORD)v42 == 0 )
      goto LABEL_94;
    v43 = v6[2 * v42 + 3];
    if ( (_DWORD)v43 == 0 )
      goto LABEL_95;
    v44 = *(_QWORD *)&v6[2 * v43 + 2] + (*(_QWORD *)&v6[2 * v43 + 4] << 19) + v41;
    if ( v44 > v13 )
    {
      v59 = 10;
      goto LABEL_55;
    }
    v45 = v6[94163519];
    if ( (_DWORD)v45 == 0 )
      goto LABEL_96;
    v46 = v6[2 * v45 + 3];
    if ( (_DWORD)v46 == 0 )
      goto LABEL_97;
    v47 = *(_QWORD *)&v6[2 * v46 + 2] + (*(_QWORD *)&v6[2 * v46 + 4] << 19) + v44;
    if ( v47 > v13 )
    {
      v59 = 11;
      goto LABEL_55;
    }
    v48 = v6[94163520];
    if ( (_DWORD)v48 == 0 )
      goto LABEL_98;
    v49 = v6[2 * v48 + 3];
    if ( (_DWORD)v49 == 0 )
      goto LABEL_99;
    v50 = *(_QWORD *)&v6[2 * v49 + 2] + (*(_QWORD *)&v6[2 * v49 + 4] << 19) + v47;
    if ( v50 > v13 )
    {
      v59 = 12;
      goto LABEL_55;
    }
    v51 = v6[94163521];
    if ( (_DWORD)v51 == 0 )
      goto LABEL_100;
    v52 = v6[2 * v51 + 3];
    if ( (_DWORD)v52 == 0 )
      goto LABEL_101;
    v53 = *(_QWORD *)&v6[2 * v52 + 2] + (*(_QWORD *)&v6[2 * v52 + 4] << 19) + v50;
    if ( v53 > v13 )
    {
      v59 = 13;
      goto LABEL_55;
    }
    v54 = v6[94163522];
    if ( (_DWORD)v54 == 0 )
      goto LABEL_102;
    v55 = v6[2 * v54 + 3];
    if ( (_DWORD)v55 == 0 )
      goto LABEL_103;
    v56 = *(_QWORD *)&v6[2 * v55 + 2] + (*(_QWORD *)&v6[2 * v55 + 4] << 19) + v53;
    if ( v56 > v13 )
    {
      v59 = 14;
      goto LABEL_55;
    }
    v57 = v6[94163523];
    if ( (_DWORD)v57 == 0 )
      goto LABEL_104;
    v58 = v6[2 * v57 + 3];
    if ( (_DWORD)v58 != 0 )
      break;
LABEL_105:
    v12 = sub_276EFE0();
LABEL_106:
    if ( v12 > 0.0 )
      v13 = ~v13;
  }
  if ( *(_QWORD *)&v6[2 * v58 + 2] + (*(_QWORD *)&v6[2 * v58 + 4] << 19) + v56 <= v13 )
    JUMPOUT(0x303D27C39LL);
  v59 = 15;
LABEL_55:
  *(_DWORD *)(v61 + 16) = v59;
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
}
