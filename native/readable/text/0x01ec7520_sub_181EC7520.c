// sub_1EC7520
// rva 0x01ec7520  size 1062  section .text  group text
// window base 0x181ec7520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC7520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  char *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdi
  char *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // edx
  __int64 v50; // rcx
  _DWORD *v51; // rdx
  unsigned __int64 i; // rbp
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r9
  __int64 v56; // r10
  int v57; // ebp
  __int64 v58; // r11
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r8
  char v63; // [rsp+0h] [rbp-88h] BYREF
  __int64 v64; // [rsp+8h] [rbp-80h]
  char *v65; // [rsp+10h] [rbp-78h]
  _DWORD *v66; // [rsp+18h] [rbp-70h]
  char *v67; // [rsp+20h] [rbp-68h]
  __int64 v68; // [rsp+28h] [rbp-60h]
  __int64 v69; // [rsp+30h] [rbp-58h]
  __int64 v70; // [rsp+38h] [rbp-50h]
  __int64 v71; // [rsp+40h] [rbp-48h]
  __int64 v72; // [rsp+48h] [rbp-40h]
  __int64 v73; // [rsp+50h] [rbp-38h]
  __int64 v74; // [rsp+58h] [rbp-30h]
  __int64 v75; // [rsp+60h] [rbp-28h]
  unsigned int *v76; // [rsp+68h] [rbp-20h]
  __int64 v77; // [rsp+70h] [rbp-18h]
  __int64 v78; // [rsp+78h] [rbp-10h]
  int v79; // [rsp+80h] [rbp-8h]
  int v80; // [rsp+84h] [rbp-4h]

  v78 = a3;
  v77 = a5;
  v76 = (unsigned int *)a6;
  if ( (unsigned __int64)&v63 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v63);
    goto LABEL_19;
  }
  v8 = *(unsigned int *)(a6 + 20);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_19:
    sub_2771080();
    goto LABEL_20;
  }
  v9 = sub_657F2C0(a1, a2, a3: &v6[8 * v8], a4, a5: v6);
  v75 = sub_1EC8D40(a1: v11, a2: v12, a3: v9, a4: v10, a5: &v6[8 * *(unsigned int *)(v78 + 4)]);
  v15 = v76[3];
  if ( (_DWORD)v15 == 0 )
  {
LABEL_20:
    sub_2771080();
    goto LABEL_21;
  }
  v74 = sub_27C6220(a1: v13, a2: v14, a3: &v6[8 * v15]);
  v74 = sub_1F252C0(a1: v16, a2: v17, a3: v74);
  v21 = v76[5];
  if ( (_DWORD)v21 == 0 )
  {
LABEL_21:
    sub_2771080();
LABEL_22:
    sub_2771080();
    goto LABEL_23;
  }
  v73 = sub_1EC9000(
          a1: v19,
          a2: v20,
          a3: &v6[8 * *(unsigned int *)&v6[8 * v21 + 4]],
          a4: v18,
          a5: &v6[8 * *(unsigned int *)(v78 + 4)]);
  v24 = sub_289D620(a1: v22, a2: v23, a3: v76);
  v72 = sub_1EC8D40(a1: v26, a2: v27, a3: v24, a4: v25, a5: &v6[8 * *(unsigned int *)(v78 + 4)]);
  v80 = v76[16] & 0x1DFF;
  v71 = sub_289DF40(a1: v28, a2: v29, a3: v76);
  v70 = sub_289E200(a1: v30, a2: v31, a3: v76);
  v69 = sub_289E280(a1: v32, a2: v33, a3: v76);
  v68 = sub_289E180(a1: v34, a2: v35, a3: v76);
  v67 = (char *)sub_289D3A0(a1: v37, a2: v38, a3: v76, a4: v36, a5: v77, a6: v75);
  v66 = v6 + 40468688;
  v41 = (char *)sub_28A42C0(a1: v39, a2: v40, a3: v76, a4: v6 + 40468688, a5: v6 + 376659536, a6: v6 + 40468688);
  v65 = v41;
  if ( v41 != v6 && *(_DWORD *)v41 >> 3 != 5058586 )
    goto LABEL_24;
  v44 = sub_289E300(a1: v42, a2: v43, a3: v76);
  if ( (char *)v77 == v6 )
    goto LABEL_22;
  v46 = v67;
  v47 = *(_DWORD *)v67 >> 3;
  v48 = *(_DWORD *)&v6[8 * v47 + 44] & (0x820u >> HIBYTE(*(_DWORD *)&v6[8 * v47 + 44]));
  v49 = *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v47 + 20] + 12 + 4 * v48];
  v50 = (unsigned int)*(char *)(v77 + 69);
  if ( (unsigned __int16)v49 != 2080 )
  {
LABEL_23:
    v41 = (char *)sub_276FC00(a1: v45, a2: v48, a3: v67, a4: v50, a5: v6 + 40451192);
LABEL_24:
    sub_276FC00(a1: v72, a2: v75, a3: v41, a4: v66, a5: v66, a6: v71);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC7960();
  }
  v64 = v44;
  v51 = *(_DWORD **)(v7 + 40);
  if ( (unsigned __int64)(v51 + 26) > *(_QWORD *)(v7 + 32) )
  {
    v79 = v50;
    v51 = (_DWORD *)sub_1EAA920(a1: v45, a2: v48, a3: 34095464);
    LODWORD(v50) = v79;
    v46 = v67;
    v53 = v68;
    v54 = v69;
    v55 = v70;
    v56 = v71;
    v57 = v80;
    v58 = v72;
    v59 = v73;
    v61 = v74;
    v60 = v75;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v51 + 26;
    *v51 = 34095464;
    v51[1] = 0;
    for ( i = 2; i < 26; i += 2LL )
      *(_QWORD *)&v51[i] = 0;
    v53 = v68;
    v54 = v69;
    v55 = v70;
    v56 = v71;
    v57 = v80;
    v58 = v72;
    v59 = v73;
    v60 = v75;
    v61 = v74;
  }
  v51[23] = v50;
  v51[21] = v57;
  v51[20] = -1;
  v51[19] = (unsigned __int64)(v46 - v6) >> 3;
  v51[15] = (unsigned __int64)(v53 - (_QWORD)v6) >> 3;
  v51[14] = (unsigned __int64)(v54 - (_QWORD)v6) >> 3;
  v51[13] = (unsigned __int64)(v55 - (_QWORD)v6) >> 3;
  v51[12] = (unsigned __int64)(v56 - (_QWORD)v6) >> 3;
  v51[11] = (unsigned __int64)(v58 - (_QWORD)v6) >> 3;
  v51[10] = (unsigned __int64)(v60 - (_QWORD)v6) >> 3;
  v51[9] = (unsigned __int64)(v59 - (_QWORD)v6) >> 3;
  v51[8] = (unsigned __int64)(v61 - (_QWORD)v6) >> 3;
  v51[7] = (unsigned __int64)(v77 - (_QWORD)v6) >> 3;
  v51[6] = (unsigned __int64)(v65 - v6) >> 3;
  v51[3] = (unsigned __int64)(v64 - (_QWORD)v6) >> 3;
  v51[2] = 47082439;
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return (__int64)v51;
}
