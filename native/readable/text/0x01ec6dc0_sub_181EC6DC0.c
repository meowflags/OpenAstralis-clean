// sub_1EC6DC0
// rva 0x01ec6dc0  size 855  section .text  group text
// window base 0x181ec6dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC6DC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  char *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  char *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  int v39; // r8d
  int v40; // r9d
  char *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  _DWORD *v45; // rdx
  _DWORD *v46; // rcx
  unsigned __int64 i; // rcx
  _DWORD *v48; // rcx
  char *v49; // r11
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r10
  char v57; // [rsp+0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+10h] [rbp-68h]
  char *v59; // [rsp+18h] [rbp-60h]
  _DWORD *v60; // [rsp+20h] [rbp-58h]
  char *v61; // [rsp+28h] [rbp-50h]
  __int64 v62; // [rsp+30h] [rbp-48h]
  __int64 v63; // [rsp+38h] [rbp-40h]
  __int64 v64; // [rsp+40h] [rbp-38h]
  __int64 v65; // [rsp+48h] [rbp-30h]
  __int64 v66; // [rsp+50h] [rbp-28h]
  char *v67; // [rsp+58h] [rbp-20h]
  __int64 v68; // [rsp+60h] [rbp-18h]
  __int64 v69; // [rsp+68h] [rbp-10h]
  int v70; // [rsp+74h] [rbp-4h]

  v69 = a3;
  v68 = a5;
  v67 = a6;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v12 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, (__int64)a6, a7: v57);
  }
  else if ( a6 != v11 )
  {
    if ( (unsigned __int16)*(_DWORD *)&v11[8 * *(unsigned int *)&v11[8 * (*(_DWORD *)a6 >> 3) + 20]
                                         + 12
                                         + 4
                                         * (*(_DWORD *)&v11[8 * (*(_DWORD *)a6 >> 3) + 44]
                                          & (0x1D2Bu >> HIBYTE(*(_DWORD *)&v11[8 * (*(_DWORD *)a6 >> 3) + 44])))] != 7467 )
    {
LABEL_16:
      sub_2770780();
      goto LABEL_17;
    }
    v13 = sub_657E7E0(a1, a2, a3: a6);
    v66 = sub_1EC8D40(a1: v15, a2: v16, a3: v13, a4: v14, a5: &v11[8 * *(unsigned int *)(v69 + 4)]);
    v19 = sub_289D620(a1: v17, a2: v18, a3: v67);
    v65 = sub_1EC8D40(a1: v21, a2: v22, a3: v19, a4: v20, a5: &v11[8 * *(unsigned int *)(v69 + 4)]);
    v70 = *((_DWORD *)v67 + 16) & 0x1DFF;
    v64 = sub_289DF40(a1: v23, a2: v24, a3: v67);
    v63 = sub_289E200(a1: v25, a2: v26, a3: v67);
    v62 = sub_289E280(a1: v27, a2: v28, a3: v67);
    v61 = (char *)sub_289D3A0(a1: v30, a2: v31, a3: v67, a4: v29, a5: v68, a6: v66);
    v60 = v11 + 40468688;
    v34 = (char *)sub_28A42C0(
                    a1: v32,
                    a2: v33,
                    a3: v67,
                    a4: v11 + 40468688,
                    a5: v11 + 376659536,
                    a6: v11 + 40468688);
    v59 = v34;
    if ( v34 != v11 && *(_DWORD *)v34 >> 3 != 5058586 )
      goto LABEL_18;
    v37 = sub_289E300(a1: v35, a2: v36, a3: v67);
    v41 = v61;
    v42 = *(_DWORD *)v61 >> 3;
    v43 = *(_DWORD *)&v11[8 * v42 + 44] & (0x81Eu >> HIBYTE(*(_DWORD *)&v11[8 * v42 + 44]));
    v44 = (unsigned __int16)*(_DWORD *)&v11[8 * *(unsigned int *)&v11[8 * v42 + 20] + 12 + 4 * v43];
    if ( (_DWORD)v44 != 2078 )
    {
LABEL_17:
      v34 = (char *)sub_276FC00(a1: v38, a2: v43, a3: v61, a4: v44, a5: v11 + 40451264);
LABEL_18:
      sub_276FC00(a1: v64, a2: v65, a3: v34, a4: v60, a5: v60, a6: v63);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1EC7120();
    }
    v45 = *(_DWORD **)(v12 + 40);
    v46 = v45 + 22;
    if ( (unsigned __int64)(v45 + 22) > *(_QWORD *)(v12 + 32) )
      return sub_181EC707A(a1: v38, a2: v43, a3: (_DWORD)v45, a4: (_DWORD)v46, a5: v39, a6: v40, a7, a8, a9, a10, a11);
    *(_QWORD *)(v12 + 40) = v46;
    *v45 = 34613584;
    v45[1] = 0;
    for ( i = 2; i < 22; i += 2LL )
      *(_QWORD *)&v45[i] = 0;
    v48 = v45;
    v49 = v59;
    v50 = v62;
    v51 = v63;
    v52 = v64;
    v53 = v65;
    v54 = v66;
    v55 = v68;
    v45[18] = v70;
    v45[17] = -1;
    v45[16] = (unsigned __int64)(v41 - v11) >> 3;
    v45[12] = (unsigned __int64)(v50 - (_QWORD)v11) >> 3;
    v45[11] = (unsigned __int64)(v51 - (_QWORD)v11) >> 3;
    v45[10] = (unsigned __int64)(v52 - (_QWORD)v11) >> 3;
    v45[9] = (unsigned __int64)(v53 - (_QWORD)v11) >> 3;
    v45[8] = (unsigned __int64)(v54 - (_QWORD)v11) >> 3;
    v45[7] = (unsigned __int64)(v55 - (_QWORD)v11) >> 3;
    v45[6] = (unsigned __int64)(v49 - v11) >> 3;
    v45[3] = (unsigned __int64)(v37 - (_QWORD)v11) >> 3;
    v45[2] = 47082439;
    if ( *(int *)(v12 + 16) <= 0 )
    {
      v58 = v37;
      sub_277F280();
    }
    return (__int64)v48;
  }
  sub_2771080();
  goto LABEL_16;
}
