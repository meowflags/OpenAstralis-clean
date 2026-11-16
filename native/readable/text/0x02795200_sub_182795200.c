// sub_2795200
// rva 0x02795200  size 12134  section .text  group text
// window base 0x182795200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2795200(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        __int64 a24,
        int a25,
        int a26,
        int a27)
{
  __int64 v27; // r13
  _DWORD *v28; // r14
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int *v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned int *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  _DWORD *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  _DWORD *v52; // r8
  _DWORD *v53; // rax
  int v54; // edi
  int v55; // esi
  int v56; // r8d
  int v57; // r9d
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  unsigned int *v62; // rdx
  __int64 v63; // rbx
  _DWORD *v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // r8
  __int64 v78; // rax
  unsigned int v79; // ebx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rdi
  _DWORD *v84; // r9
  __int64 v85; // r10
  _DWORD *v86; // rsi
  __int64 (__fastcall *v87)(__int64, _DWORD *, _DWORD *, _QWORD, __int64); // rcx
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  unsigned int *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rbp
  __int64 v97; // rsi
  _DWORD *v98; // rdi
  __int64 v99; // rcx
  _DWORD *v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rcx
  _DWORD *v104; // r8
  _DWORD *v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdx
  _DWORD *v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rbx
  _DWORD *v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rcx
  _DWORD *v117; // rax
  int v118; // edi
  int v119; // esi
  int v120; // r9d
  char v122; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v123; // [rsp+48h] [rbp-A0h]
  _DWORD *v124; // [rsp+50h] [rbp-98h]
  __int64 v125; // [rsp+58h] [rbp-90h]
  _DWORD *v126; // [rsp+60h] [rbp-88h]
  unsigned int v127; // [rsp+74h] [rbp-74h]
  __int64 v128; // [rsp+78h] [rbp-70h]
  __int64 v129; // [rsp+80h] [rbp-68h]
  _DWORD *v130; // [rsp+88h] [rbp-60h]
  unsigned int *v131; // [rsp+90h] [rbp-58h]
  BOOL v132; // [rsp+A8h] [rbp-40h]
  int v133; // [rsp+ACh] [rbp-3Ch]
  unsigned int v134; // [rsp+B0h] [rbp-38h]
  int v135; // [rsp+B4h] [rbp-34h]
  __int64 v136; // [rsp+B8h] [rbp-30h]
  __int64 v137; // [rsp+C0h] [rbp-28h]
  __int64 v138; // [rsp+C8h] [rbp-20h]
  __int64 v139; // [rsp+D0h] [rbp-18h]
  __int64 v140; // [rsp+D8h] [rbp-10h]
  BOOL v141; // [rsp+E4h] [rbp-4h]

  v131 = a3;
  if ( (unsigned __int64)&v122 <= *(_QWORD *)(v29 + 8) )
    JUMPOUT(0x182796665LL);
  sub_27B0900();
  v32 = v131[3];
  if ( (_DWORD)v32 == 0 )
    JUMPOUT(0x18279666ALL);
  v33 = sub_27B6940(a1: v30, a2: v31, a3: &v28[2 * v32]);
  v36 = v131;
  v131[7] = v33;
  v37 = v36[3];
  if ( (_DWORD)v37 == 0 )
    JUMPOUT(0x18279666FLL);
  v38 = sub_27B6940(a1: v34, a2: v35, a3: &v28[2 * v37]);
  v39 = v131;
  v131[8] = v38;
  sub_27B4000(a1: v40, a2: v41, a3: v39, a4: v39, a5: v38, a6: v39[7]);
  v42 = v131[2];
  if ( (_DWORD)v42 == 0 )
    JUMPOUT(0x182796674LL);
  v43 = v28[2 * v42] >> 3;
  if ( (unsigned __int16)v28[2 * v28[2 * v43 + 5] + 3 + (v28[2 * v43 + 11] & (0x23Fu >> HIBYTE(v28[2 * v43 + 11])))] != 575 )
    JUMPOUT(0x182796679LL);
  v44 = v28[2 * v42] >> 3;
  v45 = &v28[2 * v28[2 * v44 + 5]];
  v46 = v28[2 * v44 + 11] & (0x23Fu >> HIBYTE(v28[2 * v44 + 11]));
  v47 = *(_QWORD *)((char *)&v28[2 * v44 + 10] + HIWORD(v45[v46 + 3]));
  v130 = v28 + 94167710;
  v48 = (_DWORD *)((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v27 + v47))(
                    a1: v46,
                    a2: v45,
                    a3: &v28[2 * v42]);
  if ( v48 == v28 )
    JUMPOUT(0x18279667ELL);
  v51 = *(_QWORD *)&v28[2 * (*v48 >> 3) + 30];
  v52 = v130;
  v130 = v48;
  v53 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v27 + v51))(
                    a1: v49,
                    a2: v50,
                    a3: v48,
                    a4: v51,
                    a5: v52);
  v130 = v53;
  if ( v53 == v28 )
    JUMPOUT(0x18279610ELL);
  v58 = (unsigned __int16)v28[2 * v28[2 * (*v53 >> 3) + 5]
                            + 3
                            + (v28[2 * (*v53 >> 3) + 11] & (0x14DEu >> HIBYTE(v28[2 * (*v53 >> 3) + 11])))];
  v141 = v58 == 5342;
  v59 = sub_279A460(a1: v54, a2: v55, a3: (_DWORD)v131, a4: v58, a5: v56, a6: v57, a7: v122);
  v62 = v131;
  v131[6] = (unsigned __int64)(v59 - (_QWORD)v28) >> 3;
  if ( (*v62 & 2) != 0 )
    JUMPOUT(0x18279611ELL);
  if ( v130 != v28 )
  {
    if ( !v141 )
      JUMPOUT(0x182796C28LL);
    v63 = *v130 >> 3;
    v64 = &v28[2 * v28[2 * v63 + 5]];
    v65 = v28[2 * v63 + 11] & (0x14DEu >> HIBYTE(v28[2 * v63 + 11]));
    ((void (__fastcall *)(__int64, _DWORD *, _DWORD *))(v27 + *(_QWORD *)((char *)&v28[2 * v63] + HIWORD(v64[v65 + 3]))))(
      a1: v65,
      a2: v64,
      a3: v130);
    v62 = v131;
  }
  v66 = v62[3];
  if ( (int)v62[8] < 53 )
    JUMPOUT(0x182795E7BLL);
  if ( (_DWORD)v66 == 0 )
    JUMPOUT(0x182796C32LL);
  v67 = sub_27B6940(a1: v60, a2: v61, a3: &v28[2 * v66]) & 0xF631;
  v68 = v131;
  v131[9] = v67;
  v69 = v68[8];
  if ( (v67 & 0x200) != 0 && (int)v69 < 50 )
    JUMPOUT(0x1827960DDLL);
  if ( (v67 & 0x8000) != 0 )
    JUMPOUT(0x304EDE492LL);
  v140 = 34082368;
  if ( v68[5] != 0 )
    JUMPOUT(0x1827968D1LL);
  v139 = 40470128;
  v138 = 34082880;
  v137 = 40472280;
  v136 = 34082680;
  v135 = 0;
  sub_27B2F60(a1: 34082880, a2: 34082368, a3: (unsigned int)v67, a4: 34082680, a5: v69);
  v72 = v131[3];
  if ( (_DWORD)v72 == 0 )
    JUMPOUT(0x182796B05LL);
  v73 = sub_27B6940(a1: v70, a2: v71, a3: &v28[2 * v72]);
  v134 = v73;
  v77 = v131[6];
  if ( (_DWORD)v77 == 0 )
    JUMPOUT(0x182796B0ALL);
  v78 = sub_27B7E00(a1: v75, a2: v76, a3: &v28[2 * v77], a4: v74, a5: v73);
  v129 = v78;
  v79 = v131[9];
  v80 = v131[2];
  if ( (v79 & 0x200) != 0 )
    JUMPOUT(0x304EDE56FLL);
  if ( (_DWORD)v80 == 0 )
    JUMPOUT(0x182796B0FLL);
  v81 = v28[2 * v80] >> 3;
  if ( (unsigned __int16)v28[2 * v28[2 * v81 + 5] + 3 + (v28[2 * v81 + 11] & (0x23Fu >> HIBYTE(v28[2 * v81 + 11])))] != 575 )
    JUMPOUT(0x182796B1BLL);
  v133 = 0;
  v132 = v79;
  v82 = v28[2 * v80] >> 3;
  v83 = (unsigned int)v28[2 * v82 + 11];
  v84 = &v28[2 * v28[2 * v82 + 5]];
  v85 = (unsigned int)v83 & (0x23Fu >> HIBYTE(v28[2 * v82 + 11]));
  v86 = &v28[2 * v82];
  v87 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, __int64))(v27
                                                                             + *(_QWORD *)((char *)v86
                                                                                         + HIWORD(v84[v85 + 3])
                                                                                         + 24));
  v128 = v87(a1: v83, a2: v86, a3: &v28[2 * v80], a4: v87, a5: v78);
  if ( (unsigned int)sub_27CF2C0(a1: v88, a2: v89, a3: v128) != 0
    || (unsigned int)sub_27CF260(a1: v90, a2: v91, a3: v128) != 0 )
  {
    JUMPOUT(0x182796447LL);
  }
  v92 = v131;
  v127 = (unsigned __int64)(v128 - (_QWORD)v28) >> 3;
  v131[4] = v127;
  if ( (*v92 & 2) != 0 )
    JUMPOUT(0x182796150LL);
  if ( v92[1] != 0 && *((_BYTE *)v92 + 45) == 0 )
    JUMPOUT(0x1827960EBLL);
  v93 = sub_27B06E0();
  v123 = v93;
  if ( v131[4] != 47083852 )
    JUMPOUT(0x182795EA6LL);
  if ( (v132 & 0x200) != 0 && ((_DWORD *)v93 == v28 || v28 + 94167704 != (_DWORD *)v93) )
    JUMPOUT(0x182796D51LL);
  v94 = v131[2];
  if ( (_DWORD)v94 == 0 )
    JUMPOUT(0x182796B5ELL);
  v95 = v28[2 * v94] >> 3;
  if ( (unsigned __int16)v28[2 * v28[2 * v95 + 5] + 3 + (v28[2 * v95 + 11] & (0x23Fu >> HIBYTE(v28[2 * v95 + 11])))] != 575 )
    JUMPOUT(0x182796B65LL);
  v96 = v28[2 * v94] >> 3;
  v97 = (unsigned int)v28[2 * v96 + 11];
  v98 = &v28[2 * v28[2 * v96 + 5]];
  v99 = *(_QWORD *)((char *)&v28[2 * v96 + 10]
                  + HIWORD(v98[((unsigned int)v97 & (0x23Fu >> HIBYTE(v28[2 * v96 + 11]))) + 3]));
  v126 = v28 + 94167714;
  v100 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v27 + v99))(
                     a1: v98,
                     a2: v97,
                     a3: &v28[2 * v94]);
  if ( v100 == v28 )
    JUMPOUT(0x182796B6ALL);
  v103 = *(_QWORD *)&v28[2 * (*v100 >> 3) + 30];
  v104 = v126;
  v126 = v100;
  v105 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v27 + v103))(
                     a1: v101,
                     a2: v102,
                     a3: v100,
                     a4: v103,
                     a5: v104);
  v126 = v105;
  if ( v105 == v28 )
    JUMPOUT(0x182796185LL);
  v132 = (unsigned __int16)v28[2 * v28[2 * (*v105 >> 3) + 5]
                             + 3
                             + (v28[2 * (*v105 >> 3) + 11] & (0x14DEu >> HIBYTE(v28[2 * (*v105 >> 3) + 11])))] == 5342;
  v125 = sub_27A4640(a1: v106, a2: v107, a3: v131);
  if ( v126 != v28 )
  {
    if ( !v132 )
      JUMPOUT(0x182796F72LL);
    v108 = *v126 >> 3;
    v109 = &v28[2 * v28[2 * v108 + 5]];
    v110 = v28[2 * v108 + 11] & (0x14DEu >> HIBYTE(v28[2 * v108 + 11]));
    ((void (__fastcall *)(__int64, _DWORD *, _DWORD *))(v27
                                                      + *(_QWORD *)((char *)&v28[2 * v108] + HIWORD(v109[v110 + 3]))))(
      a1: v110,
      a2: v109,
      a3: v126);
  }
  v111 = v131[2];
  if ( (_DWORD)v111 == 0 )
    JUMPOUT(0x182796B6FLL);
  v112 = v28[2 * v111] >> 3;
  if ( (unsigned __int16)v28[2 * v28[2 * v112 + 5] + 3 + (v28[2 * v112 + 11] & (0x23Fu >> HIBYTE(v28[2 * v112 + 11])))] != 575 )
    JUMPOUT(0x182796B74LL);
  v113 = v28[2 * v111] >> 3;
  v114 = &v28[2 * v28[2 * v113 + 5]];
  v115 = v28[2 * v113 + 11] & (0x23Fu >> HIBYTE(v28[2 * v113 + 11]));
  v116 = *(_QWORD *)((char *)&v28[2 * v113 + 10] + HIWORD(v114[v115 + 3]));
  v124 = v28 + 94167718;
  v117 = (_DWORD *)((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v27 + v116))(
                     a1: v115,
                     a2: v114,
                     a3: &v28[2 * v111]);
  if ( v117 == v28 )
    JUMPOUT(0x182796B79LL);
  return sub_182795927(
           a1: v118,
           a2: v119,
           a3: (_DWORD)v117,
           a4: (unsigned int)v27 + (unsigned int)*(_QWORD *)&v28[2 * (*v117 >> 3) + 30],
           a5: (_DWORD)v124,
           a6: v120,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27);
}
